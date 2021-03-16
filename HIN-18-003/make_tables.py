#!/usr/bin/env python
# coding: utf-8

# # Getting started with hepdata_lib
# 
# The following instructions and examples should get you started to get your analysis into [HEPData](https://hepdata.net) using `hepdata_lib`. Please also refer to the [documentation](http://hepdata-lib.readthedocs.io/). While you can also run `hepdata_lib` on your local computer, you can use the [binder](https://mybinder.org/) or [SWAN](http://swan.cern.ch/) services in the browser. Mind that SWAN is only available for people with a CERN account.
# 
# ## SWAN-specific instructions
# 
# For SWAN, if you haven't done so already, open up a new terminal (going back to the project tab and clicking the terminal icon in the top right), and enter the following to install `hepdata_lib`:
# ```
# pip install --user hepdata_lib
# ```
# Then go back to the notebook.

# ## General setup
# 
# To make sure things are working and `hepdata_lib` is available, run the following command:


import hepdata_lib


# ## Creating the HEPData submission for HIN-18-003
# 
# The `Submission` object represents the whole HEPData entry and thus carries the top-level meta data that is equally valid for all the tables and variables you may want to enter. The object is also used to create the physical submission files you will upload to the HEPData web interface.
# 
# When using `hepdata_lib` to make an entry, you always need to create a `Submission` object. Let's do that now, and then add data to it step by step:


from hepdata_lib import Submission, Table, Variable, Uncertainty, RootFileReader
import numpy as np
submission = Submission()


# In general, a `Submission` should contain details on the actual analysis such as it's abstract as well as links to the actual publication. The abstract should be in a plain text file. For `inspire` there's a special `record_id`, while for links to `arXiv` etc. one should use plain hyperlinks.


submission.read_abstract("inputs/abstract.txt")

submission.add_link("Webpage with all figures and tables", "http://cms-results.web.cern.ch/cms-results/public-results/publications/HIN-18-003/")
submission.add_link("arXiv", "http://arxiv.org/abs/2102.13648")
submission.add_record_id(1849180, "inspire")


#####################################################################

# ## Tables for Figs 5-6 (fiducial cross section, no acceptance)
print("Making tables for Figs 5-6 (fiducial cross section, no acceptance)")

#####################################################################

# hold the number of bins for different variables
nbins = dict()


# inputs for Figs 5-6
inputs_xsec_noacc = [
    "inputs/dump_noacc_mass.txt",
    "inputs/dump_noacc_rap1560.txt",
    "inputs/dump_noacc_rap60120.txt",
    "inputs/dump_noacc_pt1560.txt",
    "inputs/dump_noacc_pt.txt",
    "inputs/dump_noacc_phistar1560.txt",
    "inputs/dump_noacc_phistar.txt"
]
vars_hepdata = [
    "M",
    "RAP",
    "RAP",
    "PT",
    "PT",
    "PHISTAR",
    "PHISTAR"
]
vars_long = [
    "mass",
    "rapidity",
    "rapidity",
    "pt",
    "pt",
    "phistar",
    "phistar"
]
vars_units = [
    "GeV",
    "",
    "",
    "GeV",
    "GeV",
    "",
    ""
]
image_nb = [5, 5, 5, 6, 6, 6, 6]
image_lett = ['a', 'b', 'c', 'a', 'b', 'c', 'd']
legend = [
    "dimuon invariant mass",
    "rapidity in the centre-of-mass frame for $15<m_{\mu\mu}<60$ GeV",
    "rapidity in the centre-of-mass frame for $60<m_{\mu\mu}<120$ GeV",
    "$p_{\\textrm{T}}$ for $15<m_{\mu\mu}<60$ GeV",
    "$p_{\\textrm{T}}$ for $60<m_{\mu\mu}<120$ GeV",
    "$\phi^*$ for $15<m_{\mu\mu}<60$ GeV",
    "$\phi^*$ for $60<m_{\mu\mu}<120$ GeV"
]


# In[5]:


def is_symmetric(unc1, unc2):
    """
    Is the uncertainty symmetric? 
    An uncertainty will be said to be symmetric if unc1 and unc2 differ by less than 1% for all entries.
    """
    for u1, u2 in zip(unc1, unc2):
        diff = 2.*(u1-u2)/(u1+u2)
        if diff>0.01:
            return False
    return True


# In[6]:


# a global index for the table numbers
glb_idx = 1

for i in range(len(inputs_xsec_noacc)):
    table = Table("Table " + str(glb_idx))
    table.description = "Differential fiducial cross section (without the acceptance correction) for the DY process measured in the muon channel, as a function of " + legend[i] + ". The quoted error is the quadratic sum of the statistical and systematic uncertainties. The global normalisation uncertainty of 3.5% is listed separately."
    table.location = "Data from Figure " + str(image_nb[i]) + " " + image_lett[i]
    table.keywords["observables"] = ["DSIG / D" + vars_hepdata[i], "NB"]
    table.keywords["reactions"] = ["P PB --> Z0 <MU+ MU-> X", "P PB --> GAMMA* <MU+ MU-> X"]
    
    data = np.loadtxt(inputs_xsec_noacc[i], skiprows=3)
    
    d = Variable(vars_long[i], is_independent=True, is_binned=True, units=vars_units[i])
    d.values = data[:,0:2]
    # fix the first bin for pt and phistar
    if vars_hepdata[i] == "PT" or vars_hepdata[i] == "PHISTAR":
       tup0 = d.values[0]
       d.values[0] = (0, tup0[1])

    varname = inputs_xsec_noacc[i].replace("inputs/dump_noacc_","").replace(".txt","")
    nbins[varname] = len(d.values)
    # print(varname, len(d.values))
    
    dsigma = Variable("Cross section", is_independent=False, is_binned=False, units="nb")
    dsigma.values = data[:,2]
    dsigma.add_qualifier("PT(MU)", "> 15", "GeV")
    dsigma.add_qualifier("PT(MU)", "> 10", "GeV")
    dsigma.add_qualifier("ABS(ETA_LAB(MU))", "< 2.4")
    dsigma.add_qualifier("RAP_CM", "> - 2.87")
    dsigma.add_qualifier("RAP_CM", "< 1.93")
    if "15" in legend[i]:
       dsigma.add_qualifier("M", "> 15", "GeV")
       dsigma.add_qualifier("M", "< 60", "GeV")
    elif "120" in legend[i]:
       dsigma.add_qualifier("M", "> 60", "GeV")
       dsigma.add_qualifier("M", "< 120", "GeV")
    dsigma.add_qualifier("RE", "P PB --> Z0 <MU+ MU-> X, P PB --> GAMMA* <MU+ MU-> X")
    dsigma.add_qualifier("SQRT(S)/NUCLEON", 8160, "GeV")
    
    sym = is_symmetric(data[:,3], data[:,4])
    if sym:
        unc = Uncertainty('Total')
        unc.values = [float(x) for x in data[:,3]]
        dsigma.add_uncertainty(unc)
    else:
        unc = Uncertainty('Total', is_symmetric=False)
        print("Uncertainties for",inputs_xsec_noacc[i],"are asymmetric!")
        unc.values = data[:,3:5]
        dsigma.add_uncertainty(unc)

    # lumi uncertainty
    unc_lum = Uncertainty('global luminosity uncertainty')
    unc_lum.values = [0.035*x for x in dsigma.values]
    dsigma.add_uncertainty(unc_lum)
    
    table.add_variable(d)
    table.add_variable(dsigma)
    table.add_image("inputs/Figure_00"+str(image_nb[i])+"-"+image_lett[i]+".pdf")
    table.keywords["phrases"] = ["Inclusive", "Single Differential Cross Section", "Drell Yan", "Di-Muon Production"]
    if "120" in legend[i]:
       table.keywords["phrases"].append("Z Production")
    if vars_hepdata[i] == "RAP":
       table.keywords["phrases"].append("Rapidity Dependence")
    if vars_hepdata[i] == "PT":
       table.keywords["phrases"].append("Transverse Momentum Dependence")
    
    submission.add_table(table)
    
    glb_idx = glb_idx+1

#####################################################################

# let's add the integrated cross sections too

#####################################################################

print("Integrated fiducial cross sections")
table = Table("Table " + str(glb_idx))
table.location = "Paper text (Section 3)"
table.description = "Integrated fiducial cross section for the DY process measured in the muon channel. The quoted error is the quadratic sum of the statistical and systematic uncertainties. The global normalisation uncertainty of 3.5% is listed separately."
table.keywords["observables"] = ["SIG", "NB"]
table.keywords["reactions"] = ["P PB --> Z0 <MU+ MU-> X", "P PB --> GAMMA* <MU+ MU-> X"]

d = Variable("mass", is_independent=True, is_binned=True, units="GeV")
d.values = [(15,60), (60,120)]

sigma = Variable("Cross section", is_independent=False, is_binned=False, units="nb")
sigma.values = [22.6, 122.3]
sigma.add_qualifier("PT(MU)", "> 15", "GeV")
sigma.add_qualifier("PT(MU)", "> 10", "GeV")
sigma.add_qualifier("ABS(ETA_LAB(MU))", "< 2.4")
sigma.add_qualifier("RAP_CM", "> - 2.87")
sigma.add_qualifier("RAP_CM", "< 1.93")

unc_stat = Uncertainty('stat')
unc_stat.values = [0.5, 0.9]
sigma.add_uncertainty(unc_stat)
unc_syst = Uncertainty('syst')
unc_syst.values = [0.8, 1.6]
sigma.add_uncertainty(unc_syst)
unc_lum = Uncertainty('global luminosity uncertainty')
unc_lum.values = [0.035*x for x in sigma.values]
sigma.add_uncertainty(unc_lum)

table.add_variable(d)
table.add_variable(sigma)
table.keywords["phrases"] = ["Inclusive", "Cross Section", "Drell Yan", "Di-Muon Production"]

submission.add_table(table)

glb_idx = glb_idx+1

#####################################################################

# ## Tables for Figs 7-8 (cross section including acceptance)
print("Making tables for Figs 7-8 (cross section including acceptance)")

#####################################################################

# inputs for Figs 7-8
inputs_xsec = [
    "inputs/dump_mass.txt",
    "inputs/dump_rap1560.txt",
    "inputs/dump_rap60120.txt",
    "inputs/dump_pt1560.txt",
    "inputs/dump_pt.txt",
    "inputs/dump_phistar1560.txt",
    "inputs/dump_phistar.txt"
]
image_nb = [7, 7, 7, 8, 8, 8, 8]


for i in range(len(inputs_xsec)):
    table = Table("Table " + str(glb_idx))
    table.description = "Differential cross section for the DY process measured in the muon channel, as a function of " + legend[i] + ". The quoted error is the quadratic sum of the statistical and systematic uncertainties. The global normalisation uncertainty of 3.5% is listed separately."
    table.location = "Data from Figure " + str(image_nb[i]) + " " + image_lett[i]
    table.keywords["observables"] = ["DSIG / D" + vars_hepdata[i], "NB"]
    table.keywords["reactions"] = ["P PB --> Z0 <MU+ MU-> X", "P PB --> GAMMA* <MU+ MU-> X"]
    
    data = np.loadtxt(inputs_xsec[i], skiprows=3)
    
    d = Variable(vars_long[i], is_independent=True, is_binned=True, units=vars_units[i])
    d.values = data[:,0:2]
    # fix the first bin for pt and phistar
    if vars_hepdata[i] == "PT" or vars_hepdata[i] == "PHISTAR":
       tup0 = d.values[0]
       d.values[0] = (0, tup0[1])
    
    dsigma = Variable("Cross section", is_independent=False, is_binned=False, units="nb")
    dsigma.values = data[:,2]
    dsigma.add_qualifier("RAP_CM", "> - 2.87")
    dsigma.add_qualifier("RAP_CM", "< 1.93")
    if "15" in legend[i]:
       dsigma.add_qualifier("M", "> 15", "GeV")
       dsigma.add_qualifier("M", "< 60", "GeV")
    elif "120" in legend[i]:
       dsigma.add_qualifier("M", "> 60", "GeV")
       dsigma.add_qualifier("M", "< 120", "GeV")
    dsigma.add_qualifier("RE", "P PB --> Z0 <MU+ MU-> X, P PB --> GAMMA* <MU+ MU-> X")
    dsigma.add_qualifier("SQRT(S)/NUCLEON", 8160, "GeV")
    
    sym = is_symmetric(data[:,3], data[:,4])
    if sym:
        unc = Uncertainty('Total')
        unc.values = [float(x) for x in data[:,3]]
        dsigma.add_uncertainty(unc)
    else:
        unc = Uncertainty('Total', is_symmetric=False)
        print("Uncertainties for",inputs_xsec[i],"are asymmetric!")
        unc.values = data[:,3:5]
        dsigma.add_uncertainty(unc)

    # lumi uncertainty
    unc_lum = Uncertainty('global luminosity uncertainty')
    unc_lum.values = [0.035*x for x in dsigma.values]
    dsigma.add_uncertainty(unc_lum)
    
    table.add_variable(d)
    table.add_variable(dsigma)
    table.add_image("inputs/Figure_00"+str(image_nb[i])+"-"+image_lett[i]+".pdf")
    table.keywords["phrases"] = ["Inclusive", "Single Differential Cross Section", "Drell Yan", "Di-Muon Production"]
    if "120" in legend[i]:
       table.keywords["phrases"].append("Z Production")
    if vars_hepdata[i] == "RAP":
       table.keywords["phrases"].append("Rapidity Dependence")
    if vars_hepdata[i] == "PT":
       table.keywords["phrases"].append("Transverse Momentum Dependence")
    
    submission.add_table(table)
    
    glb_idx = glb_idx+1

#####################################################################

# let's add the integrated cross sections too

#####################################################################

print("Integrated cross sections")
table = Table("Table " + str(glb_idx))
table.location = "Paper text (Section 3)"
table.description = "Integrated cross section for the DY process measured in the muon channel. The quoted error is the quadratic sum of the statistical and systematic uncertainties. The global normalisation uncertainty of 3.5% is listed separately."
table.keywords["observables"] = ["SIG", "NB"]
table.keywords["reactions"] = ["P PB --> Z0 <MU+ MU-> X", "P PB --> GAMMA* <MU+ MU-> X"]

d = Variable("mass", is_independent=True, is_binned=True, units="GeV")
d.values = [(15,60), (60,120)]

sigma = Variable("Cross section", is_independent=False, is_binned=False, units="nb")
sigma.values = [181.7, 177.7]
sigma.add_qualifier("RAP_CM", "> - 2.87")
sigma.add_qualifier("RAP_CM", "< 1.93")

unc_stat = Uncertainty('stat')
unc_stat.values = [3.6, 1.3]
sigma.add_uncertainty(unc_stat)
unc_syst = Uncertainty('syst')
unc_syst.values = [14.4, 2.7]
sigma.add_uncertainty(unc_syst)
unc_lum = Uncertainty('global luminosity uncertainty')
unc_lum.values = [0.035*x for x in sigma.values]
sigma.add_uncertainty(unc_lum)

table.add_variable(d)
table.add_variable(sigma)
table.keywords["phrases"] = ["Inclusive", "Cross Section", "Drell Yan", "Di-Muon Production"]

submission.add_table(table)

glb_idx = glb_idx+1


#####################################################################

# ## Tables for Figure 9 (RFB)
print("Making tables for Fig 9 (RFB)")

#####################################################################

inputs_rfb = [
      "inputs/dump_RFB_rap1560.txt",
      "inputs/dump_RFB_rap60120.txt"
]
image_nb = [9, 9]
image_lett = ['a', 'b']
legend = [
    "$15<m_{\mu\mu}<60$ GeV",
    "$60<m_{\mu\mu}<120$ GeV",
]


for i in range(len(inputs_rfb)):
    table = Table("Table " + str(glb_idx))
    table.description = "Forward-backward ratios for " + legend[i] + ". Quoted uncertainties are the quadratic sum of the statistical and systematic uncertainties."
    table.location = "Data from Figure " + str(image_nb[i]) + " " + image_lett[i]
    table.keywords["observables"] = ["RFB"]
    table.keywords["reactions"] = ["P PB --> Z0 <MU+ MU-> X", "P PB --> GAMMA* <MU+ MU-> X"]
    
    data = np.loadtxt(inputs_rfb[i], skiprows=2)
    
    d = Variable("absolute rapidity", is_independent=True, is_binned=True, units=vars_units[i])
    d.values = data[:,0:2]
    
    dsigma = Variable("Cross section", is_independent=False, is_binned=False, units="nb")
    dsigma.values = data[:,2]
    if "15" in legend[i]:
       dsigma.add_qualifier("M", "> 15", "GeV")
       dsigma.add_qualifier("M", "< 60", "GeV")
    elif "120" in legend[i]:
       dsigma.add_qualifier("M", "> 60", "GeV")
       dsigma.add_qualifier("M", "< 120", "GeV")
    dsigma.add_qualifier("RE", "P PB --> Z0 <MU+ MU-> X, P PB --> GAMMA* <MU+ MU-> X")
    dsigma.add_qualifier("SQRT(S)/NUCLEON", 8160, "GeV")
    
    sym = is_symmetric(data[:,3], data[:,4])
    if sym:
        unc = Uncertainty('Total')
        unc.values = [float(x) for x in data[:,3]]
        dsigma.add_uncertainty(unc)
    else:
        unc = Uncertainty('Total', is_symmetric=False)
        print("Uncertainties for",inputs_rfb[i],"are asymmetric!")
        unc.values = data[:,3:5]
        dsigma.add_uncertainty(unc)
    
    table.add_variable(d)
    table.add_variable(dsigma)
    table.add_image("inputs/Figure_00"+str(image_nb[i])+"-"+image_lett[i]+".pdf")
    table.keywords["phrases"] = ["Inclusive", "Forward-Backward Ratio", "Drell Yan", "Di-Muon Production"]
    table.keywords["phrases"].append("Rapidity Dependence")
    
    submission.add_table(table)
    
    glb_idx = glb_idx+1

#####################################################################

# ## Correlation matrices
print("Correlation matrices")

#####################################################################

# inputs for correlation matrices
inputs_cormat = [
    "inputs/dump_mass.root",
    "inputs/dump_rap1560.root",
    "inputs/dump_rap60120.root",
    "inputs/dump_pt1560.root",
    "inputs/dump_pt.root",
    "inputs/dump_phistar1560.root",
    "inputs/dump_phistar.root"
]
image_nb = [3, 3, 3, 4, 4, 4, 4]
image_lett = ['a', 'b', 'c', 'a', 'b', 'c', 'd']
legend = [
    "dimuon invariant mass",
    "rapidity in the centre-of-mass frame for $15<m_{\mu\mu}<60$ GeV",
    "rapidity in the centre-of-mass frame for $60<m_{\mu\mu}<120$ GeV",
    "$p_{\\textrm{T}}$ for $15<m_{\mu\mu}<60$ GeV",
    "$p_{\\textrm{T}}$ for $60<m_{\mu\mu}<120$ GeV",
    "$\phi^*$ for $15<m_{\mu\mu}<60$ GeV",
    "$\phi^*$ for $60<m_{\mu\mu}<120$ GeV"
]

for i in range(len(inputs_cormat)):
   table = Table("Table " + str(glb_idx))
   table.description = "Correlation matrix for the systematic uncertainties, excluding integrated luminosity, as a function of " + legend[i] + "."
   table.location = "Data from Figure " + str(image_nb[i]) + " " + image_lett[i]
   table.keywords["observables"] = ["Correlation"]
   table.keywords["reactions"] = ["P PB --> Z0 <MU+ MU-> X", "P PB --> GAMMA* <MU+ MU-> X"]
    
   # Create a reader for the input file
   reader = RootFileReader(inputs_cormat[i])

   # Read the histogram, "correlation" is the histogram name
   varname = inputs_cormat[i].replace("inputs/dump_","").replace(".root","")
   data = reader.read_hist_2d("matrix" + varname)

   # Create variable objects
   x = Variable(vars_long[i], is_independent=True, is_binned=True, units=vars_units[i])
   x.values = data["x_edges"]

   y = Variable(vars_long[i], is_independent=True, is_binned=True, units=vars_units[i])
   y.values = data["y_edges"]

   # fix the first bin for pt and phistar
   if vars_hepdata[i] == "PT" or vars_hepdata[i] == "PHISTAR":
      tup0 = x.values[0]
      x.values[0] = (0, tup0[1])
      tup0 = y.values[0]
      y.values[0] = (0, tup0[1])

   correlation = Variable("Correlation coefficient", is_independent=False, is_binned=False)
   correlation.values = data["z"]

   # Create the table object and add the variables
   for var in [x,y,correlation]:
          table.add_variable(var)
    
   table.add_image("inputs/Figure_00"+str(image_nb[i])+"-"+image_lett[i]+".pdf")
   table.keywords["phrases"] = ["Inclusive", "Drell Yan", "Di-Muon Production"]
   if "120" in legend[i]:
      table.keywords["phrases"].append("Z Production")
   if vars_hepdata[i] == "RAP":
      table.keywords["phrases"].append("Rapidity Dependence")
   if vars_hepdata[i] == "PT":
      table.keywords["phrases"].append("Transverse Momentum Dependence")
   
   submission.add_table(table)
   
   glb_idx = glb_idx+1

#####################################################################

# ## Correlation matrices (all masses)
print("Correlation matrices (all masses)")

#####################################################################

# inputs for correlation matrices
inputs_cormat = [
    "inputs/dump_rapall.root",
    "inputs/dump_ptall.root",
    "inputs/dump_phistarall.root",
]
legend = [
    "rapidity in the centre-of-mass frame",
    "$p_{\\textrm{T}}$",
    "$\phi^*$",
]
image_nb = [3, 4, 4]

for i in range(len(inputs_cormat)):
   table = Table("Table " + str(glb_idx))
   table.description = "Correlation matrix for the systematic uncertainties, excluding integrated luminosity, as a function of " + legend[i] + ", putting together low and high masses. Each bin is labeled lm_i or hm_i, where lm stands for $15<m_{\mu\mu}<60$ GeV, hm stands for $60<m_{\mu\mu}<120$ GeV, and i is the corresponding bin number in " + legend[i] + ". The global normalisation uncertainty of 3.5% is not included. Data from Figure " + str(image_nb) + "."
   table.location = "Data from Figure " + str(image_nb[i])
   table.keywords["observables"] = ["Correlation"]
   table.keywords["reactions"] = ["P PB --> Z0 <MU+ MU-> X", "P PB --> GAMMA* <MU+ MU-> X"]
    
   # Create a reader for the input file
   reader = RootFileReader(inputs_cormat[i])

   # Read the histogram, "correlation" is the histogram name
   varname = inputs_cormat[i].replace("inputs/dump_","").replace(".root","")
   data = reader.read_hist_2d("matrix" + varname)

   # Create variable objects
   x = Variable("First bin", is_independent=True, is_binned=False)

   # rename the bins
   binall = dict()
   if "rap" in varname:
      for i in range(nbins["rap1560"]):
         binall[i] = "lm_" + str(i)
      for i in range(nbins["rap60120"]):
         binall[i+nbins["rap1560"]] = "hm_" + str(i)
   else:
      for i in range(nbins[varname.replace("all","") + "1560"]):
         binall[i] = "lm_" + str(i)
      for i in range(nbins[varname.replace("all","")]):
         binall[i+nbins[varname.replace("all","") + "1560"]] = "hm_" + str(i)
   x.values = [binall[x-0.5] for x in data["x"]]

   y = Variable("Second bin", is_independent=True, is_binned=False)
   y.values = [binall[y-0.5] for y in data["y"]]

   correlation = Variable("Correlation coefficient", is_independent=False, is_binned=False)
   correlation.values = data["z"]

   # Create the table object and add the variables
   for var in [x,y,correlation]:
          table.add_variable(var)
    
   table.keywords["phrases"] = ["Inclusive", "Drell Yan", "Di-Muon Production"]
   table.keywords["phrases"].append("Z Production")
   if "rap" in varname:
      table.keywords["phrases"].append("Rapidity Dependence")
   if "pt" in varname:
      table.keywords["phrases"].append("Transverse Momentum Dependence")
   
   submission.add_table(table)
   
   glb_idx = glb_idx+1

#####################################################################

# Once you've added all tables/figures and the general submission details, you should add a few more keywords to all tables for better identification and searchability, e.g. the centre-of-mass energy:


for table in submission.tables:
    table.keywords["cmenergies"] = [8160]
    table.keywords["reactions"] = ["P PB --> Z0 <MU+ MU-> X", "P PB --> GAMMA* <MU+ MU-> X"]


# Now it's time to create the submission for the upload. Here, we choose `example_output` as output directory:

print("preparing the submission files...")
outdir = "output"
submission.create_files(outdir)
print("Done!")

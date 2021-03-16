#!/usr/bin/env python
# coding: utf-8

# In[1]:


from hepdata_lib import Submission, Table, Variable, Uncertainty
import numpy as np
submission = Submission()


# In[2]:

table = Table("Example table")

data = np.loadtxt("inputs/dump_mass.txt", skiprows=3)

d = Variable("mass", is_independent=True, is_binned=True, units="GeV")
d.values = data[:,0:2]

dsigma = Variable("Cross section", is_independent=False, is_binned=False, units="nb")
dsigma.values = data[:,2]

unc = Uncertainty('Total')

## this works only in python2
unc.values = data[:,3]
## this works in both python2 and python3
# unc.values = [float(x) for x in data[:,3]]

dsigma.add_uncertainty(unc)

table.add_variable(d)
table.add_variable(dsigma)

submission.add_table(table)


# In[3]:


outdir = "output_example"
submission.create_files(outdir)


void result_noacc_pt_CT14_EPPS16()
{
//=========Macro generated from canvas: Plots/results/plots/result_noacc_pt_CT14_EPPS16/
//=========  (Tue Feb 23 17:21:46 2021) by ROOT version 6.16/00
   TCanvas *Plots/results/plots/result_noacc_pt_CT14_EPPS16 = new TCanvas("Plots/results/plots/result_noacc_pt_CT14_EPPS16", "",0,0,800,800);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   Plots/results/plots/result_noacc_pt_CT14_EPPS16->Range(0,0,1,1);
   Plots/results/plots/result_noacc_pt_CT14_EPPS16->SetFillColor(0);
   Plots/results/plots/result_noacc_pt_CT14_EPPS16->SetBorderMode(0);
   Plots/results/plots/result_noacc_pt_CT14_EPPS16->SetBorderSize(2);
   Plots/results/plots/result_noacc_pt_CT14_EPPS16->SetTickx(1);
   Plots/results/plots/result_noacc_pt_CT14_EPPS16->SetTicky(1);
   Plots/results/plots/result_noacc_pt_CT14_EPPS16->SetLeftMargin(0.16);
   Plots/results/plots/result_noacc_pt_CT14_EPPS16->SetRightMargin(0.02);
   Plots/results/plots/result_noacc_pt_CT14_EPPS16->SetTopMargin(0.05);
   Plots/results/plots/result_noacc_pt_CT14_EPPS16->SetBottomMargin(0.13);
   Plots/results/plots/result_noacc_pt_CT14_EPPS16->SetFrameFillStyle(0);
   Plots/results/plots/result_noacc_pt_CT14_EPPS16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: TopPad
   TPad *TopPad = new TPad("TopPad", "TopPad",0.01,0.01,0.99,0.99);
   TopPad->Draw();
   TopPad->cd();
   TopPad->Range(-0.6973801,-5.536393,2.6442,2.086992);
   TopPad->SetFillColor(0);
   TopPad->SetBorderMode(0);
   TopPad->SetBorderSize(2);
   TopPad->SetLogx();
   TopPad->SetLogy();
   TopPad->SetTickx(1);
   TopPad->SetTicky(1);
   TopPad->SetLeftMargin(0.16);
   TopPad->SetRightMargin(0.05);
   TopPad->SetTopMargin(0.08);
   TopPad->SetBottomMargin(0.32);
   TopPad->SetFrameFillStyle(0);
   TopPad->SetFrameBorderMode(0);
   TopPad->SetFrameFillStyle(0);
   TopPad->SetFrameBorderMode(0);
   
   Double_t gth_CT14_pt_fx3019[17] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   25,
   35,
   45,
   60,
   80,
   100,
   130,
   175,
   250};
   Double_t gth_CT14_pt_fy3019[17] = {
   3.365484,
   6.490154,
   5.927044,
   4.85459,
   3.984395,
   3.252283,
   2.754765,
   2.295432,
   1.558822,
   0.8704104,
   0.5228159,
   0.2775828,
   0.1234942,
   0.05941825,
   0.02376576,
   0.007070448,
   0.001402696};
   Double_t gth_CT14_pt_felx3019[17] = {
   0.5625,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   5,
   5,
   5,
   10,
   10,
   10,
   20,
   25,
   50};
   Double_t gth_CT14_pt_fely3019[17] = {
   0.1034454,
   0.1995627,
   0.1817532,
   0.1479754,
   0.1213423,
   0.09864457,
   0.08314536,
   0.06864852,
   0.04667286,
   0.02577535,
   0.01540432,
   0.008088079,
   0.003591288,
   0.001736236,
   0.0006929024,
   0.0002116811,
   4.266752e-05};
   Double_t gth_CT14_pt_fehx3019[17] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   5,
   5,
   5,
   10,
   10,
   10,
   20,
   25,
   50};
   Double_t gth_CT14_pt_fehy3019[17] = {
   0.07787334,
   0.1489265,
   0.1338649,
   0.1081095,
   0.08837918,
   0.07167088,
   0.06041129,
   0.04939455,
   0.03360759,
   0.01845638,
   0.01099997,
   0.005795303,
   0.002598334,
   0.001273251,
   0.0005120463,
   0.000160739,
   3.262307e-05};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(17,gth_CT14_pt_fx3019,gth_CT14_pt_fy3019,gth_CT14_pt_felx3019,gth_CT14_pt_fehx3019,gth_CT14_pt_fely3019,gth_CT14_pt_fehy3019);
   grae->SetName("gth_CT14_pt");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1640;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_gth_CT14_pt3019 = new TH1F("Graph_gth_CT14_pt3019","Graph",100,0.6875,300);
   Graph_gth_CT14_pt3019->SetMinimum(0.0008);
   Graph_gth_CT14_pt3019->SetMaximum(30);
   Graph_gth_CT14_pt3019->SetDirectory(0);
   Graph_gth_CT14_pt3019->SetStats(0);
   Graph_gth_CT14_pt3019->SetLineStyle(0);
   Graph_gth_CT14_pt3019->SetMarkerStyle(20);
   Graph_gth_CT14_pt3019->GetXaxis()->SetTitle("p_{T} [GeV]");
   Graph_gth_CT14_pt3019->GetXaxis()->SetMoreLogLabels();
   Graph_gth_CT14_pt3019->GetXaxis()->SetNoExponent();
   Graph_gth_CT14_pt3019->GetXaxis()->SetLabelFont(42);
   Graph_gth_CT14_pt3019->GetXaxis()->SetLabelOffset(0.007);
   Graph_gth_CT14_pt3019->GetXaxis()->SetLabelSize(0);
   Graph_gth_CT14_pt3019->GetXaxis()->SetTitleSize(0);
   Graph_gth_CT14_pt3019->GetXaxis()->SetTitleOffset(0.9);
   Graph_gth_CT14_pt3019->GetXaxis()->SetTitleFont(42);
   Graph_gth_CT14_pt3019->GetYaxis()->SetTitle("d#sigma/dp_{T} [nb/GeV]");
   Graph_gth_CT14_pt3019->GetYaxis()->SetLabelFont(42);
   Graph_gth_CT14_pt3019->GetYaxis()->SetLabelOffset(0.007);
   Graph_gth_CT14_pt3019->GetYaxis()->SetLabelSize(0.05);
   Graph_gth_CT14_pt3019->GetYaxis()->SetTitleSize(0.072);
   Graph_gth_CT14_pt3019->GetYaxis()->SetTitleOffset(1.041667);
   Graph_gth_CT14_pt3019->GetYaxis()->SetTitleFont(42);
   Graph_gth_CT14_pt3019->GetZaxis()->SetLabelFont(42);
   Graph_gth_CT14_pt3019->GetZaxis()->SetLabelOffset(0.007);
   Graph_gth_CT14_pt3019->GetZaxis()->SetLabelSize(0.05);
   Graph_gth_CT14_pt3019->GetZaxis()->SetTitleSize(0.06);
   Graph_gth_CT14_pt3019->GetZaxis()->SetTitleOffset(1);
   Graph_gth_CT14_pt3019->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gth_CT14_pt3019);
   
   grae->Draw("a5");
   
   Double_t gth_EPPS16_pt_fx3020[17] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   25,
   35,
   45,
   60,
   80,
   100,
   130,
   175,
   250};
   Double_t gth_EPPS16_pt_fy3020[17] = {
   3.091668,
   6.121511,
   5.65622,
   4.728039,
   3.846424,
   3.259159,
   2.700256,
   2.272658,
   1.559496,
   0.8814076,
   0.5354265,
   0.2804335,
   0.1279559,
   0.06230366,
   0.02394455,
   0.007093928,
   0.001501439};
   Double_t gth_EPPS16_pt_felx3020[17] = {
   0.5625,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   5,
   5,
   5,
   10,
   10,
   10,
   20,
   25,
   50};
   Double_t gth_EPPS16_pt_fely3020[17] = {
   0.09923136,
   0.1976693,
   0.1835363,
   0.1538194,
   0.1249585,
   0.1055408,
   0.08730322,
   0.073588,
   0.05035448,
   0.02828666,
   0.01720438,
   0.008955578,
   0.004128675,
   0.00199189,
   0.0007902033,
   0.0002445118,
   5.420222e-05};
   Double_t gth_EPPS16_pt_fehx3020[17] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   5,
   5,
   5,
   10,
   10,
   10,
   20,
   25,
   50};
   Double_t gth_EPPS16_pt_fehy3020[17] = {
   0.08990173,
   0.1788847,
   0.166623,
   0.139365,
   0.1132929,
   0.09503702,
   0.07882029,
   0.06638494,
   0.04546339,
   0.02555115,
   0.01562009,
   0.008155505,
   0.003828103,
   0.001823332,
   0.00073221,
   0.0002311248,
   5.130195e-05};
   grae = new TGraphAsymmErrors(17,gth_EPPS16_pt_fx3020,gth_EPPS16_pt_fy3020,gth_EPPS16_pt_felx3020,gth_EPPS16_pt_fehx3020,gth_EPPS16_pt_fely3020,gth_EPPS16_pt_fehy3020);
   grae->SetName("gth_EPPS16_pt");
   grae->SetTitle("Graph");

   ci = 1641;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_gth_EPPS16_pt3020 = new TH1F("Graph_gth_EPPS16_pt3020","Graph",100,0.61875,329.9312);
   Graph_gth_EPPS16_pt3020->SetMinimum(0.001302513);
   Graph_gth_EPPS16_pt3020->SetMaximum(6.93029);
   Graph_gth_EPPS16_pt3020->SetDirectory(0);
   Graph_gth_EPPS16_pt3020->SetStats(0);
   Graph_gth_EPPS16_pt3020->SetLineStyle(0);
   Graph_gth_EPPS16_pt3020->SetMarkerStyle(20);
   Graph_gth_EPPS16_pt3020->GetXaxis()->SetLabelFont(42);
   Graph_gth_EPPS16_pt3020->GetXaxis()->SetLabelOffset(0.007);
   Graph_gth_EPPS16_pt3020->GetXaxis()->SetLabelSize(0.05);
   Graph_gth_EPPS16_pt3020->GetXaxis()->SetTitleSize(0.06);
   Graph_gth_EPPS16_pt3020->GetXaxis()->SetTitleOffset(0.9);
   Graph_gth_EPPS16_pt3020->GetXaxis()->SetTitleFont(42);
   Graph_gth_EPPS16_pt3020->GetYaxis()->SetLabelFont(42);
   Graph_gth_EPPS16_pt3020->GetYaxis()->SetLabelOffset(0.007);
   Graph_gth_EPPS16_pt3020->GetYaxis()->SetLabelSize(0.05);
   Graph_gth_EPPS16_pt3020->GetYaxis()->SetTitleSize(0.06);
   Graph_gth_EPPS16_pt3020->GetYaxis()->SetTitleOffset(1.25);
   Graph_gth_EPPS16_pt3020->GetYaxis()->SetTitleFont(42);
   Graph_gth_EPPS16_pt3020->GetZaxis()->SetLabelFont(42);
   Graph_gth_EPPS16_pt3020->GetZaxis()->SetLabelOffset(0.007);
   Graph_gth_EPPS16_pt3020->GetZaxis()->SetLabelSize(0.05);
   Graph_gth_EPPS16_pt3020->GetZaxis()->SetTitleSize(0.06);
   Graph_gth_EPPS16_pt3020->GetZaxis()->SetTitleOffset(1);
   Graph_gth_EPPS16_pt3020->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gth_EPPS16_pt3020);
   
   grae->Draw("5");
   
   Double_t gres_pt_fx3021[17] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   25,
   35,
   45,
   60,
   80,
   100,
   130,
   175,
   250};
   Double_t gres_pt_fy3021[17] = {
   3.601609,
   6.346149,
   6.025209,
   4.79064,
   4.252358,
   3.445608,
   2.651244,
   2.247209,
   1.509479,
   0.8226098,
   0.5148721,
   0.272739,
   0.1169686,
   0.06501036,
   0.02444166,
   0.005425369,
   0.001288494};
   Double_t gres_pt_felx3021[17] = {
   0.5625,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   5,
   5,
   5,
   10,
   10,
   10,
   20,
   25,
   50};
   Double_t gres_pt_fely3021[17] = {
   0.119208,
   0.1749861,
   0.1710179,
   0.1518771,
   0.142568,
   0.127571,
   0.1110552,
   0.09997125,
   0.04161868,
   0.02861445,
   0.02185501,
   0.01148153,
   0.007143787,
   0.005450115,
   0.002426865,
   0.001426085,
   0.0003092076};
   Double_t gres_pt_fehx3021[17] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   5,
   5,
   5,
   10,
   10,
   10,
   20,
   25,
   50};
   Double_t gres_pt_fehy3021[17] = {
   0.119208,
   0.1749861,
   0.1710179,
   0.1518771,
   0.142568,
   0.127571,
   0.1110552,
   0.09997125,
   0.04161868,
   0.02861445,
   0.02185501,
   0.01148153,
   0.007143787,
   0.005450115,
   0.002426865,
   0.001426085,
   0.0003092076};
   grae = new TGraphAsymmErrors(17,gres_pt_fx3021,gres_pt_fy3021,gres_pt_felx3021,gres_pt_fehx3021,gres_pt_fely3021,gres_pt_fehy3021);
   grae->SetName("gres_pt");
   grae->SetTitle("Graph");

   ci = 1642;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_gres_pt3021 = new TH1F("Graph_gres_pt3021","Graph",100,0.61875,329.9312);
   Graph_gres_pt3021->SetMinimum(0.000881358);
   Graph_gres_pt3021->SetMaximum(7.17315);
   Graph_gres_pt3021->SetDirectory(0);
   Graph_gres_pt3021->SetStats(0);
   Graph_gres_pt3021->SetLineStyle(0);
   Graph_gres_pt3021->SetMarkerStyle(20);
   Graph_gres_pt3021->GetXaxis()->SetLabelFont(42);
   Graph_gres_pt3021->GetXaxis()->SetLabelOffset(0.007);
   Graph_gres_pt3021->GetXaxis()->SetLabelSize(0.05);
   Graph_gres_pt3021->GetXaxis()->SetTitleSize(0.06);
   Graph_gres_pt3021->GetXaxis()->SetTitleOffset(0.9);
   Graph_gres_pt3021->GetXaxis()->SetTitleFont(42);
   Graph_gres_pt3021->GetYaxis()->SetLabelFont(42);
   Graph_gres_pt3021->GetYaxis()->SetLabelOffset(0.007);
   Graph_gres_pt3021->GetYaxis()->SetLabelSize(0.05);
   Graph_gres_pt3021->GetYaxis()->SetTitleSize(0.06);
   Graph_gres_pt3021->GetYaxis()->SetTitleOffset(1.25);
   Graph_gres_pt3021->GetYaxis()->SetTitleFont(42);
   Graph_gres_pt3021->GetZaxis()->SetLabelFont(42);
   Graph_gres_pt3021->GetZaxis()->SetLabelOffset(0.007);
   Graph_gres_pt3021->GetZaxis()->SetLabelSize(0.05);
   Graph_gres_pt3021->GetZaxis()->SetTitleSize(0.06);
   Graph_gres_pt3021->GetZaxis()->SetTitleOffset(1);
   Graph_gres_pt3021->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gres_pt3021);
   
   grae->Draw("ep");
   
   TLegend *leg = new TLegend(0.164,0.54,0.68,0.78,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("gres_pt","Data","lpf");

   ci = 1642;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.8);
   entry->SetTextFont(62);
   entry=leg->AddEntry("gth_CT14_pt","CT14","F");

   ci = 1640;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("gth_EPPS16_pt","CT14+EPPS16","F");

   ci = 1641;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *gth_CT14_pt_copy__5 = new TH1F("gth_CT14_pt_copy__5","Graph",100,0.6875,300);
   gth_CT14_pt_copy__5->SetMinimum(0.0008);
   gth_CT14_pt_copy__5->SetMaximum(30);
   gth_CT14_pt_copy__5->SetDirectory(0);
   gth_CT14_pt_copy__5->SetStats(0);
   gth_CT14_pt_copy__5->SetLineStyle(0);
   gth_CT14_pt_copy__5->SetMarkerStyle(20);
   gth_CT14_pt_copy__5->GetXaxis()->SetTitle("p_{T} [GeV]");
   gth_CT14_pt_copy__5->GetXaxis()->SetMoreLogLabels();
   gth_CT14_pt_copy__5->GetXaxis()->SetNoExponent();
   gth_CT14_pt_copy__5->GetXaxis()->SetLabelFont(42);
   gth_CT14_pt_copy__5->GetXaxis()->SetLabelOffset(0.007);
   gth_CT14_pt_copy__5->GetXaxis()->SetLabelSize(0);
   gth_CT14_pt_copy__5->GetXaxis()->SetTitleSize(0);
   gth_CT14_pt_copy__5->GetXaxis()->SetTitleOffset(0.9);
   gth_CT14_pt_copy__5->GetXaxis()->SetTitleFont(42);
   gth_CT14_pt_copy__5->GetYaxis()->SetTitle("d#sigma/dp_{T} [nb/GeV]");
   gth_CT14_pt_copy__5->GetYaxis()->SetLabelFont(42);
   gth_CT14_pt_copy__5->GetYaxis()->SetLabelOffset(0.007);
   gth_CT14_pt_copy__5->GetYaxis()->SetLabelSize(0.05);
   gth_CT14_pt_copy__5->GetYaxis()->SetTitleSize(0.072);
   gth_CT14_pt_copy__5->GetYaxis()->SetTitleOffset(1.041667);
   gth_CT14_pt_copy__5->GetYaxis()->SetTitleFont(42);
   gth_CT14_pt_copy__5->GetZaxis()->SetLabelFont(42);
   gth_CT14_pt_copy__5->GetZaxis()->SetLabelOffset(0.007);
   gth_CT14_pt_copy__5->GetZaxis()->SetLabelSize(0.05);
   gth_CT14_pt_copy__5->GetZaxis()->SetTitleSize(0.06);
   gth_CT14_pt_copy__5->GetZaxis()->SetTitleOffset(1);
   gth_CT14_pt_copy__5->GetZaxis()->SetTitleFont(42);
   gth_CT14_pt_copy__5->Draw("sameaxis");
  
// ------------>Primitives in pad: BottomPad
   TPad *BottomPad = new TPad("BottomPad", "BottomPad",0.01,0.01,0.99,0.3);
   BottomPad->Draw();
   BottomPad->cd();
   BottomPad->Range(-0.6515882,-0.54,2.607484,1.66);
   BottomPad->SetFillColor(0);
   BottomPad->SetBorderMode(0);
   BottomPad->SetBorderSize(2);
   BottomPad->SetLogx();
   BottomPad->SetTickx(1);
   BottomPad->SetTicky(1);
   BottomPad->SetLeftMargin(0.15);
   BottomPad->SetRightMargin(0.04);
   BottomPad->SetTopMargin(0.05);
   BottomPad->SetBottomMargin(0.45);
   BottomPad->SetFrameFillStyle(0);
   BottomPad->SetFrameBorderMode(0);
   BottomPad->SetFrameFillStyle(0);
   BottomPad->SetFrameBorderMode(0);
   
   Double_t g_ratio1_fx3022[17] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   25,
   35,
   45,
   60,
   80,
   100,
   130,
   175,
   250};
   Double_t g_ratio1_fy3022[17] = {
   0.934439,
   1.022692,
   0.9837075,
   1.013349,
   0.9369847,
   0.9438924,
   1.039046,
   1.021459,
   1.032688,
   1.058108,
   1.015429,
   1.01776,
   1.05579,
   0.9139812,
   0.9723464,
   1.30322,
   1.088632};
   Double_t g_ratio1_felx3022[17] = {
   0.5625,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   5,
   5,
   5,
   10,
   10,
   10,
   20,
   25,
   50};
   Double_t g_ratio1_fely3022[17] = {
   0.02872199,
   0.03144628,
   0.03016547,
   0.03088843,
   0.02853529,
   0.02862908,
   0.03136089,
   0.03054835,
   0.03091984,
   0.03133363,
   0.02991873,
   0.02965501,
   0.03070303,
   0.02670707,
   0.02834924,
   0.0390169,
   0.03311425};
   Double_t g_ratio1_fehx3022[17] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   5,
   5,
   5,
   10,
   10,
   10,
   20,
   25,
   50};
   Double_t g_ratio1_fehy3022[17] = {
   0.02162182,
   0.02346723,
   0.02221747,
   0.02256682,
   0.02078357,
   0.02080065,
   0.02278602,
   0.0219804,
   0.02226436,
   0.02243638,
   0.02136447,
   0.02124853,
   0.02221396,
   0.01958535,
   0.02094974,
   0.0296273,
   0.02531876};
   grae = new TGraphAsymmErrors(17,g_ratio1_fx3022,g_ratio1_fy3022,g_ratio1_felx3022,g_ratio1_fehx3022,g_ratio1_fely3022,g_ratio1_fehy3022);
   grae->SetName("g_ratio1");
   grae->SetTitle("Graph");

   ci = 1640;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_g_ratio13022 = new TH1F("Graph_g_ratio13022","Graph",100,0.6875,300);
   Graph_g_ratio13022->SetMinimum(0.45);
   Graph_g_ratio13022->SetMaximum(1.55);
   Graph_g_ratio13022->SetDirectory(0);
   Graph_g_ratio13022->SetStats(0);
   Graph_g_ratio13022->SetLineStyle(0);
   Graph_g_ratio13022->SetMarkerStyle(20);
   Graph_g_ratio13022->GetXaxis()->SetTitle("p_{T} [GeV]");
   Graph_g_ratio13022->GetXaxis()->SetMoreLogLabels();
   Graph_g_ratio13022->GetXaxis()->SetNoExponent();
   Graph_g_ratio13022->GetXaxis()->SetLabelFont(42);
   Graph_g_ratio13022->GetXaxis()->SetLabelOffset(0.008400001);
   Graph_g_ratio13022->GetXaxis()->SetLabelSize(0.18);
   Graph_g_ratio13022->GetXaxis()->SetTitleSize(0.2);
   Graph_g_ratio13022->GetXaxis()->SetTitleOffset(0.88);
   Graph_g_ratio13022->GetXaxis()->SetTitleFont(42);
   Graph_g_ratio13022->GetYaxis()->SetTitle("Pred./Data");
   Graph_g_ratio13022->GetYaxis()->SetLabelFont(42);
   Graph_g_ratio13022->GetYaxis()->SetLabelOffset(0.007);
   Graph_g_ratio13022->GetYaxis()->SetLabelSize(0.12);
   Graph_g_ratio13022->GetYaxis()->SetTitleSize(0.15);
   Graph_g_ratio13022->GetYaxis()->SetTitleOffset(0.4);
   Graph_g_ratio13022->GetYaxis()->SetTitleFont(42);
   Graph_g_ratio13022->GetZaxis()->SetLabelFont(42);
   Graph_g_ratio13022->GetZaxis()->SetLabelOffset(0.007);
   Graph_g_ratio13022->GetZaxis()->SetLabelSize(0.05);
   Graph_g_ratio13022->GetZaxis()->SetTitleSize(0.06);
   Graph_g_ratio13022->GetZaxis()->SetTitleOffset(1);
   Graph_g_ratio13022->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g_ratio13022);
   
   grae->Draw("a5");
   
   Double_t g_ratio2_fx3023[17] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   25,
   35,
   45,
   60,
   80,
   100,
   130,
   175,
   250};
   Double_t g_ratio2_fy3023[17] = {
   0.858413,
   0.9646024,
   0.9387591,
   0.9869326,
   0.904539,
   0.945888,
   1.018486,
   1.011325,
   1.033135,
   1.071477,
   1.039921,
   1.028212,
   1.093934,
   0.958365,
   0.9796612,
   1.307548,
   1.165266};
   Double_t g_ratio2_felx3023[17] = {
   0.5625,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   5,
   5,
   5,
   10,
   10,
   10,
   20,
   25,
   50};
   Double_t g_ratio2_fely3023[17] = {
   0.02755195,
   0.03114792,
   0.03046139,
   0.03210832,
   0.02938569,
   0.03063054,
   0.03292915,
   0.0327464,
   0.03335884,
   0.03438648,
   0.03341485,
   0.0328357,
   0.03529731,
   0.03063958,
   0.03233018,
   0.04506824,
   0.04206633};
   Double_t g_ratio2_fehx3023[17] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   5,
   5,
   5,
   10,
   10,
   10,
   20,
   25,
   50};
   Double_t g_ratio2_fehy3023[17] = {
   0.02496155,
   0.02818791,
   0.02765432,
   0.0290911,
   0.02664237,
   0.02758208,
   0.02972955,
   0.02954106,
   0.03011859,
   0.03106108,
   0.0303378,
   0.02990223,
   0.03272763,
   0.02804679,
   0.02995745,
   0.04260075,
   0.03981543};
   grae = new TGraphAsymmErrors(17,g_ratio2_fx3023,g_ratio2_fy3023,g_ratio2_felx3023,g_ratio2_fehx3023,g_ratio2_fely3023,g_ratio2_fehy3023);
   grae->SetName("g_ratio2");
   grae->SetTitle("Graph");

   ci = 1641;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_g_ratio23023 = new TH1F("Graph_g_ratio23023","Graph",100,0.61875,329.9312);
   Graph_g_ratio23023->SetMinimum(0.7789323);
   Graph_g_ratio23023->SetMaximum(1.402077);
   Graph_g_ratio23023->SetDirectory(0);
   Graph_g_ratio23023->SetStats(0);
   Graph_g_ratio23023->SetLineStyle(0);
   Graph_g_ratio23023->SetMarkerStyle(20);
   Graph_g_ratio23023->GetXaxis()->SetLabelFont(42);
   Graph_g_ratio23023->GetXaxis()->SetLabelOffset(0.007);
   Graph_g_ratio23023->GetXaxis()->SetLabelSize(0.05);
   Graph_g_ratio23023->GetXaxis()->SetTitleSize(0.06);
   Graph_g_ratio23023->GetXaxis()->SetTitleOffset(0.9);
   Graph_g_ratio23023->GetXaxis()->SetTitleFont(42);
   Graph_g_ratio23023->GetYaxis()->SetLabelFont(42);
   Graph_g_ratio23023->GetYaxis()->SetLabelOffset(0.007);
   Graph_g_ratio23023->GetYaxis()->SetLabelSize(0.05);
   Graph_g_ratio23023->GetYaxis()->SetTitleSize(0.06);
   Graph_g_ratio23023->GetYaxis()->SetTitleOffset(1.25);
   Graph_g_ratio23023->GetYaxis()->SetTitleFont(42);
   Graph_g_ratio23023->GetZaxis()->SetLabelFont(42);
   Graph_g_ratio23023->GetZaxis()->SetLabelOffset(0.007);
   Graph_g_ratio23023->GetZaxis()->SetLabelSize(0.05);
   Graph_g_ratio23023->GetZaxis()->SetTitleSize(0.06);
   Graph_g_ratio23023->GetZaxis()->SetTitleOffset(1);
   Graph_g_ratio23023->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g_ratio23023);
   
   grae->Draw("5");
   
   Double_t g_ratio_refAtOne_fx3024[17] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   25,
   35,
   45,
   60,
   80,
   100,
   130,
   175,
   250};
   Double_t g_ratio_refAtOne_fy3024[17] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t g_ratio_refAtOne_felx3024[17] = {
   0.5625,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   5,
   5,
   5,
   10,
   10,
   10,
   20,
   25,
   50};
   Double_t g_ratio_refAtOne_fely3024[17] = {
   0.03309855,
   0.02757358,
   0.02838374,
   0.03170289,
   0.0335268,
   0.03702425,
   0.04188795,
   0.04448686,
   0.02757155,
   0.03478496,
   0.04244745,
   0.04209714,
   0.06107442,
   0.08383456,
   0.09929216,
   0.262855,
   0.2399759};
   Double_t g_ratio_refAtOne_fehx3024[17] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   5,
   5,
   5,
   10,
   10,
   10,
   20,
   25,
   50};
   Double_t g_ratio_refAtOne_fehy3024[17] = {
   0.03309855,
   0.02757358,
   0.02838374,
   0.03170289,
   0.0335268,
   0.03702425,
   0.04188795,
   0.04448686,
   0.02757155,
   0.03478496,
   0.04244745,
   0.04209714,
   0.06107442,
   0.08383456,
   0.09929216,
   0.262855,
   0.2399759};
   grae = new TGraphAsymmErrors(17,g_ratio_refAtOne_fx3024,g_ratio_refAtOne_fy3024,g_ratio_refAtOne_felx3024,g_ratio_refAtOne_fehx3024,g_ratio_refAtOne_fely3024,g_ratio_refAtOne_fehy3024);
   grae->SetName("g_ratio_refAtOne");
   grae->SetTitle("Graph");

   ci = 1642;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_g_ratio_refAtOne3024 = new TH1F("Graph_g_ratio_refAtOne3024","Graph",100,0.61875,329.9312);
   Graph_g_ratio_refAtOne3024->SetMinimum(0.684574);
   Graph_g_ratio_refAtOne3024->SetMaximum(1.315426);
   Graph_g_ratio_refAtOne3024->SetDirectory(0);
   Graph_g_ratio_refAtOne3024->SetStats(0);
   Graph_g_ratio_refAtOne3024->SetLineStyle(0);
   Graph_g_ratio_refAtOne3024->SetMarkerStyle(20);
   Graph_g_ratio_refAtOne3024->GetXaxis()->SetLabelFont(42);
   Graph_g_ratio_refAtOne3024->GetXaxis()->SetLabelOffset(0.007);
   Graph_g_ratio_refAtOne3024->GetXaxis()->SetLabelSize(0.05);
   Graph_g_ratio_refAtOne3024->GetXaxis()->SetTitleSize(0.06);
   Graph_g_ratio_refAtOne3024->GetXaxis()->SetTitleOffset(0.9);
   Graph_g_ratio_refAtOne3024->GetXaxis()->SetTitleFont(42);
   Graph_g_ratio_refAtOne3024->GetYaxis()->SetLabelFont(42);
   Graph_g_ratio_refAtOne3024->GetYaxis()->SetLabelOffset(0.007);
   Graph_g_ratio_refAtOne3024->GetYaxis()->SetLabelSize(0.05);
   Graph_g_ratio_refAtOne3024->GetYaxis()->SetTitleSize(0.06);
   Graph_g_ratio_refAtOne3024->GetYaxis()->SetTitleOffset(1.25);
   Graph_g_ratio_refAtOne3024->GetYaxis()->SetTitleFont(42);
   Graph_g_ratio_refAtOne3024->GetZaxis()->SetLabelFont(42);
   Graph_g_ratio_refAtOne3024->GetZaxis()->SetLabelOffset(0.007);
   Graph_g_ratio_refAtOne3024->GetZaxis()->SetLabelSize(0.05);
   Graph_g_ratio_refAtOne3024->GetZaxis()->SetTitleSize(0.06);
   Graph_g_ratio_refAtOne3024->GetZaxis()->SetTitleOffset(1);
   Graph_g_ratio_refAtOne3024->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g_ratio_refAtOne3024);
   
   grae->Draw("ep");
   
   TF1 *f_line3 = new TF1("f_line","1",-10000,10000, TF1::EAddToList::kDefault);
   f_line3->SetFillColor(19);
   f_line3->SetFillStyle(0);
   f_line3->SetMarkerStyle(20);

   ci = TColor::GetColor("#ff0000");
   f_line3->SetLineColor(ci);
   f_line3->SetLineWidth(1);
   f_line3->GetXaxis()->SetLabelFont(42);
   f_line3->GetXaxis()->SetLabelOffset(0.007);
   f_line3->GetXaxis()->SetLabelSize(0.05);
   f_line3->GetXaxis()->SetTitleSize(0.06);
   f_line3->GetXaxis()->SetTitleOffset(0.9);
   f_line3->GetXaxis()->SetTitleFont(42);
   f_line3->GetYaxis()->SetLabelFont(42);
   f_line3->GetYaxis()->SetLabelOffset(0.007);
   f_line3->GetYaxis()->SetLabelSize(0.05);
   f_line3->GetYaxis()->SetTitleSize(0.06);
   f_line3->GetYaxis()->SetTitleOffset(1.25);
   f_line3->GetYaxis()->SetTitleFont(42);
   f_line3->Draw("SAME");
   
   Double_t g_ratio_refAtOne_fx3025[17] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   25,
   35,
   45,
   60,
   80,
   100,
   130,
   175,
   250};
   Double_t g_ratio_refAtOne_fy3025[17] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t g_ratio_refAtOne_felx3025[17] = {
   0.5625,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   5,
   5,
   5,
   10,
   10,
   10,
   20,
   25,
   50};
   Double_t g_ratio_refAtOne_fely3025[17] = {
   0.03309855,
   0.02757358,
   0.02838374,
   0.03170289,
   0.0335268,
   0.03702425,
   0.04188795,
   0.04448686,
   0.02757155,
   0.03478496,
   0.04244745,
   0.04209714,
   0.06107442,
   0.08383456,
   0.09929216,
   0.262855,
   0.2399759};
   Double_t g_ratio_refAtOne_fehx3025[17] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   5,
   5,
   5,
   10,
   10,
   10,
   20,
   25,
   50};
   Double_t g_ratio_refAtOne_fehy3025[17] = {
   0.03309855,
   0.02757358,
   0.02838374,
   0.03170289,
   0.0335268,
   0.03702425,
   0.04188795,
   0.04448686,
   0.02757155,
   0.03478496,
   0.04244745,
   0.04209714,
   0.06107442,
   0.08383456,
   0.09929216,
   0.262855,
   0.2399759};
   grae = new TGraphAsymmErrors(17,g_ratio_refAtOne_fx3025,g_ratio_refAtOne_fy3025,g_ratio_refAtOne_felx3025,g_ratio_refAtOne_fehx3025,g_ratio_refAtOne_fely3025,g_ratio_refAtOne_fehy3025);
   grae->SetName("g_ratio_refAtOne");
   grae->SetTitle("Graph");

   ci = 1642;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph_g_ratio_refAtOne30243025 = new TH1F("Graph_Graph_g_ratio_refAtOne30243025","Graph",100,0.61875,329.9312);
   Graph_Graph_g_ratio_refAtOne30243025->SetMinimum(0.684574);
   Graph_Graph_g_ratio_refAtOne30243025->SetMaximum(1.315426);
   Graph_Graph_g_ratio_refAtOne30243025->SetDirectory(0);
   Graph_Graph_g_ratio_refAtOne30243025->SetStats(0);
   Graph_Graph_g_ratio_refAtOne30243025->SetLineStyle(0);
   Graph_Graph_g_ratio_refAtOne30243025->SetMarkerStyle(20);
   Graph_Graph_g_ratio_refAtOne30243025->GetXaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio_refAtOne30243025->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio_refAtOne30243025->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio_refAtOne30243025->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio_refAtOne30243025->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_g_ratio_refAtOne30243025->GetXaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio_refAtOne30243025->GetYaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio_refAtOne30243025->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio_refAtOne30243025->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio_refAtOne30243025->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio_refAtOne30243025->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_g_ratio_refAtOne30243025->GetYaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio_refAtOne30243025->GetZaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio_refAtOne30243025->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio_refAtOne30243025->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio_refAtOne30243025->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio_refAtOne30243025->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_g_ratio_refAtOne30243025->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_g_ratio_refAtOne30243025);
   
   grae->Draw("ep");
   
   Double_t g_ratio1_fx3026[17] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   25,
   35,
   45,
   60,
   80,
   100,
   130,
   175,
   250};
   Double_t g_ratio1_fy3026[17] = {
   0.934439,
   1.022692,
   0.9837075,
   1.013349,
   0.9369847,
   0.9438924,
   1.039046,
   1.021459,
   1.032688,
   1.058108,
   1.015429,
   1.01776,
   1.05579,
   0.9139812,
   0.9723464,
   1.30322,
   1.088632};
   Double_t g_ratio1_felx3026[17] = {
   0.5625,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   5,
   5,
   5,
   10,
   10,
   10,
   20,
   25,
   50};
   Double_t g_ratio1_fely3026[17] = {
   0.02872199,
   0.03144628,
   0.03016547,
   0.03088843,
   0.02853529,
   0.02862908,
   0.03136089,
   0.03054835,
   0.03091984,
   0.03133363,
   0.02991873,
   0.02965501,
   0.03070303,
   0.02670707,
   0.02834924,
   0.0390169,
   0.03311425};
   Double_t g_ratio1_fehx3026[17] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   5,
   5,
   5,
   10,
   10,
   10,
   20,
   25,
   50};
   Double_t g_ratio1_fehy3026[17] = {
   0.02162182,
   0.02346723,
   0.02221747,
   0.02256682,
   0.02078357,
   0.02080065,
   0.02278602,
   0.0219804,
   0.02226436,
   0.02243638,
   0.02136447,
   0.02124853,
   0.02221396,
   0.01958535,
   0.02094974,
   0.0296273,
   0.02531876};
   grae = new TGraphAsymmErrors(17,g_ratio1_fx3026,g_ratio1_fy3026,g_ratio1_felx3026,g_ratio1_fehx3026,g_ratio1_fely3026,g_ratio1_fehy3026);
   grae->SetName("g_ratio1");
   grae->SetTitle("Graph");

   ci = 1640;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph_g_ratio130223026 = new TH1F("Graph_Graph_g_ratio130223026","Graph",100,0.6875,300);
   Graph_Graph_g_ratio130223026->SetMinimum(0.45);
   Graph_Graph_g_ratio130223026->SetMaximum(1.55);
   Graph_Graph_g_ratio130223026->SetDirectory(0);
   Graph_Graph_g_ratio130223026->SetStats(0);
   Graph_Graph_g_ratio130223026->SetLineStyle(0);
   Graph_Graph_g_ratio130223026->SetMarkerStyle(20);
   Graph_Graph_g_ratio130223026->GetXaxis()->SetTitle("p_{T} [GeV]");
   Graph_Graph_g_ratio130223026->GetXaxis()->SetMoreLogLabels();
   Graph_Graph_g_ratio130223026->GetXaxis()->SetNoExponent();
   Graph_Graph_g_ratio130223026->GetXaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio130223026->GetXaxis()->SetLabelOffset(0.008400001);
   Graph_Graph_g_ratio130223026->GetXaxis()->SetLabelSize(0.18);
   Graph_Graph_g_ratio130223026->GetXaxis()->SetTitleSize(0.2);
   Graph_Graph_g_ratio130223026->GetXaxis()->SetTitleOffset(0.88);
   Graph_Graph_g_ratio130223026->GetXaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio130223026->GetYaxis()->SetTitle("Pred./Data");
   Graph_Graph_g_ratio130223026->GetYaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio130223026->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio130223026->GetYaxis()->SetLabelSize(0.12);
   Graph_Graph_g_ratio130223026->GetYaxis()->SetTitleSize(0.15);
   Graph_Graph_g_ratio130223026->GetYaxis()->SetTitleOffset(0.4);
   Graph_Graph_g_ratio130223026->GetYaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio130223026->GetZaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio130223026->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio130223026->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio130223026->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio130223026->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_g_ratio130223026->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_g_ratio130223026);
   
   grae->Draw("5");
   
   Double_t g_ratio2_fx3027[17] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   25,
   35,
   45,
   60,
   80,
   100,
   130,
   175,
   250};
   Double_t g_ratio2_fy3027[17] = {
   0.858413,
   0.9646024,
   0.9387591,
   0.9869326,
   0.904539,
   0.945888,
   1.018486,
   1.011325,
   1.033135,
   1.071477,
   1.039921,
   1.028212,
   1.093934,
   0.958365,
   0.9796612,
   1.307548,
   1.165266};
   Double_t g_ratio2_felx3027[17] = {
   0.5625,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   5,
   5,
   5,
   10,
   10,
   10,
   20,
   25,
   50};
   Double_t g_ratio2_fely3027[17] = {
   0.02755195,
   0.03114792,
   0.03046139,
   0.03210832,
   0.02938569,
   0.03063054,
   0.03292915,
   0.0327464,
   0.03335884,
   0.03438648,
   0.03341485,
   0.0328357,
   0.03529731,
   0.03063958,
   0.03233018,
   0.04506824,
   0.04206633};
   Double_t g_ratio2_fehx3027[17] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   5,
   5,
   5,
   10,
   10,
   10,
   20,
   25,
   50};
   Double_t g_ratio2_fehy3027[17] = {
   0.02496155,
   0.02818791,
   0.02765432,
   0.0290911,
   0.02664237,
   0.02758208,
   0.02972955,
   0.02954106,
   0.03011859,
   0.03106108,
   0.0303378,
   0.02990223,
   0.03272763,
   0.02804679,
   0.02995745,
   0.04260075,
   0.03981543};
   grae = new TGraphAsymmErrors(17,g_ratio2_fx3027,g_ratio2_fy3027,g_ratio2_felx3027,g_ratio2_fehx3027,g_ratio2_fely3027,g_ratio2_fehy3027);
   grae->SetName("g_ratio2");
   grae->SetTitle("Graph");

   ci = 1641;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph_g_ratio230233027 = new TH1F("Graph_Graph_g_ratio230233027","Graph",100,0.61875,329.9312);
   Graph_Graph_g_ratio230233027->SetMinimum(0.7789323);
   Graph_Graph_g_ratio230233027->SetMaximum(1.402077);
   Graph_Graph_g_ratio230233027->SetDirectory(0);
   Graph_Graph_g_ratio230233027->SetStats(0);
   Graph_Graph_g_ratio230233027->SetLineStyle(0);
   Graph_Graph_g_ratio230233027->SetMarkerStyle(20);
   Graph_Graph_g_ratio230233027->GetXaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio230233027->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio230233027->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio230233027->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio230233027->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_g_ratio230233027->GetXaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio230233027->GetYaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio230233027->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio230233027->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio230233027->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio230233027->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_g_ratio230233027->GetYaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio230233027->GetZaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio230233027->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio230233027->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio230233027->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio230233027->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_g_ratio230233027->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_g_ratio230233027);
   
   grae->Draw("5");
   
   TH1F *g_ratio1_copy__6 = new TH1F("g_ratio1_copy__6","Graph",100,0.6875,300);
   g_ratio1_copy__6->SetMinimum(0.45);
   g_ratio1_copy__6->SetMaximum(1.55);
   g_ratio1_copy__6->SetDirectory(0);
   g_ratio1_copy__6->SetStats(0);
   g_ratio1_copy__6->SetLineStyle(0);
   g_ratio1_copy__6->SetMarkerStyle(20);
   g_ratio1_copy__6->GetXaxis()->SetTitle("p_{T} [GeV]");
   g_ratio1_copy__6->GetXaxis()->SetMoreLogLabels();
   g_ratio1_copy__6->GetXaxis()->SetNoExponent();
   g_ratio1_copy__6->GetXaxis()->SetLabelFont(42);
   g_ratio1_copy__6->GetXaxis()->SetLabelOffset(0.008400001);
   g_ratio1_copy__6->GetXaxis()->SetLabelSize(0.18);
   g_ratio1_copy__6->GetXaxis()->SetTitleSize(0.2);
   g_ratio1_copy__6->GetXaxis()->SetTitleOffset(0.88);
   g_ratio1_copy__6->GetXaxis()->SetTitleFont(42);
   g_ratio1_copy__6->GetYaxis()->SetTitle("Pred./Data");
   g_ratio1_copy__6->GetYaxis()->SetLabelFont(42);
   g_ratio1_copy__6->GetYaxis()->SetLabelOffset(0.007);
   g_ratio1_copy__6->GetYaxis()->SetLabelSize(0.12);
   g_ratio1_copy__6->GetYaxis()->SetTitleSize(0.15);
   g_ratio1_copy__6->GetYaxis()->SetTitleOffset(0.4);
   g_ratio1_copy__6->GetYaxis()->SetTitleFont(42);
   g_ratio1_copy__6->GetZaxis()->SetLabelFont(42);
   g_ratio1_copy__6->GetZaxis()->SetLabelOffset(0.007);
   g_ratio1_copy__6->GetZaxis()->SetLabelSize(0.05);
   g_ratio1_copy__6->GetZaxis()->SetTitleSize(0.06);
   g_ratio1_copy__6->GetZaxis()->SetTitleOffset(1);
   g_ratio1_copy__6->GetZaxis()->SetTitleFont(42);
   g_ratio1_copy__6->Draw("sameaxis");
   BottomPad->Modified();
   TopPad->cd();
   TLatex *   tex = new TLatex(0.95,0.9392,"#scale[0.85]{pPb (173 nb^{-1}, 8.16 TeV)}");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.050688);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.16,0.9392,"CMS");
tex->SetNDC();
   tex->SetTextFont(61);
   tex->SetTextSize(0.0576);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.18,0.5,"-2.87 < |y_{CM}| < 1.93");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextSize(0.042);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.18,0.44,"60 < m_{#mu#mu} < 120 GeV");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextSize(0.042);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.18,0.38,"|#eta_{lab}^{#mu}| < 2.4, p_{T}^{#mu} > 15 (10) GeV");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextSize(0.042);
   tex->SetLineWidth(2);
   tex->Draw();
   TopPad->Modified();
   Plots/results/plots/result_noacc_pt_CT14_EPPS16->cd();
   Plots/results/plots/result_noacc_pt_CT14_EPPS16->Modified();
   Plots/results/plots/result_noacc_pt_CT14_EPPS16->cd();
   Plots/results/plots/result_noacc_pt_CT14_EPPS16->SetSelected(Plots/results/plots/result_noacc_pt_CT14_EPPS16);
}

void result_rap1560_CT14_EPPS16()
{
//=========Macro generated from canvas: Plots/results/plots/result_rap1560_CT14_EPPS16/
//=========  (Tue Feb 23 17:21:35 2021) by ROOT version 6.16/00
   TCanvas *Plots/results/plots/result_rap1560_CT14_EPPS16 = new TCanvas("Plots/results/plots/result_rap1560_CT14_EPPS16", "",0,0,800,800);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   Plots/results/plots/result_rap1560_CT14_EPPS16->Range(0,0,1,1);
   Plots/results/plots/result_rap1560_CT14_EPPS16->SetFillColor(0);
   Plots/results/plots/result_rap1560_CT14_EPPS16->SetBorderMode(0);
   Plots/results/plots/result_rap1560_CT14_EPPS16->SetBorderSize(2);
   Plots/results/plots/result_rap1560_CT14_EPPS16->SetTickx(1);
   Plots/results/plots/result_rap1560_CT14_EPPS16->SetTicky(1);
   Plots/results/plots/result_rap1560_CT14_EPPS16->SetLeftMargin(0.16);
   Plots/results/plots/result_rap1560_CT14_EPPS16->SetRightMargin(0.02);
   Plots/results/plots/result_rap1560_CT14_EPPS16->SetTopMargin(0.05);
   Plots/results/plots/result_rap1560_CT14_EPPS16->SetBottomMargin(0.13);
   Plots/results/plots/result_rap1560_CT14_EPPS16->SetFrameFillStyle(0);
   Plots/results/plots/result_rap1560_CT14_EPPS16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: TopPad
   TPad *TopPad = new TPad("TopPad", "TopPad",0.01,0.01,0.99,0.99);
   TopPad->Draw();
   TopPad->cd();
   TopPad->Range(-4.516582,-9.266665,2.774557,79.06667);
   TopPad->SetFillColor(0);
   TopPad->SetBorderMode(0);
   TopPad->SetBorderSize(2);
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
   
   Double_t gth_CT14_rap1560_fx3046[12] = {
   -2.635,
   -2.165,
   -1.765,
   -1.4,
   -1,
   -0.6,
   -0.2,
   0.2,
   0.6,
   1,
   1.4,
   1.765};
   Double_t gth_CT14_rap1560_fy3046[12] = {
   33.63212,
   34.95489,
   35.92035,
   36.42513,
   37.27284,
   37.54377,
   37.64921,
   37.66189,
   37.54937,
   37.29098,
   36.75759,
   36.25626};
   Double_t gth_CT14_rap1560_felx3046[12] = {
   0.235,
   0.235,
   0.165,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.165};
   Double_t gth_CT14_rap1560_fely3046[12] = {
   1.304998,
   1.364211,
   1.413983,
   1.428876,
   1.455296,
   1.477455,
   1.518178,
   1.531563,
   1.502385,
   1.484619,
   1.465382,
   1.447541};
   Double_t gth_CT14_rap1560_fehx3046[12] = {
   0.235,
   0.235,
   0.165,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.165};
   Double_t gth_CT14_rap1560_fehy3046[12] = {
   1.421331,
   1.265245,
   1.21729,
   1.207072,
   1.227772,
   1.250644,
   1.269947,
   1.28613,
   1.280259,
   1.280666,
   1.267993,
   1.255652};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,gth_CT14_rap1560_fx3046,gth_CT14_rap1560_fy3046,gth_CT14_rap1560_felx3046,gth_CT14_rap1560_fehx3046,gth_CT14_rap1560_fely3046,gth_CT14_rap1560_fehy3046);
   grae->SetName("gth_CT14_rap1560");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1649;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_gth_CT14_rap15603046 = new TH1F("Graph_gth_CT14_rap15603046","Graph",100,-3.35,2.41);
   Graph_gth_CT14_rap15603046->SetMinimum(19);
   Graph_gth_CT14_rap15603046->SetMaximum(72);
   Graph_gth_CT14_rap15603046->SetDirectory(0);
   Graph_gth_CT14_rap15603046->SetStats(0);
   Graph_gth_CT14_rap15603046->SetLineStyle(0);
   Graph_gth_CT14_rap15603046->SetMarkerStyle(20);
   Graph_gth_CT14_rap15603046->GetXaxis()->SetTitle("y_{CM}");
   Graph_gth_CT14_rap15603046->GetXaxis()->SetMoreLogLabels();
   Graph_gth_CT14_rap15603046->GetXaxis()->SetNoExponent();
   Graph_gth_CT14_rap15603046->GetXaxis()->SetLabelFont(42);
   Graph_gth_CT14_rap15603046->GetXaxis()->SetLabelOffset(0.007);
   Graph_gth_CT14_rap15603046->GetXaxis()->SetLabelSize(0);
   Graph_gth_CT14_rap15603046->GetXaxis()->SetTitleSize(0);
   Graph_gth_CT14_rap15603046->GetXaxis()->SetTitleOffset(0.9);
   Graph_gth_CT14_rap15603046->GetXaxis()->SetTitleFont(42);
   Graph_gth_CT14_rap15603046->GetYaxis()->SetTitle("d#sigma/dy [nb]");
   Graph_gth_CT14_rap15603046->GetYaxis()->SetLabelFont(42);
   Graph_gth_CT14_rap15603046->GetYaxis()->SetLabelOffset(0.007);
   Graph_gth_CT14_rap15603046->GetYaxis()->SetLabelSize(0.05);
   Graph_gth_CT14_rap15603046->GetYaxis()->SetTitleSize(0.072);
   Graph_gth_CT14_rap15603046->GetYaxis()->SetTitleOffset(1.041667);
   Graph_gth_CT14_rap15603046->GetYaxis()->SetTitleFont(42);
   Graph_gth_CT14_rap15603046->GetZaxis()->SetLabelFont(42);
   Graph_gth_CT14_rap15603046->GetZaxis()->SetLabelOffset(0.007);
   Graph_gth_CT14_rap15603046->GetZaxis()->SetLabelSize(0.05);
   Graph_gth_CT14_rap15603046->GetZaxis()->SetTitleSize(0.06);
   Graph_gth_CT14_rap15603046->GetZaxis()->SetTitleOffset(1);
   Graph_gth_CT14_rap15603046->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gth_CT14_rap15603046);
   
   grae->Draw("a5");
   
   Double_t gth_EPPS16_rap1560_fx3047[12] = {
   -2.635,
   -2.165,
   -1.765,
   -1.4,
   -1,
   -0.6,
   -0.2,
   0.2,
   0.6,
   1,
   1.4,
   1.765};
   Double_t gth_EPPS16_rap1560_fy3047[12] = {
   34.08571,
   34.28234,
   34.52432,
   34.03756,
   33.77901,
   33.30359,
   32.89024,
   32.29157,
   31.56243,
   31.15837,
   30.69983,
   29.81787};
   Double_t gth_EPPS16_rap1560_felx3047[12] = {
   0.235,
   0.235,
   0.165,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.165};
   Double_t gth_EPPS16_rap1560_fely3047[12] = {
   1.424825,
   1.440405,
   1.501385,
   1.634688,
   1.981943,
   2.525756,
   3.088091,
   3.552214,
   3.90496,
   4.203167,
   4.44399,
   4.509088};
   Double_t gth_EPPS16_rap1560_fehx3047[12] = {
   0.235,
   0.235,
   0.165,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.165};
   Double_t gth_EPPS16_rap1560_fehy3047[12] = {
   1.568372,
   1.414861,
   1.412039,
   1.622228,
   2.041774,
   2.529685,
   2.988559,
   3.358457,
   3.62989,
   3.866993,
   4.052215,
   4.084225};
   grae = new TGraphAsymmErrors(12,gth_EPPS16_rap1560_fx3047,gth_EPPS16_rap1560_fy3047,gth_EPPS16_rap1560_felx3047,gth_EPPS16_rap1560_fehx3047,gth_EPPS16_rap1560_fely3047,gth_EPPS16_rap1560_fehy3047);
   grae->SetName("gth_EPPS16_rap1560");
   grae->SetTitle("Graph");

   ci = 1650;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_gth_EPPS16_rap15603047 = new TH1F("Graph_gth_EPPS16_rap15603047","Graph",100,-3.35,2.41);
   Graph_gth_EPPS16_rap15603047->SetMinimum(24.24603);
   Graph_gth_EPPS16_rap15603047->SetMaximum(36.99912);
   Graph_gth_EPPS16_rap15603047->SetDirectory(0);
   Graph_gth_EPPS16_rap15603047->SetStats(0);
   Graph_gth_EPPS16_rap15603047->SetLineStyle(0);
   Graph_gth_EPPS16_rap15603047->SetMarkerStyle(20);
   Graph_gth_EPPS16_rap15603047->GetXaxis()->SetLabelFont(42);
   Graph_gth_EPPS16_rap15603047->GetXaxis()->SetLabelOffset(0.007);
   Graph_gth_EPPS16_rap15603047->GetXaxis()->SetLabelSize(0.05);
   Graph_gth_EPPS16_rap15603047->GetXaxis()->SetTitleSize(0.06);
   Graph_gth_EPPS16_rap15603047->GetXaxis()->SetTitleOffset(0.9);
   Graph_gth_EPPS16_rap15603047->GetXaxis()->SetTitleFont(42);
   Graph_gth_EPPS16_rap15603047->GetYaxis()->SetLabelFont(42);
   Graph_gth_EPPS16_rap15603047->GetYaxis()->SetLabelOffset(0.007);
   Graph_gth_EPPS16_rap15603047->GetYaxis()->SetLabelSize(0.05);
   Graph_gth_EPPS16_rap15603047->GetYaxis()->SetTitleSize(0.06);
   Graph_gth_EPPS16_rap15603047->GetYaxis()->SetTitleOffset(1.25);
   Graph_gth_EPPS16_rap15603047->GetYaxis()->SetTitleFont(42);
   Graph_gth_EPPS16_rap15603047->GetZaxis()->SetLabelFont(42);
   Graph_gth_EPPS16_rap15603047->GetZaxis()->SetLabelOffset(0.007);
   Graph_gth_EPPS16_rap15603047->GetZaxis()->SetLabelSize(0.05);
   Graph_gth_EPPS16_rap15603047->GetZaxis()->SetTitleSize(0.06);
   Graph_gth_EPPS16_rap15603047->GetZaxis()->SetTitleOffset(1);
   Graph_gth_EPPS16_rap15603047->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gth_EPPS16_rap15603047);
   
   grae->Draw("5");
   
   Double_t gres_rap1560_fx3048[12] = {
   -2.635,
   -2.165,
   -1.765,
   -1.4,
   -1,
   -0.6,
   -0.2,
   0.2,
   0.6,
   1,
   1.4,
   1.765};
   Double_t gres_rap1560_fy3048[12] = {
   37.34269,
   41.16885,
   38.10423,
   37.4235,
   37.82113,
   40.21033,
   35.39278,
   36.77843,
   38.58339,
   32.51825,
   38.58346,
   40.7826};
   Double_t gres_rap1560_felx3048[12] = {
   0.235,
   0.235,
   0.165,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.165};
   Double_t gres_rap1560_fely3048[12] = {
   5.167503,
   4.13385,
   4.532187,
   4.094472,
   4.278597,
   4.549522,
   4.485955,
   4.310903,
   4.522508,
   4.122488,
   4.390724,
   8.651032};
   Double_t gres_rap1560_fehx3048[12] = {
   0.235,
   0.235,
   0.165,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.165};
   Double_t gres_rap1560_fehy3048[12] = {
   5.167503,
   4.13385,
   4.532187,
   4.094472,
   4.278597,
   4.549522,
   4.485955,
   4.310903,
   4.522508,
   4.122488,
   4.390724,
   8.651032};
   grae = new TGraphAsymmErrors(12,gres_rap1560_fx3048,gres_rap1560_fy3048,gres_rap1560_felx3048,gres_rap1560_fehx3048,gres_rap1560_fely3048,gres_rap1560_fehy3048);
   grae->SetName("gres_rap1560");
   grae->SetTitle("Graph");

   ci = 1651;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_gres_rap15603048 = new TH1F("Graph_gres_rap15603048","Graph",100,-3.35,2.41);
   Graph_gres_rap15603048->SetMinimum(26.29198);
   Graph_gres_rap15603048->SetMaximum(51.53742);
   Graph_gres_rap15603048->SetDirectory(0);
   Graph_gres_rap15603048->SetStats(0);
   Graph_gres_rap15603048->SetLineStyle(0);
   Graph_gres_rap15603048->SetMarkerStyle(20);
   Graph_gres_rap15603048->GetXaxis()->SetLabelFont(42);
   Graph_gres_rap15603048->GetXaxis()->SetLabelOffset(0.007);
   Graph_gres_rap15603048->GetXaxis()->SetLabelSize(0.05);
   Graph_gres_rap15603048->GetXaxis()->SetTitleSize(0.06);
   Graph_gres_rap15603048->GetXaxis()->SetTitleOffset(0.9);
   Graph_gres_rap15603048->GetXaxis()->SetTitleFont(42);
   Graph_gres_rap15603048->GetYaxis()->SetLabelFont(42);
   Graph_gres_rap15603048->GetYaxis()->SetLabelOffset(0.007);
   Graph_gres_rap15603048->GetYaxis()->SetLabelSize(0.05);
   Graph_gres_rap15603048->GetYaxis()->SetTitleSize(0.06);
   Graph_gres_rap15603048->GetYaxis()->SetTitleOffset(1.25);
   Graph_gres_rap15603048->GetYaxis()->SetTitleFont(42);
   Graph_gres_rap15603048->GetZaxis()->SetLabelFont(42);
   Graph_gres_rap15603048->GetZaxis()->SetLabelOffset(0.007);
   Graph_gres_rap15603048->GetZaxis()->SetLabelSize(0.05);
   Graph_gres_rap15603048->GetZaxis()->SetTitleSize(0.06);
   Graph_gres_rap15603048->GetZaxis()->SetTitleOffset(1);
   Graph_gres_rap15603048->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gres_rap15603048);
   
   grae->Draw("ep");
   
   TLegend *leg = new TLegend(0.514,0.68,1.03,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("gres_rap1560","Data","lpf");

   ci = 1651;
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
   entry=leg->AddEntry("gth_CT14_rap1560","CT14","F");

   ci = 1649;
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
   entry=leg->AddEntry("gth_EPPS16_rap1560","CT14+EPPS16","F");

   ci = 1650;
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
   
   TH1F *gth_CT14_rap1560_copy__11 = new TH1F("gth_CT14_rap1560_copy__11","Graph",100,-3.35,2.41);
   gth_CT14_rap1560_copy__11->SetMinimum(19);
   gth_CT14_rap1560_copy__11->SetMaximum(72);
   gth_CT14_rap1560_copy__11->SetDirectory(0);
   gth_CT14_rap1560_copy__11->SetStats(0);
   gth_CT14_rap1560_copy__11->SetLineStyle(0);
   gth_CT14_rap1560_copy__11->SetMarkerStyle(20);
   gth_CT14_rap1560_copy__11->GetXaxis()->SetTitle("y_{CM}");
   gth_CT14_rap1560_copy__11->GetXaxis()->SetMoreLogLabels();
   gth_CT14_rap1560_copy__11->GetXaxis()->SetNoExponent();
   gth_CT14_rap1560_copy__11->GetXaxis()->SetLabelFont(42);
   gth_CT14_rap1560_copy__11->GetXaxis()->SetLabelOffset(0.007);
   gth_CT14_rap1560_copy__11->GetXaxis()->SetLabelSize(0);
   gth_CT14_rap1560_copy__11->GetXaxis()->SetTitleSize(0);
   gth_CT14_rap1560_copy__11->GetXaxis()->SetTitleOffset(0.9);
   gth_CT14_rap1560_copy__11->GetXaxis()->SetTitleFont(42);
   gth_CT14_rap1560_copy__11->GetYaxis()->SetTitle("d#sigma/dy [nb]");
   gth_CT14_rap1560_copy__11->GetYaxis()->SetLabelFont(42);
   gth_CT14_rap1560_copy__11->GetYaxis()->SetLabelOffset(0.007);
   gth_CT14_rap1560_copy__11->GetYaxis()->SetLabelSize(0.05);
   gth_CT14_rap1560_copy__11->GetYaxis()->SetTitleSize(0.072);
   gth_CT14_rap1560_copy__11->GetYaxis()->SetTitleOffset(1.041667);
   gth_CT14_rap1560_copy__11->GetYaxis()->SetTitleFont(42);
   gth_CT14_rap1560_copy__11->GetZaxis()->SetLabelFont(42);
   gth_CT14_rap1560_copy__11->GetZaxis()->SetLabelOffset(0.007);
   gth_CT14_rap1560_copy__11->GetZaxis()->SetLabelSize(0.05);
   gth_CT14_rap1560_copy__11->GetZaxis()->SetTitleSize(0.06);
   gth_CT14_rap1560_copy__11->GetZaxis()->SetTitleOffset(1);
   gth_CT14_rap1560_copy__11->GetZaxis()->SetTitleFont(42);
   gth_CT14_rap1560_copy__11->Draw("sameaxis");
  
// ------------>Primitives in pad: BottomPad
   TPad *BottomPad = new TPad("BottomPad", "BottomPad",0.01,0.01,0.99,0.3);
   BottomPad->Draw();
   BottomPad->cd();
   BottomPad->Range(-4.416667,-0.54,2.694444,1.66);
   BottomPad->SetFillColor(0);
   BottomPad->SetBorderMode(0);
   BottomPad->SetBorderSize(2);
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
   
   Double_t g_ratio1_fx3049[12] = {
   -2.635,
   -2.165,
   -1.765,
   -1.4,
   -1,
   -0.6,
   -0.2,
   0.2,
   0.6,
   1,
   1.4,
   1.765};
   Double_t g_ratio1_fy3049[12] = {
   0.9006345,
   0.8490616,
   0.9426866,
   0.9733226,
   0.985503,
   0.9336846,
   1.063754,
   1.024021,
   0.9732004,
   1.146771,
   0.9526774,
   0.8890131};
   Double_t g_ratio1_felx3049[12] = {
   0.235,
   0.235,
   0.165,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.165};
   Double_t g_ratio1_fely3049[12] = {
   0.03494655,
   0.03313697,
   0.0371083,
   0.03818125,
   0.03847839,
   0.03674317,
   0.04289514,
   0.04164296,
   0.03893865,
   0.04565493,
   0.03797953,
   0.03549408};
   Double_t g_ratio1_fehx3049[12] = {
   0.235,
   0.235,
   0.165,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.165};
   Double_t g_ratio1_fehy3049[12] = {
   0.03806183,
   0.03073307,
   0.03194632,
   0.03225438,
   0.0324626,
   0.03110256,
   0.03588153,
   0.03496969,
   0.03318162,
   0.03938299,
   0.03286365,
   0.03078893};
   grae = new TGraphAsymmErrors(12,g_ratio1_fx3049,g_ratio1_fy3049,g_ratio1_felx3049,g_ratio1_fehx3049,g_ratio1_fely3049,g_ratio1_fehy3049);
   grae->SetName("g_ratio1");
   grae->SetTitle("Graph");

   ci = 1649;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_g_ratio13049 = new TH1F("Graph_g_ratio13049","Graph",100,-3.35,2.41);
   Graph_g_ratio13049->SetMinimum(0.45);
   Graph_g_ratio13049->SetMaximum(1.55);
   Graph_g_ratio13049->SetDirectory(0);
   Graph_g_ratio13049->SetStats(0);
   Graph_g_ratio13049->SetLineStyle(0);
   Graph_g_ratio13049->SetMarkerStyle(20);
   Graph_g_ratio13049->GetXaxis()->SetTitle("y_{CM}");
   Graph_g_ratio13049->GetXaxis()->SetMoreLogLabels();
   Graph_g_ratio13049->GetXaxis()->SetNoExponent();
   Graph_g_ratio13049->GetXaxis()->SetLabelFont(42);
   Graph_g_ratio13049->GetXaxis()->SetLabelOffset(0.008400001);
   Graph_g_ratio13049->GetXaxis()->SetLabelSize(0.18);
   Graph_g_ratio13049->GetXaxis()->SetTitleSize(0.2);
   Graph_g_ratio13049->GetXaxis()->SetTitleOffset(0.88);
   Graph_g_ratio13049->GetXaxis()->SetTitleFont(42);
   Graph_g_ratio13049->GetYaxis()->SetTitle("Pred./Data");
   Graph_g_ratio13049->GetYaxis()->SetLabelFont(42);
   Graph_g_ratio13049->GetYaxis()->SetLabelOffset(0.007);
   Graph_g_ratio13049->GetYaxis()->SetLabelSize(0.12);
   Graph_g_ratio13049->GetYaxis()->SetTitleSize(0.15);
   Graph_g_ratio13049->GetYaxis()->SetTitleOffset(0.4);
   Graph_g_ratio13049->GetYaxis()->SetTitleFont(42);
   Graph_g_ratio13049->GetZaxis()->SetLabelFont(42);
   Graph_g_ratio13049->GetZaxis()->SetLabelOffset(0.007);
   Graph_g_ratio13049->GetZaxis()->SetLabelSize(0.05);
   Graph_g_ratio13049->GetZaxis()->SetTitleSize(0.06);
   Graph_g_ratio13049->GetZaxis()->SetTitleOffset(1);
   Graph_g_ratio13049->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g_ratio13049);
   
   grae->Draw("a5");
   
   Double_t g_ratio2_fx3050[12] = {
   -2.635,
   -2.165,
   -1.765,
   -1.4,
   -1,
   -0.6,
   -0.2,
   0.2,
   0.6,
   1,
   1.4,
   1.765};
   Double_t g_ratio2_fy3050[12] = {
   0.9127812,
   0.8327251,
   0.9060496,
   0.9095237,
   0.8931253,
   0.8282347,
   0.9292922,
   0.878003,
   0.8180316,
   0.9581811,
   0.7956734,
   0.731142};
   Double_t g_ratio2_felx3050[12] = {
   0.235,
   0.235,
   0.165,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.165};
   Double_t g_ratio2_fely3050[12] = {
   0.03815538,
   0.03498774,
   0.03940207,
   0.04368079,
   0.05240306,
   0.06281362,
   0.08725199,
   0.09658417,
   0.1012083,
   0.1292556,
   0.1151786,
   0.110564};
   Double_t g_ratio2_fehx3050[12] = {
   0.235,
   0.235,
   0.165,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.165};
   Double_t g_ratio2_fehy3050[12] = {
   0.04199945,
   0.03436726,
   0.03705729,
   0.04334785,
   0.05398502,
   0.06291132,
   0.08443977,
   0.09131596,
   0.09407909,
   0.1189176,
   0.1050247,
   0.1001463};
   grae = new TGraphAsymmErrors(12,g_ratio2_fx3050,g_ratio2_fy3050,g_ratio2_felx3050,g_ratio2_fehx3050,g_ratio2_fely3050,g_ratio2_fehy3050);
   grae->SetName("g_ratio2");
   grae->SetTitle("Graph");

   ci = 1650;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_g_ratio23050 = new TH1F("Graph_g_ratio23050","Graph",100,-3.35,2.41);
   Graph_g_ratio23050->SetMinimum(0.574926);
   Graph_g_ratio23050->SetMaximum(1.122751);
   Graph_g_ratio23050->SetDirectory(0);
   Graph_g_ratio23050->SetStats(0);
   Graph_g_ratio23050->SetLineStyle(0);
   Graph_g_ratio23050->SetMarkerStyle(20);
   Graph_g_ratio23050->GetXaxis()->SetLabelFont(42);
   Graph_g_ratio23050->GetXaxis()->SetLabelOffset(0.007);
   Graph_g_ratio23050->GetXaxis()->SetLabelSize(0.05);
   Graph_g_ratio23050->GetXaxis()->SetTitleSize(0.06);
   Graph_g_ratio23050->GetXaxis()->SetTitleOffset(0.9);
   Graph_g_ratio23050->GetXaxis()->SetTitleFont(42);
   Graph_g_ratio23050->GetYaxis()->SetLabelFont(42);
   Graph_g_ratio23050->GetYaxis()->SetLabelOffset(0.007);
   Graph_g_ratio23050->GetYaxis()->SetLabelSize(0.05);
   Graph_g_ratio23050->GetYaxis()->SetTitleSize(0.06);
   Graph_g_ratio23050->GetYaxis()->SetTitleOffset(1.25);
   Graph_g_ratio23050->GetYaxis()->SetTitleFont(42);
   Graph_g_ratio23050->GetZaxis()->SetLabelFont(42);
   Graph_g_ratio23050->GetZaxis()->SetLabelOffset(0.007);
   Graph_g_ratio23050->GetZaxis()->SetLabelSize(0.05);
   Graph_g_ratio23050->GetZaxis()->SetTitleSize(0.06);
   Graph_g_ratio23050->GetZaxis()->SetTitleOffset(1);
   Graph_g_ratio23050->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g_ratio23050);
   
   grae->Draw("5");
   
   Double_t g_ratio_refAtOne_fx3051[12] = {
   -2.635,
   -2.165,
   -1.765,
   -1.4,
   -1,
   -0.6,
   -0.2,
   0.2,
   0.6,
   1,
   1.4,
   1.765};
   Double_t g_ratio_refAtOne_fy3051[12] = {
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
   Double_t g_ratio_refAtOne_felx3051[12] = {
   0.235,
   0.235,
   0.165,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.165};
   Double_t g_ratio_refAtOne_fely3051[12] = {
   0.1383806,
   0.1004121,
   0.1189418,
   0.1094091,
   0.1131272,
   0.1131431,
   0.1267477,
   0.1172128,
   0.1172139,
   0.1267746,
   0.1137981,
   0.2121256};
   Double_t g_ratio_refAtOne_fehx3051[12] = {
   0.235,
   0.235,
   0.165,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.165};
   Double_t g_ratio_refAtOne_fehy3051[12] = {
   0.1383806,
   0.1004121,
   0.1189418,
   0.1094091,
   0.1131272,
   0.1131431,
   0.1267477,
   0.1172128,
   0.1172139,
   0.1267746,
   0.1137981,
   0.2121256};
   grae = new TGraphAsymmErrors(12,g_ratio_refAtOne_fx3051,g_ratio_refAtOne_fy3051,g_ratio_refAtOne_felx3051,g_ratio_refAtOne_fehx3051,g_ratio_refAtOne_fely3051,g_ratio_refAtOne_fehy3051);
   grae->SetName("g_ratio_refAtOne");
   grae->SetTitle("Graph");

   ci = 1651;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_g_ratio_refAtOne3051 = new TH1F("Graph_g_ratio_refAtOne3051","Graph",100,-3.35,2.41);
   Graph_g_ratio_refAtOne3051->SetMinimum(0.7454493);
   Graph_g_ratio_refAtOne3051->SetMaximum(1.254551);
   Graph_g_ratio_refAtOne3051->SetDirectory(0);
   Graph_g_ratio_refAtOne3051->SetStats(0);
   Graph_g_ratio_refAtOne3051->SetLineStyle(0);
   Graph_g_ratio_refAtOne3051->SetMarkerStyle(20);
   Graph_g_ratio_refAtOne3051->GetXaxis()->SetLabelFont(42);
   Graph_g_ratio_refAtOne3051->GetXaxis()->SetLabelOffset(0.007);
   Graph_g_ratio_refAtOne3051->GetXaxis()->SetLabelSize(0.05);
   Graph_g_ratio_refAtOne3051->GetXaxis()->SetTitleSize(0.06);
   Graph_g_ratio_refAtOne3051->GetXaxis()->SetTitleOffset(0.9);
   Graph_g_ratio_refAtOne3051->GetXaxis()->SetTitleFont(42);
   Graph_g_ratio_refAtOne3051->GetYaxis()->SetLabelFont(42);
   Graph_g_ratio_refAtOne3051->GetYaxis()->SetLabelOffset(0.007);
   Graph_g_ratio_refAtOne3051->GetYaxis()->SetLabelSize(0.05);
   Graph_g_ratio_refAtOne3051->GetYaxis()->SetTitleSize(0.06);
   Graph_g_ratio_refAtOne3051->GetYaxis()->SetTitleOffset(1.25);
   Graph_g_ratio_refAtOne3051->GetYaxis()->SetTitleFont(42);
   Graph_g_ratio_refAtOne3051->GetZaxis()->SetLabelFont(42);
   Graph_g_ratio_refAtOne3051->GetZaxis()->SetLabelOffset(0.007);
   Graph_g_ratio_refAtOne3051->GetZaxis()->SetLabelSize(0.05);
   Graph_g_ratio_refAtOne3051->GetZaxis()->SetTitleSize(0.06);
   Graph_g_ratio_refAtOne3051->GetZaxis()->SetTitleOffset(1);
   Graph_g_ratio_refAtOne3051->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g_ratio_refAtOne3051);
   
   grae->Draw("ep");
   
   TF1 *f_line6 = new TF1("f_line","1",-10000,10000, TF1::EAddToList::kDefault);
   f_line6->SetFillColor(19);
   f_line6->SetFillStyle(0);
   f_line6->SetMarkerStyle(20);

   ci = TColor::GetColor("#ff0000");
   f_line6->SetLineColor(ci);
   f_line6->SetLineWidth(1);
   f_line6->GetXaxis()->SetLabelFont(42);
   f_line6->GetXaxis()->SetLabelOffset(0.007);
   f_line6->GetXaxis()->SetLabelSize(0.05);
   f_line6->GetXaxis()->SetTitleSize(0.06);
   f_line6->GetXaxis()->SetTitleOffset(0.9);
   f_line6->GetXaxis()->SetTitleFont(42);
   f_line6->GetYaxis()->SetLabelFont(42);
   f_line6->GetYaxis()->SetLabelOffset(0.007);
   f_line6->GetYaxis()->SetLabelSize(0.05);
   f_line6->GetYaxis()->SetTitleSize(0.06);
   f_line6->GetYaxis()->SetTitleOffset(1.25);
   f_line6->GetYaxis()->SetTitleFont(42);
   f_line6->Draw("SAME");
   
   Double_t g_ratio_refAtOne_fx3052[12] = {
   -2.635,
   -2.165,
   -1.765,
   -1.4,
   -1,
   -0.6,
   -0.2,
   0.2,
   0.6,
   1,
   1.4,
   1.765};
   Double_t g_ratio_refAtOne_fy3052[12] = {
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
   Double_t g_ratio_refAtOne_felx3052[12] = {
   0.235,
   0.235,
   0.165,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.165};
   Double_t g_ratio_refAtOne_fely3052[12] = {
   0.1383806,
   0.1004121,
   0.1189418,
   0.1094091,
   0.1131272,
   0.1131431,
   0.1267477,
   0.1172128,
   0.1172139,
   0.1267746,
   0.1137981,
   0.2121256};
   Double_t g_ratio_refAtOne_fehx3052[12] = {
   0.235,
   0.235,
   0.165,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.165};
   Double_t g_ratio_refAtOne_fehy3052[12] = {
   0.1383806,
   0.1004121,
   0.1189418,
   0.1094091,
   0.1131272,
   0.1131431,
   0.1267477,
   0.1172128,
   0.1172139,
   0.1267746,
   0.1137981,
   0.2121256};
   grae = new TGraphAsymmErrors(12,g_ratio_refAtOne_fx3052,g_ratio_refAtOne_fy3052,g_ratio_refAtOne_felx3052,g_ratio_refAtOne_fehx3052,g_ratio_refAtOne_fely3052,g_ratio_refAtOne_fehy3052);
   grae->SetName("g_ratio_refAtOne");
   grae->SetTitle("Graph");

   ci = 1651;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph_g_ratio_refAtOne30513052 = new TH1F("Graph_Graph_g_ratio_refAtOne30513052","Graph",100,-3.35,2.41);
   Graph_Graph_g_ratio_refAtOne30513052->SetMinimum(0.7454493);
   Graph_Graph_g_ratio_refAtOne30513052->SetMaximum(1.254551);
   Graph_Graph_g_ratio_refAtOne30513052->SetDirectory(0);
   Graph_Graph_g_ratio_refAtOne30513052->SetStats(0);
   Graph_Graph_g_ratio_refAtOne30513052->SetLineStyle(0);
   Graph_Graph_g_ratio_refAtOne30513052->SetMarkerStyle(20);
   Graph_Graph_g_ratio_refAtOne30513052->GetXaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio_refAtOne30513052->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio_refAtOne30513052->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio_refAtOne30513052->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio_refAtOne30513052->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_g_ratio_refAtOne30513052->GetXaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio_refAtOne30513052->GetYaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio_refAtOne30513052->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio_refAtOne30513052->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio_refAtOne30513052->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio_refAtOne30513052->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_g_ratio_refAtOne30513052->GetYaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio_refAtOne30513052->GetZaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio_refAtOne30513052->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio_refAtOne30513052->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio_refAtOne30513052->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio_refAtOne30513052->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_g_ratio_refAtOne30513052->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_g_ratio_refAtOne30513052);
   
   grae->Draw("ep");
   
   Double_t g_ratio1_fx3053[12] = {
   -2.635,
   -2.165,
   -1.765,
   -1.4,
   -1,
   -0.6,
   -0.2,
   0.2,
   0.6,
   1,
   1.4,
   1.765};
   Double_t g_ratio1_fy3053[12] = {
   0.9006345,
   0.8490616,
   0.9426866,
   0.9733226,
   0.985503,
   0.9336846,
   1.063754,
   1.024021,
   0.9732004,
   1.146771,
   0.9526774,
   0.8890131};
   Double_t g_ratio1_felx3053[12] = {
   0.235,
   0.235,
   0.165,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.165};
   Double_t g_ratio1_fely3053[12] = {
   0.03494655,
   0.03313697,
   0.0371083,
   0.03818125,
   0.03847839,
   0.03674317,
   0.04289514,
   0.04164296,
   0.03893865,
   0.04565493,
   0.03797953,
   0.03549408};
   Double_t g_ratio1_fehx3053[12] = {
   0.235,
   0.235,
   0.165,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.165};
   Double_t g_ratio1_fehy3053[12] = {
   0.03806183,
   0.03073307,
   0.03194632,
   0.03225438,
   0.0324626,
   0.03110256,
   0.03588153,
   0.03496969,
   0.03318162,
   0.03938299,
   0.03286365,
   0.03078893};
   grae = new TGraphAsymmErrors(12,g_ratio1_fx3053,g_ratio1_fy3053,g_ratio1_felx3053,g_ratio1_fehx3053,g_ratio1_fely3053,g_ratio1_fehy3053);
   grae->SetName("g_ratio1");
   grae->SetTitle("Graph");

   ci = 1649;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph_g_ratio130493053 = new TH1F("Graph_Graph_g_ratio130493053","Graph",100,-3.35,2.41);
   Graph_Graph_g_ratio130493053->SetMinimum(0.45);
   Graph_Graph_g_ratio130493053->SetMaximum(1.55);
   Graph_Graph_g_ratio130493053->SetDirectory(0);
   Graph_Graph_g_ratio130493053->SetStats(0);
   Graph_Graph_g_ratio130493053->SetLineStyle(0);
   Graph_Graph_g_ratio130493053->SetMarkerStyle(20);
   Graph_Graph_g_ratio130493053->GetXaxis()->SetTitle("y_{CM}");
   Graph_Graph_g_ratio130493053->GetXaxis()->SetMoreLogLabels();
   Graph_Graph_g_ratio130493053->GetXaxis()->SetNoExponent();
   Graph_Graph_g_ratio130493053->GetXaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio130493053->GetXaxis()->SetLabelOffset(0.008400001);
   Graph_Graph_g_ratio130493053->GetXaxis()->SetLabelSize(0.18);
   Graph_Graph_g_ratio130493053->GetXaxis()->SetTitleSize(0.2);
   Graph_Graph_g_ratio130493053->GetXaxis()->SetTitleOffset(0.88);
   Graph_Graph_g_ratio130493053->GetXaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio130493053->GetYaxis()->SetTitle("Pred./Data");
   Graph_Graph_g_ratio130493053->GetYaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio130493053->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio130493053->GetYaxis()->SetLabelSize(0.12);
   Graph_Graph_g_ratio130493053->GetYaxis()->SetTitleSize(0.15);
   Graph_Graph_g_ratio130493053->GetYaxis()->SetTitleOffset(0.4);
   Graph_Graph_g_ratio130493053->GetYaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio130493053->GetZaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio130493053->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio130493053->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio130493053->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio130493053->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_g_ratio130493053->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_g_ratio130493053);
   
   grae->Draw("5");
   
   Double_t g_ratio2_fx3054[12] = {
   -2.635,
   -2.165,
   -1.765,
   -1.4,
   -1,
   -0.6,
   -0.2,
   0.2,
   0.6,
   1,
   1.4,
   1.765};
   Double_t g_ratio2_fy3054[12] = {
   0.9127812,
   0.8327251,
   0.9060496,
   0.9095237,
   0.8931253,
   0.8282347,
   0.9292922,
   0.878003,
   0.8180316,
   0.9581811,
   0.7956734,
   0.731142};
   Double_t g_ratio2_felx3054[12] = {
   0.235,
   0.235,
   0.165,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.165};
   Double_t g_ratio2_fely3054[12] = {
   0.03815538,
   0.03498774,
   0.03940207,
   0.04368079,
   0.05240306,
   0.06281362,
   0.08725199,
   0.09658417,
   0.1012083,
   0.1292556,
   0.1151786,
   0.110564};
   Double_t g_ratio2_fehx3054[12] = {
   0.235,
   0.235,
   0.165,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.165};
   Double_t g_ratio2_fehy3054[12] = {
   0.04199945,
   0.03436726,
   0.03705729,
   0.04334785,
   0.05398502,
   0.06291132,
   0.08443977,
   0.09131596,
   0.09407909,
   0.1189176,
   0.1050247,
   0.1001463};
   grae = new TGraphAsymmErrors(12,g_ratio2_fx3054,g_ratio2_fy3054,g_ratio2_felx3054,g_ratio2_fehx3054,g_ratio2_fely3054,g_ratio2_fehy3054);
   grae->SetName("g_ratio2");
   grae->SetTitle("Graph");

   ci = 1650;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph_g_ratio230503054 = new TH1F("Graph_Graph_g_ratio230503054","Graph",100,-3.35,2.41);
   Graph_Graph_g_ratio230503054->SetMinimum(0.574926);
   Graph_Graph_g_ratio230503054->SetMaximum(1.122751);
   Graph_Graph_g_ratio230503054->SetDirectory(0);
   Graph_Graph_g_ratio230503054->SetStats(0);
   Graph_Graph_g_ratio230503054->SetLineStyle(0);
   Graph_Graph_g_ratio230503054->SetMarkerStyle(20);
   Graph_Graph_g_ratio230503054->GetXaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio230503054->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio230503054->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio230503054->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio230503054->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_g_ratio230503054->GetXaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio230503054->GetYaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio230503054->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio230503054->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio230503054->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio230503054->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_g_ratio230503054->GetYaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio230503054->GetZaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio230503054->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio230503054->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio230503054->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio230503054->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_g_ratio230503054->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_g_ratio230503054);
   
   grae->Draw("5");
   
   TH1F *g_ratio1_copy__12 = new TH1F("g_ratio1_copy__12","Graph",100,-3.35,2.41);
   g_ratio1_copy__12->SetMinimum(0.45);
   g_ratio1_copy__12->SetMaximum(1.55);
   g_ratio1_copy__12->SetDirectory(0);
   g_ratio1_copy__12->SetStats(0);
   g_ratio1_copy__12->SetLineStyle(0);
   g_ratio1_copy__12->SetMarkerStyle(20);
   g_ratio1_copy__12->GetXaxis()->SetTitle("y_{CM}");
   g_ratio1_copy__12->GetXaxis()->SetMoreLogLabels();
   g_ratio1_copy__12->GetXaxis()->SetNoExponent();
   g_ratio1_copy__12->GetXaxis()->SetLabelFont(42);
   g_ratio1_copy__12->GetXaxis()->SetLabelOffset(0.008400001);
   g_ratio1_copy__12->GetXaxis()->SetLabelSize(0.18);
   g_ratio1_copy__12->GetXaxis()->SetTitleSize(0.2);
   g_ratio1_copy__12->GetXaxis()->SetTitleOffset(0.88);
   g_ratio1_copy__12->GetXaxis()->SetTitleFont(42);
   g_ratio1_copy__12->GetYaxis()->SetTitle("Pred./Data");
   g_ratio1_copy__12->GetYaxis()->SetLabelFont(42);
   g_ratio1_copy__12->GetYaxis()->SetLabelOffset(0.007);
   g_ratio1_copy__12->GetYaxis()->SetLabelSize(0.12);
   g_ratio1_copy__12->GetYaxis()->SetTitleSize(0.15);
   g_ratio1_copy__12->GetYaxis()->SetTitleOffset(0.4);
   g_ratio1_copy__12->GetYaxis()->SetTitleFont(42);
   g_ratio1_copy__12->GetZaxis()->SetLabelFont(42);
   g_ratio1_copy__12->GetZaxis()->SetLabelOffset(0.007);
   g_ratio1_copy__12->GetZaxis()->SetLabelSize(0.05);
   g_ratio1_copy__12->GetZaxis()->SetTitleSize(0.06);
   g_ratio1_copy__12->GetZaxis()->SetTitleOffset(1);
   g_ratio1_copy__12->GetZaxis()->SetTitleFont(42);
   g_ratio1_copy__12->Draw("sameaxis");
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
      tex = new TLatex(0.18,0.87,"15 < m_{#mu#mu} < 60 GeV");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextSize(0.042);
   tex->SetLineWidth(2);
   tex->Draw();
   TopPad->Modified();
   Plots/results/plots/result_rap1560_CT14_EPPS16->cd();
   Plots/results/plots/result_rap1560_CT14_EPPS16->Modified();
   Plots/results/plots/result_rap1560_CT14_EPPS16->cd();
   Plots/results/plots/result_rap1560_CT14_EPPS16->SetSelected(Plots/results/plots/result_rap1560_CT14_EPPS16);
}

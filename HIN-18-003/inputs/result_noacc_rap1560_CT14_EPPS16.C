void result_noacc_rap1560_CT14_EPPS16()
{
//=========Macro generated from canvas: Plots/results/plots/result_noacc_rap1560_CT14_EPPS16/
//=========  (Tue Feb 23 17:21:47 2021) by ROOT version 6.16/00
   TCanvas *Plots/results/plots/result_noacc_rap1560_CT14_EPPS16 = new TCanvas("Plots/results/plots/result_noacc_rap1560_CT14_EPPS16", "",0,0,800,800);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   Plots/results/plots/result_noacc_rap1560_CT14_EPPS16->Range(0,0,1,1);
   Plots/results/plots/result_noacc_rap1560_CT14_EPPS16->SetFillColor(0);
   Plots/results/plots/result_noacc_rap1560_CT14_EPPS16->SetBorderMode(0);
   Plots/results/plots/result_noacc_rap1560_CT14_EPPS16->SetBorderSize(2);
   Plots/results/plots/result_noacc_rap1560_CT14_EPPS16->SetTickx(1);
   Plots/results/plots/result_noacc_rap1560_CT14_EPPS16->SetTicky(1);
   Plots/results/plots/result_noacc_rap1560_CT14_EPPS16->SetLeftMargin(0.16);
   Plots/results/plots/result_noacc_rap1560_CT14_EPPS16->SetRightMargin(0.02);
   Plots/results/plots/result_noacc_rap1560_CT14_EPPS16->SetTopMargin(0.05);
   Plots/results/plots/result_noacc_rap1560_CT14_EPPS16->SetBottomMargin(0.13);
   Plots/results/plots/result_noacc_rap1560_CT14_EPPS16->SetFrameFillStyle(0);
   Plots/results/plots/result_noacc_rap1560_CT14_EPPS16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: TopPad
   TPad *TopPad = new TPad("TopPad", "TopPad",0.01,0.01,0.99,0.99);
   TopPad->Draw();
   TopPad->cd();
   TopPad->Range(-4.516582,-5.333333,2.774557,11.33333);
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
   1.552302,
   3.765613,
   4.551663,
   4.868053,
   5.070862,
   5.206916,
   5.23746,
   5.150768,
   5.172367,
   4.753371,
   3.607767,
   1.347195};
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
   0.05271718,
   0.1257674,
   0.1557083,
   0.1697421,
   0.1825742,
   0.1940215,
   0.199951,
   0.1967084,
   0.1942283,
   0.1733348,
   0.1275651,
   0.04612757};
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
   0.04705552,
   0.1084255,
   0.1308865,
   0.139937,
   0.1449142,
   0.149288,
   0.152238,
   0.1493951,
   0.1485127,
   0.1373026,
   0.1044239,
   0.03842962};
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
   Graph_gth_CT14_rap15603046->SetMinimum(0);
   Graph_gth_CT14_rap15603046->SetMaximum(10);
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
   1.582904,
   3.946816,
   4.777694,
   4.819867,
   4.962806,
   4.892886,
   4.847266,
   4.671234,
   4.5919,
   4.177327,
   3.041605,
   1.171855};
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
   0.05886371,
   0.1503772,
   0.1810428,
   0.184303,
   0.2095136,
   0.2495537,
   0.3204546,
   0.3849548,
   0.4517333,
   0.4647844,
   0.3794894,
   0.1554266};
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
   0.05414229,
   0.137614,
   0.1689016,
   0.1697812,
   0.1947157,
   0.2476706,
   0.3150316,
   0.3701123,
   0.424673,
   0.4302521,
   0.3475198,
   0.1412164};
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
   Graph_gth_EPPS16_rap15603047->SetMinimum(0.6018418);
   Graph_gth_EPPS16_rap15603047->SetMaximum(5.576885);
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
   1.773828,
   4.845013,
   5.394089,
   5.423427,
   5.686606,
   6.050666,
   5.341751,
   5.449443,
   5.751926,
   4.461021,
   3.92327,
   1.649811};
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
   0.2168263,
   0.3732736,
   0.5088998,
   0.4275031,
   0.4606698,
   0.4781178,
   0.506924,
   0.4596243,
   0.4955981,
   0.4540325,
   0.3519542,
   0.3297159};
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
   0.2168263,
   0.3732736,
   0.5088998,
   0.4275031,
   0.4606698,
   0.4781178,
   0.506924,
   0.4596243,
   0.4955981,
   0.4540325,
   0.3519542,
   0.3297159};
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
   Graph_gres_rap15603048->SetMinimum(0.7992261);
   Graph_gres_rap15603048->SetMaximum(7.049653);
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
   
   TLegend *leg = new TLegend(0.364,0.34,0.88,0.58,NULL,"brNDC");
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
   gth_CT14_rap1560_copy__11->SetMinimum(0);
   gth_CT14_rap1560_copy__11->SetMaximum(10);
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
   0.8751141,
   0.7772143,
   0.8438243,
   0.8975972,
   0.8917203,
   0.8605525,
   0.9804762,
   0.9451915,
   0.8992408,
   1.065534,
   0.9195817,
   0.8165756};
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
   0.02971944,
   0.0259581,
   0.02886647,
   0.03129793,
   0.03210601,
   0.03206615,
   0.03743173,
   0.03609696,
   0.03376752,
   0.0388554,
   0.03251499,
   0.02795931};
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
   0.02652767,
   0.02237879,
   0.02426481,
   0.02580231,
   0.02548343,
   0.02467299,
   0.02849965,
   0.02741474,
   0.02581965,
   0.03077828,
   0.02661655,
   0.02329335};
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
   0.8923661,
   0.8146142,
   0.8857278,
   0.8887124,
   0.8727185,
   0.8086524,
   0.9074302,
   0.8571947,
   0.7983238,
   0.9364061,
   0.7752729,
   0.7102968};
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
   0.03318457,
   0.03103753,
   0.03356318,
   0.03398276,
   0.03684335,
   0.04124401,
   0.05999056,
   0.07064112,
   0.07853601,
   0.1041879,
   0.09672784,
   0.09420872};
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
   0.03052285,
   0.02840323,
   0.03131235,
   0.03130515,
   0.03424111,
   0.04093278,
   0.05897534,
   0.06791745,
   0.07383143,
   0.09644701,
   0.08857912,
   0.08559548};
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
   Graph_g_ratio23050->SetMinimum(0.5744115);
   Graph_g_ratio23050->SetMaximum(1.07453);
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
   0.1222364,
   0.07704284,
   0.09434397,
   0.07882527,
   0.08100962,
   0.07901904,
   0.09489848,
   0.08434335,
   0.08616211,
   0.1017777,
   0.08970941,
   0.1998507};
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
   0.1222364,
   0.07704284,
   0.09434397,
   0.07882527,
   0.08100962,
   0.07901904,
   0.09489848,
   0.08434335,
   0.08616211,
   0.1017777,
   0.08970941,
   0.1998507};
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
   Graph_g_ratio_refAtOne3051->SetMinimum(0.7601792);
   Graph_g_ratio_refAtOne3051->SetMaximum(1.239821);
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
   0.1222364,
   0.07704284,
   0.09434397,
   0.07882527,
   0.08100962,
   0.07901904,
   0.09489848,
   0.08434335,
   0.08616211,
   0.1017777,
   0.08970941,
   0.1998507};
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
   0.1222364,
   0.07704284,
   0.09434397,
   0.07882527,
   0.08100962,
   0.07901904,
   0.09489848,
   0.08434335,
   0.08616211,
   0.1017777,
   0.08970941,
   0.1998507};
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
   Graph_Graph_g_ratio_refAtOne30513052->SetMinimum(0.7601792);
   Graph_Graph_g_ratio_refAtOne30513052->SetMaximum(1.239821);
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
   0.8751141,
   0.7772143,
   0.8438243,
   0.8975972,
   0.8917203,
   0.8605525,
   0.9804762,
   0.9451915,
   0.8992408,
   1.065534,
   0.9195817,
   0.8165756};
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
   0.02971944,
   0.0259581,
   0.02886647,
   0.03129793,
   0.03210601,
   0.03206615,
   0.03743173,
   0.03609696,
   0.03376752,
   0.0388554,
   0.03251499,
   0.02795931};
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
   0.02652767,
   0.02237879,
   0.02426481,
   0.02580231,
   0.02548343,
   0.02467299,
   0.02849965,
   0.02741474,
   0.02581965,
   0.03077828,
   0.02661655,
   0.02329335};
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
   0.8923661,
   0.8146142,
   0.8857278,
   0.8887124,
   0.8727185,
   0.8086524,
   0.9074302,
   0.8571947,
   0.7983238,
   0.9364061,
   0.7752729,
   0.7102968};
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
   0.03318457,
   0.03103753,
   0.03356318,
   0.03398276,
   0.03684335,
   0.04124401,
   0.05999056,
   0.07064112,
   0.07853601,
   0.1041879,
   0.09672784,
   0.09420872};
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
   0.03052285,
   0.02840323,
   0.03131235,
   0.03130515,
   0.03424111,
   0.04093278,
   0.05897534,
   0.06791745,
   0.07383143,
   0.09644701,
   0.08857912,
   0.08559548};
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
   Graph_Graph_g_ratio230503054->SetMinimum(0.5744115);
   Graph_Graph_g_ratio230503054->SetMaximum(1.07453);
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
      tex = new TLatex(0.18,0.81,"|#eta_{lab}^{#mu}| < 2.4, p_{T}^{#mu} > 15 (10) GeV");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextSize(0.042);
   tex->SetLineWidth(2);
   tex->Draw();
   TopPad->Modified();
   Plots/results/plots/result_noacc_rap1560_CT14_EPPS16->cd();
   Plots/results/plots/result_noacc_rap1560_CT14_EPPS16->Modified();
   Plots/results/plots/result_noacc_rap1560_CT14_EPPS16->cd();
   Plots/results/plots/result_noacc_rap1560_CT14_EPPS16->SetSelected(Plots/results/plots/result_noacc_rap1560_CT14_EPPS16);
}

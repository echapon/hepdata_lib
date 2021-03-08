void result_noacc_mass_CT14_EPPS16()
{
//=========Macro generated from canvas: Plots/results/plots/result_noacc_mass_CT14_EPPS16/
//=========  (Tue Feb 23 17:21:46 2021) by ROOT version 6.16/00
   TCanvas *Plots/results/plots/result_noacc_mass_CT14_EPPS16 = new TCanvas("Plots/results/plots/result_noacc_mass_CT14_EPPS16", "",0,0,800,800);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   Plots/results/plots/result_noacc_mass_CT14_EPPS16->Range(0,0,1,1);
   Plots/results/plots/result_noacc_mass_CT14_EPPS16->SetFillColor(0);
   Plots/results/plots/result_noacc_mass_CT14_EPPS16->SetBorderMode(0);
   Plots/results/plots/result_noacc_mass_CT14_EPPS16->SetBorderSize(2);
   Plots/results/plots/result_noacc_mass_CT14_EPPS16->SetTickx(1);
   Plots/results/plots/result_noacc_mass_CT14_EPPS16->SetTicky(1);
   Plots/results/plots/result_noacc_mass_CT14_EPPS16->SetLeftMargin(0.16);
   Plots/results/plots/result_noacc_mass_CT14_EPPS16->SetRightMargin(0.02);
   Plots/results/plots/result_noacc_mass_CT14_EPPS16->SetTopMargin(0.05);
   Plots/results/plots/result_noacc_mass_CT14_EPPS16->SetBottomMargin(0.13);
   Plots/results/plots/result_noacc_mass_CT14_EPPS16->SetFrameFillStyle(0);
   Plots/results/plots/result_noacc_mass_CT14_EPPS16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: TopPad
   TPad *TopPad = new TPad("TopPad", "TopPad",0.01,0.01,0.99,0.99);
   TopPad->Draw();
   TopPad->cd();
   TopPad->Range(0.7884154,-6.365637,2.925405,1.967697);
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
   
   Double_t gth_CT14_mass_fx3001[13] = {
   17.5,
   25,
   35,
   45,
   55,
   68,
   81,
   91,
   101,
   113,
   135,
   175,
   400};
   Double_t gth_CT14_mass_fy3001[13] = {
   0.1885056,
   0.4093094,
   0.7586069,
   0.448062,
   0.2970759,
   0.3109279,
   0.9561734,
   10.0081,
   0.6334765,
   0.1114766,
   0.02957825,
   0.007319885,
   0.0005046471};
   Double_t gth_CT14_mass_felx3001[13] = {
   2.5,
   5,
   5,
   5,
   5,
   8,
   5,
   5,
   5,
   7,
   15,
   25,
   200};
   Double_t gth_CT14_mass_fely3001[13] = {
   0.007659699,
   0.01525225,
   0.02676118,
   0.0151377,
   0.009487697,
   0.009442273,
   0.02926766,
   0.3021896,
   0.01858494,
   0.003114361,
   0.000789792,
   0.0001972484,
   1.346022e-05};
   Double_t gth_CT14_mass_fehx3001[13] = {
   2.5,
   5,
   5,
   5,
   5,
   8,
   5,
   5,
   5,
   7,
   15,
   25,
   200};
   Double_t gth_CT14_mass_fehy3001[13] = {
   0.006695043,
   0.01265045,
   0.02144669,
   0.01159628,
   0.007011121,
   0.006813344,
   0.02136514,
   0.2206312,
   0.01343063,
   0.00221564,
   0.0005685155,
   0.0001470239,
   1.00265e-05};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(13,gth_CT14_mass_fx3001,gth_CT14_mass_fy3001,gth_CT14_mass_felx3001,gth_CT14_mass_fehx3001,gth_CT14_mass_fely3001,gth_CT14_mass_fehy3001);
   grae->SetName("gth_CT14_mass");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1634;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gth_CT14_mass3001 = new TH1F("Graph_gth_CT14_mass3001","Graph",100,13.5,658.5);
   Graph_gth_CT14_mass3001->SetMinimum(0.0002);
   Graph_gth_CT14_mass3001->SetMaximum(20);
   Graph_gth_CT14_mass3001->SetDirectory(0);
   Graph_gth_CT14_mass3001->SetStats(0);
   Graph_gth_CT14_mass3001->SetLineStyle(0);
   Graph_gth_CT14_mass3001->SetMarkerStyle(20);
   Graph_gth_CT14_mass3001->GetXaxis()->SetTitle("m_{#mu#mu} [GeV]");
   Graph_gth_CT14_mass3001->GetXaxis()->SetMoreLogLabels();
   Graph_gth_CT14_mass3001->GetXaxis()->SetNoExponent();
   Graph_gth_CT14_mass3001->GetXaxis()->SetLabelFont(42);
   Graph_gth_CT14_mass3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_gth_CT14_mass3001->GetXaxis()->SetLabelSize(0);
   Graph_gth_CT14_mass3001->GetXaxis()->SetTitleSize(0);
   Graph_gth_CT14_mass3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_gth_CT14_mass3001->GetXaxis()->SetTitleFont(42);
   Graph_gth_CT14_mass3001->GetYaxis()->SetTitle("d#sigma/dm_{#mu#mu} [nb/GeV]");
   Graph_gth_CT14_mass3001->GetYaxis()->SetLabelFont(42);
   Graph_gth_CT14_mass3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_gth_CT14_mass3001->GetYaxis()->SetLabelSize(0.05);
   Graph_gth_CT14_mass3001->GetYaxis()->SetTitleSize(0.048);
   Graph_gth_CT14_mass3001->GetYaxis()->SetTitleOffset(1.5625);
   Graph_gth_CT14_mass3001->GetYaxis()->SetTitleFont(42);
   Graph_gth_CT14_mass3001->GetZaxis()->SetLabelFont(42);
   Graph_gth_CT14_mass3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_gth_CT14_mass3001->GetZaxis()->SetLabelSize(0.05);
   Graph_gth_CT14_mass3001->GetZaxis()->SetTitleSize(0.06);
   Graph_gth_CT14_mass3001->GetZaxis()->SetTitleOffset(1);
   Graph_gth_CT14_mass3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gth_CT14_mass3001);
   
   grae->Draw("a5");
   
   Double_t gth_EPPS16_mass_fx3002[13] = {
   17.5,
   25,
   35,
   45,
   55,
   68,
   81,
   91,
   101,
   113,
   135,
   175,
   400};
   Double_t gth_EPPS16_mass_fy3002[13] = {
   0.179684,
   0.3870263,
   0.7136782,
   0.4228419,
   0.2830392,
   0.3040148,
   0.9456566,
   9.787481,
   0.6142625,
   0.1084765,
   0.02926104,
   0.007057973,
   0.0005086393};
   Double_t gth_EPPS16_mass_felx3002[13] = {
   2.5,
   5,
   5,
   5,
   5,
   8,
   5,
   5,
   5,
   7,
   15,
   25,
   200};
   Double_t gth_EPPS16_mass_fely3002[13] = {
   0.0155955,
   0.02609572,
   0.0396052,
   0.01968792,
   0.01110031,
   0.01029927,
   0.0311431,
   0.3156433,
   0.01894937,
   0.003177673,
   0.0007970342,
   0.0001893368,
   1.37562e-05};
   Double_t gth_EPPS16_mass_fehx3002[13] = {
   2.5,
   5,
   5,
   5,
   5,
   8,
   5,
   5,
   5,
   7,
   15,
   25,
   200};
   Double_t gth_EPPS16_mass_fehy3002[13] = {
   0.01501788,
   0.02494995,
   0.03773089,
   0.01833706,
   0.01020727,
   0.009436575,
   0.0284344,
   0.286137,
   0.01667813,
   0.002693773,
   0.0006443704,
   0.0001562711,
   1.156351e-05};
   grae = new TGraphAsymmErrors(13,gth_EPPS16_mass_fx3002,gth_EPPS16_mass_fy3002,gth_EPPS16_mass_felx3002,gth_EPPS16_mass_fehx3002,gth_EPPS16_mass_fely3002,gth_EPPS16_mass_fehy3002);
   grae->SetName("gth_EPPS16_mass");
   grae->SetTitle("Graph");

   ci = 1635;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gth_EPPS16_mass3002 = new TH1F("Graph_gth_EPPS16_mass3002","Graph",100,13.5,658.5);
   Graph_gth_EPPS16_mass3002->SetMinimum(0.0004453948);
   Graph_gth_EPPS16_mass3002->SetMaximum(11.08093);
   Graph_gth_EPPS16_mass3002->SetDirectory(0);
   Graph_gth_EPPS16_mass3002->SetStats(0);
   Graph_gth_EPPS16_mass3002->SetLineStyle(0);
   Graph_gth_EPPS16_mass3002->SetMarkerStyle(20);
   Graph_gth_EPPS16_mass3002->GetXaxis()->SetLabelFont(42);
   Graph_gth_EPPS16_mass3002->GetXaxis()->SetLabelOffset(0.007);
   Graph_gth_EPPS16_mass3002->GetXaxis()->SetLabelSize(0.05);
   Graph_gth_EPPS16_mass3002->GetXaxis()->SetTitleSize(0.06);
   Graph_gth_EPPS16_mass3002->GetXaxis()->SetTitleOffset(0.9);
   Graph_gth_EPPS16_mass3002->GetXaxis()->SetTitleFont(42);
   Graph_gth_EPPS16_mass3002->GetYaxis()->SetLabelFont(42);
   Graph_gth_EPPS16_mass3002->GetYaxis()->SetLabelOffset(0.007);
   Graph_gth_EPPS16_mass3002->GetYaxis()->SetLabelSize(0.05);
   Graph_gth_EPPS16_mass3002->GetYaxis()->SetTitleSize(0.06);
   Graph_gth_EPPS16_mass3002->GetYaxis()->SetTitleOffset(1.25);
   Graph_gth_EPPS16_mass3002->GetYaxis()->SetTitleFont(42);
   Graph_gth_EPPS16_mass3002->GetZaxis()->SetLabelFont(42);
   Graph_gth_EPPS16_mass3002->GetZaxis()->SetLabelOffset(0.007);
   Graph_gth_EPPS16_mass3002->GetZaxis()->SetLabelSize(0.05);
   Graph_gth_EPPS16_mass3002->GetZaxis()->SetTitleSize(0.06);
   Graph_gth_EPPS16_mass3002->GetZaxis()->SetTitleOffset(1);
   Graph_gth_EPPS16_mass3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gth_EPPS16_mass3002);
   
   grae->Draw("5");
   
   Double_t gres_mass_fx3003[13] = {
   17.5,
   25,
   35,
   45,
   55,
   68,
   81,
   91,
   101,
   113,
   135,
   175,
   400};
   Double_t gres_mass_fy3003[13] = {
   0.2781788,
   0.505475,
   0.7941304,
   0.5408231,
   0.2817198,
   0.3273742,
   1.022843,
   9.93459,
   0.5954979,
   0.1179567,
   0.03505687,
   0.006722974,
   0.0006414755};
   Double_t gres_mass_felx3003[13] = {
   2.5,
   5,
   5,
   5,
   5,
   8,
   5,
   5,
   5,
   7,
   15,
   25,
   200};
   Double_t gres_mass_fely3003[13] = {
   0.0313155,
   0.03780678,
   0.04247347,
   0.02915659,
   0.02024512,
   0.0167766,
   0.03825676,
   0.1946073,
   0.02725339,
   0.009502668,
   0.003389822,
   0.001116071,
   0.000114718};
   Double_t gres_mass_fehx3003[13] = {
   2.5,
   5,
   5,
   5,
   5,
   8,
   5,
   5,
   5,
   7,
   15,
   25,
   200};
   Double_t gres_mass_fehy3003[13] = {
   0.0313155,
   0.03780678,
   0.04247347,
   0.02915659,
   0.02024512,
   0.0167766,
   0.03825676,
   0.1946073,
   0.02725339,
   0.009502668,
   0.003389822,
   0.001116071,
   0.000114718};
   grae = new TGraphAsymmErrors(13,gres_mass_fx3003,gres_mass_fy3003,gres_mass_felx3003,gres_mass_fehx3003,gres_mass_fely3003,gres_mass_fehy3003);
   grae->SetName("gres_mass");
   grae->SetTitle("Graph");

   ci = 1636;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gres_mass3003 = new TH1F("Graph_gres_mass3003","Graph",100,13.5,658.5);
   Graph_gres_mass3003->SetMinimum(0.0004740817);
   Graph_gres_mass3003->SetMaximum(11.14206);
   Graph_gres_mass3003->SetDirectory(0);
   Graph_gres_mass3003->SetStats(0);
   Graph_gres_mass3003->SetLineStyle(0);
   Graph_gres_mass3003->SetMarkerStyle(20);
   Graph_gres_mass3003->GetXaxis()->SetLabelFont(42);
   Graph_gres_mass3003->GetXaxis()->SetLabelOffset(0.007);
   Graph_gres_mass3003->GetXaxis()->SetLabelSize(0.05);
   Graph_gres_mass3003->GetXaxis()->SetTitleSize(0.06);
   Graph_gres_mass3003->GetXaxis()->SetTitleOffset(0.9);
   Graph_gres_mass3003->GetXaxis()->SetTitleFont(42);
   Graph_gres_mass3003->GetYaxis()->SetLabelFont(42);
   Graph_gres_mass3003->GetYaxis()->SetLabelOffset(0.007);
   Graph_gres_mass3003->GetYaxis()->SetLabelSize(0.05);
   Graph_gres_mass3003->GetYaxis()->SetTitleSize(0.06);
   Graph_gres_mass3003->GetYaxis()->SetTitleOffset(1.25);
   Graph_gres_mass3003->GetYaxis()->SetTitleFont(42);
   Graph_gres_mass3003->GetZaxis()->SetLabelFont(42);
   Graph_gres_mass3003->GetZaxis()->SetLabelOffset(0.007);
   Graph_gres_mass3003->GetZaxis()->SetLabelSize(0.05);
   Graph_gres_mass3003->GetZaxis()->SetTitleSize(0.06);
   Graph_gres_mass3003->GetZaxis()->SetTitleOffset(1);
   Graph_gres_mass3003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gres_mass3003);
   
   grae->Draw("ep");
   
   TLegend *leg = new TLegend(0.636,0.74,0.98,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("gres_mass","Data","lpf");

   ci = 1636;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(62);
   entry=leg->AddEntry("gth_CT14_mass","CT14","F");

   ci = 1634;
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
   entry=leg->AddEntry("gth_EPPS16_mass","CT14+EPPS16","F");

   ci = 1635;
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
   
   TH1F *gth_CT14_mass_copy__1 = new TH1F("gth_CT14_mass_copy__1","Graph",100,13.5,658.5);
   gth_CT14_mass_copy__1->SetMinimum(0.0002);
   gth_CT14_mass_copy__1->SetMaximum(20);
   gth_CT14_mass_copy__1->SetDirectory(0);
   gth_CT14_mass_copy__1->SetStats(0);
   gth_CT14_mass_copy__1->SetLineStyle(0);
   gth_CT14_mass_copy__1->SetMarkerStyle(20);
   gth_CT14_mass_copy__1->GetXaxis()->SetTitle("m_{#mu#mu} [GeV]");
   gth_CT14_mass_copy__1->GetXaxis()->SetMoreLogLabels();
   gth_CT14_mass_copy__1->GetXaxis()->SetNoExponent();
   gth_CT14_mass_copy__1->GetXaxis()->SetLabelFont(42);
   gth_CT14_mass_copy__1->GetXaxis()->SetLabelOffset(0.007);
   gth_CT14_mass_copy__1->GetXaxis()->SetLabelSize(0);
   gth_CT14_mass_copy__1->GetXaxis()->SetTitleSize(0);
   gth_CT14_mass_copy__1->GetXaxis()->SetTitleOffset(0.9);
   gth_CT14_mass_copy__1->GetXaxis()->SetTitleFont(42);
   gth_CT14_mass_copy__1->GetYaxis()->SetTitle("d#sigma/dm_{#mu#mu} [nb/GeV]");
   gth_CT14_mass_copy__1->GetYaxis()->SetLabelFont(42);
   gth_CT14_mass_copy__1->GetYaxis()->SetLabelOffset(0.007);
   gth_CT14_mass_copy__1->GetYaxis()->SetLabelSize(0.05);
   gth_CT14_mass_copy__1->GetYaxis()->SetTitleSize(0.048);
   gth_CT14_mass_copy__1->GetYaxis()->SetTitleOffset(1.5625);
   gth_CT14_mass_copy__1->GetYaxis()->SetTitleFont(42);
   gth_CT14_mass_copy__1->GetZaxis()->SetLabelFont(42);
   gth_CT14_mass_copy__1->GetZaxis()->SetLabelOffset(0.007);
   gth_CT14_mass_copy__1->GetZaxis()->SetLabelSize(0.05);
   gth_CT14_mass_copy__1->GetZaxis()->SetTitleSize(0.06);
   gth_CT14_mass_copy__1->GetZaxis()->SetTitleOffset(1);
   gth_CT14_mass_copy__1->GetZaxis()->SetTitleFont(42);
   gth_CT14_mass_copy__1->Draw("sameaxis");
  
// ------------>Primitives in pad: BottomPad
   TPad *BottomPad = new TPad("BottomPad", "BottomPad",0.01,0.01,0.99,0.3);
   BottomPad->Draw();
   BottomPad->cd();
   BottomPad->Range(0.8177001,-0.35,2.901925,1.65);
   BottomPad->SetFillColor(0);
   BottomPad->SetBorderMode(0);
   BottomPad->SetBorderSize(2);
   BottomPad->SetLogx();
   BottomPad->SetTickx(1);
   BottomPad->SetTicky(1);
   BottomPad->SetLeftMargin(0.15);
   BottomPad->SetRightMargin(0.04);
   BottomPad->SetTopMargin(0.05);
   BottomPad->SetBottomMargin(0.4);
   BottomPad->SetFrameFillStyle(0);
   BottomPad->SetFrameBorderMode(0);
   BottomPad->SetFrameFillStyle(0);
   BottomPad->SetFrameBorderMode(0);
   
   Double_t g_ratio1_fx3004[13] = {
   17.5,
   25,
   35,
   45,
   55,
   68,
   81,
   91,
   101,
   113,
   135,
   175,
   400};
   Double_t g_ratio1_fy3004[13] = {
   0.677642,
   0.809752,
   0.9552674,
   0.8284815,
   1.054508,
   0.949763,
   0.9348195,
   1.0074,
   1.063776,
   0.9450635,
   0.8437219,
   1.088787,
   0.7866974};
   Double_t g_ratio1_felx3004[13] = {
   2.5,
   5,
   5,
   5,
   5,
   8,
   5,
   5,
   5,
   7,
   15,
   25,
   200};
   Double_t g_ratio1_fely3004[13] = {
   0.02753516,
   0.03017409,
   0.03369872,
   0.02799011,
   0.03367778,
   0.02884245,
   0.02861404,
   0.03041792,
   0.03120908,
   0.02640258,
   0.02252888,
   0.02933945,
   0.02098322};
   Double_t g_ratio1_fehx3004[13] = {
   2.5,
   5,
   5,
   5,
   5,
   8,
   5,
   5,
   5,
   7,
   15,
   25,
   200};
   Double_t g_ratio1_fehy3004[13] = {
   0.02406741,
   0.02502686,
   0.02700651,
   0.02144191,
   0.02488686,
   0.0208121,
   0.020888,
   0.02220839,
   0.02255362,
   0.0187835,
   0.01621695,
   0.02186888,
   0.01563037};
   grae = new TGraphAsymmErrors(13,g_ratio1_fx3004,g_ratio1_fy3004,g_ratio1_felx3004,g_ratio1_fehx3004,g_ratio1_fely3004,g_ratio1_fehy3004);
   grae->SetName("g_ratio1");
   grae->SetTitle("Graph");

   ci = 1634;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_g_ratio13004 = new TH1F("Graph_g_ratio13004","Graph",100,13.5,658.5);
   Graph_g_ratio13004->SetMinimum(0.45);
   Graph_g_ratio13004->SetMaximum(1.55);
   Graph_g_ratio13004->SetDirectory(0);
   Graph_g_ratio13004->SetStats(0);
   Graph_g_ratio13004->SetLineStyle(0);
   Graph_g_ratio13004->SetMarkerStyle(20);
   Graph_g_ratio13004->GetXaxis()->SetTitle("m_{#mu#mu} [GeV]");
   Graph_g_ratio13004->GetXaxis()->SetMoreLogLabels();
   Graph_g_ratio13004->GetXaxis()->SetNoExponent();
   Graph_g_ratio13004->GetXaxis()->SetLabelFont(42);
   Graph_g_ratio13004->GetXaxis()->SetLabelOffset(0.0056);
   Graph_g_ratio13004->GetXaxis()->SetLabelSize(0.12);
   Graph_g_ratio13004->GetXaxis()->SetTitleSize(0.2);
   Graph_g_ratio13004->GetXaxis()->SetTitleOffset(0.88);
   Graph_g_ratio13004->GetXaxis()->SetTitleFont(42);
   Graph_g_ratio13004->GetYaxis()->SetTitle("Pred./Data");
   Graph_g_ratio13004->GetYaxis()->SetLabelFont(42);
   Graph_g_ratio13004->GetYaxis()->SetLabelOffset(0.007);
   Graph_g_ratio13004->GetYaxis()->SetLabelSize(0.12);
   Graph_g_ratio13004->GetYaxis()->SetTitleSize(0.15);
   Graph_g_ratio13004->GetYaxis()->SetTitleOffset(0.35);
   Graph_g_ratio13004->GetYaxis()->SetTitleFont(42);
   Graph_g_ratio13004->GetZaxis()->SetLabelFont(42);
   Graph_g_ratio13004->GetZaxis()->SetLabelOffset(0.007);
   Graph_g_ratio13004->GetZaxis()->SetLabelSize(0.05);
   Graph_g_ratio13004->GetZaxis()->SetTitleSize(0.06);
   Graph_g_ratio13004->GetZaxis()->SetTitleOffset(1);
   Graph_g_ratio13004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g_ratio13004);
   
   grae->Draw("a5");
   
   Double_t g_ratio2_fx3005[13] = {
   17.5,
   25,
   35,
   45,
   55,
   68,
   81,
   91,
   101,
   113,
   135,
   175,
   400};
   Double_t g_ratio2_fy3005[13] = {
   0.64593,
   0.7656686,
   0.8986914,
   0.7818488,
   1.004683,
   0.9286461,
   0.9245375,
   0.9851922,
   1.031511,
   0.9196295,
   0.8346736,
   1.049829,
   0.7929208};
   Double_t g_ratio2_felx3005[13] = {
   2.5,
   5,
   5,
   5,
   5,
   8,
   5,
   5,
   5,
   7,
   15,
   25,
   200};
   Double_t g_ratio2_fely3005[13] = {
   0.05606285,
   0.05162614,
   0.04987242,
   0.03640362,
   0.03940195,
   0.03146023,
   0.03044759,
   0.03177215,
   0.03182106,
   0.02693932,
   0.02273546,
   0.02816266,
   0.02144462};
   Double_t g_ratio2_fehx3005[13] = {
   2.5,
   5,
   5,
   5,
   5,
   8,
   5,
   5,
   5,
   7,
   15,
   25,
   200};
   Double_t g_ratio2_fehy3005[13] = {
   0.05398643,
   0.04935942,
   0.04751221,
   0.03390583,
   0.03623201,
   0.02882504,
   0.02779939,
   0.0288021,
   0.02800704,
   0.02283696,
   0.01838072,
   0.02324434,
   0.01802643};
   grae = new TGraphAsymmErrors(13,g_ratio2_fx3005,g_ratio2_fy3005,g_ratio2_felx3005,g_ratio2_fehx3005,g_ratio2_fely3005,g_ratio2_fehy3005);
   grae->SetName("g_ratio2");
   grae->SetTitle("Graph");

   ci = 1635;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_g_ratio23005 = new TH1F("Graph_g_ratio23005","Graph",100,13.5,658.5);
   Graph_g_ratio23005->SetMinimum(0.5415466);
   Graph_g_ratio23005->SetMaximum(1.121394);
   Graph_g_ratio23005->SetDirectory(0);
   Graph_g_ratio23005->SetStats(0);
   Graph_g_ratio23005->SetLineStyle(0);
   Graph_g_ratio23005->SetMarkerStyle(20);
   Graph_g_ratio23005->GetXaxis()->SetLabelFont(42);
   Graph_g_ratio23005->GetXaxis()->SetLabelOffset(0.007);
   Graph_g_ratio23005->GetXaxis()->SetLabelSize(0.05);
   Graph_g_ratio23005->GetXaxis()->SetTitleSize(0.06);
   Graph_g_ratio23005->GetXaxis()->SetTitleOffset(0.9);
   Graph_g_ratio23005->GetXaxis()->SetTitleFont(42);
   Graph_g_ratio23005->GetYaxis()->SetLabelFont(42);
   Graph_g_ratio23005->GetYaxis()->SetLabelOffset(0.007);
   Graph_g_ratio23005->GetYaxis()->SetLabelSize(0.05);
   Graph_g_ratio23005->GetYaxis()->SetTitleSize(0.06);
   Graph_g_ratio23005->GetYaxis()->SetTitleOffset(1.25);
   Graph_g_ratio23005->GetYaxis()->SetTitleFont(42);
   Graph_g_ratio23005->GetZaxis()->SetLabelFont(42);
   Graph_g_ratio23005->GetZaxis()->SetLabelOffset(0.007);
   Graph_g_ratio23005->GetZaxis()->SetLabelSize(0.05);
   Graph_g_ratio23005->GetZaxis()->SetTitleSize(0.06);
   Graph_g_ratio23005->GetZaxis()->SetTitleOffset(1);
   Graph_g_ratio23005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g_ratio23005);
   
   grae->Draw("5");
   
   Double_t g_ratio_refAtOne_fx3006[13] = {
   17.5,
   25,
   35,
   45,
   55,
   68,
   81,
   91,
   101,
   113,
   135,
   175,
   400};
   Double_t g_ratio_refAtOne_fy3006[13] = {
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
   Double_t g_ratio_refAtOne_felx3006[13] = {
   2.5,
   5,
   5,
   5,
   5,
   8,
   5,
   5,
   5,
   7,
   15,
   25,
   200};
   Double_t g_ratio_refAtOne_fely3006[13] = {
   0.1125733,
   0.07479456,
   0.05348425,
   0.0539115,
   0.07186261,
   0.05124594,
   0.03740238,
   0.01958886,
   0.04576572,
   0.08056064,
   0.09669493,
   0.1660086,
   0.1788346};
   Double_t g_ratio_refAtOne_fehx3006[13] = {
   2.5,
   5,
   5,
   5,
   5,
   8,
   5,
   5,
   5,
   7,
   15,
   25,
   200};
   Double_t g_ratio_refAtOne_fehy3006[13] = {
   0.1125733,
   0.07479456,
   0.05348425,
   0.0539115,
   0.07186261,
   0.05124594,
   0.03740238,
   0.01958886,
   0.04576572,
   0.08056064,
   0.09669493,
   0.1660086,
   0.1788346};
   grae = new TGraphAsymmErrors(13,g_ratio_refAtOne_fx3006,g_ratio_refAtOne_fy3006,g_ratio_refAtOne_felx3006,g_ratio_refAtOne_fehx3006,g_ratio_refAtOne_fely3006,g_ratio_refAtOne_fehy3006);
   grae->SetName("g_ratio_refAtOne");
   grae->SetTitle("Graph");

   ci = 1636;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_g_ratio_refAtOne3006 = new TH1F("Graph_g_ratio_refAtOne3006","Graph",100,13.5,658.5);
   Graph_g_ratio_refAtOne3006->SetMinimum(0.7853985);
   Graph_g_ratio_refAtOne3006->SetMaximum(1.214602);
   Graph_g_ratio_refAtOne3006->SetDirectory(0);
   Graph_g_ratio_refAtOne3006->SetStats(0);
   Graph_g_ratio_refAtOne3006->SetLineStyle(0);
   Graph_g_ratio_refAtOne3006->SetMarkerStyle(20);
   Graph_g_ratio_refAtOne3006->GetXaxis()->SetLabelFont(42);
   Graph_g_ratio_refAtOne3006->GetXaxis()->SetLabelOffset(0.007);
   Graph_g_ratio_refAtOne3006->GetXaxis()->SetLabelSize(0.05);
   Graph_g_ratio_refAtOne3006->GetXaxis()->SetTitleSize(0.06);
   Graph_g_ratio_refAtOne3006->GetXaxis()->SetTitleOffset(0.9);
   Graph_g_ratio_refAtOne3006->GetXaxis()->SetTitleFont(42);
   Graph_g_ratio_refAtOne3006->GetYaxis()->SetLabelFont(42);
   Graph_g_ratio_refAtOne3006->GetYaxis()->SetLabelOffset(0.007);
   Graph_g_ratio_refAtOne3006->GetYaxis()->SetLabelSize(0.05);
   Graph_g_ratio_refAtOne3006->GetYaxis()->SetTitleSize(0.06);
   Graph_g_ratio_refAtOne3006->GetYaxis()->SetTitleOffset(1.25);
   Graph_g_ratio_refAtOne3006->GetYaxis()->SetTitleFont(42);
   Graph_g_ratio_refAtOne3006->GetZaxis()->SetLabelFont(42);
   Graph_g_ratio_refAtOne3006->GetZaxis()->SetLabelOffset(0.007);
   Graph_g_ratio_refAtOne3006->GetZaxis()->SetLabelSize(0.05);
   Graph_g_ratio_refAtOne3006->GetZaxis()->SetTitleSize(0.06);
   Graph_g_ratio_refAtOne3006->GetZaxis()->SetTitleOffset(1);
   Graph_g_ratio_refAtOne3006->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g_ratio_refAtOne3006);
   
   grae->Draw("ep");
   
   TF1 *f_line1 = new TF1("f_line","1",-10000,10000, TF1::EAddToList::kDefault);
   f_line1->SetFillColor(19);
   f_line1->SetFillStyle(0);
   f_line1->SetMarkerStyle(20);

   ci = TColor::GetColor("#ff0000");
   f_line1->SetLineColor(ci);
   f_line1->SetLineWidth(1);
   f_line1->GetXaxis()->SetLabelFont(42);
   f_line1->GetXaxis()->SetLabelOffset(0.007);
   f_line1->GetXaxis()->SetLabelSize(0.05);
   f_line1->GetXaxis()->SetTitleSize(0.06);
   f_line1->GetXaxis()->SetTitleOffset(0.9);
   f_line1->GetXaxis()->SetTitleFont(42);
   f_line1->GetYaxis()->SetLabelFont(42);
   f_line1->GetYaxis()->SetLabelOffset(0.007);
   f_line1->GetYaxis()->SetLabelSize(0.05);
   f_line1->GetYaxis()->SetTitleSize(0.06);
   f_line1->GetYaxis()->SetTitleOffset(1.25);
   f_line1->GetYaxis()->SetTitleFont(42);
   f_line1->Draw("SAME");
   
   Double_t g_ratio_refAtOne_fx3007[13] = {
   17.5,
   25,
   35,
   45,
   55,
   68,
   81,
   91,
   101,
   113,
   135,
   175,
   400};
   Double_t g_ratio_refAtOne_fy3007[13] = {
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
   Double_t g_ratio_refAtOne_felx3007[13] = {
   2.5,
   5,
   5,
   5,
   5,
   8,
   5,
   5,
   5,
   7,
   15,
   25,
   200};
   Double_t g_ratio_refAtOne_fely3007[13] = {
   0.1125733,
   0.07479456,
   0.05348425,
   0.0539115,
   0.07186261,
   0.05124594,
   0.03740238,
   0.01958886,
   0.04576572,
   0.08056064,
   0.09669493,
   0.1660086,
   0.1788346};
   Double_t g_ratio_refAtOne_fehx3007[13] = {
   2.5,
   5,
   5,
   5,
   5,
   8,
   5,
   5,
   5,
   7,
   15,
   25,
   200};
   Double_t g_ratio_refAtOne_fehy3007[13] = {
   0.1125733,
   0.07479456,
   0.05348425,
   0.0539115,
   0.07186261,
   0.05124594,
   0.03740238,
   0.01958886,
   0.04576572,
   0.08056064,
   0.09669493,
   0.1660086,
   0.1788346};
   grae = new TGraphAsymmErrors(13,g_ratio_refAtOne_fx3007,g_ratio_refAtOne_fy3007,g_ratio_refAtOne_felx3007,g_ratio_refAtOne_fehx3007,g_ratio_refAtOne_fely3007,g_ratio_refAtOne_fehy3007);
   grae->SetName("g_ratio_refAtOne");
   grae->SetTitle("Graph");

   ci = 1636;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_g_ratio_refAtOne30063007 = new TH1F("Graph_Graph_g_ratio_refAtOne30063007","Graph",100,13.5,658.5);
   Graph_Graph_g_ratio_refAtOne30063007->SetMinimum(0.7853985);
   Graph_Graph_g_ratio_refAtOne30063007->SetMaximum(1.214602);
   Graph_Graph_g_ratio_refAtOne30063007->SetDirectory(0);
   Graph_Graph_g_ratio_refAtOne30063007->SetStats(0);
   Graph_Graph_g_ratio_refAtOne30063007->SetLineStyle(0);
   Graph_Graph_g_ratio_refAtOne30063007->SetMarkerStyle(20);
   Graph_Graph_g_ratio_refAtOne30063007->GetXaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio_refAtOne30063007->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio_refAtOne30063007->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio_refAtOne30063007->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio_refAtOne30063007->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_g_ratio_refAtOne30063007->GetXaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio_refAtOne30063007->GetYaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio_refAtOne30063007->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio_refAtOne30063007->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio_refAtOne30063007->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio_refAtOne30063007->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_g_ratio_refAtOne30063007->GetYaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio_refAtOne30063007->GetZaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio_refAtOne30063007->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio_refAtOne30063007->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio_refAtOne30063007->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio_refAtOne30063007->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_g_ratio_refAtOne30063007->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_g_ratio_refAtOne30063007);
   
   grae->Draw("ep");
   
   Double_t g_ratio1_fx3008[13] = {
   17.5,
   25,
   35,
   45,
   55,
   68,
   81,
   91,
   101,
   113,
   135,
   175,
   400};
   Double_t g_ratio1_fy3008[13] = {
   0.677642,
   0.809752,
   0.9552674,
   0.8284815,
   1.054508,
   0.949763,
   0.9348195,
   1.0074,
   1.063776,
   0.9450635,
   0.8437219,
   1.088787,
   0.7866974};
   Double_t g_ratio1_felx3008[13] = {
   2.5,
   5,
   5,
   5,
   5,
   8,
   5,
   5,
   5,
   7,
   15,
   25,
   200};
   Double_t g_ratio1_fely3008[13] = {
   0.02753516,
   0.03017409,
   0.03369872,
   0.02799011,
   0.03367778,
   0.02884245,
   0.02861404,
   0.03041792,
   0.03120908,
   0.02640258,
   0.02252888,
   0.02933945,
   0.02098322};
   Double_t g_ratio1_fehx3008[13] = {
   2.5,
   5,
   5,
   5,
   5,
   8,
   5,
   5,
   5,
   7,
   15,
   25,
   200};
   Double_t g_ratio1_fehy3008[13] = {
   0.02406741,
   0.02502686,
   0.02700651,
   0.02144191,
   0.02488686,
   0.0208121,
   0.020888,
   0.02220839,
   0.02255362,
   0.0187835,
   0.01621695,
   0.02186888,
   0.01563037};
   grae = new TGraphAsymmErrors(13,g_ratio1_fx3008,g_ratio1_fy3008,g_ratio1_felx3008,g_ratio1_fehx3008,g_ratio1_fely3008,g_ratio1_fehy3008);
   grae->SetName("g_ratio1");
   grae->SetTitle("Graph");

   ci = 1634;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_g_ratio130043008 = new TH1F("Graph_Graph_g_ratio130043008","Graph",100,13.5,658.5);
   Graph_Graph_g_ratio130043008->SetMinimum(0.45);
   Graph_Graph_g_ratio130043008->SetMaximum(1.55);
   Graph_Graph_g_ratio130043008->SetDirectory(0);
   Graph_Graph_g_ratio130043008->SetStats(0);
   Graph_Graph_g_ratio130043008->SetLineStyle(0);
   Graph_Graph_g_ratio130043008->SetMarkerStyle(20);
   Graph_Graph_g_ratio130043008->GetXaxis()->SetTitle("m_{#mu#mu} [GeV]");
   Graph_Graph_g_ratio130043008->GetXaxis()->SetMoreLogLabels();
   Graph_Graph_g_ratio130043008->GetXaxis()->SetNoExponent();
   Graph_Graph_g_ratio130043008->GetXaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio130043008->GetXaxis()->SetLabelOffset(0.0056);
   Graph_Graph_g_ratio130043008->GetXaxis()->SetLabelSize(0.12);
   Graph_Graph_g_ratio130043008->GetXaxis()->SetTitleSize(0.2);
   Graph_Graph_g_ratio130043008->GetXaxis()->SetTitleOffset(0.88);
   Graph_Graph_g_ratio130043008->GetXaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio130043008->GetYaxis()->SetTitle("Pred./Data");
   Graph_Graph_g_ratio130043008->GetYaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio130043008->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio130043008->GetYaxis()->SetLabelSize(0.12);
   Graph_Graph_g_ratio130043008->GetYaxis()->SetTitleSize(0.15);
   Graph_Graph_g_ratio130043008->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph_g_ratio130043008->GetYaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio130043008->GetZaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio130043008->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio130043008->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio130043008->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio130043008->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_g_ratio130043008->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_g_ratio130043008);
   
   grae->Draw("5");
   
   Double_t g_ratio2_fx3009[13] = {
   17.5,
   25,
   35,
   45,
   55,
   68,
   81,
   91,
   101,
   113,
   135,
   175,
   400};
   Double_t g_ratio2_fy3009[13] = {
   0.64593,
   0.7656686,
   0.8986914,
   0.7818488,
   1.004683,
   0.9286461,
   0.9245375,
   0.9851922,
   1.031511,
   0.9196295,
   0.8346736,
   1.049829,
   0.7929208};
   Double_t g_ratio2_felx3009[13] = {
   2.5,
   5,
   5,
   5,
   5,
   8,
   5,
   5,
   5,
   7,
   15,
   25,
   200};
   Double_t g_ratio2_fely3009[13] = {
   0.05606285,
   0.05162614,
   0.04987242,
   0.03640362,
   0.03940195,
   0.03146023,
   0.03044759,
   0.03177215,
   0.03182106,
   0.02693932,
   0.02273546,
   0.02816266,
   0.02144462};
   Double_t g_ratio2_fehx3009[13] = {
   2.5,
   5,
   5,
   5,
   5,
   8,
   5,
   5,
   5,
   7,
   15,
   25,
   200};
   Double_t g_ratio2_fehy3009[13] = {
   0.05398643,
   0.04935942,
   0.04751221,
   0.03390583,
   0.03623201,
   0.02882504,
   0.02779939,
   0.0288021,
   0.02800704,
   0.02283696,
   0.01838072,
   0.02324434,
   0.01802643};
   grae = new TGraphAsymmErrors(13,g_ratio2_fx3009,g_ratio2_fy3009,g_ratio2_felx3009,g_ratio2_fehx3009,g_ratio2_fely3009,g_ratio2_fehy3009);
   grae->SetName("g_ratio2");
   grae->SetTitle("Graph");

   ci = 1635;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_g_ratio230053009 = new TH1F("Graph_Graph_g_ratio230053009","Graph",100,13.5,658.5);
   Graph_Graph_g_ratio230053009->SetMinimum(0.5415466);
   Graph_Graph_g_ratio230053009->SetMaximum(1.121394);
   Graph_Graph_g_ratio230053009->SetDirectory(0);
   Graph_Graph_g_ratio230053009->SetStats(0);
   Graph_Graph_g_ratio230053009->SetLineStyle(0);
   Graph_Graph_g_ratio230053009->SetMarkerStyle(20);
   Graph_Graph_g_ratio230053009->GetXaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio230053009->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio230053009->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio230053009->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio230053009->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_g_ratio230053009->GetXaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio230053009->GetYaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio230053009->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio230053009->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio230053009->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio230053009->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_g_ratio230053009->GetYaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio230053009->GetZaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio230053009->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio230053009->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio230053009->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio230053009->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_g_ratio230053009->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_g_ratio230053009);
   
   grae->Draw("5");
   
   TH1F *g_ratio1_copy__2 = new TH1F("g_ratio1_copy__2","Graph",100,13.5,658.5);
   g_ratio1_copy__2->SetMinimum(0.45);
   g_ratio1_copy__2->SetMaximum(1.55);
   g_ratio1_copy__2->SetDirectory(0);
   g_ratio1_copy__2->SetStats(0);
   g_ratio1_copy__2->SetLineStyle(0);
   g_ratio1_copy__2->SetMarkerStyle(20);
   g_ratio1_copy__2->GetXaxis()->SetTitle("m_{#mu#mu} [GeV]");
   g_ratio1_copy__2->GetXaxis()->SetMoreLogLabels();
   g_ratio1_copy__2->GetXaxis()->SetNoExponent();
   g_ratio1_copy__2->GetXaxis()->SetLabelFont(42);
   g_ratio1_copy__2->GetXaxis()->SetLabelOffset(0.0056);
   g_ratio1_copy__2->GetXaxis()->SetLabelSize(0.12);
   g_ratio1_copy__2->GetXaxis()->SetTitleSize(0.2);
   g_ratio1_copy__2->GetXaxis()->SetTitleOffset(0.88);
   g_ratio1_copy__2->GetXaxis()->SetTitleFont(42);
   g_ratio1_copy__2->GetYaxis()->SetTitle("Pred./Data");
   g_ratio1_copy__2->GetYaxis()->SetLabelFont(42);
   g_ratio1_copy__2->GetYaxis()->SetLabelOffset(0.007);
   g_ratio1_copy__2->GetYaxis()->SetLabelSize(0.12);
   g_ratio1_copy__2->GetYaxis()->SetTitleSize(0.15);
   g_ratio1_copy__2->GetYaxis()->SetTitleOffset(0.35);
   g_ratio1_copy__2->GetYaxis()->SetTitleFont(42);
   g_ratio1_copy__2->GetZaxis()->SetLabelFont(42);
   g_ratio1_copy__2->GetZaxis()->SetLabelOffset(0.007);
   g_ratio1_copy__2->GetZaxis()->SetLabelSize(0.05);
   g_ratio1_copy__2->GetZaxis()->SetTitleSize(0.06);
   g_ratio1_copy__2->GetZaxis()->SetTitleOffset(1);
   g_ratio1_copy__2->GetZaxis()->SetTitleFont(42);
   g_ratio1_copy__2->Draw("sameaxis");
   BottomPad->Modified();
   TopPad->cd();
   TLatex *   tex = new TLatex(0.95,0.9328,"#scale[0.85]{pPb (173 nb^{-1}, 8.16 TeV)}");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.033792);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.16,0.9328,"CMS");
tex->SetNDC();
   tex->SetTextFont(61);
   tex->SetTextSize(0.0384);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.18,0.5,"-2.87 < |y_{CM}| < 1.93");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextSize(0.028);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.18,0.46,"|#eta_{lab}^{#mu}| < 2.4, p_{T}^{#mu} > 15 (10) GeV");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextSize(0.028);
   tex->SetLineWidth(2);
   tex->Draw();
   TopPad->Modified();
   Plots/results/plots/result_noacc_mass_CT14_EPPS16->cd();
   Plots/results/plots/result_noacc_mass_CT14_EPPS16->Modified();
   Plots/results/plots/result_noacc_mass_CT14_EPPS16->cd();
   Plots/results/plots/result_noacc_mass_CT14_EPPS16->SetSelected(Plots/results/plots/result_noacc_mass_CT14_EPPS16);
}

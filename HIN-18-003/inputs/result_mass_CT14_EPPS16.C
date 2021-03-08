void result_mass_CT14_EPPS16()
{
//=========Macro generated from canvas: Plots/results/plots/result_mass_CT14_EPPS16/
//=========  (Tue Feb 23 17:21:34 2021) by ROOT version 6.16/00
   TCanvas *Plots/results/plots/result_mass_CT14_EPPS16 = new TCanvas("Plots/results/plots/result_mass_CT14_EPPS16", "",0,0,800,800);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   Plots/results/plots/result_mass_CT14_EPPS16->Range(0,0,1,1);
   Plots/results/plots/result_mass_CT14_EPPS16->SetFillColor(0);
   Plots/results/plots/result_mass_CT14_EPPS16->SetBorderMode(0);
   Plots/results/plots/result_mass_CT14_EPPS16->SetBorderSize(2);
   Plots/results/plots/result_mass_CT14_EPPS16->SetTickx(1);
   Plots/results/plots/result_mass_CT14_EPPS16->SetTicky(1);
   Plots/results/plots/result_mass_CT14_EPPS16->SetLeftMargin(0.16);
   Plots/results/plots/result_mass_CT14_EPPS16->SetRightMargin(0.02);
   Plots/results/plots/result_mass_CT14_EPPS16->SetTopMargin(0.05);
   Plots/results/plots/result_mass_CT14_EPPS16->SetBottomMargin(0.13);
   Plots/results/plots/result_mass_CT14_EPPS16->SetFrameFillStyle(0);
   Plots/results/plots/result_mass_CT14_EPPS16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: TopPad
   TPad *TopPad = new TPad("TopPad", "TopPad",0.01,0.01,0.99,0.99);
   TopPad->Draw();
   TopPad->cd();
   TopPad->Range(0.7884154,-6.714016,2.925405,2.708004);
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
   17.63949,
   5.649145,
   1.793996,
   0.792158,
   0.4764031,
   0.4797307,
   1.416384,
   14.54526,
   0.9249323,
   0.1626048,
   0.04239908,
   0.01040551,
   0.0007013478};
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
   0.7160289,
   0.2139577,
   0.06272583,
   0.02582363,
   0.01460117,
   0.01383142,
   0.04088565,
   0.4147368,
   0.02558057,
   0.004296097,
   0.001075759,
   0.000263138,
   1.776456e-05};
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
   0.6245565,
   0.1799596,
   0.05092076,
   0.02033355,
   0.01116146,
   0.01041503,
   0.03095767,
   0.3144463,
   0.01929445,
   0.003191196,
   0.0008060773,
   0.0002003811,
   1.350782e-05};
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
   Graph_gth_CT14_mass3001->SetMaximum(90);
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
   15.4904,
   5.100913,
   1.67892,
   0.7452256,
   0.4552371,
   0.4621661,
   1.395357,
   14.14191,
   0.8788861,
   0.1543953,
   0.04141742,
   0.009870444,
   0.0006829345};
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
   1.31621,
   0.3599957,
   0.09506279,
   0.03542439,
   0.01845747,
   0.01611434,
   0.04636496,
   0.4566321,
   0.02694563,
   0.004415308,
   0.001087788,
   0.0002528346,
   1.71054e-05};
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
   1.271784,
   0.3448451,
   0.08970738,
   0.03288669,
   0.0170274,
   0.01502018,
   0.04376153,
   0.4291254,
   0.02494595,
   0.003968161,
   0.0009430327,
   0.0002126022,
   1.443726e-05};
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
   Graph_gth_EPPS16_mass3002->SetMinimum(0.0005992462);
   Graph_gth_EPPS16_mass3002->SetMaximum(18.43834);
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
   21.67809,
   6.397481,
   1.864116,
   0.9494403,
   0.4518947,
   0.4987216,
   1.511892,
   14.38366,
   0.8538199,
   0.168194,
   0.04971017,
   0.009410776,
   0.0008633107};
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
   3.071279,
   0.5257369,
   0.09945274,
   0.0511398,
   0.03207841,
   0.02543708,
   0.05761727,
   0.3026624,
   0.03971253,
   0.01363067,
   0.004830784,
   0.001567721,
   0.0001546178};
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
   3.071279,
   0.5257369,
   0.09945274,
   0.0511398,
   0.03207841,
   0.02543708,
   0.05761727,
   0.3026624,
   0.03971253,
   0.01363067,
   0.004830784,
   0.001567721,
   0.0001546178};
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
   Graph_gres_mass3003->SetMinimum(0.0006378236);
   Graph_gres_mass3003->SetMaximum(27.22424);
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
   gth_CT14_mass_copy__1->SetMaximum(90);
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
   0.8137014,
   0.8830265,
   0.962384,
   0.8343421,
   1.054235,
   0.9619207,
   0.9368286,
   1.011235,
   1.083287,
   0.966769,
   0.8529257,
   1.105701,
   0.8123933};
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
   0.03303007,
   0.03344406,
   0.0336491,
   0.02719879,
   0.03231101,
   0.02773375,
   0.0270427,
   0.02883387,
   0.02996015,
   0.0255425,
   0.02164062,
   0.02796135,
   0.02057726};
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
   0.02881049,
   0.02812975,
   0.0273163,
   0.02141635,
   0.02469924,
   0.02088346,
   0.02047611,
   0.02186135,
   0.0225978,
   0.0189733,
   0.01621554,
   0.02129273,
   0.01564654};
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
   0.7145647,
   0.7973314,
   0.9006517,
   0.7849104,
   1.007396,
   0.9267016,
   0.9229207,
   0.9831927,
   1.029358,
   0.9179592,
   0.8331781,
   1.048845,
   0.7910646};
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
   0.06071612,
   0.05627147,
   0.05099617,
   0.03731082,
   0.04084463,
   0.03231129,
   0.03066684,
   0.03174658,
   0.03155891,
   0.02625128,
   0.0218826,
   0.02686649,
   0.01981373};
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
   0.0586668,
   0.05390326,
   0.04812327,
   0.03463798,
   0.03768002,
   0.03011736,
   0.02894487,
   0.02983422,
   0.02921687,
   0.02359276,
   0.01897062,
   0.02259135,
   0.01672313};
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
   Graph_g_ratio23005->SetMinimum(0.6120899);
   Graph_g_ratio23005->SetMaximum(1.113195);
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
   0.1416767,
   0.08217874,
   0.05335114,
   0.0538631,
   0.07098648,
   0.05100457,
   0.03810938,
   0.02104209,
   0.04651159,
   0.08104135,
   0.09717899,
   0.1665879,
   0.1790987};
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
   0.1416767,
   0.08217874,
   0.05335114,
   0.0538631,
   0.07098648,
   0.05100457,
   0.03810938,
   0.02104209,
   0.04651159,
   0.08104135,
   0.09717899,
   0.1665879,
   0.1790987};
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
   Graph_g_ratio_refAtOne3006->SetMinimum(0.7850815);
   Graph_g_ratio_refAtOne3006->SetMaximum(1.214918);
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
   0.1416767,
   0.08217874,
   0.05335114,
   0.0538631,
   0.07098648,
   0.05100457,
   0.03810938,
   0.02104209,
   0.04651159,
   0.08104135,
   0.09717899,
   0.1665879,
   0.1790987};
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
   0.1416767,
   0.08217874,
   0.05335114,
   0.0538631,
   0.07098648,
   0.05100457,
   0.03810938,
   0.02104209,
   0.04651159,
   0.08104135,
   0.09717899,
   0.1665879,
   0.1790987};
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
   Graph_Graph_g_ratio_refAtOne30063007->SetMinimum(0.7850815);
   Graph_Graph_g_ratio_refAtOne30063007->SetMaximum(1.214918);
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
   0.8137014,
   0.8830265,
   0.962384,
   0.8343421,
   1.054235,
   0.9619207,
   0.9368286,
   1.011235,
   1.083287,
   0.966769,
   0.8529257,
   1.105701,
   0.8123933};
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
   0.03303007,
   0.03344406,
   0.0336491,
   0.02719879,
   0.03231101,
   0.02773375,
   0.0270427,
   0.02883387,
   0.02996015,
   0.0255425,
   0.02164062,
   0.02796135,
   0.02057726};
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
   0.02881049,
   0.02812975,
   0.0273163,
   0.02141635,
   0.02469924,
   0.02088346,
   0.02047611,
   0.02186135,
   0.0225978,
   0.0189733,
   0.01621554,
   0.02129273,
   0.01564654};
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
   0.7145647,
   0.7973314,
   0.9006517,
   0.7849104,
   1.007396,
   0.9267016,
   0.9229207,
   0.9831927,
   1.029358,
   0.9179592,
   0.8331781,
   1.048845,
   0.7910646};
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
   0.06071612,
   0.05627147,
   0.05099617,
   0.03731082,
   0.04084463,
   0.03231129,
   0.03066684,
   0.03174658,
   0.03155891,
   0.02625128,
   0.0218826,
   0.02686649,
   0.01981373};
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
   0.0586668,
   0.05390326,
   0.04812327,
   0.03463798,
   0.03768002,
   0.03011736,
   0.02894487,
   0.02983422,
   0.02921687,
   0.02359276,
   0.01897062,
   0.02259135,
   0.01672313};
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
   Graph_Graph_g_ratio230053009->SetMinimum(0.6120899);
   Graph_Graph_g_ratio230053009->SetMaximum(1.113195);
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
   TopPad->Modified();
   Plots/results/plots/result_mass_CT14_EPPS16->cd();
   Plots/results/plots/result_mass_CT14_EPPS16->Modified();
   Plots/results/plots/result_mass_CT14_EPPS16->cd();
   Plots/results/plots/result_mass_CT14_EPPS16->SetSelected(Plots/results/plots/result_mass_CT14_EPPS16);
}

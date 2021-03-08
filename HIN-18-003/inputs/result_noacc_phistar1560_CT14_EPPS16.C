void result_noacc_phistar1560_CT14_EPPS16()
{
//=========Macro generated from canvas: Plots/results/plots/result_noacc_phistar1560_CT14_EPPS16/
//=========  (Tue Feb 23 17:21:47 2021) by ROOT version 6.16/00
   TCanvas *Plots/results/plots/result_noacc_phistar1560_CT14_EPPS16 = new TCanvas("Plots/results/plots/result_noacc_phistar1560_CT14_EPPS16", "",0,0,800,800);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   Plots/results/plots/result_noacc_phistar1560_CT14_EPPS16->Range(0,0,1,1);
   Plots/results/plots/result_noacc_phistar1560_CT14_EPPS16->SetFillColor(0);
   Plots/results/plots/result_noacc_phistar1560_CT14_EPPS16->SetBorderMode(0);
   Plots/results/plots/result_noacc_phistar1560_CT14_EPPS16->SetBorderSize(2);
   Plots/results/plots/result_noacc_phistar1560_CT14_EPPS16->SetTickx(1);
   Plots/results/plots/result_noacc_phistar1560_CT14_EPPS16->SetTicky(1);
   Plots/results/plots/result_noacc_phistar1560_CT14_EPPS16->SetLeftMargin(0.16);
   Plots/results/plots/result_noacc_phistar1560_CT14_EPPS16->SetRightMargin(0.02);
   Plots/results/plots/result_noacc_phistar1560_CT14_EPPS16->SetTopMargin(0.05);
   Plots/results/plots/result_noacc_phistar1560_CT14_EPPS16->SetBottomMargin(0.13);
   Plots/results/plots/result_noacc_phistar1560_CT14_EPPS16->SetFrameFillStyle(0);
   Plots/results/plots/result_noacc_phistar1560_CT14_EPPS16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: TopPad
   TPad *TopPad = new TPad("TopPad", "TopPad",0.01,0.01,0.99,0.99);
   TopPad->Draw();
   TopPad->cd();
   TopPad->Range(-3.300221,-1.931306,0.7163026,2.860463);
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
   
   Double_t gth_CT14_phistar1560_fx3064[9] = {
   0.004,
   0.016,
   0.0345,
   0.0585,
   0.093,
   0.1515,
   0.29,
   0.772,
   2.215};
   Double_t gth_CT14_phistar1560_fy3064[9] = {
   87.96081,
   85.46005,
   80.46985,
   70.28834,
   55.5393,
   35.61309,
   17.66342,
   4.532879,
   0.8449601};
   Double_t gth_CT14_phistar1560_felx3064[9] = {
   0.0018,
   0.008,
   0.0105,
   0.0135,
   0.021,
   0.0375,
   0.101,
   0.381,
   1.062};
   Double_t gth_CT14_phistar1560_fely3064[9] = {
   3.060632,
   2.910181,
   2.751666,
   2.403209,
   1.916484,
   1.217389,
   0.609569,
   0.1583527,
   0.03218075};
   Double_t gth_CT14_phistar1560_fehx3064[9] = {
   0.004,
   0.008,
   0.0105,
   0.0135,
   0.021,
   0.0375,
   0.101,
   0.381,
   1.062};
   Double_t gth_CT14_phistar1560_fehy3064[9] = {
   2.432816,
   2.303472,
   2.178501,
   1.896448,
   1.511161,
   0.9520158,
   0.4768761,
   0.1269645,
   0.02713501};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(9,gth_CT14_phistar1560_fx3064,gth_CT14_phistar1560_fy3064,gth_CT14_phistar1560_felx3064,gth_CT14_phistar1560_fehx3064,gth_CT14_phistar1560_fely3064,gth_CT14_phistar1560_fehy3064);
   grae->SetName("gth_CT14_phistar1560");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1655;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_gth_CT14_phistar15603064 = new TH1F("Graph_gth_CT14_phistar15603064","Graph",100,0.0022,3.277);
   Graph_gth_CT14_phistar15603064->SetMinimum(0.4);
   Graph_gth_CT14_phistar15603064->SetMaximum(300);
   Graph_gth_CT14_phistar15603064->SetDirectory(0);
   Graph_gth_CT14_phistar15603064->SetStats(0);
   Graph_gth_CT14_phistar15603064->SetLineStyle(0);
   Graph_gth_CT14_phistar15603064->SetMarkerStyle(20);
   Graph_gth_CT14_phistar15603064->GetXaxis()->SetTitle("#lower[0.1]{#phi}#lower[-0.1]{#scale[0.8]{*}}");
   Graph_gth_CT14_phistar15603064->GetXaxis()->SetLabelFont(42);
   Graph_gth_CT14_phistar15603064->GetXaxis()->SetLabelOffset(0.007);
   Graph_gth_CT14_phistar15603064->GetXaxis()->SetLabelSize(0);
   Graph_gth_CT14_phistar15603064->GetXaxis()->SetTitleSize(0);
   Graph_gth_CT14_phistar15603064->GetXaxis()->SetTitleOffset(0.9);
   Graph_gth_CT14_phistar15603064->GetXaxis()->SetTitleFont(42);
   Graph_gth_CT14_phistar15603064->GetYaxis()->SetTitle("d#sigma/d#phi#lower[-0.1]{#scale[0.8]{*}} [nb]");
   Graph_gth_CT14_phistar15603064->GetYaxis()->SetLabelFont(42);
   Graph_gth_CT14_phistar15603064->GetYaxis()->SetLabelOffset(0.007);
   Graph_gth_CT14_phistar15603064->GetYaxis()->SetLabelSize(0.05);
   Graph_gth_CT14_phistar15603064->GetYaxis()->SetTitleSize(0.072);
   Graph_gth_CT14_phistar15603064->GetYaxis()->SetTitleOffset(1.041667);
   Graph_gth_CT14_phistar15603064->GetYaxis()->SetTitleFont(42);
   Graph_gth_CT14_phistar15603064->GetZaxis()->SetLabelFont(42);
   Graph_gth_CT14_phistar15603064->GetZaxis()->SetLabelOffset(0.007);
   Graph_gth_CT14_phistar15603064->GetZaxis()->SetLabelSize(0.05);
   Graph_gth_CT14_phistar15603064->GetZaxis()->SetTitleSize(0.06);
   Graph_gth_CT14_phistar15603064->GetZaxis()->SetTitleOffset(1);
   Graph_gth_CT14_phistar15603064->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gth_CT14_phistar15603064);
   
   grae->Draw("a5");
   
   Double_t gth_EPPS16_phistar1560_fx3065[9] = {
   0.004,
   0.016,
   0.0345,
   0.0585,
   0.093,
   0.1515,
   0.29,
   0.772,
   2.215};
   Double_t gth_EPPS16_phistar1560_fy3065[9] = {
   79.8794,
   78.13311,
   72.97403,
   64.746,
   51.1629,
   34.41361,
   16.51512,
   4.461336,
   0.8073247};
   Double_t gth_EPPS16_phistar1560_felx3065[9] = {
   0.0018,
   0.008,
   0.0105,
   0.0135,
   0.021,
   0.0375,
   0.101,
   0.381,
   1.062};
   Double_t gth_EPPS16_phistar1560_fely3065[9] = {
   3.974217,
   3.87466,
   3.573652,
   3.214761,
   2.576871,
   1.760418,
   0.8652548,
   0.2537404,
   0.05841513};
   Double_t gth_EPPS16_phistar1560_fehx3065[9] = {
   0.004,
   0.008,
   0.0105,
   0.0135,
   0.021,
   0.0375,
   0.101,
   0.381,
   1.062};
   Double_t gth_EPPS16_phistar1560_fehy3065[9] = {
   3.761299,
   3.676334,
   3.388983,
   3.05379,
   2.443561,
   1.660569,
   0.8138492,
   0.2413629,
   0.05635632};
   grae = new TGraphAsymmErrors(9,gth_EPPS16_phistar1560_fx3065,gth_EPPS16_phistar1560_fy3065,gth_EPPS16_phistar1560_felx3065,gth_EPPS16_phistar1560_fehx3065,gth_EPPS16_phistar1560_fely3065,gth_EPPS16_phistar1560_fehy3065);
   grae->SetName("gth_EPPS16_phistar1560");
   grae->SetTitle("Graph");

   ci = 1656;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_gth_EPPS16_phistar15603065 = new TH1F("Graph_gth_EPPS16_phistar15603065","Graph",100,0.00198,3.60448);
   Graph_gth_EPPS16_phistar15603065->SetMinimum(0.6740186);
   Graph_gth_EPPS16_phistar15603065->SetMaximum(91.92988);
   Graph_gth_EPPS16_phistar15603065->SetDirectory(0);
   Graph_gth_EPPS16_phistar15603065->SetStats(0);
   Graph_gth_EPPS16_phistar15603065->SetLineStyle(0);
   Graph_gth_EPPS16_phistar15603065->SetMarkerStyle(20);
   Graph_gth_EPPS16_phistar15603065->GetXaxis()->SetLabelFont(42);
   Graph_gth_EPPS16_phistar15603065->GetXaxis()->SetLabelOffset(0.007);
   Graph_gth_EPPS16_phistar15603065->GetXaxis()->SetLabelSize(0.05);
   Graph_gth_EPPS16_phistar15603065->GetXaxis()->SetTitleSize(0.06);
   Graph_gth_EPPS16_phistar15603065->GetXaxis()->SetTitleOffset(0.9);
   Graph_gth_EPPS16_phistar15603065->GetXaxis()->SetTitleFont(42);
   Graph_gth_EPPS16_phistar15603065->GetYaxis()->SetLabelFont(42);
   Graph_gth_EPPS16_phistar15603065->GetYaxis()->SetLabelOffset(0.007);
   Graph_gth_EPPS16_phistar15603065->GetYaxis()->SetLabelSize(0.05);
   Graph_gth_EPPS16_phistar15603065->GetYaxis()->SetTitleSize(0.06);
   Graph_gth_EPPS16_phistar15603065->GetYaxis()->SetTitleOffset(1.25);
   Graph_gth_EPPS16_phistar15603065->GetYaxis()->SetTitleFont(42);
   Graph_gth_EPPS16_phistar15603065->GetZaxis()->SetLabelFont(42);
   Graph_gth_EPPS16_phistar15603065->GetZaxis()->SetLabelOffset(0.007);
   Graph_gth_EPPS16_phistar15603065->GetZaxis()->SetLabelSize(0.05);
   Graph_gth_EPPS16_phistar15603065->GetZaxis()->SetTitleSize(0.06);
   Graph_gth_EPPS16_phistar15603065->GetZaxis()->SetTitleOffset(1);
   Graph_gth_EPPS16_phistar15603065->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gth_EPPS16_phistar15603065);
   
   grae->Draw("5");
   
   Double_t gres_phistar1560_fx3066[9] = {
   0.004,
   0.016,
   0.0345,
   0.0585,
   0.093,
   0.1515,
   0.29,
   0.772,
   2.215};
   Double_t gres_phistar1560_fy3066[9] = {
   100.6654,
   84.42678,
   80.17292,
   73.51365,
   61.08678,
   38.77436,
   19.40983,
   4.835247,
   1.093705};
   Double_t gres_phistar1560_felx3066[9] = {
   0.0018,
   0.008,
   0.0105,
   0.0135,
   0.021,
   0.0375,
   0.101,
   0.381,
   1.062};
   Double_t gres_phistar1560_fely3066[9] = {
   13.72028,
   7.856694,
   6.986209,
   5.938148,
   4.51,
   2.667549,
   1.329499,
   0.3658661,
   0.08696708};
   Double_t gres_phistar1560_fehx3066[9] = {
   0.004,
   0.008,
   0.0105,
   0.0135,
   0.021,
   0.0375,
   0.101,
   0.381,
   1.062};
   Double_t gres_phistar1560_fehy3066[9] = {
   13.72028,
   7.856694,
   6.986209,
   5.938148,
   4.51,
   2.667549,
   1.329499,
   0.3658661,
   0.08696708};
   grae = new TGraphAsymmErrors(9,gres_phistar1560_fx3066,gres_phistar1560_fy3066,gres_phistar1560_felx3066,gres_phistar1560_fehx3066,gres_phistar1560_fely3066,gres_phistar1560_fehy3066);
   grae->SetName("gres_phistar1560");
   grae->SetTitle("Graph");

   ci = 1657;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_gres_phistar15603066 = new TH1F("Graph_gres_phistar15603066","Graph",100,0.00198,3.60448);
   Graph_gres_phistar15603066->SetMinimum(0.906064);
   Graph_gres_phistar15603066->SetMaximum(125.7236);
   Graph_gres_phistar15603066->SetDirectory(0);
   Graph_gres_phistar15603066->SetStats(0);
   Graph_gres_phistar15603066->SetLineStyle(0);
   Graph_gres_phistar15603066->SetMarkerStyle(20);
   Graph_gres_phistar15603066->GetXaxis()->SetLabelFont(42);
   Graph_gres_phistar15603066->GetXaxis()->SetLabelOffset(0.007);
   Graph_gres_phistar15603066->GetXaxis()->SetLabelSize(0.05);
   Graph_gres_phistar15603066->GetXaxis()->SetTitleSize(0.06);
   Graph_gres_phistar15603066->GetXaxis()->SetTitleOffset(0.9);
   Graph_gres_phistar15603066->GetXaxis()->SetTitleFont(42);
   Graph_gres_phistar15603066->GetYaxis()->SetLabelFont(42);
   Graph_gres_phistar15603066->GetYaxis()->SetLabelOffset(0.007);
   Graph_gres_phistar15603066->GetYaxis()->SetLabelSize(0.05);
   Graph_gres_phistar15603066->GetYaxis()->SetTitleSize(0.06);
   Graph_gres_phistar15603066->GetYaxis()->SetTitleOffset(1.25);
   Graph_gres_phistar15603066->GetYaxis()->SetTitleFont(42);
   Graph_gres_phistar15603066->GetZaxis()->SetLabelFont(42);
   Graph_gres_phistar15603066->GetZaxis()->SetLabelOffset(0.007);
   Graph_gres_phistar15603066->GetZaxis()->SetLabelSize(0.05);
   Graph_gres_phistar15603066->GetZaxis()->SetTitleSize(0.06);
   Graph_gres_phistar15603066->GetZaxis()->SetTitleOffset(1);
   Graph_gres_phistar15603066->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gres_phistar15603066);
   
   grae->Draw("ep");
   
   TLegend *leg = new TLegend(0.164,0.54,0.68,0.78,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("gres_phistar1560","Data","lpf");

   ci = 1657;
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
   entry=leg->AddEntry("gth_CT14_phistar1560","CT14","F");

   ci = 1655;
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
   entry=leg->AddEntry("gth_EPPS16_phistar1560","CT14+EPPS16","F");

   ci = 1656;
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
   
   TH1F *gth_CT14_phistar1560_copy__15 = new TH1F("gth_CT14_phistar1560_copy__15","Graph",100,0.0022,3.277);
   gth_CT14_phistar1560_copy__15->SetMinimum(0.4);
   gth_CT14_phistar1560_copy__15->SetMaximum(300);
   gth_CT14_phistar1560_copy__15->SetDirectory(0);
   gth_CT14_phistar1560_copy__15->SetStats(0);
   gth_CT14_phistar1560_copy__15->SetLineStyle(0);
   gth_CT14_phistar1560_copy__15->SetMarkerStyle(20);
   gth_CT14_phistar1560_copy__15->GetXaxis()->SetTitle("#lower[0.1]{#phi}#lower[-0.1]{#scale[0.8]{*}}");
   gth_CT14_phistar1560_copy__15->GetXaxis()->SetLabelFont(42);
   gth_CT14_phistar1560_copy__15->GetXaxis()->SetLabelOffset(0.007);
   gth_CT14_phistar1560_copy__15->GetXaxis()->SetLabelSize(0);
   gth_CT14_phistar1560_copy__15->GetXaxis()->SetTitleSize(0);
   gth_CT14_phistar1560_copy__15->GetXaxis()->SetTitleOffset(0.9);
   gth_CT14_phistar1560_copy__15->GetXaxis()->SetTitleFont(42);
   gth_CT14_phistar1560_copy__15->GetYaxis()->SetTitle("d#sigma/d#phi#lower[-0.1]{#scale[0.8]{*}} [nb]");
   gth_CT14_phistar1560_copy__15->GetYaxis()->SetLabelFont(42);
   gth_CT14_phistar1560_copy__15->GetYaxis()->SetLabelOffset(0.007);
   gth_CT14_phistar1560_copy__15->GetYaxis()->SetLabelSize(0.05);
   gth_CT14_phistar1560_copy__15->GetYaxis()->SetTitleSize(0.072);
   gth_CT14_phistar1560_copy__15->GetYaxis()->SetTitleOffset(1.041667);
   gth_CT14_phistar1560_copy__15->GetYaxis()->SetTitleFont(42);
   gth_CT14_phistar1560_copy__15->GetZaxis()->SetLabelFont(42);
   gth_CT14_phistar1560_copy__15->GetZaxis()->SetLabelOffset(0.007);
   gth_CT14_phistar1560_copy__15->GetZaxis()->SetLabelSize(0.05);
   gth_CT14_phistar1560_copy__15->GetZaxis()->SetTitleSize(0.06);
   gth_CT14_phistar1560_copy__15->GetZaxis()->SetTitleOffset(1);
   gth_CT14_phistar1560_copy__15->GetZaxis()->SetTitleFont(42);
   gth_CT14_phistar1560_copy__15->Draw("sameaxis");
  
// ------------>Primitives in pad: BottomPad
   TPad *BottomPad = new TPad("BottomPad", "BottomPad",0.01,0.01,0.99,0.3);
   BottomPad->Draw();
   BottomPad->cd();
   BottomPad->Range(-3.24518,-0.54,0.6721705,1.66);
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
   
   Double_t g_ratio1_fx3067[9] = {
   0.004,
   0.016,
   0.0345,
   0.0585,
   0.093,
   0.1515,
   0.29,
   0.772,
   2.215};
   Double_t g_ratio1_fy3067[9] = {
   0.873794,
   1.012239,
   1.003704,
   0.9561264,
   0.909187,
   0.91847,
   0.9100244,
   0.9374659,
   0.7725668};
   Double_t g_ratio1_felx3067[9] = {
   0.0018,
   0.008,
   0.0105,
   0.0135,
   0.021,
   0.0375,
   0.101,
   0.381,
   1.062};
   Double_t g_ratio1_fely3067[9] = {
   0.03040402,
   0.03446988,
   0.03432163,
   0.03269065,
   0.03137315,
   0.03139674,
   0.03140517,
   0.03274967,
   0.02942361};
   Double_t g_ratio1_fehx3067[9] = {
   0.004,
   0.008,
   0.0105,
   0.0135,
   0.021,
   0.0375,
   0.101,
   0.381,
   1.062};
   Double_t g_ratio1_fehy3067[9] = {
   0.02416735,
   0.02728366,
   0.02717253,
   0.02579722,
   0.02473794,
   0.02455272,
   0.0245688,
   0.02625812,
   0.02481018};
   grae = new TGraphAsymmErrors(9,g_ratio1_fx3067,g_ratio1_fy3067,g_ratio1_felx3067,g_ratio1_fehx3067,g_ratio1_fely3067,g_ratio1_fehy3067);
   grae->SetName("g_ratio1");
   grae->SetTitle("Graph");

   ci = 1655;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_g_ratio13067 = new TH1F("Graph_g_ratio13067","Graph",100,0.0022,3.277);
   Graph_g_ratio13067->SetMinimum(0.45);
   Graph_g_ratio13067->SetMaximum(1.55);
   Graph_g_ratio13067->SetDirectory(0);
   Graph_g_ratio13067->SetStats(0);
   Graph_g_ratio13067->SetLineStyle(0);
   Graph_g_ratio13067->SetMarkerStyle(20);
   Graph_g_ratio13067->GetXaxis()->SetTitle("#lower[0.1]{#phi}#lower[-0.1]{#scale[0.8]{*}}");
   Graph_g_ratio13067->GetXaxis()->SetLabelFont(42);
   Graph_g_ratio13067->GetXaxis()->SetLabelOffset(0.008400001);
   Graph_g_ratio13067->GetXaxis()->SetLabelSize(0.144);
   Graph_g_ratio13067->GetXaxis()->SetTitleSize(0.2);
   Graph_g_ratio13067->GetXaxis()->SetTitleOffset(0.88);
   Graph_g_ratio13067->GetXaxis()->SetTitleFont(42);
   Graph_g_ratio13067->GetYaxis()->SetTitle("Pred./Data");
   Graph_g_ratio13067->GetYaxis()->SetLabelFont(42);
   Graph_g_ratio13067->GetYaxis()->SetLabelOffset(0.007);
   Graph_g_ratio13067->GetYaxis()->SetLabelSize(0.12);
   Graph_g_ratio13067->GetYaxis()->SetTitleSize(0.15);
   Graph_g_ratio13067->GetYaxis()->SetTitleOffset(0.4);
   Graph_g_ratio13067->GetYaxis()->SetTitleFont(42);
   Graph_g_ratio13067->GetZaxis()->SetLabelFont(42);
   Graph_g_ratio13067->GetZaxis()->SetLabelOffset(0.007);
   Graph_g_ratio13067->GetZaxis()->SetLabelSize(0.05);
   Graph_g_ratio13067->GetZaxis()->SetTitleSize(0.06);
   Graph_g_ratio13067->GetZaxis()->SetTitleOffset(1);
   Graph_g_ratio13067->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g_ratio13067);
   
   grae->Draw("a5");
   
   Double_t g_ratio2_fx3068[9] = {
   0.004,
   0.016,
   0.0345,
   0.0585,
   0.093,
   0.1515,
   0.29,
   0.772,
   2.215};
   Double_t g_ratio2_fy3068[9] = {
   0.7935141,
   0.9254541,
   0.9102079,
   0.8807344,
   0.8375446,
   0.8875352,
   0.8508637,
   0.9226698,
   0.7381559};
   Double_t g_ratio2_felx3068[9] = {
   0.0018,
   0.008,
   0.0105,
   0.0135,
   0.021,
   0.0375,
   0.101,
   0.381,
   1.062};
   Double_t g_ratio2_fely3068[9] = {
   0.03947948,
   0.04589373,
   0.0445743,
   0.04373013,
   0.04218377,
   0.0454016,
   0.04457819,
   0.05247723,
   0.05341032};
   Double_t g_ratio2_fehx3068[9] = {
   0.004,
   0.008,
   0.0105,
   0.0135,
   0.021,
   0.0375,
   0.101,
   0.381,
   1.062};
   Double_t g_ratio2_fehy3068[9] = {
   0.03736437,
   0.04354464,
   0.04227092,
   0.04154045,
   0.04000147,
   0.04282647,
   0.04192975,
   0.04991739,
   0.05152791};
   grae = new TGraphAsymmErrors(9,g_ratio2_fx3068,g_ratio2_fy3068,g_ratio2_felx3068,g_ratio2_fehx3068,g_ratio2_fely3068,g_ratio2_fehy3068);
   grae->SetName("g_ratio2");
   grae->SetTitle("Graph");

   ci = 1656;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_g_ratio23068 = new TH1F("Graph_g_ratio23068","Graph",100,0.00198,3.60448);
   Graph_g_ratio23068->SetMinimum(0.6559614);
   Graph_g_ratio23068->SetMaximum(1.001371);
   Graph_g_ratio23068->SetDirectory(0);
   Graph_g_ratio23068->SetStats(0);
   Graph_g_ratio23068->SetLineStyle(0);
   Graph_g_ratio23068->SetMarkerStyle(20);
   Graph_g_ratio23068->GetXaxis()->SetLabelFont(42);
   Graph_g_ratio23068->GetXaxis()->SetLabelOffset(0.007);
   Graph_g_ratio23068->GetXaxis()->SetLabelSize(0.05);
   Graph_g_ratio23068->GetXaxis()->SetTitleSize(0.06);
   Graph_g_ratio23068->GetXaxis()->SetTitleOffset(0.9);
   Graph_g_ratio23068->GetXaxis()->SetTitleFont(42);
   Graph_g_ratio23068->GetYaxis()->SetLabelFont(42);
   Graph_g_ratio23068->GetYaxis()->SetLabelOffset(0.007);
   Graph_g_ratio23068->GetYaxis()->SetLabelSize(0.05);
   Graph_g_ratio23068->GetYaxis()->SetTitleSize(0.06);
   Graph_g_ratio23068->GetYaxis()->SetTitleOffset(1.25);
   Graph_g_ratio23068->GetYaxis()->SetTitleFont(42);
   Graph_g_ratio23068->GetZaxis()->SetLabelFont(42);
   Graph_g_ratio23068->GetZaxis()->SetLabelOffset(0.007);
   Graph_g_ratio23068->GetZaxis()->SetLabelSize(0.05);
   Graph_g_ratio23068->GetZaxis()->SetTitleSize(0.06);
   Graph_g_ratio23068->GetZaxis()->SetTitleOffset(1);
   Graph_g_ratio23068->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g_ratio23068);
   
   grae->Draw("5");
   
   Double_t g_ratio_refAtOne_fx3069[9] = {
   0.004,
   0.016,
   0.0345,
   0.0585,
   0.093,
   0.1515,
   0.29,
   0.772,
   2.215};
   Double_t g_ratio_refAtOne_fy3069[9] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t g_ratio_refAtOne_felx3069[9] = {
   0.0018,
   0.008,
   0.0105,
   0.0135,
   0.021,
   0.0375,
   0.101,
   0.381,
   1.062};
   Double_t g_ratio_refAtOne_fely3069[9] = {
   0.1362959,
   0.09305926,
   0.08713926,
   0.08077612,
   0.0738294,
   0.06879674,
   0.06849617,
   0.07566648,
   0.07951604};
   Double_t g_ratio_refAtOne_fehx3069[9] = {
   0.004,
   0.008,
   0.0105,
   0.0135,
   0.021,
   0.0375,
   0.101,
   0.381,
   1.062};
   Double_t g_ratio_refAtOne_fehy3069[9] = {
   0.1362959,
   0.09305926,
   0.08713926,
   0.08077612,
   0.0738294,
   0.06879674,
   0.06849617,
   0.07566648,
   0.07951604};
   grae = new TGraphAsymmErrors(9,g_ratio_refAtOne_fx3069,g_ratio_refAtOne_fy3069,g_ratio_refAtOne_felx3069,g_ratio_refAtOne_fehx3069,g_ratio_refAtOne_fely3069,g_ratio_refAtOne_fehy3069);
   grae->SetName("g_ratio_refAtOne");
   grae->SetTitle("Graph");

   ci = 1657;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_g_ratio_refAtOne3069 = new TH1F("Graph_g_ratio_refAtOne3069","Graph",100,0.00198,3.60448);
   Graph_g_ratio_refAtOne3069->SetMinimum(0.836445);
   Graph_g_ratio_refAtOne3069->SetMaximum(1.163555);
   Graph_g_ratio_refAtOne3069->SetDirectory(0);
   Graph_g_ratio_refAtOne3069->SetStats(0);
   Graph_g_ratio_refAtOne3069->SetLineStyle(0);
   Graph_g_ratio_refAtOne3069->SetMarkerStyle(20);
   Graph_g_ratio_refAtOne3069->GetXaxis()->SetLabelFont(42);
   Graph_g_ratio_refAtOne3069->GetXaxis()->SetLabelOffset(0.007);
   Graph_g_ratio_refAtOne3069->GetXaxis()->SetLabelSize(0.05);
   Graph_g_ratio_refAtOne3069->GetXaxis()->SetTitleSize(0.06);
   Graph_g_ratio_refAtOne3069->GetXaxis()->SetTitleOffset(0.9);
   Graph_g_ratio_refAtOne3069->GetXaxis()->SetTitleFont(42);
   Graph_g_ratio_refAtOne3069->GetYaxis()->SetLabelFont(42);
   Graph_g_ratio_refAtOne3069->GetYaxis()->SetLabelOffset(0.007);
   Graph_g_ratio_refAtOne3069->GetYaxis()->SetLabelSize(0.05);
   Graph_g_ratio_refAtOne3069->GetYaxis()->SetTitleSize(0.06);
   Graph_g_ratio_refAtOne3069->GetYaxis()->SetTitleOffset(1.25);
   Graph_g_ratio_refAtOne3069->GetYaxis()->SetTitleFont(42);
   Graph_g_ratio_refAtOne3069->GetZaxis()->SetLabelFont(42);
   Graph_g_ratio_refAtOne3069->GetZaxis()->SetLabelOffset(0.007);
   Graph_g_ratio_refAtOne3069->GetZaxis()->SetLabelSize(0.05);
   Graph_g_ratio_refAtOne3069->GetZaxis()->SetTitleSize(0.06);
   Graph_g_ratio_refAtOne3069->GetZaxis()->SetTitleOffset(1);
   Graph_g_ratio_refAtOne3069->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g_ratio_refAtOne3069);
   
   grae->Draw("ep");
   
   TF1 *f_line8 = new TF1("f_line","1",-10000,10000, TF1::EAddToList::kDefault);
   f_line8->SetFillColor(19);
   f_line8->SetFillStyle(0);
   f_line8->SetMarkerStyle(20);

   ci = TColor::GetColor("#ff0000");
   f_line8->SetLineColor(ci);
   f_line8->SetLineWidth(1);
   f_line8->GetXaxis()->SetLabelFont(42);
   f_line8->GetXaxis()->SetLabelOffset(0.007);
   f_line8->GetXaxis()->SetLabelSize(0.05);
   f_line8->GetXaxis()->SetTitleSize(0.06);
   f_line8->GetXaxis()->SetTitleOffset(0.9);
   f_line8->GetXaxis()->SetTitleFont(42);
   f_line8->GetYaxis()->SetLabelFont(42);
   f_line8->GetYaxis()->SetLabelOffset(0.007);
   f_line8->GetYaxis()->SetLabelSize(0.05);
   f_line8->GetYaxis()->SetTitleSize(0.06);
   f_line8->GetYaxis()->SetTitleOffset(1.25);
   f_line8->GetYaxis()->SetTitleFont(42);
   f_line8->Draw("SAME");
   
   Double_t g_ratio_refAtOne_fx3070[9] = {
   0.004,
   0.016,
   0.0345,
   0.0585,
   0.093,
   0.1515,
   0.29,
   0.772,
   2.215};
   Double_t g_ratio_refAtOne_fy3070[9] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t g_ratio_refAtOne_felx3070[9] = {
   0.0018,
   0.008,
   0.0105,
   0.0135,
   0.021,
   0.0375,
   0.101,
   0.381,
   1.062};
   Double_t g_ratio_refAtOne_fely3070[9] = {
   0.1362959,
   0.09305926,
   0.08713926,
   0.08077612,
   0.0738294,
   0.06879674,
   0.06849617,
   0.07566648,
   0.07951604};
   Double_t g_ratio_refAtOne_fehx3070[9] = {
   0.004,
   0.008,
   0.0105,
   0.0135,
   0.021,
   0.0375,
   0.101,
   0.381,
   1.062};
   Double_t g_ratio_refAtOne_fehy3070[9] = {
   0.1362959,
   0.09305926,
   0.08713926,
   0.08077612,
   0.0738294,
   0.06879674,
   0.06849617,
   0.07566648,
   0.07951604};
   grae = new TGraphAsymmErrors(9,g_ratio_refAtOne_fx3070,g_ratio_refAtOne_fy3070,g_ratio_refAtOne_felx3070,g_ratio_refAtOne_fehx3070,g_ratio_refAtOne_fely3070,g_ratio_refAtOne_fehy3070);
   grae->SetName("g_ratio_refAtOne");
   grae->SetTitle("Graph");

   ci = 1657;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph_g_ratio_refAtOne30693070 = new TH1F("Graph_Graph_g_ratio_refAtOne30693070","Graph",100,0.00198,3.60448);
   Graph_Graph_g_ratio_refAtOne30693070->SetMinimum(0.836445);
   Graph_Graph_g_ratio_refAtOne30693070->SetMaximum(1.163555);
   Graph_Graph_g_ratio_refAtOne30693070->SetDirectory(0);
   Graph_Graph_g_ratio_refAtOne30693070->SetStats(0);
   Graph_Graph_g_ratio_refAtOne30693070->SetLineStyle(0);
   Graph_Graph_g_ratio_refAtOne30693070->SetMarkerStyle(20);
   Graph_Graph_g_ratio_refAtOne30693070->GetXaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio_refAtOne30693070->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio_refAtOne30693070->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio_refAtOne30693070->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio_refAtOne30693070->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_g_ratio_refAtOne30693070->GetXaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio_refAtOne30693070->GetYaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio_refAtOne30693070->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio_refAtOne30693070->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio_refAtOne30693070->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio_refAtOne30693070->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_g_ratio_refAtOne30693070->GetYaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio_refAtOne30693070->GetZaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio_refAtOne30693070->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio_refAtOne30693070->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio_refAtOne30693070->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio_refAtOne30693070->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_g_ratio_refAtOne30693070->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_g_ratio_refAtOne30693070);
   
   grae->Draw("ep");
   
   Double_t g_ratio1_fx3071[9] = {
   0.004,
   0.016,
   0.0345,
   0.0585,
   0.093,
   0.1515,
   0.29,
   0.772,
   2.215};
   Double_t g_ratio1_fy3071[9] = {
   0.873794,
   1.012239,
   1.003704,
   0.9561264,
   0.909187,
   0.91847,
   0.9100244,
   0.9374659,
   0.7725668};
   Double_t g_ratio1_felx3071[9] = {
   0.0018,
   0.008,
   0.0105,
   0.0135,
   0.021,
   0.0375,
   0.101,
   0.381,
   1.062};
   Double_t g_ratio1_fely3071[9] = {
   0.03040402,
   0.03446988,
   0.03432163,
   0.03269065,
   0.03137315,
   0.03139674,
   0.03140517,
   0.03274967,
   0.02942361};
   Double_t g_ratio1_fehx3071[9] = {
   0.004,
   0.008,
   0.0105,
   0.0135,
   0.021,
   0.0375,
   0.101,
   0.381,
   1.062};
   Double_t g_ratio1_fehy3071[9] = {
   0.02416735,
   0.02728366,
   0.02717253,
   0.02579722,
   0.02473794,
   0.02455272,
   0.0245688,
   0.02625812,
   0.02481018};
   grae = new TGraphAsymmErrors(9,g_ratio1_fx3071,g_ratio1_fy3071,g_ratio1_felx3071,g_ratio1_fehx3071,g_ratio1_fely3071,g_ratio1_fehy3071);
   grae->SetName("g_ratio1");
   grae->SetTitle("Graph");

   ci = 1655;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph_g_ratio130673071 = new TH1F("Graph_Graph_g_ratio130673071","Graph",100,0.0022,3.277);
   Graph_Graph_g_ratio130673071->SetMinimum(0.45);
   Graph_Graph_g_ratio130673071->SetMaximum(1.55);
   Graph_Graph_g_ratio130673071->SetDirectory(0);
   Graph_Graph_g_ratio130673071->SetStats(0);
   Graph_Graph_g_ratio130673071->SetLineStyle(0);
   Graph_Graph_g_ratio130673071->SetMarkerStyle(20);
   Graph_Graph_g_ratio130673071->GetXaxis()->SetTitle("#lower[0.1]{#phi}#lower[-0.1]{#scale[0.8]{*}}");
   Graph_Graph_g_ratio130673071->GetXaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio130673071->GetXaxis()->SetLabelOffset(0.008400001);
   Graph_Graph_g_ratio130673071->GetXaxis()->SetLabelSize(0.144);
   Graph_Graph_g_ratio130673071->GetXaxis()->SetTitleSize(0.2);
   Graph_Graph_g_ratio130673071->GetXaxis()->SetTitleOffset(0.88);
   Graph_Graph_g_ratio130673071->GetXaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio130673071->GetYaxis()->SetTitle("Pred./Data");
   Graph_Graph_g_ratio130673071->GetYaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio130673071->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio130673071->GetYaxis()->SetLabelSize(0.12);
   Graph_Graph_g_ratio130673071->GetYaxis()->SetTitleSize(0.15);
   Graph_Graph_g_ratio130673071->GetYaxis()->SetTitleOffset(0.4);
   Graph_Graph_g_ratio130673071->GetYaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio130673071->GetZaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio130673071->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio130673071->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio130673071->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio130673071->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_g_ratio130673071->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_g_ratio130673071);
   
   grae->Draw("5");
   
   Double_t g_ratio2_fx3072[9] = {
   0.004,
   0.016,
   0.0345,
   0.0585,
   0.093,
   0.1515,
   0.29,
   0.772,
   2.215};
   Double_t g_ratio2_fy3072[9] = {
   0.7935141,
   0.9254541,
   0.9102079,
   0.8807344,
   0.8375446,
   0.8875352,
   0.8508637,
   0.9226698,
   0.7381559};
   Double_t g_ratio2_felx3072[9] = {
   0.0018,
   0.008,
   0.0105,
   0.0135,
   0.021,
   0.0375,
   0.101,
   0.381,
   1.062};
   Double_t g_ratio2_fely3072[9] = {
   0.03947948,
   0.04589373,
   0.0445743,
   0.04373013,
   0.04218377,
   0.0454016,
   0.04457819,
   0.05247723,
   0.05341032};
   Double_t g_ratio2_fehx3072[9] = {
   0.004,
   0.008,
   0.0105,
   0.0135,
   0.021,
   0.0375,
   0.101,
   0.381,
   1.062};
   Double_t g_ratio2_fehy3072[9] = {
   0.03736437,
   0.04354464,
   0.04227092,
   0.04154045,
   0.04000147,
   0.04282647,
   0.04192975,
   0.04991739,
   0.05152791};
   grae = new TGraphAsymmErrors(9,g_ratio2_fx3072,g_ratio2_fy3072,g_ratio2_felx3072,g_ratio2_fehx3072,g_ratio2_fely3072,g_ratio2_fehy3072);
   grae->SetName("g_ratio2");
   grae->SetTitle("Graph");

   ci = 1656;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph_g_ratio230683072 = new TH1F("Graph_Graph_g_ratio230683072","Graph",100,0.00198,3.60448);
   Graph_Graph_g_ratio230683072->SetMinimum(0.6559614);
   Graph_Graph_g_ratio230683072->SetMaximum(1.001371);
   Graph_Graph_g_ratio230683072->SetDirectory(0);
   Graph_Graph_g_ratio230683072->SetStats(0);
   Graph_Graph_g_ratio230683072->SetLineStyle(0);
   Graph_Graph_g_ratio230683072->SetMarkerStyle(20);
   Graph_Graph_g_ratio230683072->GetXaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio230683072->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio230683072->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio230683072->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio230683072->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_g_ratio230683072->GetXaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio230683072->GetYaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio230683072->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio230683072->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio230683072->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio230683072->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_g_ratio230683072->GetYaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio230683072->GetZaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio230683072->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio230683072->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio230683072->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio230683072->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_g_ratio230683072->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_g_ratio230683072);
   
   grae->Draw("5");
   
   TH1F *g_ratio1_copy__16 = new TH1F("g_ratio1_copy__16","Graph",100,0.0022,3.277);
   g_ratio1_copy__16->SetMinimum(0.45);
   g_ratio1_copy__16->SetMaximum(1.55);
   g_ratio1_copy__16->SetDirectory(0);
   g_ratio1_copy__16->SetStats(0);
   g_ratio1_copy__16->SetLineStyle(0);
   g_ratio1_copy__16->SetMarkerStyle(20);
   g_ratio1_copy__16->GetXaxis()->SetTitle("#lower[0.1]{#phi}#lower[-0.1]{#scale[0.8]{*}}");
   g_ratio1_copy__16->GetXaxis()->SetLabelFont(42);
   g_ratio1_copy__16->GetXaxis()->SetLabelOffset(0.008400001);
   g_ratio1_copy__16->GetXaxis()->SetLabelSize(0.144);
   g_ratio1_copy__16->GetXaxis()->SetTitleSize(0.2);
   g_ratio1_copy__16->GetXaxis()->SetTitleOffset(0.88);
   g_ratio1_copy__16->GetXaxis()->SetTitleFont(42);
   g_ratio1_copy__16->GetYaxis()->SetTitle("Pred./Data");
   g_ratio1_copy__16->GetYaxis()->SetLabelFont(42);
   g_ratio1_copy__16->GetYaxis()->SetLabelOffset(0.007);
   g_ratio1_copy__16->GetYaxis()->SetLabelSize(0.12);
   g_ratio1_copy__16->GetYaxis()->SetTitleSize(0.15);
   g_ratio1_copy__16->GetYaxis()->SetTitleOffset(0.4);
   g_ratio1_copy__16->GetYaxis()->SetTitleFont(42);
   g_ratio1_copy__16->GetZaxis()->SetLabelFont(42);
   g_ratio1_copy__16->GetZaxis()->SetLabelOffset(0.007);
   g_ratio1_copy__16->GetZaxis()->SetLabelSize(0.05);
   g_ratio1_copy__16->GetZaxis()->SetTitleSize(0.06);
   g_ratio1_copy__16->GetZaxis()->SetTitleOffset(1);
   g_ratio1_copy__16->GetZaxis()->SetTitleFont(42);
   g_ratio1_copy__16->Draw("sameaxis");
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
      tex = new TLatex(0.18,0.44,"15 < m_{#mu#mu} < 60 GeV");
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
   Plots/results/plots/result_noacc_phistar1560_CT14_EPPS16->cd();
   Plots/results/plots/result_noacc_phistar1560_CT14_EPPS16->Modified();
   Plots/results/plots/result_noacc_phistar1560_CT14_EPPS16->cd();
   Plots/results/plots/result_noacc_phistar1560_CT14_EPPS16->SetSelected(Plots/results/plots/result_noacc_phistar1560_CT14_EPPS16);
}

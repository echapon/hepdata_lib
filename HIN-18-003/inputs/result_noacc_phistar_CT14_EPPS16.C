void result_noacc_phistar_CT14_EPPS16()
{
//=========Macro generated from canvas: Plots/results/plots/result_noacc_phistar_CT14_EPPS16/
//=========  (Tue Feb 23 17:21:46 2021) by ROOT version 6.16/00
   TCanvas *Plots/results/plots/result_noacc_phistar_CT14_EPPS16 = new TCanvas("Plots/results/plots/result_noacc_phistar_CT14_EPPS16", "",0,0,800,800);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   Plots/results/plots/result_noacc_phistar_CT14_EPPS16->Range(0,0,1,1);
   Plots/results/plots/result_noacc_phistar_CT14_EPPS16->SetFillColor(0);
   Plots/results/plots/result_noacc_phistar_CT14_EPPS16->SetBorderMode(0);
   Plots/results/plots/result_noacc_phistar_CT14_EPPS16->SetBorderSize(2);
   Plots/results/plots/result_noacc_phistar_CT14_EPPS16->SetTickx(1);
   Plots/results/plots/result_noacc_phistar_CT14_EPPS16->SetTicky(1);
   Plots/results/plots/result_noacc_phistar_CT14_EPPS16->SetLeftMargin(0.16);
   Plots/results/plots/result_noacc_phistar_CT14_EPPS16->SetRightMargin(0.02);
   Plots/results/plots/result_noacc_phistar_CT14_EPPS16->SetTopMargin(0.05);
   Plots/results/plots/result_noacc_phistar_CT14_EPPS16->SetBottomMargin(0.13);
   Plots/results/plots/result_noacc_phistar_CT14_EPPS16->SetFrameFillStyle(0);
   Plots/results/plots/result_noacc_phistar_CT14_EPPS16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: TopPad
   TPad *TopPad = new TPad("TopPad", "TopPad",0.01,0.01,0.99,0.99);
   TopPad->Draw();
   TopPad->cd();
   TopPad->Range(-3.300221,-2.926219,0.7163026,4.033933);
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
   
   Double_t gth_CT14_phistar_fx3028[17] = {
   0.004,
   0.012,
   0.02,
   0.029,
   0.0395,
   0.051,
   0.0645,
   0.0815,
   0.1025,
   0.1295,
   0.167,
   0.2235,
   0.3245,
   0.543,
   0.924,
   1.55,
   2.612};
   Double_t gth_CT14_phistar_fy3028[17] = {
   1070.383,
   1039.3,
   983.2535,
   896.8168,
   782.6597,
   673.0809,
   562.8541,
   455.3864,
   362.4261,
   273.2527,
   195.9309,
   125.4837,
   66.00008,
   23.40291,
   6.107827,
   1.510838,
   0.3771764};
   Double_t gth_CT14_phistar_felx3028[17] = {
   0.0018,
   0.004,
   0.004,
   0.005,
   0.0055,
   0.006,
   0.0075,
   0.0095,
   0.0115,
   0.0155,
   0.022,
   0.0345,
   0.0665,
   0.152,
   0.229,
   0.397,
   0.665};
   Double_t gth_CT14_phistar_fely3028[17] = {
   32.60436,
   31.66554,
   30.01244,
   27.27075,
   23.84942,
   20.56471,
   17.12906,
   13.79189,
   10.91915,
   8.242837,
   5.852972,
   3.742088,
   1.959841,
   0.6868948,
   0.1800967,
   0.04517149,
   0.01156363};
   Double_t gth_CT14_phistar_fehx3028[17] = {
   0.004,
   0.004,
   0.004,
   0.005,
   0.0055,
   0.006,
   0.0075,
   0.0095,
   0.0115,
   0.0155,
   0.022,
   0.0345,
   0.0665,
   0.152,
   0.229,
   0.397,
   0.665};
   Double_t gth_CT14_phistar_fehy3028[17] = {
   24.18238,
   23.45235,
   22.21151,
   20.12422,
   17.54582,
   15.08052,
   12.52663,
   10.03822,
   7.928183,
   5.975268,
   4.234979,
   2.697876,
   1.403483,
   0.4912961,
   0.1291822,
   0.03274831,
   0.008361534};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(17,gth_CT14_phistar_fx3028,gth_CT14_phistar_fy3028,gth_CT14_phistar_felx3028,gth_CT14_phistar_fehx3028,gth_CT14_phistar_fely3028,gth_CT14_phistar_fehy3028);
   grae->SetName("gth_CT14_phistar");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1643;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_gth_CT14_phistar3028 = new TH1F("Graph_gth_CT14_phistar3028","Graph",100,0.0022,3.277);
   Graph_gth_CT14_phistar3028->SetMinimum(0.2);
   Graph_gth_CT14_phistar3028->SetMaximum(3000);
   Graph_gth_CT14_phistar3028->SetDirectory(0);
   Graph_gth_CT14_phistar3028->SetStats(0);
   Graph_gth_CT14_phistar3028->SetLineStyle(0);
   Graph_gth_CT14_phistar3028->SetMarkerStyle(20);
   Graph_gth_CT14_phistar3028->GetXaxis()->SetTitle("#lower[0.1]{#phi}#lower[-0.1]{#scale[0.8]{*}}");
   Graph_gth_CT14_phistar3028->GetXaxis()->SetLabelFont(42);
   Graph_gth_CT14_phistar3028->GetXaxis()->SetLabelOffset(0.007);
   Graph_gth_CT14_phistar3028->GetXaxis()->SetLabelSize(0);
   Graph_gth_CT14_phistar3028->GetXaxis()->SetTitleSize(0);
   Graph_gth_CT14_phistar3028->GetXaxis()->SetTitleOffset(0.9);
   Graph_gth_CT14_phistar3028->GetXaxis()->SetTitleFont(42);
   Graph_gth_CT14_phistar3028->GetYaxis()->SetTitle("d#sigma/d#phi#lower[-0.1]{#scale[0.8]{*}} [nb]");
   Graph_gth_CT14_phistar3028->GetYaxis()->SetLabelFont(42);
   Graph_gth_CT14_phistar3028->GetYaxis()->SetLabelOffset(0.007);
   Graph_gth_CT14_phistar3028->GetYaxis()->SetLabelSize(0.05);
   Graph_gth_CT14_phistar3028->GetYaxis()->SetTitleSize(0.072);
   Graph_gth_CT14_phistar3028->GetYaxis()->SetTitleOffset(1.041667);
   Graph_gth_CT14_phistar3028->GetYaxis()->SetTitleFont(42);
   Graph_gth_CT14_phistar3028->GetZaxis()->SetLabelFont(42);
   Graph_gth_CT14_phistar3028->GetZaxis()->SetLabelOffset(0.007);
   Graph_gth_CT14_phistar3028->GetZaxis()->SetLabelSize(0.05);
   Graph_gth_CT14_phistar3028->GetZaxis()->SetTitleSize(0.06);
   Graph_gth_CT14_phistar3028->GetZaxis()->SetTitleOffset(1);
   Graph_gth_CT14_phistar3028->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gth_CT14_phistar3028);
   
   grae->Draw("a5");
   
   Double_t gth_EPPS16_phistar_fx3029[17] = {
   0.004,
   0.012,
   0.02,
   0.029,
   0.0395,
   0.051,
   0.0645,
   0.0815,
   0.1025,
   0.1295,
   0.167,
   0.2235,
   0.3245,
   0.543,
   0.924,
   1.55,
   2.612};
   Double_t gth_EPPS16_phistar_fy3029[17] = {
   1005.773,
   986.4125,
   932.7006,
   855.4516,
   759.6005,
   650.1891,
   543.0387,
   448.6487,
   352.2566,
   272.5403,
   195.2336,
   125.9909,
   66.51813,
   23.77596,
   6.233614,
   1.555149,
   0.3790181};
   Double_t gth_EPPS16_phistar_felx3029[17] = {
   0.0018,
   0.004,
   0.004,
   0.005,
   0.0055,
   0.006,
   0.0075,
   0.0095,
   0.0115,
   0.0155,
   0.022,
   0.0345,
   0.0665,
   0.152,
   0.229,
   0.397,
   0.665};
   Double_t gth_EPPS16_phistar_fely3029[17] = {
   32.30336,
   31.72988,
   30.19943,
   27.48244,
   24.38722,
   21.00855,
   17.49437,
   14.60941,
   11.43465,
   8.801219,
   6.285164,
   4.056447,
   2.139901,
   0.7665734,
   0.2019518,
   0.05101336,
   0.01278543};
   Double_t gth_EPPS16_phistar_fehx3029[17] = {
   0.004,
   0.004,
   0.004,
   0.005,
   0.0055,
   0.006,
   0.0075,
   0.0095,
   0.0115,
   0.0155,
   0.022,
   0.0345,
   0.0665,
   0.152,
   0.229,
   0.397,
   0.665};
   Double_t gth_EPPS16_phistar_fehy3029[17] = {
   29.20603,
   28.7305,
   27.34986,
   24.80255,
   21.99506,
   19.01715,
   15.82565,
   13.28046,
   10.38289,
   7.950668,
   5.659838,
   3.664075,
   1.944514,
   0.6982084,
   0.1846518,
   0.04643609,
   0.01172369};
   grae = new TGraphAsymmErrors(17,gth_EPPS16_phistar_fx3029,gth_EPPS16_phistar_fy3029,gth_EPPS16_phistar_felx3029,gth_EPPS16_phistar_fehx3029,gth_EPPS16_phistar_fely3029,gth_EPPS16_phistar_fehy3029);
   grae->SetName("gth_EPPS16_phistar");
   grae->SetTitle("Graph");

   ci = 1644;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_gth_EPPS16_phistar3029 = new TH1F("Graph_gth_EPPS16_phistar3029","Graph",100,0.00198,3.60448);
   Graph_gth_EPPS16_phistar3029->SetMinimum(0.3296094);
   Graph_gth_EPPS16_phistar3029->SetMaximum(1138.44);
   Graph_gth_EPPS16_phistar3029->SetDirectory(0);
   Graph_gth_EPPS16_phistar3029->SetStats(0);
   Graph_gth_EPPS16_phistar3029->SetLineStyle(0);
   Graph_gth_EPPS16_phistar3029->SetMarkerStyle(20);
   Graph_gth_EPPS16_phistar3029->GetXaxis()->SetLabelFont(42);
   Graph_gth_EPPS16_phistar3029->GetXaxis()->SetLabelOffset(0.007);
   Graph_gth_EPPS16_phistar3029->GetXaxis()->SetLabelSize(0.05);
   Graph_gth_EPPS16_phistar3029->GetXaxis()->SetTitleSize(0.06);
   Graph_gth_EPPS16_phistar3029->GetXaxis()->SetTitleOffset(0.9);
   Graph_gth_EPPS16_phistar3029->GetXaxis()->SetTitleFont(42);
   Graph_gth_EPPS16_phistar3029->GetYaxis()->SetLabelFont(42);
   Graph_gth_EPPS16_phistar3029->GetYaxis()->SetLabelOffset(0.007);
   Graph_gth_EPPS16_phistar3029->GetYaxis()->SetLabelSize(0.05);
   Graph_gth_EPPS16_phistar3029->GetYaxis()->SetTitleSize(0.06);
   Graph_gth_EPPS16_phistar3029->GetYaxis()->SetTitleOffset(1.25);
   Graph_gth_EPPS16_phistar3029->GetYaxis()->SetTitleFont(42);
   Graph_gth_EPPS16_phistar3029->GetZaxis()->SetLabelFont(42);
   Graph_gth_EPPS16_phistar3029->GetZaxis()->SetLabelOffset(0.007);
   Graph_gth_EPPS16_phistar3029->GetZaxis()->SetLabelSize(0.05);
   Graph_gth_EPPS16_phistar3029->GetZaxis()->SetTitleSize(0.06);
   Graph_gth_EPPS16_phistar3029->GetZaxis()->SetTitleOffset(1);
   Graph_gth_EPPS16_phistar3029->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gth_EPPS16_phistar3029);
   
   grae->Draw("5");
   
   Double_t gres_phistar_fx3030[17] = {
   0.004,
   0.012,
   0.02,
   0.029,
   0.0395,
   0.051,
   0.0645,
   0.0815,
   0.1025,
   0.1295,
   0.167,
   0.2235,
   0.3245,
   0.543,
   0.924,
   1.55,
   2.612};
   Double_t gres_phistar_fy3030[17] = {
   1132.451,
   1028.936,
   1007.322,
   853.5339,
   791.9903,
   689.3713,
   591.8908,
   451.1943,
   364.6366,
   275.9647,
   199.7112,
   120.0535,
   63.38983,
   21.40347,
   6.042245,
   1.579433,
   0.3468855};
   Double_t gres_phistar_felx3030[17] = {
   0.0018,
   0.004,
   0.004,
   0.005,
   0.0055,
   0.006,
   0.0075,
   0.0095,
   0.0115,
   0.0155,
   0.022,
   0.0345,
   0.0665,
   0.152,
   0.229,
   0.397,
   0.665};
   Double_t gres_phistar_fely3030[17] = {
   33.66435,
   31.99293,
   31.88884,
   26.09971,
   24.25734,
   21.27436,
   17.71064,
   13.74945,
   11.31519,
   8.458241,
   6.169498,
   3.747029,
   1.983336,
   0.7530878,
   0.3257262,
   0.120065,
   0.04418826};
   Double_t gres_phistar_fehx3030[17] = {
   0.004,
   0.004,
   0.004,
   0.005,
   0.0055,
   0.006,
   0.0075,
   0.0095,
   0.0115,
   0.0155,
   0.022,
   0.0345,
   0.0665,
   0.152,
   0.229,
   0.397,
   0.665};
   Double_t gres_phistar_fehy3030[17] = {
   33.66435,
   31.99293,
   31.88884,
   26.09971,
   24.25734,
   21.27436,
   17.71064,
   13.74945,
   11.31519,
   8.458241,
   6.169498,
   3.747029,
   1.983336,
   0.7530878,
   0.3257262,
   0.120065,
   0.04418826};
   grae = new TGraphAsymmErrors(17,gres_phistar_fx3030,gres_phistar_fy3030,gres_phistar_felx3030,gres_phistar_fehx3030,gres_phistar_fely3030,gres_phistar_fehy3030);
   grae->SetName("gres_phistar");
   grae->SetTitle("Graph");

   ci = 1645;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_gres_phistar3030 = new TH1F("Graph_gres_phistar3030","Graph",100,0.00198,3.60448);
   Graph_gres_phistar3030->SetMinimum(0.2724275);
   Graph_gres_phistar3030->SetMaximum(1282.697);
   Graph_gres_phistar3030->SetDirectory(0);
   Graph_gres_phistar3030->SetStats(0);
   Graph_gres_phistar3030->SetLineStyle(0);
   Graph_gres_phistar3030->SetMarkerStyle(20);
   Graph_gres_phistar3030->GetXaxis()->SetLabelFont(42);
   Graph_gres_phistar3030->GetXaxis()->SetLabelOffset(0.007);
   Graph_gres_phistar3030->GetXaxis()->SetLabelSize(0.05);
   Graph_gres_phistar3030->GetXaxis()->SetTitleSize(0.06);
   Graph_gres_phistar3030->GetXaxis()->SetTitleOffset(0.9);
   Graph_gres_phistar3030->GetXaxis()->SetTitleFont(42);
   Graph_gres_phistar3030->GetYaxis()->SetLabelFont(42);
   Graph_gres_phistar3030->GetYaxis()->SetLabelOffset(0.007);
   Graph_gres_phistar3030->GetYaxis()->SetLabelSize(0.05);
   Graph_gres_phistar3030->GetYaxis()->SetTitleSize(0.06);
   Graph_gres_phistar3030->GetYaxis()->SetTitleOffset(1.25);
   Graph_gres_phistar3030->GetYaxis()->SetTitleFont(42);
   Graph_gres_phistar3030->GetZaxis()->SetLabelFont(42);
   Graph_gres_phistar3030->GetZaxis()->SetLabelOffset(0.007);
   Graph_gres_phistar3030->GetZaxis()->SetLabelSize(0.05);
   Graph_gres_phistar3030->GetZaxis()->SetTitleSize(0.06);
   Graph_gres_phistar3030->GetZaxis()->SetTitleOffset(1);
   Graph_gres_phistar3030->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gres_phistar3030);
   
   grae->Draw("ep");
   
   TLegend *leg = new TLegend(0.164,0.54,0.68,0.78,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("gres_phistar","Data","lpf");

   ci = 1645;
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
   entry=leg->AddEntry("gth_CT14_phistar","CT14","F");

   ci = 1643;
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
   entry=leg->AddEntry("gth_EPPS16_phistar","CT14+EPPS16","F");

   ci = 1644;
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
   
   TH1F *gth_CT14_phistar_copy__7 = new TH1F("gth_CT14_phistar_copy__7","Graph",100,0.0022,3.277);
   gth_CT14_phistar_copy__7->SetMinimum(0.2);
   gth_CT14_phistar_copy__7->SetMaximum(3000);
   gth_CT14_phistar_copy__7->SetDirectory(0);
   gth_CT14_phistar_copy__7->SetStats(0);
   gth_CT14_phistar_copy__7->SetLineStyle(0);
   gth_CT14_phistar_copy__7->SetMarkerStyle(20);
   gth_CT14_phistar_copy__7->GetXaxis()->SetTitle("#lower[0.1]{#phi}#lower[-0.1]{#scale[0.8]{*}}");
   gth_CT14_phistar_copy__7->GetXaxis()->SetLabelFont(42);
   gth_CT14_phistar_copy__7->GetXaxis()->SetLabelOffset(0.007);
   gth_CT14_phistar_copy__7->GetXaxis()->SetLabelSize(0);
   gth_CT14_phistar_copy__7->GetXaxis()->SetTitleSize(0);
   gth_CT14_phistar_copy__7->GetXaxis()->SetTitleOffset(0.9);
   gth_CT14_phistar_copy__7->GetXaxis()->SetTitleFont(42);
   gth_CT14_phistar_copy__7->GetYaxis()->SetTitle("d#sigma/d#phi#lower[-0.1]{#scale[0.8]{*}} [nb]");
   gth_CT14_phistar_copy__7->GetYaxis()->SetLabelFont(42);
   gth_CT14_phistar_copy__7->GetYaxis()->SetLabelOffset(0.007);
   gth_CT14_phistar_copy__7->GetYaxis()->SetLabelSize(0.05);
   gth_CT14_phistar_copy__7->GetYaxis()->SetTitleSize(0.072);
   gth_CT14_phistar_copy__7->GetYaxis()->SetTitleOffset(1.041667);
   gth_CT14_phistar_copy__7->GetYaxis()->SetTitleFont(42);
   gth_CT14_phistar_copy__7->GetZaxis()->SetLabelFont(42);
   gth_CT14_phistar_copy__7->GetZaxis()->SetLabelOffset(0.007);
   gth_CT14_phistar_copy__7->GetZaxis()->SetLabelSize(0.05);
   gth_CT14_phistar_copy__7->GetZaxis()->SetTitleSize(0.06);
   gth_CT14_phistar_copy__7->GetZaxis()->SetTitleOffset(1);
   gth_CT14_phistar_copy__7->GetZaxis()->SetTitleFont(42);
   gth_CT14_phistar_copy__7->Draw("sameaxis");
  
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
   
   Double_t g_ratio1_fx3031[17] = {
   0.004,
   0.012,
   0.02,
   0.029,
   0.0395,
   0.051,
   0.0645,
   0.0815,
   0.1025,
   0.1295,
   0.167,
   0.2235,
   0.3245,
   0.543,
   0.924,
   1.55,
   2.612};
   Double_t g_ratio1_fy3031[17] = {
   0.9451913,
   1.010072,
   0.9761066,
   1.05071,
   0.9882188,
   0.9763692,
   0.9509424,
   1.009291,
   0.9939379,
   0.9901728,
   0.981071,
   1.045232,
   1.041178,
   1.093417,
   1.010854,
   0.9565693,
   1.087322};
   Double_t g_ratio1_felx3031[17] = {
   0.0018,
   0.004,
   0.004,
   0.005,
   0.0055,
   0.006,
   0.0075,
   0.0095,
   0.0115,
   0.0155,
   0.022,
   0.0345,
   0.0665,
   0.152,
   0.229,
   0.397,
   0.665};
   Double_t g_ratio1_fely3031[17] = {
   0.02879096,
   0.03077504,
   0.0297943,
   0.0319504,
   0.03011327,
   0.02983111,
   0.02893956,
   0.03056751,
   0.0299453,
   0.02986917,
   0.02930718,
   0.03117018,
   0.03091728,
   0.03209268,
   0.02980625,
   0.02859981,
   0.03333557};
   Double_t g_ratio1_fehx3031[17] = {
   0.004,
   0.004,
   0.004,
   0.005,
   0.0055,
   0.006,
   0.0075,
   0.0095,
   0.0115,
   0.0155,
   0.022,
   0.0345,
   0.0665,
   0.152,
   0.229,
   0.397,
   0.665};
   Double_t g_ratio1_fehy3031[17] = {
   0.02135401,
   0.02279283,
   0.02205006,
   0.02357753,
   0.02215409,
   0.02187576,
   0.02116374,
   0.02224811,
   0.0217427,
   0.02165229,
   0.02120552,
   0.02247229,
   0.0221405,
   0.02295404,
   0.02137984,
   0.02073421,
   0.02410459};
   grae = new TGraphAsymmErrors(17,g_ratio1_fx3031,g_ratio1_fy3031,g_ratio1_felx3031,g_ratio1_fehx3031,g_ratio1_fely3031,g_ratio1_fehy3031);
   grae->SetName("g_ratio1");
   grae->SetTitle("Graph");

   ci = 1643;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_g_ratio13031 = new TH1F("Graph_g_ratio13031","Graph",100,0.0022,3.277);
   Graph_g_ratio13031->SetMinimum(0.45);
   Graph_g_ratio13031->SetMaximum(1.55);
   Graph_g_ratio13031->SetDirectory(0);
   Graph_g_ratio13031->SetStats(0);
   Graph_g_ratio13031->SetLineStyle(0);
   Graph_g_ratio13031->SetMarkerStyle(20);
   Graph_g_ratio13031->GetXaxis()->SetTitle("#lower[0.1]{#phi}#lower[-0.1]{#scale[0.8]{*}}");
   Graph_g_ratio13031->GetXaxis()->SetLabelFont(42);
   Graph_g_ratio13031->GetXaxis()->SetLabelOffset(0.008400001);
   Graph_g_ratio13031->GetXaxis()->SetLabelSize(0.144);
   Graph_g_ratio13031->GetXaxis()->SetTitleSize(0.2);
   Graph_g_ratio13031->GetXaxis()->SetTitleOffset(0.88);
   Graph_g_ratio13031->GetXaxis()->SetTitleFont(42);
   Graph_g_ratio13031->GetYaxis()->SetTitle("Pred./Data");
   Graph_g_ratio13031->GetYaxis()->SetLabelFont(42);
   Graph_g_ratio13031->GetYaxis()->SetLabelOffset(0.007);
   Graph_g_ratio13031->GetYaxis()->SetLabelSize(0.12);
   Graph_g_ratio13031->GetYaxis()->SetTitleSize(0.15);
   Graph_g_ratio13031->GetYaxis()->SetTitleOffset(0.4);
   Graph_g_ratio13031->GetYaxis()->SetTitleFont(42);
   Graph_g_ratio13031->GetZaxis()->SetLabelFont(42);
   Graph_g_ratio13031->GetZaxis()->SetLabelOffset(0.007);
   Graph_g_ratio13031->GetZaxis()->SetLabelSize(0.05);
   Graph_g_ratio13031->GetZaxis()->SetTitleSize(0.06);
   Graph_g_ratio13031->GetZaxis()->SetTitleOffset(1);
   Graph_g_ratio13031->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g_ratio13031);
   
   grae->Draw("a5");
   
   Double_t g_ratio2_fx3032[17] = {
   0.004,
   0.012,
   0.02,
   0.029,
   0.0395,
   0.051,
   0.0645,
   0.0815,
   0.1025,
   0.1295,
   0.167,
   0.2235,
   0.3245,
   0.543,
   0.924,
   1.55,
   2.612};
   Double_t g_ratio2_fy3032[17] = {
   0.8881377,
   0.9586725,
   0.9259212,
   1.002247,
   0.9591034,
   0.9431624,
   0.9174643,
   0.9943581,
   0.9660485,
   0.9875913,
   0.9775796,
   1.049457,
   1.04935,
   1.110846,
   1.031672,
   0.9846249,
   1.092632};
   Double_t g_ratio2_felx3032[17] = {
   0.0018,
   0.004,
   0.004,
   0.005,
   0.0055,
   0.006,
   0.0075,
   0.0095,
   0.0115,
   0.0155,
   0.022,
   0.0345,
   0.0665,
   0.152,
   0.229,
   0.397,
   0.665};
   Double_t g_ratio2_fely3032[17] = {
   0.02852517,
   0.03083757,
   0.02997993,
   0.03219841,
   0.03079232,
   0.03047494,
   0.02955675,
   0.03237941,
   0.03135903,
   0.03189256,
   0.03147126,
   0.03378867,
   0.0337578,
   0.03581538,
   0.0334233,
   0.03229852,
   0.03685777};
   Double_t g_ratio2_fehx3032[17] = {
   0.004,
   0.004,
   0.004,
   0.005,
   0.0055,
   0.006,
   0.0075,
   0.0095,
   0.0115,
   0.0155,
   0.022,
   0.0345,
   0.0665,
   0.152,
   0.229,
   0.397,
   0.665};
   Double_t g_ratio2_fehy3032[17] = {
   0.0257901,
   0.02792254,
   0.02715106,
   0.02905866,
   0.02777189,
   0.02758622,
   0.02673746,
   0.02943402,
   0.02847462,
   0.02881046,
   0.02834011,
   0.03052036,
   0.03067548,
   0.03262127,
   0.03056014,
   0.02940047,
   0.03379701};
   grae = new TGraphAsymmErrors(17,g_ratio2_fx3032,g_ratio2_fy3032,g_ratio2_felx3032,g_ratio2_fehx3032,g_ratio2_fely3032,g_ratio2_fehy3032);
   grae->SetName("g_ratio2");
   grae->SetTitle("Graph");

   ci = 1644;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_g_ratio23032 = new TH1F("Graph_g_ratio23032","Graph",100,0.00198,3.60448);
   Graph_g_ratio23032->SetMinimum(0.8312271);
   Graph_g_ratio23032->SetMaximum(1.171853);
   Graph_g_ratio23032->SetDirectory(0);
   Graph_g_ratio23032->SetStats(0);
   Graph_g_ratio23032->SetLineStyle(0);
   Graph_g_ratio23032->SetMarkerStyle(20);
   Graph_g_ratio23032->GetXaxis()->SetLabelFont(42);
   Graph_g_ratio23032->GetXaxis()->SetLabelOffset(0.007);
   Graph_g_ratio23032->GetXaxis()->SetLabelSize(0.05);
   Graph_g_ratio23032->GetXaxis()->SetTitleSize(0.06);
   Graph_g_ratio23032->GetXaxis()->SetTitleOffset(0.9);
   Graph_g_ratio23032->GetXaxis()->SetTitleFont(42);
   Graph_g_ratio23032->GetYaxis()->SetLabelFont(42);
   Graph_g_ratio23032->GetYaxis()->SetLabelOffset(0.007);
   Graph_g_ratio23032->GetYaxis()->SetLabelSize(0.05);
   Graph_g_ratio23032->GetYaxis()->SetTitleSize(0.06);
   Graph_g_ratio23032->GetYaxis()->SetTitleOffset(1.25);
   Graph_g_ratio23032->GetYaxis()->SetTitleFont(42);
   Graph_g_ratio23032->GetZaxis()->SetLabelFont(42);
   Graph_g_ratio23032->GetZaxis()->SetLabelOffset(0.007);
   Graph_g_ratio23032->GetZaxis()->SetLabelSize(0.05);
   Graph_g_ratio23032->GetZaxis()->SetTitleSize(0.06);
   Graph_g_ratio23032->GetZaxis()->SetTitleOffset(1);
   Graph_g_ratio23032->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g_ratio23032);
   
   grae->Draw("5");
   
   Double_t g_ratio_refAtOne_fx3033[17] = {
   0.004,
   0.012,
   0.02,
   0.029,
   0.0395,
   0.051,
   0.0645,
   0.0815,
   0.1025,
   0.1295,
   0.167,
   0.2235,
   0.3245,
   0.543,
   0.924,
   1.55,
   2.612};
   Double_t g_ratio_refAtOne_fy3033[17] = {
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
   Double_t g_ratio_refAtOne_felx3033[17] = {
   0.0018,
   0.004,
   0.004,
   0.005,
   0.0055,
   0.006,
   0.0075,
   0.0095,
   0.0115,
   0.0155,
   0.022,
   0.0345,
   0.0665,
   0.152,
   0.229,
   0.397,
   0.665};
   Double_t g_ratio_refAtOne_fely3033[17] = {
   0.02972698,
   0.03109322,
   0.03165706,
   0.03057841,
   0.03062833,
   0.03086052,
   0.02992214,
   0.03047345,
   0.03103143,
   0.03064972,
   0.0308921,
   0.03121134,
   0.03128792,
   0.03518531,
   0.05390815,
   0.07601778,
   0.1273857};
   Double_t g_ratio_refAtOne_fehx3033[17] = {
   0.004,
   0.004,
   0.004,
   0.005,
   0.0055,
   0.006,
   0.0075,
   0.0095,
   0.0115,
   0.0155,
   0.022,
   0.0345,
   0.0665,
   0.152,
   0.229,
   0.397,
   0.665};
   Double_t g_ratio_refAtOne_fehy3033[17] = {
   0.02972698,
   0.03109322,
   0.03165706,
   0.03057841,
   0.03062833,
   0.03086052,
   0.02992214,
   0.03047345,
   0.03103143,
   0.03064972,
   0.0308921,
   0.03121134,
   0.03128792,
   0.03518531,
   0.05390815,
   0.07601778,
   0.1273857};
   grae = new TGraphAsymmErrors(17,g_ratio_refAtOne_fx3033,g_ratio_refAtOne_fy3033,g_ratio_refAtOne_felx3033,g_ratio_refAtOne_fehx3033,g_ratio_refAtOne_fely3033,g_ratio_refAtOne_fehy3033);
   grae->SetName("g_ratio_refAtOne");
   grae->SetTitle("Graph");

   ci = 1645;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_g_ratio_refAtOne3033 = new TH1F("Graph_g_ratio_refAtOne3033","Graph",100,0.00198,3.60448);
   Graph_g_ratio_refAtOne3033->SetMinimum(0.8471372);
   Graph_g_ratio_refAtOne3033->SetMaximum(1.152863);
   Graph_g_ratio_refAtOne3033->SetDirectory(0);
   Graph_g_ratio_refAtOne3033->SetStats(0);
   Graph_g_ratio_refAtOne3033->SetLineStyle(0);
   Graph_g_ratio_refAtOne3033->SetMarkerStyle(20);
   Graph_g_ratio_refAtOne3033->GetXaxis()->SetLabelFont(42);
   Graph_g_ratio_refAtOne3033->GetXaxis()->SetLabelOffset(0.007);
   Graph_g_ratio_refAtOne3033->GetXaxis()->SetLabelSize(0.05);
   Graph_g_ratio_refAtOne3033->GetXaxis()->SetTitleSize(0.06);
   Graph_g_ratio_refAtOne3033->GetXaxis()->SetTitleOffset(0.9);
   Graph_g_ratio_refAtOne3033->GetXaxis()->SetTitleFont(42);
   Graph_g_ratio_refAtOne3033->GetYaxis()->SetLabelFont(42);
   Graph_g_ratio_refAtOne3033->GetYaxis()->SetLabelOffset(0.007);
   Graph_g_ratio_refAtOne3033->GetYaxis()->SetLabelSize(0.05);
   Graph_g_ratio_refAtOne3033->GetYaxis()->SetTitleSize(0.06);
   Graph_g_ratio_refAtOne3033->GetYaxis()->SetTitleOffset(1.25);
   Graph_g_ratio_refAtOne3033->GetYaxis()->SetTitleFont(42);
   Graph_g_ratio_refAtOne3033->GetZaxis()->SetLabelFont(42);
   Graph_g_ratio_refAtOne3033->GetZaxis()->SetLabelOffset(0.007);
   Graph_g_ratio_refAtOne3033->GetZaxis()->SetLabelSize(0.05);
   Graph_g_ratio_refAtOne3033->GetZaxis()->SetTitleSize(0.06);
   Graph_g_ratio_refAtOne3033->GetZaxis()->SetTitleOffset(1);
   Graph_g_ratio_refAtOne3033->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g_ratio_refAtOne3033);
   
   grae->Draw("ep");
   
   TF1 *f_line4 = new TF1("f_line","1",-10000,10000, TF1::EAddToList::kDefault);
   f_line4->SetFillColor(19);
   f_line4->SetFillStyle(0);
   f_line4->SetMarkerStyle(20);

   ci = TColor::GetColor("#ff0000");
   f_line4->SetLineColor(ci);
   f_line4->SetLineWidth(1);
   f_line4->GetXaxis()->SetLabelFont(42);
   f_line4->GetXaxis()->SetLabelOffset(0.007);
   f_line4->GetXaxis()->SetLabelSize(0.05);
   f_line4->GetXaxis()->SetTitleSize(0.06);
   f_line4->GetXaxis()->SetTitleOffset(0.9);
   f_line4->GetXaxis()->SetTitleFont(42);
   f_line4->GetYaxis()->SetLabelFont(42);
   f_line4->GetYaxis()->SetLabelOffset(0.007);
   f_line4->GetYaxis()->SetLabelSize(0.05);
   f_line4->GetYaxis()->SetTitleSize(0.06);
   f_line4->GetYaxis()->SetTitleOffset(1.25);
   f_line4->GetYaxis()->SetTitleFont(42);
   f_line4->Draw("SAME");
   
   Double_t g_ratio_refAtOne_fx3034[17] = {
   0.004,
   0.012,
   0.02,
   0.029,
   0.0395,
   0.051,
   0.0645,
   0.0815,
   0.1025,
   0.1295,
   0.167,
   0.2235,
   0.3245,
   0.543,
   0.924,
   1.55,
   2.612};
   Double_t g_ratio_refAtOne_fy3034[17] = {
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
   Double_t g_ratio_refAtOne_felx3034[17] = {
   0.0018,
   0.004,
   0.004,
   0.005,
   0.0055,
   0.006,
   0.0075,
   0.0095,
   0.0115,
   0.0155,
   0.022,
   0.0345,
   0.0665,
   0.152,
   0.229,
   0.397,
   0.665};
   Double_t g_ratio_refAtOne_fely3034[17] = {
   0.02972698,
   0.03109322,
   0.03165706,
   0.03057841,
   0.03062833,
   0.03086052,
   0.02992214,
   0.03047345,
   0.03103143,
   0.03064972,
   0.0308921,
   0.03121134,
   0.03128792,
   0.03518531,
   0.05390815,
   0.07601778,
   0.1273857};
   Double_t g_ratio_refAtOne_fehx3034[17] = {
   0.004,
   0.004,
   0.004,
   0.005,
   0.0055,
   0.006,
   0.0075,
   0.0095,
   0.0115,
   0.0155,
   0.022,
   0.0345,
   0.0665,
   0.152,
   0.229,
   0.397,
   0.665};
   Double_t g_ratio_refAtOne_fehy3034[17] = {
   0.02972698,
   0.03109322,
   0.03165706,
   0.03057841,
   0.03062833,
   0.03086052,
   0.02992214,
   0.03047345,
   0.03103143,
   0.03064972,
   0.0308921,
   0.03121134,
   0.03128792,
   0.03518531,
   0.05390815,
   0.07601778,
   0.1273857};
   grae = new TGraphAsymmErrors(17,g_ratio_refAtOne_fx3034,g_ratio_refAtOne_fy3034,g_ratio_refAtOne_felx3034,g_ratio_refAtOne_fehx3034,g_ratio_refAtOne_fely3034,g_ratio_refAtOne_fehy3034);
   grae->SetName("g_ratio_refAtOne");
   grae->SetTitle("Graph");

   ci = 1645;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph_g_ratio_refAtOne30333034 = new TH1F("Graph_Graph_g_ratio_refAtOne30333034","Graph",100,0.00198,3.60448);
   Graph_Graph_g_ratio_refAtOne30333034->SetMinimum(0.8471372);
   Graph_Graph_g_ratio_refAtOne30333034->SetMaximum(1.152863);
   Graph_Graph_g_ratio_refAtOne30333034->SetDirectory(0);
   Graph_Graph_g_ratio_refAtOne30333034->SetStats(0);
   Graph_Graph_g_ratio_refAtOne30333034->SetLineStyle(0);
   Graph_Graph_g_ratio_refAtOne30333034->SetMarkerStyle(20);
   Graph_Graph_g_ratio_refAtOne30333034->GetXaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio_refAtOne30333034->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio_refAtOne30333034->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio_refAtOne30333034->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio_refAtOne30333034->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_g_ratio_refAtOne30333034->GetXaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio_refAtOne30333034->GetYaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio_refAtOne30333034->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio_refAtOne30333034->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio_refAtOne30333034->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio_refAtOne30333034->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_g_ratio_refAtOne30333034->GetYaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio_refAtOne30333034->GetZaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio_refAtOne30333034->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio_refAtOne30333034->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio_refAtOne30333034->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio_refAtOne30333034->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_g_ratio_refAtOne30333034->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_g_ratio_refAtOne30333034);
   
   grae->Draw("ep");
   
   Double_t g_ratio1_fx3035[17] = {
   0.004,
   0.012,
   0.02,
   0.029,
   0.0395,
   0.051,
   0.0645,
   0.0815,
   0.1025,
   0.1295,
   0.167,
   0.2235,
   0.3245,
   0.543,
   0.924,
   1.55,
   2.612};
   Double_t g_ratio1_fy3035[17] = {
   0.9451913,
   1.010072,
   0.9761066,
   1.05071,
   0.9882188,
   0.9763692,
   0.9509424,
   1.009291,
   0.9939379,
   0.9901728,
   0.981071,
   1.045232,
   1.041178,
   1.093417,
   1.010854,
   0.9565693,
   1.087322};
   Double_t g_ratio1_felx3035[17] = {
   0.0018,
   0.004,
   0.004,
   0.005,
   0.0055,
   0.006,
   0.0075,
   0.0095,
   0.0115,
   0.0155,
   0.022,
   0.0345,
   0.0665,
   0.152,
   0.229,
   0.397,
   0.665};
   Double_t g_ratio1_fely3035[17] = {
   0.02879096,
   0.03077504,
   0.0297943,
   0.0319504,
   0.03011327,
   0.02983111,
   0.02893956,
   0.03056751,
   0.0299453,
   0.02986917,
   0.02930718,
   0.03117018,
   0.03091728,
   0.03209268,
   0.02980625,
   0.02859981,
   0.03333557};
   Double_t g_ratio1_fehx3035[17] = {
   0.004,
   0.004,
   0.004,
   0.005,
   0.0055,
   0.006,
   0.0075,
   0.0095,
   0.0115,
   0.0155,
   0.022,
   0.0345,
   0.0665,
   0.152,
   0.229,
   0.397,
   0.665};
   Double_t g_ratio1_fehy3035[17] = {
   0.02135401,
   0.02279283,
   0.02205006,
   0.02357753,
   0.02215409,
   0.02187576,
   0.02116374,
   0.02224811,
   0.0217427,
   0.02165229,
   0.02120552,
   0.02247229,
   0.0221405,
   0.02295404,
   0.02137984,
   0.02073421,
   0.02410459};
   grae = new TGraphAsymmErrors(17,g_ratio1_fx3035,g_ratio1_fy3035,g_ratio1_felx3035,g_ratio1_fehx3035,g_ratio1_fely3035,g_ratio1_fehy3035);
   grae->SetName("g_ratio1");
   grae->SetTitle("Graph");

   ci = 1643;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph_g_ratio130313035 = new TH1F("Graph_Graph_g_ratio130313035","Graph",100,0.0022,3.277);
   Graph_Graph_g_ratio130313035->SetMinimum(0.45);
   Graph_Graph_g_ratio130313035->SetMaximum(1.55);
   Graph_Graph_g_ratio130313035->SetDirectory(0);
   Graph_Graph_g_ratio130313035->SetStats(0);
   Graph_Graph_g_ratio130313035->SetLineStyle(0);
   Graph_Graph_g_ratio130313035->SetMarkerStyle(20);
   Graph_Graph_g_ratio130313035->GetXaxis()->SetTitle("#lower[0.1]{#phi}#lower[-0.1]{#scale[0.8]{*}}");
   Graph_Graph_g_ratio130313035->GetXaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio130313035->GetXaxis()->SetLabelOffset(0.008400001);
   Graph_Graph_g_ratio130313035->GetXaxis()->SetLabelSize(0.144);
   Graph_Graph_g_ratio130313035->GetXaxis()->SetTitleSize(0.2);
   Graph_Graph_g_ratio130313035->GetXaxis()->SetTitleOffset(0.88);
   Graph_Graph_g_ratio130313035->GetXaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio130313035->GetYaxis()->SetTitle("Pred./Data");
   Graph_Graph_g_ratio130313035->GetYaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio130313035->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio130313035->GetYaxis()->SetLabelSize(0.12);
   Graph_Graph_g_ratio130313035->GetYaxis()->SetTitleSize(0.15);
   Graph_Graph_g_ratio130313035->GetYaxis()->SetTitleOffset(0.4);
   Graph_Graph_g_ratio130313035->GetYaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio130313035->GetZaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio130313035->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio130313035->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio130313035->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio130313035->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_g_ratio130313035->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_g_ratio130313035);
   
   grae->Draw("5");
   
   Double_t g_ratio2_fx3036[17] = {
   0.004,
   0.012,
   0.02,
   0.029,
   0.0395,
   0.051,
   0.0645,
   0.0815,
   0.1025,
   0.1295,
   0.167,
   0.2235,
   0.3245,
   0.543,
   0.924,
   1.55,
   2.612};
   Double_t g_ratio2_fy3036[17] = {
   0.8881377,
   0.9586725,
   0.9259212,
   1.002247,
   0.9591034,
   0.9431624,
   0.9174643,
   0.9943581,
   0.9660485,
   0.9875913,
   0.9775796,
   1.049457,
   1.04935,
   1.110846,
   1.031672,
   0.9846249,
   1.092632};
   Double_t g_ratio2_felx3036[17] = {
   0.0018,
   0.004,
   0.004,
   0.005,
   0.0055,
   0.006,
   0.0075,
   0.0095,
   0.0115,
   0.0155,
   0.022,
   0.0345,
   0.0665,
   0.152,
   0.229,
   0.397,
   0.665};
   Double_t g_ratio2_fely3036[17] = {
   0.02852517,
   0.03083757,
   0.02997993,
   0.03219841,
   0.03079232,
   0.03047494,
   0.02955675,
   0.03237941,
   0.03135903,
   0.03189256,
   0.03147126,
   0.03378867,
   0.0337578,
   0.03581538,
   0.0334233,
   0.03229852,
   0.03685777};
   Double_t g_ratio2_fehx3036[17] = {
   0.004,
   0.004,
   0.004,
   0.005,
   0.0055,
   0.006,
   0.0075,
   0.0095,
   0.0115,
   0.0155,
   0.022,
   0.0345,
   0.0665,
   0.152,
   0.229,
   0.397,
   0.665};
   Double_t g_ratio2_fehy3036[17] = {
   0.0257901,
   0.02792254,
   0.02715106,
   0.02905866,
   0.02777189,
   0.02758622,
   0.02673746,
   0.02943402,
   0.02847462,
   0.02881046,
   0.02834011,
   0.03052036,
   0.03067548,
   0.03262127,
   0.03056014,
   0.02940047,
   0.03379701};
   grae = new TGraphAsymmErrors(17,g_ratio2_fx3036,g_ratio2_fy3036,g_ratio2_felx3036,g_ratio2_fehx3036,g_ratio2_fely3036,g_ratio2_fehy3036);
   grae->SetName("g_ratio2");
   grae->SetTitle("Graph");

   ci = 1644;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph_g_ratio230323036 = new TH1F("Graph_Graph_g_ratio230323036","Graph",100,0.00198,3.60448);
   Graph_Graph_g_ratio230323036->SetMinimum(0.8312271);
   Graph_Graph_g_ratio230323036->SetMaximum(1.171853);
   Graph_Graph_g_ratio230323036->SetDirectory(0);
   Graph_Graph_g_ratio230323036->SetStats(0);
   Graph_Graph_g_ratio230323036->SetLineStyle(0);
   Graph_Graph_g_ratio230323036->SetMarkerStyle(20);
   Graph_Graph_g_ratio230323036->GetXaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio230323036->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio230323036->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio230323036->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio230323036->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_g_ratio230323036->GetXaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio230323036->GetYaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio230323036->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio230323036->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio230323036->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio230323036->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_g_ratio230323036->GetYaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio230323036->GetZaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio230323036->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio230323036->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio230323036->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio230323036->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_g_ratio230323036->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_g_ratio230323036);
   
   grae->Draw("5");
   
   TH1F *g_ratio1_copy__8 = new TH1F("g_ratio1_copy__8","Graph",100,0.0022,3.277);
   g_ratio1_copy__8->SetMinimum(0.45);
   g_ratio1_copy__8->SetMaximum(1.55);
   g_ratio1_copy__8->SetDirectory(0);
   g_ratio1_copy__8->SetStats(0);
   g_ratio1_copy__8->SetLineStyle(0);
   g_ratio1_copy__8->SetMarkerStyle(20);
   g_ratio1_copy__8->GetXaxis()->SetTitle("#lower[0.1]{#phi}#lower[-0.1]{#scale[0.8]{*}}");
   g_ratio1_copy__8->GetXaxis()->SetLabelFont(42);
   g_ratio1_copy__8->GetXaxis()->SetLabelOffset(0.008400001);
   g_ratio1_copy__8->GetXaxis()->SetLabelSize(0.144);
   g_ratio1_copy__8->GetXaxis()->SetTitleSize(0.2);
   g_ratio1_copy__8->GetXaxis()->SetTitleOffset(0.88);
   g_ratio1_copy__8->GetXaxis()->SetTitleFont(42);
   g_ratio1_copy__8->GetYaxis()->SetTitle("Pred./Data");
   g_ratio1_copy__8->GetYaxis()->SetLabelFont(42);
   g_ratio1_copy__8->GetYaxis()->SetLabelOffset(0.007);
   g_ratio1_copy__8->GetYaxis()->SetLabelSize(0.12);
   g_ratio1_copy__8->GetYaxis()->SetTitleSize(0.15);
   g_ratio1_copy__8->GetYaxis()->SetTitleOffset(0.4);
   g_ratio1_copy__8->GetYaxis()->SetTitleFont(42);
   g_ratio1_copy__8->GetZaxis()->SetLabelFont(42);
   g_ratio1_copy__8->GetZaxis()->SetLabelOffset(0.007);
   g_ratio1_copy__8->GetZaxis()->SetLabelSize(0.05);
   g_ratio1_copy__8->GetZaxis()->SetTitleSize(0.06);
   g_ratio1_copy__8->GetZaxis()->SetTitleOffset(1);
   g_ratio1_copy__8->GetZaxis()->SetTitleFont(42);
   g_ratio1_copy__8->Draw("sameaxis");
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
   Plots/results/plots/result_noacc_phistar_CT14_EPPS16->cd();
   Plots/results/plots/result_noacc_phistar_CT14_EPPS16->Modified();
   Plots/results/plots/result_noacc_phistar_CT14_EPPS16->cd();
   Plots/results/plots/result_noacc_phistar_CT14_EPPS16->SetSelected(Plots/results/plots/result_noacc_phistar_CT14_EPPS16);
}

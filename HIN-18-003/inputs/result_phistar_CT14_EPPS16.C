void result_phistar_CT14_EPPS16()
{
//=========Macro generated from canvas: Plots/results/plots/result_phistar_CT14_EPPS16/
//=========  (Tue Feb 23 17:21:34 2021) by ROOT version 6.16/00
   TCanvas *Plots/results/plots/result_phistar_CT14_EPPS16 = new TCanvas("Plots/results/plots/result_phistar_CT14_EPPS16", "",0,0,800,800);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   Plots/results/plots/result_phistar_CT14_EPPS16->Range(0,0,1,1);
   Plots/results/plots/result_phistar_CT14_EPPS16->SetFillColor(0);
   Plots/results/plots/result_phistar_CT14_EPPS16->SetBorderMode(0);
   Plots/results/plots/result_phistar_CT14_EPPS16->SetBorderSize(2);
   Plots/results/plots/result_phistar_CT14_EPPS16->SetTickx(1);
   Plots/results/plots/result_phistar_CT14_EPPS16->SetTicky(1);
   Plots/results/plots/result_phistar_CT14_EPPS16->SetLeftMargin(0.16);
   Plots/results/plots/result_phistar_CT14_EPPS16->SetRightMargin(0.02);
   Plots/results/plots/result_phistar_CT14_EPPS16->SetTopMargin(0.05);
   Plots/results/plots/result_phistar_CT14_EPPS16->SetBottomMargin(0.13);
   Plots/results/plots/result_phistar_CT14_EPPS16->SetFrameFillStyle(0);
   Plots/results/plots/result_phistar_CT14_EPPS16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: TopPad
   TPad *TopPad = new TPad("TopPad", "TopPad",0.01,0.01,0.99,0.99);
   TopPad->Draw();
   TopPad->cd();
   TopPad->Range(-3.300221,-2.774531,0.7163026,4.261883);
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
   1604.805,
   1558.228,
   1461.244,
   1330.867,
   1159.894,
   991.8696,
   822.6376,
   662.949,
   523.9038,
   392.418,
   278.625,
   177.656,
   92.44179,
   32.84694,
   8.896153,
   2.383675,
   0.6613901};
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
   46.06418,
   44.73349,
   42.06068,
   38.16395,
   33.33292,
   28.52419,
   23.58901,
   18.94737,
   14.89696,
   11.15214,
   7.862062,
   5.019832,
   2.601157,
   0.9188799,
   0.2499218,
   0.0675554,
   0.01896846};
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
   35.58318,
   34.52541,
   32.3859,
   29.29454,
   25.53595,
   21.86584,
   17.92849,
   14.30545,
   11.199,
   8.381303,
   5.868562,
   3.746477,
   1.923505,
   0.6794725,
   0.1860014,
   0.05073807,
   0.01423786};
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
   Graph_gth_CT14_phistar3028->SetMinimum(0.3);
   Graph_gth_CT14_phistar3028->SetMaximum(5000);
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
   1511.448,
   1469.332,
   1392.552,
   1268.958,
   1115.297,
   950.5966,
   791.2779,
   647.6889,
   506.5029,
   386.6861,
   275.1171,
   176.1738,
   92.36112,
   33.12016,
   8.947164,
   2.408377,
   0.6375627};
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
   48.53716,
   47.0659,
   44.77751,
   40.94349,
   35.91965,
   30.61236,
   25.55613,
   21.0297,
   16.37796,
   12.4778,
   8.858427,
   5.698436,
   3.004774,
   1.088608,
   0.2977726,
   0.08107298,
   0.0221854};
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
   45.58154,
   44.14673,
   42.04622,
   38.4378,
   33.73205,
   28.75393,
   23.99828,
   19.76457,
   15.37098,
   11.70095,
   8.268124,
   5.321792,
   2.828586,
   1.026068,
   0.2812242,
   0.07657353,
   0.02114024};
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
   Graph_gth_EPPS16_phistar3029->SetMinimum(0.5538396);
   Graph_gth_EPPS16_phistar3029->SetMaximum(1712.671);
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
   1706.076,
   1535.398,
   1506.144,
   1267.758,
   1163.968,
   1008.803,
   863.0274,
   651.8399,
   524.6481,
   391.8556,
   281.648,
   168.0329,
   88.13174,
   29.87674,
   8.705693,
   2.460612,
   0.5877206};
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
   52.60299,
   49.24813,
   49.20749,
   40.13853,
   36.81457,
   32.09445,
   26.7061,
   20.51316,
   16.7874,
   12.37853,
   8.955412,
   5.396404,
   2.837619,
   1.077429,
   0.4750066,
   0.1885314,
   0.07520348};
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
   52.60299,
   49.24813,
   49.20749,
   40.13853,
   36.81457,
   32.09445,
   26.7061,
   20.51316,
   16.7874,
   12.37853,
   8.955412,
   5.396404,
   2.837619,
   1.077429,
   0.4750066,
   0.1885314,
   0.07520348};
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
   Graph_gres_phistar3030->SetMinimum(0.4612654);
   Graph_gres_phistar3030->SetMaximum(1934.496);
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
   gth_CT14_phistar_copy__7->SetMinimum(0.3);
   gth_CT14_phistar_copy__7->SetMaximum(5000);
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
   0.9406408,
   1.014869,
   0.9701887,
   1.04978,
   0.9965003,
   0.9832146,
   0.9531999,
   1.017043,
   0.9985813,
   1.001435,
   0.9892667,
   1.05727,
   1.048905,
   1.099415,
   1.021878,
   0.9687328,
   1.125348};
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
   0.02700007,
   0.02913478,
   0.02792607,
   0.0301035,
   0.02863733,
   0.02827529,
   0.02733286,
   0.02906752,
   0.02839419,
   0.02845983,
   0.0279145,
   0.02987411,
   0.02951442,
   0.0307557,
   0.02870785,
   0.02745472,
   0.03227463};
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
   0.02085674,
   0.02248629,
   0.02150253,
   0.02310736,
   0.02193872,
   0.02167504,
   0.02077395,
   0.02194627,
   0.02134574,
   0.02138875,
   0.02083651,
   0.02229609,
   0.02182534,
   0.02274253,
   0.02136549,
   0.0206201,
   0.02422555};
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
   0.8859208,
   0.956971,
   0.9245811,
   1.000947,
   0.9581857,
   0.9423017,
   0.916863,
   0.9936317,
   0.9654145,
   0.9868075,
   0.9768119,
   1.048448,
   1.047989,
   1.10856,
   1.027737,
   0.9787714,
   1.084806};
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
   0.02844959,
   0.03065387,
   0.0297299,
   0.03229598,
   0.03085966,
   0.03034524,
   0.02961219,
   0.03226206,
   0.03121703,
   0.03184285,
   0.03145212,
   0.03391263,
   0.03409411,
   0.03643664,
   0.03420436,
   0.0329483,
   0.0377482};
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
   0.02671718,
   0.02875262,
   0.02791647,
   0.03031951,
   0.02898023,
   0.02850303,
   0.02780708,
   0.0303212,
   0.02929769,
   0.02986035,
   0.02935623,
   0.03167114,
   0.03209497,
   0.03434339,
   0.03230349,
   0.03111971,
   0.03596987};
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
   Graph_g_ratio23032->SetMinimum(0.828928);
   Graph_g_ratio23032->SetMaximum(1.171447);
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
   0.03083273,
   0.03207515,
   0.03267117,
   0.03166103,
   0.03162852,
   0.0318144,
   0.03094467,
   0.03146962,
   0.03199744,
   0.03158952,
   0.03179647,
   0.03211517,
   0.03219747,
   0.03606247,
   0.05456275,
   0.07661973,
   0.1279579};
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
   0.03083273,
   0.03207515,
   0.03267117,
   0.03166103,
   0.03162852,
   0.0318144,
   0.03094467,
   0.03146962,
   0.03199744,
   0.03158952,
   0.03179647,
   0.03211517,
   0.03219747,
   0.03606247,
   0.05456275,
   0.07661973,
   0.1279579};
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
   Graph_g_ratio_refAtOne3033->SetMinimum(0.8464506);
   Graph_g_ratio_refAtOne3033->SetMaximum(1.153549);
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
   0.03083273,
   0.03207515,
   0.03267117,
   0.03166103,
   0.03162852,
   0.0318144,
   0.03094467,
   0.03146962,
   0.03199744,
   0.03158952,
   0.03179647,
   0.03211517,
   0.03219747,
   0.03606247,
   0.05456275,
   0.07661973,
   0.1279579};
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
   0.03083273,
   0.03207515,
   0.03267117,
   0.03166103,
   0.03162852,
   0.0318144,
   0.03094467,
   0.03146962,
   0.03199744,
   0.03158952,
   0.03179647,
   0.03211517,
   0.03219747,
   0.03606247,
   0.05456275,
   0.07661973,
   0.1279579};
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
   Graph_Graph_g_ratio_refAtOne30333034->SetMinimum(0.8464506);
   Graph_Graph_g_ratio_refAtOne30333034->SetMaximum(1.153549);
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
   0.9406408,
   1.014869,
   0.9701887,
   1.04978,
   0.9965003,
   0.9832146,
   0.9531999,
   1.017043,
   0.9985813,
   1.001435,
   0.9892667,
   1.05727,
   1.048905,
   1.099415,
   1.021878,
   0.9687328,
   1.125348};
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
   0.02700007,
   0.02913478,
   0.02792607,
   0.0301035,
   0.02863733,
   0.02827529,
   0.02733286,
   0.02906752,
   0.02839419,
   0.02845983,
   0.0279145,
   0.02987411,
   0.02951442,
   0.0307557,
   0.02870785,
   0.02745472,
   0.03227463};
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
   0.02085674,
   0.02248629,
   0.02150253,
   0.02310736,
   0.02193872,
   0.02167504,
   0.02077395,
   0.02194627,
   0.02134574,
   0.02138875,
   0.02083651,
   0.02229609,
   0.02182534,
   0.02274253,
   0.02136549,
   0.0206201,
   0.02422555};
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
   0.8859208,
   0.956971,
   0.9245811,
   1.000947,
   0.9581857,
   0.9423017,
   0.916863,
   0.9936317,
   0.9654145,
   0.9868075,
   0.9768119,
   1.048448,
   1.047989,
   1.10856,
   1.027737,
   0.9787714,
   1.084806};
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
   0.02844959,
   0.03065387,
   0.0297299,
   0.03229598,
   0.03085966,
   0.03034524,
   0.02961219,
   0.03226206,
   0.03121703,
   0.03184285,
   0.03145212,
   0.03391263,
   0.03409411,
   0.03643664,
   0.03420436,
   0.0329483,
   0.0377482};
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
   0.02671718,
   0.02875262,
   0.02791647,
   0.03031951,
   0.02898023,
   0.02850303,
   0.02780708,
   0.0303212,
   0.02929769,
   0.02986035,
   0.02935623,
   0.03167114,
   0.03209497,
   0.03434339,
   0.03230349,
   0.03111971,
   0.03596987};
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
   Graph_Graph_g_ratio230323036->SetMinimum(0.828928);
   Graph_Graph_g_ratio230323036->SetMaximum(1.171447);
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
   TopPad->Modified();
   Plots/results/plots/result_phistar_CT14_EPPS16->cd();
   Plots/results/plots/result_phistar_CT14_EPPS16->Modified();
   Plots/results/plots/result_phistar_CT14_EPPS16->cd();
   Plots/results/plots/result_phistar_CT14_EPPS16->SetSelected(Plots/results/plots/result_phistar_CT14_EPPS16);
}

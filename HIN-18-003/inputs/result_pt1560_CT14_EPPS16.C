void result_pt1560_CT14_EPPS16()
{
//=========Macro generated from canvas: Plots/results/plots/result_pt1560_CT14_EPPS16/
//=========  (Tue Feb 23 17:21:35 2021) by ROOT version 6.16/00
   TCanvas *Plots/results/plots/result_pt1560_CT14_EPPS16 = new TCanvas("Plots/results/plots/result_pt1560_CT14_EPPS16", "",0,0,800,800);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   Plots/results/plots/result_pt1560_CT14_EPPS16->Range(0,0,1,1);
   Plots/results/plots/result_pt1560_CT14_EPPS16->SetFillColor(0);
   Plots/results/plots/result_pt1560_CT14_EPPS16->SetBorderMode(0);
   Plots/results/plots/result_pt1560_CT14_EPPS16->SetBorderSize(2);
   Plots/results/plots/result_pt1560_CT14_EPPS16->SetTickx(1);
   Plots/results/plots/result_pt1560_CT14_EPPS16->SetTicky(1);
   Plots/results/plots/result_pt1560_CT14_EPPS16->SetLeftMargin(0.16);
   Plots/results/plots/result_pt1560_CT14_EPPS16->SetRightMargin(0.02);
   Plots/results/plots/result_pt1560_CT14_EPPS16->SetTopMargin(0.05);
   Plots/results/plots/result_pt1560_CT14_EPPS16->SetBottomMargin(0.13);
   Plots/results/plots/result_pt1560_CT14_EPPS16->SetFrameFillStyle(0);
   Plots/results/plots/result_pt1560_CT14_EPPS16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: TopPad
   TPad *TopPad = new TPad("TopPad", "TopPad",0.01,0.01,0.99,0.99);
   TopPad->Draw();
   TopPad->cd();
   TopPad->Range(-0.299718,-6.045631,2.437911,2.531248);
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
   
   Double_t gth_CT14_pt1560_fx3055[8] = {
   2.5,
   7.5,
   12.5,
   17.5,
   30,
   55,
   90,
   155};
   Double_t gth_CT14_pt1560_fy3055[8] = {
   15.81201,
   9.863831,
   4.291129,
   2.118999,
   0.6085863,
   0.07529876,
   0.009344345,
   0.0008308767};
   Double_t gth_CT14_pt1560_felx3055[8] = {
   1.125,
   2.5,
   2.5,
   2.5,
   10,
   15,
   20,
   45};
   Double_t gth_CT14_pt1560_fely3055[8] = {
   0.6170614,
   0.3797824,
   0.1633976,
   0.07945775,
   0.02195235,
   0.002626007,
   0.0003344155,
   3.031613e-05};
   Double_t gth_CT14_pt1560_fehx3055[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   10,
   15,
   20,
   45};
   Double_t gth_CT14_pt1560_fehy3055[8] = {
   0.529773,
   0.3207925,
   0.1370211,
   0.06650964,
   0.01829293,
   0.002189336,
   0.0002823533,
   2.575933e-05};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,gth_CT14_pt1560_fx3055,gth_CT14_pt1560_fy3055,gth_CT14_pt1560_felx3055,gth_CT14_pt1560_fehx3055,gth_CT14_pt1560_fely3055,gth_CT14_pt1560_fehy3055);
   grae->SetName("gth_CT14_pt1560");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1652;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_gth_CT14_pt15603055 = new TH1F("Graph_gth_CT14_pt15603055","Graph",100,1.375,200);
   Graph_gth_CT14_pt15603055->SetMinimum(0.0005);
   Graph_gth_CT14_pt15603055->SetMaximum(70);
   Graph_gth_CT14_pt15603055->SetDirectory(0);
   Graph_gth_CT14_pt15603055->SetStats(0);
   Graph_gth_CT14_pt15603055->SetLineStyle(0);
   Graph_gth_CT14_pt15603055->SetMarkerStyle(20);
   Graph_gth_CT14_pt15603055->GetXaxis()->SetTitle("p_{T} [GeV]");
   Graph_gth_CT14_pt15603055->GetXaxis()->SetMoreLogLabels();
   Graph_gth_CT14_pt15603055->GetXaxis()->SetNoExponent();
   Graph_gth_CT14_pt15603055->GetXaxis()->SetLabelFont(42);
   Graph_gth_CT14_pt15603055->GetXaxis()->SetLabelOffset(0.007);
   Graph_gth_CT14_pt15603055->GetXaxis()->SetLabelSize(0);
   Graph_gth_CT14_pt15603055->GetXaxis()->SetTitleSize(0);
   Graph_gth_CT14_pt15603055->GetXaxis()->SetTitleOffset(0.9);
   Graph_gth_CT14_pt15603055->GetXaxis()->SetTitleFont(42);
   Graph_gth_CT14_pt15603055->GetYaxis()->SetTitle("d#sigma/dp_{T} [nb/GeV]");
   Graph_gth_CT14_pt15603055->GetYaxis()->SetLabelFont(42);
   Graph_gth_CT14_pt15603055->GetYaxis()->SetLabelOffset(0.007);
   Graph_gth_CT14_pt15603055->GetYaxis()->SetLabelSize(0.05);
   Graph_gth_CT14_pt15603055->GetYaxis()->SetTitleSize(0.072);
   Graph_gth_CT14_pt15603055->GetYaxis()->SetTitleOffset(1.041667);
   Graph_gth_CT14_pt15603055->GetYaxis()->SetTitleFont(42);
   Graph_gth_CT14_pt15603055->GetZaxis()->SetLabelFont(42);
   Graph_gth_CT14_pt15603055->GetZaxis()->SetLabelOffset(0.007);
   Graph_gth_CT14_pt15603055->GetZaxis()->SetLabelSize(0.05);
   Graph_gth_CT14_pt15603055->GetZaxis()->SetTitleSize(0.06);
   Graph_gth_CT14_pt15603055->GetZaxis()->SetTitleOffset(1);
   Graph_gth_CT14_pt15603055->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gth_CT14_pt15603055);
   
   grae->Draw("a5");
   
   Double_t gth_EPPS16_pt1560_fx3056[8] = {
   2.5,
   7.5,
   12.5,
   17.5,
   30,
   55,
   90,
   155};
   Double_t gth_EPPS16_pt1560_fy3056[8] = {
   13.63134,
   8.908947,
   4.005454,
   1.997532,
   0.5923364,
   0.07448785,
   0.009296308,
   0.0009083989};
   Double_t gth_EPPS16_pt1560_felx3056[8] = {
   1.125,
   2.5,
   2.5,
   2.5,
   10,
   15,
   20,
   45};
   Double_t gth_EPPS16_pt1560_fely3056[8] = {
   1.026519,
   0.6692397,
   0.2963417,
   0.1428945,
   0.03910618,
   0.004633938,
   0.0005882236,
   5.980239e-05};
   Double_t gth_EPPS16_pt1560_fehx3056[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   10,
   15,
   20,
   45};
   Double_t gth_EPPS16_pt1560_fehy3056[8] = {
   0.9937643,
   0.6400059,
   0.2825301,
   0.1356254,
   0.03737445,
   0.004454586,
   0.0005675413,
   5.741625e-05};
   grae = new TGraphAsymmErrors(8,gth_EPPS16_pt1560_fx3056,gth_EPPS16_pt1560_fy3056,gth_EPPS16_pt1560_felx3056,gth_EPPS16_pt1560_fehx3056,gth_EPPS16_pt1560_fely3056,gth_EPPS16_pt1560_fehy3056);
   grae->SetName("gth_EPPS16_pt1560");
   grae->SetTitle("Graph");

   ci = 1653;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_gth_EPPS16_pt15603056 = new TH1F("Graph_gth_EPPS16_pt15603056","Graph",100,1.2375,219.8625);
   Graph_gth_EPPS16_pt15603056->SetMinimum(0.0007637368);
   Graph_gth_EPPS16_pt15603056->SetMaximum(16.08753);
   Graph_gth_EPPS16_pt15603056->SetDirectory(0);
   Graph_gth_EPPS16_pt15603056->SetStats(0);
   Graph_gth_EPPS16_pt15603056->SetLineStyle(0);
   Graph_gth_EPPS16_pt15603056->SetMarkerStyle(20);
   Graph_gth_EPPS16_pt15603056->GetXaxis()->SetLabelFont(42);
   Graph_gth_EPPS16_pt15603056->GetXaxis()->SetLabelOffset(0.007);
   Graph_gth_EPPS16_pt15603056->GetXaxis()->SetLabelSize(0.05);
   Graph_gth_EPPS16_pt15603056->GetXaxis()->SetTitleSize(0.06);
   Graph_gth_EPPS16_pt15603056->GetXaxis()->SetTitleOffset(0.9);
   Graph_gth_EPPS16_pt15603056->GetXaxis()->SetTitleFont(42);
   Graph_gth_EPPS16_pt15603056->GetYaxis()->SetLabelFont(42);
   Graph_gth_EPPS16_pt15603056->GetYaxis()->SetLabelOffset(0.007);
   Graph_gth_EPPS16_pt15603056->GetYaxis()->SetLabelSize(0.05);
   Graph_gth_EPPS16_pt15603056->GetYaxis()->SetTitleSize(0.06);
   Graph_gth_EPPS16_pt15603056->GetYaxis()->SetTitleOffset(1.25);
   Graph_gth_EPPS16_pt15603056->GetYaxis()->SetTitleFont(42);
   Graph_gth_EPPS16_pt15603056->GetZaxis()->SetLabelFont(42);
   Graph_gth_EPPS16_pt15603056->GetZaxis()->SetLabelOffset(0.007);
   Graph_gth_EPPS16_pt15603056->GetZaxis()->SetLabelSize(0.05);
   Graph_gth_EPPS16_pt15603056->GetZaxis()->SetTitleSize(0.06);
   Graph_gth_EPPS16_pt15603056->GetZaxis()->SetTitleOffset(1);
   Graph_gth_EPPS16_pt15603056->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gth_EPPS16_pt15603056);
   
   grae->Draw("5");
   
   Double_t gres_pt1560_fx3057[8] = {
   2.5,
   7.5,
   12.5,
   17.5,
   30,
   55,
   90,
   155};
   Double_t gres_pt1560_fy3057[8] = {
   15.03206,
   10.24293,
   4.675612,
   2.405768,
   0.7372558,
   0.0911788,
   0.009344482,
   0.001753283};
   Double_t gres_pt1560_felx3057[8] = {
   1.125,
   2.5,
   2.5,
   2.5,
   10,
   15,
   20,
   45};
   Double_t gres_pt1560_fely3057[8] = {
   1.491219,
   1.020505,
   0.5221283,
   0.2707794,
   0.05155603,
   0.009122744,
   0.002481319,
   0.0005111748};
   Double_t gres_pt1560_fehx3057[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   10,
   15,
   20,
   45};
   Double_t gres_pt1560_fehy3057[8] = {
   1.491219,
   1.020505,
   0.5221283,
   0.2707794,
   0.05155603,
   0.009122744,
   0.002481319,
   0.0005111748};
   grae = new TGraphAsymmErrors(8,gres_pt1560_fx3057,gres_pt1560_fy3057,gres_pt1560_felx3057,gres_pt1560_fehx3057,gres_pt1560_fely3057,gres_pt1560_fehy3057);
   grae->SetName("gres_pt1560");
   grae->SetTitle("Graph");

   ci = 1654;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_gres_pt15603057 = new TH1F("Graph_gres_pt15603057","Graph",100,1.2375,219.8625);
   Graph_gres_pt15603057->SetMinimum(0.001117898);
   Graph_gres_pt15603057->SetMaximum(18.17548);
   Graph_gres_pt15603057->SetDirectory(0);
   Graph_gres_pt15603057->SetStats(0);
   Graph_gres_pt15603057->SetLineStyle(0);
   Graph_gres_pt15603057->SetMarkerStyle(20);
   Graph_gres_pt15603057->GetXaxis()->SetLabelFont(42);
   Graph_gres_pt15603057->GetXaxis()->SetLabelOffset(0.007);
   Graph_gres_pt15603057->GetXaxis()->SetLabelSize(0.05);
   Graph_gres_pt15603057->GetXaxis()->SetTitleSize(0.06);
   Graph_gres_pt15603057->GetXaxis()->SetTitleOffset(0.9);
   Graph_gres_pt15603057->GetXaxis()->SetTitleFont(42);
   Graph_gres_pt15603057->GetYaxis()->SetLabelFont(42);
   Graph_gres_pt15603057->GetYaxis()->SetLabelOffset(0.007);
   Graph_gres_pt15603057->GetYaxis()->SetLabelSize(0.05);
   Graph_gres_pt15603057->GetYaxis()->SetTitleSize(0.06);
   Graph_gres_pt15603057->GetYaxis()->SetTitleOffset(1.25);
   Graph_gres_pt15603057->GetYaxis()->SetTitleFont(42);
   Graph_gres_pt15603057->GetZaxis()->SetLabelFont(42);
   Graph_gres_pt15603057->GetZaxis()->SetLabelOffset(0.007);
   Graph_gres_pt15603057->GetZaxis()->SetLabelSize(0.05);
   Graph_gres_pt15603057->GetZaxis()->SetTitleSize(0.06);
   Graph_gres_pt15603057->GetZaxis()->SetTitleOffset(1);
   Graph_gres_pt15603057->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gres_pt15603057);
   
   grae->Draw("ep");
   
   TLegend *leg = new TLegend(0.164,0.54,0.68,0.78,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("gres_pt1560","Data","lpf");

   ci = 1654;
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
   entry=leg->AddEntry("gth_CT14_pt1560","CT14","F");

   ci = 1652;
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
   entry=leg->AddEntry("gth_EPPS16_pt1560","CT14+EPPS16","F");

   ci = 1653;
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
   
   TH1F *gth_CT14_pt1560_copy__13 = new TH1F("gth_CT14_pt1560_copy__13","Graph",100,1.375,200);
   gth_CT14_pt1560_copy__13->SetMinimum(0.0005);
   gth_CT14_pt1560_copy__13->SetMaximum(70);
   gth_CT14_pt1560_copy__13->SetDirectory(0);
   gth_CT14_pt1560_copy__13->SetStats(0);
   gth_CT14_pt1560_copy__13->SetLineStyle(0);
   gth_CT14_pt1560_copy__13->SetMarkerStyle(20);
   gth_CT14_pt1560_copy__13->GetXaxis()->SetTitle("p_{T} [GeV]");
   gth_CT14_pt1560_copy__13->GetXaxis()->SetMoreLogLabels();
   gth_CT14_pt1560_copy__13->GetXaxis()->SetNoExponent();
   gth_CT14_pt1560_copy__13->GetXaxis()->SetLabelFont(42);
   gth_CT14_pt1560_copy__13->GetXaxis()->SetLabelOffset(0.007);
   gth_CT14_pt1560_copy__13->GetXaxis()->SetLabelSize(0);
   gth_CT14_pt1560_copy__13->GetXaxis()->SetTitleSize(0);
   gth_CT14_pt1560_copy__13->GetXaxis()->SetTitleOffset(0.9);
   gth_CT14_pt1560_copy__13->GetXaxis()->SetTitleFont(42);
   gth_CT14_pt1560_copy__13->GetYaxis()->SetTitle("d#sigma/dp_{T} [nb/GeV]");
   gth_CT14_pt1560_copy__13->GetYaxis()->SetLabelFont(42);
   gth_CT14_pt1560_copy__13->GetYaxis()->SetLabelOffset(0.007);
   gth_CT14_pt1560_copy__13->GetYaxis()->SetLabelSize(0.05);
   gth_CT14_pt1560_copy__13->GetYaxis()->SetTitleSize(0.072);
   gth_CT14_pt1560_copy__13->GetYaxis()->SetTitleOffset(1.041667);
   gth_CT14_pt1560_copy__13->GetYaxis()->SetTitleFont(42);
   gth_CT14_pt1560_copy__13->GetZaxis()->SetLabelFont(42);
   gth_CT14_pt1560_copy__13->GetZaxis()->SetLabelOffset(0.007);
   gth_CT14_pt1560_copy__13->GetZaxis()->SetLabelSize(0.05);
   gth_CT14_pt1560_copy__13->GetZaxis()->SetTitleSize(0.06);
   gth_CT14_pt1560_copy__13->GetZaxis()->SetTitleOffset(1);
   gth_CT14_pt1560_copy__13->GetZaxis()->SetTitleFont(42);
   gth_CT14_pt1560_copy__13->Draw("sameaxis");
  
// ------------>Primitives in pad: BottomPad
   TPad *BottomPad = new TPad("BottomPad", "BottomPad",0.01,0.01,0.99,0.3);
   BottomPad->Draw();
   BottomPad->cd();
   BottomPad->Range(-0.2622024,-0.54,2.407831,1.66);
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
   
   Double_t g_ratio1_fx3058[8] = {
   2.5,
   7.5,
   12.5,
   17.5,
   30,
   55,
   90,
   155};
   Double_t g_ratio1_fy3058[8] = {
   1.051886,
   0.9629892,
   0.9177685,
   0.8807994,
   0.8254751,
   0.8258363,
   0.9999853,
   0.4738976};
   Double_t g_ratio1_felx3058[8] = {
   1.125,
   2.5,
   2.5,
   2.5,
   10,
   15,
   20,
   45};
   Double_t g_ratio1_fely3058[8] = {
   0.0410497,
   0.03707752,
   0.03494678,
   0.03302801,
   0.02977575,
   0.02880064,
   0.03578749,
   0.01729106};
   Double_t g_ratio1_fehx3058[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   10,
   15,
   20,
   45};
   Double_t g_ratio1_fehy3058[8] = {
   0.03524288,
   0.03131843,
   0.02930548,
   0.0276459,
   0.02481219,
   0.02401146,
   0.03021604,
   0.01469206};
   grae = new TGraphAsymmErrors(8,g_ratio1_fx3058,g_ratio1_fy3058,g_ratio1_felx3058,g_ratio1_fehx3058,g_ratio1_fely3058,g_ratio1_fehy3058);
   grae->SetName("g_ratio1");
   grae->SetTitle("Graph");

   ci = 1652;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_g_ratio13058 = new TH1F("Graph_g_ratio13058","Graph",100,1.375,200);
   Graph_g_ratio13058->SetMinimum(0.45);
   Graph_g_ratio13058->SetMaximum(1.55);
   Graph_g_ratio13058->SetDirectory(0);
   Graph_g_ratio13058->SetStats(0);
   Graph_g_ratio13058->SetLineStyle(0);
   Graph_g_ratio13058->SetMarkerStyle(20);
   Graph_g_ratio13058->GetXaxis()->SetTitle("p_{T} [GeV]");
   Graph_g_ratio13058->GetXaxis()->SetMoreLogLabels();
   Graph_g_ratio13058->GetXaxis()->SetNoExponent();
   Graph_g_ratio13058->GetXaxis()->SetLabelFont(42);
   Graph_g_ratio13058->GetXaxis()->SetLabelOffset(0.008400001);
   Graph_g_ratio13058->GetXaxis()->SetLabelSize(0.18);
   Graph_g_ratio13058->GetXaxis()->SetTitleSize(0.2);
   Graph_g_ratio13058->GetXaxis()->SetTitleOffset(0.88);
   Graph_g_ratio13058->GetXaxis()->SetTitleFont(42);
   Graph_g_ratio13058->GetYaxis()->SetTitle("Pred./Data");
   Graph_g_ratio13058->GetYaxis()->SetLabelFont(42);
   Graph_g_ratio13058->GetYaxis()->SetLabelOffset(0.007);
   Graph_g_ratio13058->GetYaxis()->SetLabelSize(0.12);
   Graph_g_ratio13058->GetYaxis()->SetTitleSize(0.15);
   Graph_g_ratio13058->GetYaxis()->SetTitleOffset(0.4);
   Graph_g_ratio13058->GetYaxis()->SetTitleFont(42);
   Graph_g_ratio13058->GetZaxis()->SetLabelFont(42);
   Graph_g_ratio13058->GetZaxis()->SetLabelOffset(0.007);
   Graph_g_ratio13058->GetZaxis()->SetLabelSize(0.05);
   Graph_g_ratio13058->GetZaxis()->SetTitleSize(0.06);
   Graph_g_ratio13058->GetZaxis()->SetTitleOffset(1);
   Graph_g_ratio13058->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g_ratio13058);
   
   grae->Draw("a5");
   
   Double_t g_ratio2_fx3059[8] = {
   2.5,
   7.5,
   12.5,
   17.5,
   30,
   55,
   90,
   155};
   Double_t g_ratio2_fy3059[8] = {
   0.9068178,
   0.8697655,
   0.8566695,
   0.8303092,
   0.803434,
   0.8169427,
   0.9948446,
   0.518113};
   Double_t g_ratio2_felx3059[8] = {
   1.125,
   2.5,
   2.5,
   2.5,
   10,
   15,
   20,
   45};
   Double_t g_ratio2_fely3059[8] = {
   0.06828866,
   0.06533675,
   0.0633803,
   0.05939663,
   0.05304289,
   0.05082254,
   0.06294876,
   0.0341088};
   Double_t g_ratio2_fehx3059[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   10,
   15,
   20,
   45};
   Double_t g_ratio2_fehy3059[8] = {
   0.06610967,
   0.0624827,
   0.06042634,
   0.05637508,
   0.05069401,
   0.0488555,
   0.06073545,
   0.03274785};
   grae = new TGraphAsymmErrors(8,g_ratio2_fx3059,g_ratio2_fy3059,g_ratio2_felx3059,g_ratio2_fehx3059,g_ratio2_fely3059,g_ratio2_fehy3059);
   grae->SetName("g_ratio2");
   grae->SetTitle("Graph");

   ci = 1653;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_g_ratio23059 = new TH1F("Graph_g_ratio23059","Graph",100,1.2375,219.8625);
   Graph_g_ratio23059->SetMinimum(0.4268466);
   Graph_g_ratio23059->SetMaximum(1.112738);
   Graph_g_ratio23059->SetDirectory(0);
   Graph_g_ratio23059->SetStats(0);
   Graph_g_ratio23059->SetLineStyle(0);
   Graph_g_ratio23059->SetMarkerStyle(20);
   Graph_g_ratio23059->GetXaxis()->SetLabelFont(42);
   Graph_g_ratio23059->GetXaxis()->SetLabelOffset(0.007);
   Graph_g_ratio23059->GetXaxis()->SetLabelSize(0.05);
   Graph_g_ratio23059->GetXaxis()->SetTitleSize(0.06);
   Graph_g_ratio23059->GetXaxis()->SetTitleOffset(0.9);
   Graph_g_ratio23059->GetXaxis()->SetTitleFont(42);
   Graph_g_ratio23059->GetYaxis()->SetLabelFont(42);
   Graph_g_ratio23059->GetYaxis()->SetLabelOffset(0.007);
   Graph_g_ratio23059->GetYaxis()->SetLabelSize(0.05);
   Graph_g_ratio23059->GetYaxis()->SetTitleSize(0.06);
   Graph_g_ratio23059->GetYaxis()->SetTitleOffset(1.25);
   Graph_g_ratio23059->GetYaxis()->SetTitleFont(42);
   Graph_g_ratio23059->GetZaxis()->SetLabelFont(42);
   Graph_g_ratio23059->GetZaxis()->SetLabelOffset(0.007);
   Graph_g_ratio23059->GetZaxis()->SetLabelSize(0.05);
   Graph_g_ratio23059->GetZaxis()->SetTitleSize(0.06);
   Graph_g_ratio23059->GetZaxis()->SetTitleOffset(1);
   Graph_g_ratio23059->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g_ratio23059);
   
   grae->Draw("5");
   
   Double_t g_ratio_refAtOne_fx3060[8] = {
   2.5,
   7.5,
   12.5,
   17.5,
   30,
   55,
   90,
   155};
   Double_t g_ratio_refAtOne_fy3060[8] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t g_ratio_refAtOne_felx3060[8] = {
   1.125,
   2.5,
   2.5,
   2.5,
   10,
   15,
   20,
   45};
   Double_t g_ratio_refAtOne_fely3060[8] = {
   0.09920257,
   0.0996302,
   0.1116706,
   0.1125542,
   0.06992964,
   0.1000533,
   0.2655385,
   0.2915529};
   Double_t g_ratio_refAtOne_fehx3060[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   10,
   15,
   20,
   45};
   Double_t g_ratio_refAtOne_fehy3060[8] = {
   0.09920257,
   0.0996302,
   0.1116706,
   0.1125542,
   0.06992964,
   0.1000533,
   0.2655385,
   0.2915529};
   grae = new TGraphAsymmErrors(8,g_ratio_refAtOne_fx3060,g_ratio_refAtOne_fy3060,g_ratio_refAtOne_felx3060,g_ratio_refAtOne_fehx3060,g_ratio_refAtOne_fely3060,g_ratio_refAtOne_fehy3060);
   grae->SetName("g_ratio_refAtOne");
   grae->SetTitle("Graph");

   ci = 1654;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_g_ratio_refAtOne3060 = new TH1F("Graph_g_ratio_refAtOne3060","Graph",100,1.2375,219.8625);
   Graph_g_ratio_refAtOne3060->SetMinimum(0.6501365);
   Graph_g_ratio_refAtOne3060->SetMaximum(1.349863);
   Graph_g_ratio_refAtOne3060->SetDirectory(0);
   Graph_g_ratio_refAtOne3060->SetStats(0);
   Graph_g_ratio_refAtOne3060->SetLineStyle(0);
   Graph_g_ratio_refAtOne3060->SetMarkerStyle(20);
   Graph_g_ratio_refAtOne3060->GetXaxis()->SetLabelFont(42);
   Graph_g_ratio_refAtOne3060->GetXaxis()->SetLabelOffset(0.007);
   Graph_g_ratio_refAtOne3060->GetXaxis()->SetLabelSize(0.05);
   Graph_g_ratio_refAtOne3060->GetXaxis()->SetTitleSize(0.06);
   Graph_g_ratio_refAtOne3060->GetXaxis()->SetTitleOffset(0.9);
   Graph_g_ratio_refAtOne3060->GetXaxis()->SetTitleFont(42);
   Graph_g_ratio_refAtOne3060->GetYaxis()->SetLabelFont(42);
   Graph_g_ratio_refAtOne3060->GetYaxis()->SetLabelOffset(0.007);
   Graph_g_ratio_refAtOne3060->GetYaxis()->SetLabelSize(0.05);
   Graph_g_ratio_refAtOne3060->GetYaxis()->SetTitleSize(0.06);
   Graph_g_ratio_refAtOne3060->GetYaxis()->SetTitleOffset(1.25);
   Graph_g_ratio_refAtOne3060->GetYaxis()->SetTitleFont(42);
   Graph_g_ratio_refAtOne3060->GetZaxis()->SetLabelFont(42);
   Graph_g_ratio_refAtOne3060->GetZaxis()->SetLabelOffset(0.007);
   Graph_g_ratio_refAtOne3060->GetZaxis()->SetLabelSize(0.05);
   Graph_g_ratio_refAtOne3060->GetZaxis()->SetTitleSize(0.06);
   Graph_g_ratio_refAtOne3060->GetZaxis()->SetTitleOffset(1);
   Graph_g_ratio_refAtOne3060->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g_ratio_refAtOne3060);
   
   grae->Draw("ep");
   
   TF1 *f_line7 = new TF1("f_line","1",-10000,10000, TF1::EAddToList::kDefault);
   f_line7->SetFillColor(19);
   f_line7->SetFillStyle(0);
   f_line7->SetMarkerStyle(20);

   ci = TColor::GetColor("#ff0000");
   f_line7->SetLineColor(ci);
   f_line7->SetLineWidth(1);
   f_line7->GetXaxis()->SetLabelFont(42);
   f_line7->GetXaxis()->SetLabelOffset(0.007);
   f_line7->GetXaxis()->SetLabelSize(0.05);
   f_line7->GetXaxis()->SetTitleSize(0.06);
   f_line7->GetXaxis()->SetTitleOffset(0.9);
   f_line7->GetXaxis()->SetTitleFont(42);
   f_line7->GetYaxis()->SetLabelFont(42);
   f_line7->GetYaxis()->SetLabelOffset(0.007);
   f_line7->GetYaxis()->SetLabelSize(0.05);
   f_line7->GetYaxis()->SetTitleSize(0.06);
   f_line7->GetYaxis()->SetTitleOffset(1.25);
   f_line7->GetYaxis()->SetTitleFont(42);
   f_line7->Draw("SAME");
   
   Double_t g_ratio_refAtOne_fx3061[8] = {
   2.5,
   7.5,
   12.5,
   17.5,
   30,
   55,
   90,
   155};
   Double_t g_ratio_refAtOne_fy3061[8] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t g_ratio_refAtOne_felx3061[8] = {
   1.125,
   2.5,
   2.5,
   2.5,
   10,
   15,
   20,
   45};
   Double_t g_ratio_refAtOne_fely3061[8] = {
   0.09920257,
   0.0996302,
   0.1116706,
   0.1125542,
   0.06992964,
   0.1000533,
   0.2655385,
   0.2915529};
   Double_t g_ratio_refAtOne_fehx3061[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   10,
   15,
   20,
   45};
   Double_t g_ratio_refAtOne_fehy3061[8] = {
   0.09920257,
   0.0996302,
   0.1116706,
   0.1125542,
   0.06992964,
   0.1000533,
   0.2655385,
   0.2915529};
   grae = new TGraphAsymmErrors(8,g_ratio_refAtOne_fx3061,g_ratio_refAtOne_fy3061,g_ratio_refAtOne_felx3061,g_ratio_refAtOne_fehx3061,g_ratio_refAtOne_fely3061,g_ratio_refAtOne_fehy3061);
   grae->SetName("g_ratio_refAtOne");
   grae->SetTitle("Graph");

   ci = 1654;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph_g_ratio_refAtOne30603061 = new TH1F("Graph_Graph_g_ratio_refAtOne30603061","Graph",100,1.2375,219.8625);
   Graph_Graph_g_ratio_refAtOne30603061->SetMinimum(0.6501365);
   Graph_Graph_g_ratio_refAtOne30603061->SetMaximum(1.349863);
   Graph_Graph_g_ratio_refAtOne30603061->SetDirectory(0);
   Graph_Graph_g_ratio_refAtOne30603061->SetStats(0);
   Graph_Graph_g_ratio_refAtOne30603061->SetLineStyle(0);
   Graph_Graph_g_ratio_refAtOne30603061->SetMarkerStyle(20);
   Graph_Graph_g_ratio_refAtOne30603061->GetXaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio_refAtOne30603061->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio_refAtOne30603061->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio_refAtOne30603061->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio_refAtOne30603061->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_g_ratio_refAtOne30603061->GetXaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio_refAtOne30603061->GetYaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio_refAtOne30603061->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio_refAtOne30603061->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio_refAtOne30603061->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio_refAtOne30603061->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_g_ratio_refAtOne30603061->GetYaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio_refAtOne30603061->GetZaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio_refAtOne30603061->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio_refAtOne30603061->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio_refAtOne30603061->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio_refAtOne30603061->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_g_ratio_refAtOne30603061->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_g_ratio_refAtOne30603061);
   
   grae->Draw("ep");
   
   Double_t g_ratio1_fx3062[8] = {
   2.5,
   7.5,
   12.5,
   17.5,
   30,
   55,
   90,
   155};
   Double_t g_ratio1_fy3062[8] = {
   1.051886,
   0.9629892,
   0.9177685,
   0.8807994,
   0.8254751,
   0.8258363,
   0.9999853,
   0.4738976};
   Double_t g_ratio1_felx3062[8] = {
   1.125,
   2.5,
   2.5,
   2.5,
   10,
   15,
   20,
   45};
   Double_t g_ratio1_fely3062[8] = {
   0.0410497,
   0.03707752,
   0.03494678,
   0.03302801,
   0.02977575,
   0.02880064,
   0.03578749,
   0.01729106};
   Double_t g_ratio1_fehx3062[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   10,
   15,
   20,
   45};
   Double_t g_ratio1_fehy3062[8] = {
   0.03524288,
   0.03131843,
   0.02930548,
   0.0276459,
   0.02481219,
   0.02401146,
   0.03021604,
   0.01469206};
   grae = new TGraphAsymmErrors(8,g_ratio1_fx3062,g_ratio1_fy3062,g_ratio1_felx3062,g_ratio1_fehx3062,g_ratio1_fely3062,g_ratio1_fehy3062);
   grae->SetName("g_ratio1");
   grae->SetTitle("Graph");

   ci = 1652;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph_g_ratio130583062 = new TH1F("Graph_Graph_g_ratio130583062","Graph",100,1.375,200);
   Graph_Graph_g_ratio130583062->SetMinimum(0.45);
   Graph_Graph_g_ratio130583062->SetMaximum(1.55);
   Graph_Graph_g_ratio130583062->SetDirectory(0);
   Graph_Graph_g_ratio130583062->SetStats(0);
   Graph_Graph_g_ratio130583062->SetLineStyle(0);
   Graph_Graph_g_ratio130583062->SetMarkerStyle(20);
   Graph_Graph_g_ratio130583062->GetXaxis()->SetTitle("p_{T} [GeV]");
   Graph_Graph_g_ratio130583062->GetXaxis()->SetMoreLogLabels();
   Graph_Graph_g_ratio130583062->GetXaxis()->SetNoExponent();
   Graph_Graph_g_ratio130583062->GetXaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio130583062->GetXaxis()->SetLabelOffset(0.008400001);
   Graph_Graph_g_ratio130583062->GetXaxis()->SetLabelSize(0.18);
   Graph_Graph_g_ratio130583062->GetXaxis()->SetTitleSize(0.2);
   Graph_Graph_g_ratio130583062->GetXaxis()->SetTitleOffset(0.88);
   Graph_Graph_g_ratio130583062->GetXaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio130583062->GetYaxis()->SetTitle("Pred./Data");
   Graph_Graph_g_ratio130583062->GetYaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio130583062->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio130583062->GetYaxis()->SetLabelSize(0.12);
   Graph_Graph_g_ratio130583062->GetYaxis()->SetTitleSize(0.15);
   Graph_Graph_g_ratio130583062->GetYaxis()->SetTitleOffset(0.4);
   Graph_Graph_g_ratio130583062->GetYaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio130583062->GetZaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio130583062->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio130583062->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio130583062->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio130583062->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_g_ratio130583062->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_g_ratio130583062);
   
   grae->Draw("5");
   
   Double_t g_ratio2_fx3063[8] = {
   2.5,
   7.5,
   12.5,
   17.5,
   30,
   55,
   90,
   155};
   Double_t g_ratio2_fy3063[8] = {
   0.9068178,
   0.8697655,
   0.8566695,
   0.8303092,
   0.803434,
   0.8169427,
   0.9948446,
   0.518113};
   Double_t g_ratio2_felx3063[8] = {
   1.125,
   2.5,
   2.5,
   2.5,
   10,
   15,
   20,
   45};
   Double_t g_ratio2_fely3063[8] = {
   0.06828866,
   0.06533675,
   0.0633803,
   0.05939663,
   0.05304289,
   0.05082254,
   0.06294876,
   0.0341088};
   Double_t g_ratio2_fehx3063[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   10,
   15,
   20,
   45};
   Double_t g_ratio2_fehy3063[8] = {
   0.06610967,
   0.0624827,
   0.06042634,
   0.05637508,
   0.05069401,
   0.0488555,
   0.06073545,
   0.03274785};
   grae = new TGraphAsymmErrors(8,g_ratio2_fx3063,g_ratio2_fy3063,g_ratio2_felx3063,g_ratio2_fehx3063,g_ratio2_fely3063,g_ratio2_fehy3063);
   grae->SetName("g_ratio2");
   grae->SetTitle("Graph");

   ci = 1653;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph_g_ratio230593063 = new TH1F("Graph_Graph_g_ratio230593063","Graph",100,1.2375,219.8625);
   Graph_Graph_g_ratio230593063->SetMinimum(0.4268466);
   Graph_Graph_g_ratio230593063->SetMaximum(1.112738);
   Graph_Graph_g_ratio230593063->SetDirectory(0);
   Graph_Graph_g_ratio230593063->SetStats(0);
   Graph_Graph_g_ratio230593063->SetLineStyle(0);
   Graph_Graph_g_ratio230593063->SetMarkerStyle(20);
   Graph_Graph_g_ratio230593063->GetXaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio230593063->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio230593063->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio230593063->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio230593063->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_g_ratio230593063->GetXaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio230593063->GetYaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio230593063->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio230593063->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio230593063->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio230593063->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_g_ratio230593063->GetYaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio230593063->GetZaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio230593063->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio230593063->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio230593063->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio230593063->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_g_ratio230593063->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_g_ratio230593063);
   
   grae->Draw("5");
   
   TH1F *g_ratio1_copy__14 = new TH1F("g_ratio1_copy__14","Graph",100,1.375,200);
   g_ratio1_copy__14->SetMinimum(0.45);
   g_ratio1_copy__14->SetMaximum(1.55);
   g_ratio1_copy__14->SetDirectory(0);
   g_ratio1_copy__14->SetStats(0);
   g_ratio1_copy__14->SetLineStyle(0);
   g_ratio1_copy__14->SetMarkerStyle(20);
   g_ratio1_copy__14->GetXaxis()->SetTitle("p_{T} [GeV]");
   g_ratio1_copy__14->GetXaxis()->SetMoreLogLabels();
   g_ratio1_copy__14->GetXaxis()->SetNoExponent();
   g_ratio1_copy__14->GetXaxis()->SetLabelFont(42);
   g_ratio1_copy__14->GetXaxis()->SetLabelOffset(0.008400001);
   g_ratio1_copy__14->GetXaxis()->SetLabelSize(0.18);
   g_ratio1_copy__14->GetXaxis()->SetTitleSize(0.2);
   g_ratio1_copy__14->GetXaxis()->SetTitleOffset(0.88);
   g_ratio1_copy__14->GetXaxis()->SetTitleFont(42);
   g_ratio1_copy__14->GetYaxis()->SetTitle("Pred./Data");
   g_ratio1_copy__14->GetYaxis()->SetLabelFont(42);
   g_ratio1_copy__14->GetYaxis()->SetLabelOffset(0.007);
   g_ratio1_copy__14->GetYaxis()->SetLabelSize(0.12);
   g_ratio1_copy__14->GetYaxis()->SetTitleSize(0.15);
   g_ratio1_copy__14->GetYaxis()->SetTitleOffset(0.4);
   g_ratio1_copy__14->GetYaxis()->SetTitleFont(42);
   g_ratio1_copy__14->GetZaxis()->SetLabelFont(42);
   g_ratio1_copy__14->GetZaxis()->SetLabelOffset(0.007);
   g_ratio1_copy__14->GetZaxis()->SetLabelSize(0.05);
   g_ratio1_copy__14->GetZaxis()->SetTitleSize(0.06);
   g_ratio1_copy__14->GetZaxis()->SetTitleOffset(1);
   g_ratio1_copy__14->GetZaxis()->SetTitleFont(42);
   g_ratio1_copy__14->Draw("sameaxis");
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
   TopPad->Modified();
   Plots/results/plots/result_pt1560_CT14_EPPS16->cd();
   Plots/results/plots/result_pt1560_CT14_EPPS16->Modified();
   Plots/results/plots/result_pt1560_CT14_EPPS16->cd();
   Plots/results/plots/result_pt1560_CT14_EPPS16->SetSelected(Plots/results/plots/result_pt1560_CT14_EPPS16);
}

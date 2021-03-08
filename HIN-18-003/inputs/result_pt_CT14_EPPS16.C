void result_pt_CT14_EPPS16()
{
//=========Macro generated from canvas: Plots/results/plots/result_pt_CT14_EPPS16/
//=========  (Tue Feb 23 17:21:34 2021) by ROOT version 6.16/00
   TCanvas *Plots/results/plots/result_pt_CT14_EPPS16 = new TCanvas("Plots/results/plots/result_pt_CT14_EPPS16", "",0,0,800,800);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   Plots/results/plots/result_pt_CT14_EPPS16->Range(0,0,1,1);
   Plots/results/plots/result_pt_CT14_EPPS16->SetFillColor(0);
   Plots/results/plots/result_pt_CT14_EPPS16->SetBorderMode(0);
   Plots/results/plots/result_pt_CT14_EPPS16->SetBorderSize(2);
   Plots/results/plots/result_pt_CT14_EPPS16->SetTickx(1);
   Plots/results/plots/result_pt_CT14_EPPS16->SetTicky(1);
   Plots/results/plots/result_pt_CT14_EPPS16->SetLeftMargin(0.16);
   Plots/results/plots/result_pt_CT14_EPPS16->SetRightMargin(0.02);
   Plots/results/plots/result_pt_CT14_EPPS16->SetTopMargin(0.05);
   Plots/results/plots/result_pt_CT14_EPPS16->SetBottomMargin(0.13);
   Plots/results/plots/result_pt_CT14_EPPS16->SetFrameFillStyle(0);
   Plots/results/plots/result_pt_CT14_EPPS16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: TopPad
   TPad *TopPad = new TPad("TopPad", "TopPad",0.01,0.01,0.99,0.99);
   TopPad->Draw();
   TopPad->cd();
   TopPad->Range(-0.6973801,-5.603027,2.6442,2.228589);
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
   5.170974,
   9.869126,
   8.882517,
   7.242159,
   5.892554,
   4.812093,
   4.011556,
   3.358894,
   2.246682,
   1.223302,
   0.7175766,
   0.3690275,
   0.1591698,
   0.07467699,
   0.0293011,
   0.008360744,
   0.001644434};
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
   0.1496512,
   0.2854148,
   0.2566285,
   0.2081423,
   0.1685621,
   0.137103,
   0.1141636,
   0.09487639,
   0.06348824,
   0.03436927,
   0.0200199,
   0.01027723,
   0.004449254,
   0.002110807,
   0.0008353281,
   0.0002471156,
   4.9401e-05};
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
   0.1172164,
   0.221842,
   0.1973348,
   0.1582459,
   0.1275006,
   0.1030628,
   0.08571107,
   0.07071961,
   0.0472479,
   0.02536041,
   0.01471443,
   0.007590729,
   0.003309102,
   0.001579931,
   0.0006300283,
   0.0001899788,
   3.792776e-05};
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
   Graph_gth_CT14_pt3019->SetMaximum(40);
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
   4.776857,
   9.290984,
   8.466948,
   6.989258,
   5.680461,
   4.744746,
   3.928272,
   3.281027,
   2.223611,
   1.229591,
   0.7291515,
   0.3690521,
   0.1631129,
   0.07821581,
   0.02921016,
   0.008320496,
   0.001749059};
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
   0.1526723,
   0.2993004,
   0.2744893,
   0.2268429,
   0.1840097,
   0.153137,
   0.1270878,
   0.1059218,
   0.07182258,
   0.03999565,
   0.02383157,
   0.01208326,
   0.005449385,
   0.002610804,
   0.001011304,
   0.0002955788,
   6.487305e-05};
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
   0.1437163,
   0.2809068,
   0.2586233,
   0.2134129,
   0.1732035,
   0.1428872,
   0.119018,
   0.09901323,
   0.06710974,
   0.03751231,
   0.02240059,
   0.01134667,
   0.005176867,
   0.002451251,
   0.0009638369,
   0.0002815019,
   6.162514e-05};
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
   Graph_gth_EPPS16_pt3020->SetMinimum(0.001515767);
   Graph_gth_EPPS16_pt3020->SetMaximum(10.52891);
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
   5.565777,
   9.633612,
   9.018576,
   7.08331,
   6.277724,
   5.016126,
   3.858644,
   3.245272,
   2.152856,
   1.147663,
   0.7010291,
   0.3588589,
   0.1491006,
   0.08162001,
   0.02981579,
   0.006361714,
   0.001500293};
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
   0.1904588,
   0.2770872,
   0.2664791,
   0.2319621,
   0.216229,
   0.1897327,
   0.1641729,
   0.1460682,
   0.06135799,
   0.04066533,
   0.03014464,
   0.01525783,
   0.009142004,
   0.006828075,
   0.002955013,
   0.001671636,
   0.0003578071};
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
   0.1904588,
   0.2770872,
   0.2664791,
   0.2319621,
   0.216229,
   0.1897327,
   0.1641729,
   0.1460682,
   0.06135799,
   0.04066533,
   0.03014464,
   0.01525783,
   0.009142004,
   0.006828075,
   0.002955013,
   0.001671636,
   0.0003578071};
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
   Graph_gres_pt3021->SetMinimum(0.001028238);
   Graph_gres_pt3021->SetMaximum(10.90166);
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
   gth_CT14_pt_copy__5->SetMaximum(40);
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
   0.9290658,
   1.024447,
   0.9849135,
   1.022426,
   0.9386449,
   0.9593246,
   1.039628,
   1.035011,
   1.043582,
   1.065907,
   1.023605,
   1.028336,
   1.067533,
   0.9149349,
   0.9827375,
   1.314228,
   1.096075};
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
   0.02688775,
   0.02962697,
   0.02845554,
   0.02938489,
   0.02685082,
   0.02733245,
   0.02958645,
   0.02923526,
   0.02949025,
   0.02994718,
   0.02855788,
   0.02863863,
   0.02984062,
   0.02586139,
   0.0280163,
   0.03884419,
   0.03292756};
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
   0.0210602,
   0.02302791,
   0.02188093,
   0.02234067,
   0.02031,
   0.0205463,
   0.02221274,
   0.02179158,
   0.02194662,
   0.02209744,
   0.02098976,
   0.02115241,
   0.02219375,
   0.01935715,
   0.02113069,
   0.02986283,
   0.02528023};
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
   0.8582552,
   0.9644341,
   0.9388343,
   0.986722,
   0.9048599,
   0.9458985,
   1.018045,
   1.011017,
   1.032866,
   1.071387,
   1.040116,
   1.028405,
   1.093979,
   0.9582921,
   0.9796875,
   1.307902,
   1.165811};
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
   0.02743055,
   0.03106834,
   0.03043599,
   0.03202498,
   0.02931153,
   0.03052893,
   0.03293586,
   0.0326388,
   0.03336154,
   0.03484966,
   0.03399512,
   0.03367134,
   0.03654837,
   0.0319873,
   0.03391841,
   0.04646213,
   0.04324024};
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
   0.02582143,
   0.02915904,
   0.02867673,
   0.03012898,
   0.02759018,
   0.02848557,
   0.03084451,
   0.03050999,
   0.03117243,
   0.03268583,
   0.03195387,
   0.03161874,
   0.03472063,
   0.03003248,
   0.03232639,
   0.04424938,
   0.04107539};
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
   Graph_g_ratio23023->SetMinimum(0.778692);
   Graph_g_ratio23023->SetMaximum(1.404284);
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
   0.03421962,
   0.02876255,
   0.02954781,
   0.0327477,
   0.03444385,
   0.03782454,
   0.04254677,
   0.04500952,
   0.02850075,
   0.03543317,
   0.04300055,
   0.04251764,
   0.06131433,
   0.08365687,
   0.09910899,
   0.262765,
   0.2384914};
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
   0.03421962,
   0.02876255,
   0.02954781,
   0.0327477,
   0.03444385,
   0.03782454,
   0.04254677,
   0.04500952,
   0.02850075,
   0.03543317,
   0.04300055,
   0.04251764,
   0.06131433,
   0.08365687,
   0.09910899,
   0.262765,
   0.2384914};
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
   Graph_g_ratio_refAtOne3024->SetMinimum(0.684682);
   Graph_g_ratio_refAtOne3024->SetMaximum(1.315318);
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
   0.03421962,
   0.02876255,
   0.02954781,
   0.0327477,
   0.03444385,
   0.03782454,
   0.04254677,
   0.04500952,
   0.02850075,
   0.03543317,
   0.04300055,
   0.04251764,
   0.06131433,
   0.08365687,
   0.09910899,
   0.262765,
   0.2384914};
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
   0.03421962,
   0.02876255,
   0.02954781,
   0.0327477,
   0.03444385,
   0.03782454,
   0.04254677,
   0.04500952,
   0.02850075,
   0.03543317,
   0.04300055,
   0.04251764,
   0.06131433,
   0.08365687,
   0.09910899,
   0.262765,
   0.2384914};
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
   Graph_Graph_g_ratio_refAtOne30243025->SetMinimum(0.684682);
   Graph_Graph_g_ratio_refAtOne30243025->SetMaximum(1.315318);
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
   0.9290658,
   1.024447,
   0.9849135,
   1.022426,
   0.9386449,
   0.9593246,
   1.039628,
   1.035011,
   1.043582,
   1.065907,
   1.023605,
   1.028336,
   1.067533,
   0.9149349,
   0.9827375,
   1.314228,
   1.096075};
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
   0.02688775,
   0.02962697,
   0.02845554,
   0.02938489,
   0.02685082,
   0.02733245,
   0.02958645,
   0.02923526,
   0.02949025,
   0.02994718,
   0.02855788,
   0.02863863,
   0.02984062,
   0.02586139,
   0.0280163,
   0.03884419,
   0.03292756};
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
   0.0210602,
   0.02302791,
   0.02188093,
   0.02234067,
   0.02031,
   0.0205463,
   0.02221274,
   0.02179158,
   0.02194662,
   0.02209744,
   0.02098976,
   0.02115241,
   0.02219375,
   0.01935715,
   0.02113069,
   0.02986283,
   0.02528023};
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
   0.8582552,
   0.9644341,
   0.9388343,
   0.986722,
   0.9048599,
   0.9458985,
   1.018045,
   1.011017,
   1.032866,
   1.071387,
   1.040116,
   1.028405,
   1.093979,
   0.9582921,
   0.9796875,
   1.307902,
   1.165811};
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
   0.02743055,
   0.03106834,
   0.03043599,
   0.03202498,
   0.02931153,
   0.03052893,
   0.03293586,
   0.0326388,
   0.03336154,
   0.03484966,
   0.03399512,
   0.03367134,
   0.03654837,
   0.0319873,
   0.03391841,
   0.04646213,
   0.04324024};
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
   0.02582143,
   0.02915904,
   0.02867673,
   0.03012898,
   0.02759018,
   0.02848557,
   0.03084451,
   0.03050999,
   0.03117243,
   0.03268583,
   0.03195387,
   0.03161874,
   0.03472063,
   0.03003248,
   0.03232639,
   0.04424938,
   0.04107539};
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
   Graph_Graph_g_ratio230233027->SetMinimum(0.778692);
   Graph_Graph_g_ratio230233027->SetMaximum(1.404284);
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
   TopPad->Modified();
   Plots/results/plots/result_pt_CT14_EPPS16->cd();
   Plots/results/plots/result_pt_CT14_EPPS16->Modified();
   Plots/results/plots/result_pt_CT14_EPPS16->cd();
   Plots/results/plots/result_pt_CT14_EPPS16->SetSelected(Plots/results/plots/result_pt_CT14_EPPS16);
}

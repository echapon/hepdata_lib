void grfbp_rap60120_CT14_EPPS16()
{
//=========Macro generated from canvas: Plots/grfbp_rap60120_CT14_EPPS16/
//=========  (Thu Feb 18 15:56:12 2021) by ROOT version 6.16/00
   TCanvas *Plots/grfbp_rap60120_CT14_EPPS16 = new TCanvas("Plots/grfbp_rap60120_CT14_EPPS16", "",0,0,800,800);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   Plots/grfbp_rap60120_CT14_EPPS16->Range(0,0,1,1);
   Plots/grfbp_rap60120_CT14_EPPS16->SetFillColor(0);
   Plots/grfbp_rap60120_CT14_EPPS16->SetBorderMode(0);
   Plots/grfbp_rap60120_CT14_EPPS16->SetBorderSize(2);
   Plots/grfbp_rap60120_CT14_EPPS16->SetTickx(1);
   Plots/grfbp_rap60120_CT14_EPPS16->SetTicky(1);
   Plots/grfbp_rap60120_CT14_EPPS16->SetLeftMargin(0.16);
   Plots/grfbp_rap60120_CT14_EPPS16->SetRightMargin(0.02);
   Plots/grfbp_rap60120_CT14_EPPS16->SetTopMargin(0.05);
   Plots/grfbp_rap60120_CT14_EPPS16->SetBottomMargin(0.13);
   Plots/grfbp_rap60120_CT14_EPPS16->SetFrameFillStyle(0);
   Plots/grfbp_rap60120_CT14_EPPS16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: TopPad
   TPad *TopPad = new TPad("TopPad", "TopPad",0.01,0.01,0.99,0.99);
   TopPad->Draw();
   TopPad->cd();
   TopPad->Range(-0.4050633,0.2370968,2.126582,1.527419);
   TopPad->SetFillColor(0);
   TopPad->SetBorderMode(0);
   TopPad->SetBorderSize(2);
   TopPad->SetTickx(1);
   TopPad->SetTicky(1);
   TopPad->SetLeftMargin(0.16);
   TopPad->SetRightMargin(0.05);
   TopPad->SetTopMargin(0.06);
   TopPad->SetBottomMargin(0.32);
   TopPad->SetFrameFillStyle(0);
   TopPad->SetFrameBorderMode(0);
   TopPad->SetFrameFillStyle(0);
   TopPad->SetFrameBorderMode(0);
   
   Double_t gth_CT14_rap60120_fx3013[10] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.865};
   Double_t gth_CT14_rap60120_fy3013[10] = {
   0.992227,
   1.006443,
   1.008519,
   1.007354,
   0.9912972,
   0.9986811,
   0.9976284,
   0.9957263,
   0.9892977,
   0.9826691};
   Double_t gth_CT14_rap60120_felx3013[10] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.065};
   Double_t gth_CT14_rap60120_fely3013[10] = {
   0.006148895,
   0.00636638,
   0.006368874,
   0.006422378,
   0.006384087,
   0.006665129,
   0.006570328,
   0.006565555,
   0.00659917,
   0.008078611};
   Double_t gth_CT14_rap60120_fehx3013[10] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.065};
   Double_t gth_CT14_rap60120_fehy3013[10] = {
   0.006149468,
   0.006352123,
   0.006357281,
   0.006429958,
   0.006422879,
   0.00672363,
   0.006584863,
   0.006641038,
   0.006664036,
   0.008147877};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,gth_CT14_rap60120_fx3013,gth_CT14_rap60120_fy3013,gth_CT14_rap60120_felx3013,gth_CT14_rap60120_fehx3013,gth_CT14_rap60120_fely3013,gth_CT14_rap60120_fehy3013);
   grae->SetName("gth_CT14_rap60120");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1638;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_gth_CT14_rap601203013 = new TH1F("Graph_gth_CT14_rap601203013","Graph",100,0,2);
   Graph_gth_CT14_rap601203013->SetMinimum(0.65);
   Graph_gth_CT14_rap601203013->SetMaximum(1.45);
   Graph_gth_CT14_rap601203013->SetDirectory(0);
   Graph_gth_CT14_rap601203013->SetStats(0);
   Graph_gth_CT14_rap601203013->SetLineStyle(0);
   Graph_gth_CT14_rap601203013->SetMarkerStyle(20);
   Graph_gth_CT14_rap601203013->GetXaxis()->SetTitle("|y_{CM}|");
   Graph_gth_CT14_rap601203013->GetXaxis()->SetMoreLogLabels();
   Graph_gth_CT14_rap601203013->GetXaxis()->SetNoExponent();
   Graph_gth_CT14_rap601203013->GetXaxis()->SetLabelFont(42);
   Graph_gth_CT14_rap601203013->GetXaxis()->SetLabelOffset(0.007);
   Graph_gth_CT14_rap601203013->GetXaxis()->SetLabelSize(0);
   Graph_gth_CT14_rap601203013->GetXaxis()->SetTitleSize(0);
   Graph_gth_CT14_rap601203013->GetXaxis()->SetTitleOffset(0.9);
   Graph_gth_CT14_rap601203013->GetXaxis()->SetTitleFont(42);
   Graph_gth_CT14_rap601203013->GetYaxis()->SetTitle("R_{FB}");
   Graph_gth_CT14_rap601203013->GetYaxis()->SetLabelFont(42);
   Graph_gth_CT14_rap601203013->GetYaxis()->SetLabelOffset(0.007);
   Graph_gth_CT14_rap601203013->GetYaxis()->SetLabelSize(0.05);
   Graph_gth_CT14_rap601203013->GetYaxis()->SetTitleSize(0.06);
   Graph_gth_CT14_rap601203013->GetYaxis()->SetTitleOffset(1.25);
   Graph_gth_CT14_rap601203013->GetYaxis()->SetTitleFont(42);
   Graph_gth_CT14_rap601203013->GetZaxis()->SetLabelFont(42);
   Graph_gth_CT14_rap601203013->GetZaxis()->SetLabelOffset(0.007);
   Graph_gth_CT14_rap601203013->GetZaxis()->SetLabelSize(0.05);
   Graph_gth_CT14_rap601203013->GetZaxis()->SetTitleSize(0.06);
   Graph_gth_CT14_rap601203013->GetZaxis()->SetTitleOffset(1);
   Graph_gth_CT14_rap601203013->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gth_CT14_rap601203013);
   
   grae->Draw("a5");
   
   Double_t gth_EPPS16_rap60120_fx3014[10] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.865};
   Double_t gth_EPPS16_rap60120_fy3014[10] = {
   0.9889387,
   0.957401,
   0.93716,
   0.9040552,
   0.8862052,
   0.8643563,
   0.8374694,
   0.8345487,
   0.8317037,
   0.8154962};
   Double_t gth_EPPS16_rap60120_felx3014[10] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.065};
   Double_t gth_EPPS16_rap60120_fely3014[10] = {
   0.01183469,
   0.02949042,
   0.04595241,
   0.05851249,
   0.06954091,
   0.07714193,
   0.08186292,
   0.08672655,
   0.09062906,
   0.0920227};
   Double_t gth_EPPS16_rap60120_fehx3014[10] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.065};
   Double_t gth_EPPS16_rap60120_fehy3014[10] = {
   0.01107041,
   0.02732779,
   0.04333692,
   0.05610404,
   0.06807243,
   0.07638511,
   0.08208637,
   0.08732829,
   0.09083404,
   0.09066636};
   grae = new TGraphAsymmErrors(10,gth_EPPS16_rap60120_fx3014,gth_EPPS16_rap60120_fy3014,gth_EPPS16_rap60120_felx3014,gth_EPPS16_rap60120_fehx3014,gth_EPPS16_rap60120_fely3014,gth_EPPS16_rap60120_fehy3014);
   grae->SetName("gth_EPPS16_rap60120");
   grae->SetTitle("Graph");

   ci = 1639;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_gth_EPPS16_rap601203014 = new TH1F("Graph_gth_EPPS16_rap601203014","Graph",100,0,2.123);
   Graph_gth_EPPS16_rap601203014->SetMinimum(0.6958199);
   Graph_gth_EPPS16_rap601203014->SetMaximum(1.027663);
   Graph_gth_EPPS16_rap601203014->SetDirectory(0);
   Graph_gth_EPPS16_rap601203014->SetStats(0);
   Graph_gth_EPPS16_rap601203014->SetLineStyle(0);
   Graph_gth_EPPS16_rap601203014->SetMarkerStyle(20);
   Graph_gth_EPPS16_rap601203014->GetXaxis()->SetLabelFont(42);
   Graph_gth_EPPS16_rap601203014->GetXaxis()->SetLabelOffset(0.007);
   Graph_gth_EPPS16_rap601203014->GetXaxis()->SetLabelSize(0.05);
   Graph_gth_EPPS16_rap601203014->GetXaxis()->SetTitleSize(0.06);
   Graph_gth_EPPS16_rap601203014->GetXaxis()->SetTitleOffset(0.9);
   Graph_gth_EPPS16_rap601203014->GetXaxis()->SetTitleFont(42);
   Graph_gth_EPPS16_rap601203014->GetYaxis()->SetLabelFont(42);
   Graph_gth_EPPS16_rap601203014->GetYaxis()->SetLabelOffset(0.007);
   Graph_gth_EPPS16_rap601203014->GetYaxis()->SetLabelSize(0.05);
   Graph_gth_EPPS16_rap601203014->GetYaxis()->SetTitleSize(0.06);
   Graph_gth_EPPS16_rap601203014->GetYaxis()->SetTitleOffset(1.25);
   Graph_gth_EPPS16_rap601203014->GetYaxis()->SetTitleFont(42);
   Graph_gth_EPPS16_rap601203014->GetZaxis()->SetLabelFont(42);
   Graph_gth_EPPS16_rap601203014->GetZaxis()->SetLabelOffset(0.007);
   Graph_gth_EPPS16_rap601203014->GetZaxis()->SetLabelSize(0.05);
   Graph_gth_EPPS16_rap601203014->GetZaxis()->SetTitleSize(0.06);
   Graph_gth_EPPS16_rap601203014->GetZaxis()->SetTitleOffset(1);
   Graph_gth_EPPS16_rap601203014->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gth_EPPS16_rap601203014);
   
   grae->Draw("5");
   
   Double_t gth_nCTEQ_W_Z_rap60120_fx3015[10] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.865};
   Double_t gth_nCTEQ_W_Z_rap60120_fy3015[10] = {
   0.9913449,
   0.96577,
   0.9516742,
   0.9261198,
   0.9168092,
   0.9042936,
   0.8844329,
   0.8903728,
   0.8914153,
   0.8774226};
   Double_t gth_nCTEQ_W_Z_rap60120_felx3015[10] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.065};
   Double_t gth_nCTEQ_W_Z_rap60120_fely3015[10] = {
   0.01296128,
   0.02837479,
   0.04366471,
   0.05618003,
   0.0667858,
   0.0740712,
   0.07748786,
   0.08095999,
   0.08214224,
   0.08114822};
   Double_t gth_nCTEQ_W_Z_rap60120_fehx3015[10] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.065};
   Double_t gth_nCTEQ_W_Z_rap60120_fehy3015[10] = {
   0.01290974,
   0.02817,
   0.04332305,
   0.05575258,
   0.06632529,
   0.07365792,
   0.07714957,
   0.08072791,
   0.08202201,
   0.08113504};
   grae = new TGraphAsymmErrors(10,gth_nCTEQ_W_Z_rap60120_fx3015,gth_nCTEQ_W_Z_rap60120_fy3015,gth_nCTEQ_W_Z_rap60120_felx3015,gth_nCTEQ_W_Z_rap60120_fehx3015,gth_nCTEQ_W_Z_rap60120_fely3015,gth_nCTEQ_W_Z_rap60120_fehy3015);
   grae->SetName("gth_nCTEQ_W_Z_rap60120");
   grae->SetTitle("Graph");

   ci = 1640;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_gth_nCTEQ_W_Z_rap601203015 = new TH1F("Graph_gth_nCTEQ_W_Z_rap601203015","Graph",100,0,2.123);
   Graph_gth_nCTEQ_W_Z_rap601203015->SetMinimum(0.7754764);
   Graph_gth_nCTEQ_W_Z_rap601203015->SetMaximum(1.025053);
   Graph_gth_nCTEQ_W_Z_rap601203015->SetDirectory(0);
   Graph_gth_nCTEQ_W_Z_rap601203015->SetStats(0);
   Graph_gth_nCTEQ_W_Z_rap601203015->SetLineStyle(0);
   Graph_gth_nCTEQ_W_Z_rap601203015->SetMarkerStyle(20);
   Graph_gth_nCTEQ_W_Z_rap601203015->GetXaxis()->SetLabelFont(42);
   Graph_gth_nCTEQ_W_Z_rap601203015->GetXaxis()->SetLabelOffset(0.007);
   Graph_gth_nCTEQ_W_Z_rap601203015->GetXaxis()->SetLabelSize(0.05);
   Graph_gth_nCTEQ_W_Z_rap601203015->GetXaxis()->SetTitleSize(0.06);
   Graph_gth_nCTEQ_W_Z_rap601203015->GetXaxis()->SetTitleOffset(0.9);
   Graph_gth_nCTEQ_W_Z_rap601203015->GetXaxis()->SetTitleFont(42);
   Graph_gth_nCTEQ_W_Z_rap601203015->GetYaxis()->SetLabelFont(42);
   Graph_gth_nCTEQ_W_Z_rap601203015->GetYaxis()->SetLabelOffset(0.007);
   Graph_gth_nCTEQ_W_Z_rap601203015->GetYaxis()->SetLabelSize(0.05);
   Graph_gth_nCTEQ_W_Z_rap601203015->GetYaxis()->SetTitleSize(0.06);
   Graph_gth_nCTEQ_W_Z_rap601203015->GetYaxis()->SetTitleOffset(1.25);
   Graph_gth_nCTEQ_W_Z_rap601203015->GetYaxis()->SetTitleFont(42);
   Graph_gth_nCTEQ_W_Z_rap601203015->GetZaxis()->SetLabelFont(42);
   Graph_gth_nCTEQ_W_Z_rap601203015->GetZaxis()->SetLabelOffset(0.007);
   Graph_gth_nCTEQ_W_Z_rap601203015->GetZaxis()->SetLabelSize(0.05);
   Graph_gth_nCTEQ_W_Z_rap601203015->GetZaxis()->SetTitleSize(0.06);
   Graph_gth_nCTEQ_W_Z_rap601203015->GetZaxis()->SetTitleOffset(1);
   Graph_gth_nCTEQ_W_Z_rap601203015->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gth_nCTEQ_W_Z_rap601203015);
   
   grae->Draw("5");
   
   Double_t divide_f_rap60120_temp_by_b_rap60120_temp_fx3016[10] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.865};
   Double_t divide_f_rap60120_temp_by_b_rap60120_temp_fy3016[10] = {
   1.119132,
   1.028217,
   1.068481,
   0.9785782,
   0.9605338,
   0.9199339,
   0.9161518,
   0.8635082,
   0.7542698,
   1.041364};
   Double_t divide_f_rap60120_temp_by_b_rap60120_temp_felx3016[10] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.065};
   Double_t divide_f_rap60120_temp_by_b_rap60120_temp_fely3016[10] = {
   0.04980623,
   0.04660571,
   0.04801002,
   0.04421272,
   0.04606789,
   0.04513497,
   0.04918801,
   0.05430275,
   0.06518621,
   0.1763141};
   Double_t divide_f_rap60120_temp_by_b_rap60120_temp_fehx3016[10] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.065};
   Double_t divide_f_rap60120_temp_by_b_rap60120_temp_fehy3016[10] = {
   0.04980623,
   0.04660571,
   0.04801002,
   0.04421272,
   0.04606789,
   0.04513497,
   0.04918801,
   0.05430275,
   0.06518621,
   0.1763141};
   grae = new TGraphAsymmErrors(10,divide_f_rap60120_temp_by_b_rap60120_temp_fx3016,divide_f_rap60120_temp_by_b_rap60120_temp_fy3016,divide_f_rap60120_temp_by_b_rap60120_temp_felx3016,divide_f_rap60120_temp_by_b_rap60120_temp_fehx3016,divide_f_rap60120_temp_by_b_rap60120_temp_fely3016,divide_f_rap60120_temp_by_b_rap60120_temp_fehy3016);
   grae->SetName("divide_f_rap60120_temp_by_b_rap60120_temp");
   grae->SetTitle("");

   ci = 1641;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_divide_f_rap60120_temp_by_b_rap60120_temp3016 = new TH1F("Graph_divide_f_rap60120_temp_by_b_rap60120_temp3016","",100,0,2.123);
   Graph_divide_f_rap60120_temp_by_b_rap60120_temp3016->SetMinimum(0.6362242);
   Graph_divide_f_rap60120_temp_by_b_rap60120_temp3016->SetMaximum(1.270537);
   Graph_divide_f_rap60120_temp_by_b_rap60120_temp3016->SetDirectory(0);
   Graph_divide_f_rap60120_temp_by_b_rap60120_temp3016->SetStats(0);
   Graph_divide_f_rap60120_temp_by_b_rap60120_temp3016->SetLineStyle(0);
   Graph_divide_f_rap60120_temp_by_b_rap60120_temp3016->SetMarkerStyle(20);
   Graph_divide_f_rap60120_temp_by_b_rap60120_temp3016->GetXaxis()->SetLabelFont(42);
   Graph_divide_f_rap60120_temp_by_b_rap60120_temp3016->GetXaxis()->SetLabelOffset(0.007);
   Graph_divide_f_rap60120_temp_by_b_rap60120_temp3016->GetXaxis()->SetLabelSize(0.05);
   Graph_divide_f_rap60120_temp_by_b_rap60120_temp3016->GetXaxis()->SetTitleSize(0.06);
   Graph_divide_f_rap60120_temp_by_b_rap60120_temp3016->GetXaxis()->SetTitleOffset(0.9);
   Graph_divide_f_rap60120_temp_by_b_rap60120_temp3016->GetXaxis()->SetTitleFont(42);
   Graph_divide_f_rap60120_temp_by_b_rap60120_temp3016->GetYaxis()->SetLabelFont(42);
   Graph_divide_f_rap60120_temp_by_b_rap60120_temp3016->GetYaxis()->SetLabelOffset(0.007);
   Graph_divide_f_rap60120_temp_by_b_rap60120_temp3016->GetYaxis()->SetLabelSize(0.05);
   Graph_divide_f_rap60120_temp_by_b_rap60120_temp3016->GetYaxis()->SetTitleSize(0.06);
   Graph_divide_f_rap60120_temp_by_b_rap60120_temp3016->GetYaxis()->SetTitleOffset(1.25);
   Graph_divide_f_rap60120_temp_by_b_rap60120_temp3016->GetYaxis()->SetTitleFont(42);
   Graph_divide_f_rap60120_temp_by_b_rap60120_temp3016->GetZaxis()->SetLabelFont(42);
   Graph_divide_f_rap60120_temp_by_b_rap60120_temp3016->GetZaxis()->SetLabelOffset(0.007);
   Graph_divide_f_rap60120_temp_by_b_rap60120_temp3016->GetZaxis()->SetLabelSize(0.05);
   Graph_divide_f_rap60120_temp_by_b_rap60120_temp3016->GetZaxis()->SetTitleSize(0.06);
   Graph_divide_f_rap60120_temp_by_b_rap60120_temp3016->GetZaxis()->SetTitleOffset(1);
   Graph_divide_f_rap60120_temp_by_b_rap60120_temp3016->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_divide_f_rap60120_temp_by_b_rap60120_temp3016);
   
   grae->Draw("ep");
   
   TLegend *leg = new TLegend(0.56,0.72,0.94,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("divide_f_rap60120_temp_by_b_rap60120_temp","Data","lpf");

   ci = 1641;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(62);
   entry=leg->AddEntry("gth_CT14_rap60120","CT14","F");

   ci = 1638;
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
   entry=leg->AddEntry("gth_EPPS16_rap60120","CT14+EPPS16","F");

   ci = 1639;
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
   entry=leg->AddEntry("gth_nCTEQ_W_Z_rap60120","CT14+nCTEQ W/Z","F");

   ci = 1640;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *gth_CT14_rap60120_copy__3 = new TH1F("gth_CT14_rap60120_copy__3","Graph",100,0,2);
   gth_CT14_rap60120_copy__3->SetMinimum(0.65);
   gth_CT14_rap60120_copy__3->SetMaximum(1.45);
   gth_CT14_rap60120_copy__3->SetDirectory(0);
   gth_CT14_rap60120_copy__3->SetStats(0);
   gth_CT14_rap60120_copy__3->SetLineStyle(0);
   gth_CT14_rap60120_copy__3->SetMarkerStyle(20);
   gth_CT14_rap60120_copy__3->GetXaxis()->SetTitle("|y_{CM}|");
   gth_CT14_rap60120_copy__3->GetXaxis()->SetMoreLogLabels();
   gth_CT14_rap60120_copy__3->GetXaxis()->SetNoExponent();
   gth_CT14_rap60120_copy__3->GetXaxis()->SetLabelFont(42);
   gth_CT14_rap60120_copy__3->GetXaxis()->SetLabelOffset(0.007);
   gth_CT14_rap60120_copy__3->GetXaxis()->SetLabelSize(0);
   gth_CT14_rap60120_copy__3->GetXaxis()->SetTitleSize(0);
   gth_CT14_rap60120_copy__3->GetXaxis()->SetTitleOffset(0.9);
   gth_CT14_rap60120_copy__3->GetXaxis()->SetTitleFont(42);
   gth_CT14_rap60120_copy__3->GetYaxis()->SetTitle("R_{FB}");
   gth_CT14_rap60120_copy__3->GetYaxis()->SetLabelFont(42);
   gth_CT14_rap60120_copy__3->GetYaxis()->SetLabelOffset(0.007);
   gth_CT14_rap60120_copy__3->GetYaxis()->SetLabelSize(0.05);
   gth_CT14_rap60120_copy__3->GetYaxis()->SetTitleSize(0.06);
   gth_CT14_rap60120_copy__3->GetYaxis()->SetTitleOffset(1.25);
   gth_CT14_rap60120_copy__3->GetYaxis()->SetTitleFont(42);
   gth_CT14_rap60120_copy__3->GetZaxis()->SetLabelFont(42);
   gth_CT14_rap60120_copy__3->GetZaxis()->SetLabelOffset(0.007);
   gth_CT14_rap60120_copy__3->GetZaxis()->SetLabelSize(0.05);
   gth_CT14_rap60120_copy__3->GetZaxis()->SetTitleSize(0.06);
   gth_CT14_rap60120_copy__3->GetZaxis()->SetTitleOffset(1);
   gth_CT14_rap60120_copy__3->GetZaxis()->SetTitleFont(42);
   gth_CT14_rap60120_copy__3->Draw("sameaxis");
  
// ------------>Primitives in pad: BottomPad
   TPad *BottomPad = new TPad("BottomPad", "BottomPad",0.01,0.01,0.99,0.31);
   BottomPad->Draw();
   BottomPad->cd();
   BottomPad->Range(-0.3703704,-0.1045455,2.098765,1.531818);
   BottomPad->SetFillColor(0);
   BottomPad->SetBorderMode(0);
   BottomPad->SetBorderSize(2);
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
   
   Double_t g_ratio1_fx3017[10] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.865};
   Double_t g_ratio1_fy3017[10] = {
   0.8866038,
   0.978824,
   0.9438809,
   1.029406,
   1.032027,
   1.085601,
   1.088933,
   1.153117,
   1.311597,
   0.9436366};
   Double_t g_ratio1_felx3017[10] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.065};
   Double_t g_ratio1_fely3017[10] = {
   0.005494341,
   0.006191671,
   0.005960681,
   0.006562968,
   0.006646395,
   0.007245226,
   0.007171658,
   0.00760335,
   0.008749083,
   0.007757721};
   Double_t g_ratio1_fehx3017[10] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.065};
   Double_t g_ratio1_fehy3017[10] = {
   0.005494853,
   0.006177804,
   0.005949831,
   0.006570714,
   0.006686781,
   0.007308818,
   0.007187524,
   0.007690765,
   0.008835082,
   0.007824236};
   grae = new TGraphAsymmErrors(10,g_ratio1_fx3017,g_ratio1_fy3017,g_ratio1_felx3017,g_ratio1_fehx3017,g_ratio1_fely3017,g_ratio1_fehy3017);
   grae->SetName("g_ratio1");
   grae->SetTitle("Graph");

   ci = 1638;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_g_ratio13017 = new TH1F("Graph_g_ratio13017","Graph",100,0,2);
   Graph_g_ratio13017->SetMinimum(0.55);
   Graph_g_ratio13017->SetMaximum(1.45);
   Graph_g_ratio13017->SetDirectory(0);
   Graph_g_ratio13017->SetStats(0);
   Graph_g_ratio13017->SetLineStyle(0);
   Graph_g_ratio13017->SetMarkerStyle(20);
   Graph_g_ratio13017->GetXaxis()->SetTitle("|y_{CM}|");
   Graph_g_ratio13017->GetXaxis()->SetMoreLogLabels();
   Graph_g_ratio13017->GetXaxis()->SetNoExponent();
   Graph_g_ratio13017->GetXaxis()->SetLabelFont(42);
   Graph_g_ratio13017->GetXaxis()->SetLabelOffset(0.007);
   Graph_g_ratio13017->GetXaxis()->SetLabelSize(0.15);
   Graph_g_ratio13017->GetXaxis()->SetTitleSize(0.2);
   Graph_g_ratio13017->GetXaxis()->SetTitleOffset(0.88);
   Graph_g_ratio13017->GetXaxis()->SetTitleFont(42);
   Graph_g_ratio13017->GetYaxis()->SetTitle("Pred./Data");
   Graph_g_ratio13017->GetYaxis()->SetNdivisions(305);
   Graph_g_ratio13017->GetYaxis()->SetLabelFont(42);
   Graph_g_ratio13017->GetYaxis()->SetLabelOffset(0.007);
   Graph_g_ratio13017->GetYaxis()->SetLabelSize(0.15);
   Graph_g_ratio13017->GetYaxis()->SetTitleSize(0.2);
   Graph_g_ratio13017->GetYaxis()->SetTitleOffset(0.4);
   Graph_g_ratio13017->GetYaxis()->SetTitleFont(42);
   Graph_g_ratio13017->GetZaxis()->SetLabelFont(42);
   Graph_g_ratio13017->GetZaxis()->SetLabelOffset(0.007);
   Graph_g_ratio13017->GetZaxis()->SetLabelSize(0.05);
   Graph_g_ratio13017->GetZaxis()->SetTitleSize(0.06);
   Graph_g_ratio13017->GetZaxis()->SetTitleOffset(1);
   Graph_g_ratio13017->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g_ratio13017);
   
   grae->Draw("a5");
   
   Double_t g_ratio2_fx3018[10] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.865};
   Double_t g_ratio2_fy3018[10] = {
   0.8836655,
   0.9311274,
   0.8770958,
   0.9238456,
   0.9226174,
   0.9395852,
   0.9141163,
   0.966463,
   1.102661,
   0.783104};
   Double_t g_ratio2_felx3018[10] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.065};
   Double_t g_ratio2_fely3018[10] = {
   0.01057488,
   0.02868113,
   0.04300724,
   0.05979337,
   0.07239819,
   0.08385595,
   0.08935519,
   0.1004351,
   0.1201547,
   0.08836747};
   Double_t g_ratio2_fehx3018[10] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.065};
   Double_t g_ratio2_fehy3018[10] = {
   0.009891955,
   0.02657785,
   0.04055938,
   0.0573322,
   0.07086937,
   0.08303325,
   0.08959909,
   0.101132,
   0.1204265,
   0.08706501};
   grae = new TGraphAsymmErrors(10,g_ratio2_fx3018,g_ratio2_fy3018,g_ratio2_felx3018,g_ratio2_fehx3018,g_ratio2_fely3018,g_ratio2_fehy3018);
   grae->SetName("g_ratio2");
   grae->SetTitle("Graph");

   ci = 1639;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_g_ratio23018 = new TH1F("Graph_g_ratio23018","Graph",100,0,2.123);
   Graph_g_ratio23018->SetMinimum(0.6419014);
   Graph_g_ratio23018->SetMaximum(1.275922);
   Graph_g_ratio23018->SetDirectory(0);
   Graph_g_ratio23018->SetStats(0);
   Graph_g_ratio23018->SetLineStyle(0);
   Graph_g_ratio23018->SetMarkerStyle(20);
   Graph_g_ratio23018->GetXaxis()->SetLabelFont(42);
   Graph_g_ratio23018->GetXaxis()->SetLabelOffset(0.007);
   Graph_g_ratio23018->GetXaxis()->SetLabelSize(0.05);
   Graph_g_ratio23018->GetXaxis()->SetTitleSize(0.06);
   Graph_g_ratio23018->GetXaxis()->SetTitleOffset(0.9);
   Graph_g_ratio23018->GetXaxis()->SetTitleFont(42);
   Graph_g_ratio23018->GetYaxis()->SetLabelFont(42);
   Graph_g_ratio23018->GetYaxis()->SetLabelOffset(0.007);
   Graph_g_ratio23018->GetYaxis()->SetLabelSize(0.05);
   Graph_g_ratio23018->GetYaxis()->SetTitleSize(0.06);
   Graph_g_ratio23018->GetYaxis()->SetTitleOffset(1.25);
   Graph_g_ratio23018->GetYaxis()->SetTitleFont(42);
   Graph_g_ratio23018->GetZaxis()->SetLabelFont(42);
   Graph_g_ratio23018->GetZaxis()->SetLabelOffset(0.007);
   Graph_g_ratio23018->GetZaxis()->SetLabelSize(0.05);
   Graph_g_ratio23018->GetZaxis()->SetTitleSize(0.06);
   Graph_g_ratio23018->GetZaxis()->SetTitleOffset(1);
   Graph_g_ratio23018->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g_ratio23018);
   
   grae->Draw("5");
   
   Double_t g_ratio3_fx3019[10] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.865};
   Double_t g_ratio3_fy3019[10] = {
   0.8858156,
   0.9392668,
   0.8906797,
   0.9463932,
   0.9544789,
   0.9829985,
   0.965378,
   1.031111,
   1.181825,
   0.8425706};
   Double_t g_ratio3_felx3019[10] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.065};
   Double_t g_ratio3_fely3019[10] = {
   0.01158155,
   0.02759612,
   0.04086616,
   0.05740985,
   0.06952988,
   0.08051796,
   0.08457971,
   0.09375706,
   0.108903,
   0.07792494};
   Double_t g_ratio3_fehx3019[10] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.065};
   Double_t g_ratio3_fehy3019[10] = {
   0.01153549,
   0.02739694,
   0.0405464,
   0.05697304,
   0.06905045,
   0.08006871,
   0.08421046,
   0.0934883,
   0.1087436,
   0.07791228};
   grae = new TGraphAsymmErrors(10,g_ratio3_fx3019,g_ratio3_fy3019,g_ratio3_felx3019,g_ratio3_fehx3019,g_ratio3_fely3019,g_ratio3_fehy3019);
   grae->SetName("g_ratio3");
   grae->SetTitle("Graph");

   ci = 1640;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_g_ratio33019 = new TH1F("Graph_g_ratio33019","Graph",100,0,2.123);
   Graph_g_ratio33019->SetMinimum(0.7120533);
   Graph_g_ratio33019->SetMaximum(1.343161);
   Graph_g_ratio33019->SetDirectory(0);
   Graph_g_ratio33019->SetStats(0);
   Graph_g_ratio33019->SetLineStyle(0);
   Graph_g_ratio33019->SetMarkerStyle(20);
   Graph_g_ratio33019->GetXaxis()->SetLabelFont(42);
   Graph_g_ratio33019->GetXaxis()->SetLabelOffset(0.007);
   Graph_g_ratio33019->GetXaxis()->SetLabelSize(0.05);
   Graph_g_ratio33019->GetXaxis()->SetTitleSize(0.06);
   Graph_g_ratio33019->GetXaxis()->SetTitleOffset(0.9);
   Graph_g_ratio33019->GetXaxis()->SetTitleFont(42);
   Graph_g_ratio33019->GetYaxis()->SetLabelFont(42);
   Graph_g_ratio33019->GetYaxis()->SetLabelOffset(0.007);
   Graph_g_ratio33019->GetYaxis()->SetLabelSize(0.05);
   Graph_g_ratio33019->GetYaxis()->SetTitleSize(0.06);
   Graph_g_ratio33019->GetYaxis()->SetTitleOffset(1.25);
   Graph_g_ratio33019->GetYaxis()->SetTitleFont(42);
   Graph_g_ratio33019->GetZaxis()->SetLabelFont(42);
   Graph_g_ratio33019->GetZaxis()->SetLabelOffset(0.007);
   Graph_g_ratio33019->GetZaxis()->SetLabelSize(0.05);
   Graph_g_ratio33019->GetZaxis()->SetTitleSize(0.06);
   Graph_g_ratio33019->GetZaxis()->SetTitleOffset(1);
   Graph_g_ratio33019->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g_ratio33019);
   
   grae->Draw("5");
   
   Double_t g_ratio_refAtOne_fx3020[10] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.865};
   Double_t g_ratio_refAtOne_fy3020[10] = {
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
   Double_t g_ratio_refAtOne_felx3020[10] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.065};
   Double_t g_ratio_refAtOne_fely3020[10] = {
   0.04450433,
   0.04532673,
   0.04493297,
   0.04518057,
   0.04796071,
   0.04906328,
   0.0536898,
   0.0628862,
   0.08642293,
   0.1693107};
   Double_t g_ratio_refAtOne_fehx3020[10] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.065};
   Double_t g_ratio_refAtOne_fehy3020[10] = {
   0.04450433,
   0.04532673,
   0.04493297,
   0.04518057,
   0.04796071,
   0.04906328,
   0.0536898,
   0.0628862,
   0.08642293,
   0.1693107};
   grae = new TGraphAsymmErrors(10,g_ratio_refAtOne_fx3020,g_ratio_refAtOne_fy3020,g_ratio_refAtOne_felx3020,g_ratio_refAtOne_fehx3020,g_ratio_refAtOne_fely3020,g_ratio_refAtOne_fehy3020);
   grae->SetName("g_ratio_refAtOne");
   grae->SetTitle("");

   ci = 1641;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_g_ratio_refAtOne3020 = new TH1F("Graph_g_ratio_refAtOne3020","",100,0,2.123);
   Graph_g_ratio_refAtOne3020->SetMinimum(0.7968271);
   Graph_g_ratio_refAtOne3020->SetMaximum(1.203173);
   Graph_g_ratio_refAtOne3020->SetDirectory(0);
   Graph_g_ratio_refAtOne3020->SetStats(0);
   Graph_g_ratio_refAtOne3020->SetLineStyle(0);
   Graph_g_ratio_refAtOne3020->SetMarkerStyle(20);
   Graph_g_ratio_refAtOne3020->GetXaxis()->SetLabelFont(42);
   Graph_g_ratio_refAtOne3020->GetXaxis()->SetLabelOffset(0.007);
   Graph_g_ratio_refAtOne3020->GetXaxis()->SetLabelSize(0.05);
   Graph_g_ratio_refAtOne3020->GetXaxis()->SetTitleSize(0.06);
   Graph_g_ratio_refAtOne3020->GetXaxis()->SetTitleOffset(0.9);
   Graph_g_ratio_refAtOne3020->GetXaxis()->SetTitleFont(42);
   Graph_g_ratio_refAtOne3020->GetYaxis()->SetLabelFont(42);
   Graph_g_ratio_refAtOne3020->GetYaxis()->SetLabelOffset(0.007);
   Graph_g_ratio_refAtOne3020->GetYaxis()->SetLabelSize(0.05);
   Graph_g_ratio_refAtOne3020->GetYaxis()->SetTitleSize(0.06);
   Graph_g_ratio_refAtOne3020->GetYaxis()->SetTitleOffset(1.25);
   Graph_g_ratio_refAtOne3020->GetYaxis()->SetTitleFont(42);
   Graph_g_ratio_refAtOne3020->GetZaxis()->SetLabelFont(42);
   Graph_g_ratio_refAtOne3020->GetZaxis()->SetLabelOffset(0.007);
   Graph_g_ratio_refAtOne3020->GetZaxis()->SetLabelSize(0.05);
   Graph_g_ratio_refAtOne3020->GetZaxis()->SetTitleSize(0.06);
   Graph_g_ratio_refAtOne3020->GetZaxis()->SetTitleOffset(1);
   Graph_g_ratio_refAtOne3020->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g_ratio_refAtOne3020);
   
   grae->Draw("ep");
   
   TF1 *f_line2 = new TF1("f_line","1",-10000,10000, TF1::EAddToList::kDefault);
   f_line2->SetFillColor(19);
   f_line2->SetFillStyle(0);
   f_line2->SetMarkerStyle(20);

   ci = TColor::GetColor("#ff0000");
   f_line2->SetLineColor(ci);
   f_line2->SetLineWidth(1);
   f_line2->GetXaxis()->SetLabelFont(42);
   f_line2->GetXaxis()->SetLabelOffset(0.007);
   f_line2->GetXaxis()->SetLabelSize(0.05);
   f_line2->GetXaxis()->SetTitleSize(0.06);
   f_line2->GetXaxis()->SetTitleOffset(0.9);
   f_line2->GetXaxis()->SetTitleFont(42);
   f_line2->GetYaxis()->SetLabelFont(42);
   f_line2->GetYaxis()->SetLabelOffset(0.007);
   f_line2->GetYaxis()->SetLabelSize(0.05);
   f_line2->GetYaxis()->SetTitleSize(0.06);
   f_line2->GetYaxis()->SetTitleOffset(1.25);
   f_line2->GetYaxis()->SetTitleFont(42);
   f_line2->Draw("SAME");
   
   Double_t g_ratio_refAtOne_fx3021[10] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.865};
   Double_t g_ratio_refAtOne_fy3021[10] = {
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
   Double_t g_ratio_refAtOne_felx3021[10] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.065};
   Double_t g_ratio_refAtOne_fely3021[10] = {
   0.04450433,
   0.04532673,
   0.04493297,
   0.04518057,
   0.04796071,
   0.04906328,
   0.0536898,
   0.0628862,
   0.08642293,
   0.1693107};
   Double_t g_ratio_refAtOne_fehx3021[10] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.065};
   Double_t g_ratio_refAtOne_fehy3021[10] = {
   0.04450433,
   0.04532673,
   0.04493297,
   0.04518057,
   0.04796071,
   0.04906328,
   0.0536898,
   0.0628862,
   0.08642293,
   0.1693107};
   grae = new TGraphAsymmErrors(10,g_ratio_refAtOne_fx3021,g_ratio_refAtOne_fy3021,g_ratio_refAtOne_felx3021,g_ratio_refAtOne_fehx3021,g_ratio_refAtOne_fely3021,g_ratio_refAtOne_fehy3021);
   grae->SetName("g_ratio_refAtOne");
   grae->SetTitle("");

   ci = 1641;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph_g_ratio_refAtOne30203021 = new TH1F("Graph_Graph_g_ratio_refAtOne30203021","",100,0,2.123);
   Graph_Graph_g_ratio_refAtOne30203021->SetMinimum(0.7968271);
   Graph_Graph_g_ratio_refAtOne30203021->SetMaximum(1.203173);
   Graph_Graph_g_ratio_refAtOne30203021->SetDirectory(0);
   Graph_Graph_g_ratio_refAtOne30203021->SetStats(0);
   Graph_Graph_g_ratio_refAtOne30203021->SetLineStyle(0);
   Graph_Graph_g_ratio_refAtOne30203021->SetMarkerStyle(20);
   Graph_Graph_g_ratio_refAtOne30203021->GetXaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio_refAtOne30203021->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio_refAtOne30203021->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio_refAtOne30203021->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio_refAtOne30203021->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_g_ratio_refAtOne30203021->GetXaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio_refAtOne30203021->GetYaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio_refAtOne30203021->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio_refAtOne30203021->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio_refAtOne30203021->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio_refAtOne30203021->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_g_ratio_refAtOne30203021->GetYaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio_refAtOne30203021->GetZaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio_refAtOne30203021->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio_refAtOne30203021->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio_refAtOne30203021->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio_refAtOne30203021->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_g_ratio_refAtOne30203021->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_g_ratio_refAtOne30203021);
   
   grae->Draw("ep");
   
   Double_t g_ratio1_fx3022[10] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.865};
   Double_t g_ratio1_fy3022[10] = {
   0.8866038,
   0.978824,
   0.9438809,
   1.029406,
   1.032027,
   1.085601,
   1.088933,
   1.153117,
   1.311597,
   0.9436366};
   Double_t g_ratio1_felx3022[10] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.065};
   Double_t g_ratio1_fely3022[10] = {
   0.005494341,
   0.006191671,
   0.005960681,
   0.006562968,
   0.006646395,
   0.007245226,
   0.007171658,
   0.00760335,
   0.008749083,
   0.007757721};
   Double_t g_ratio1_fehx3022[10] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.065};
   Double_t g_ratio1_fehy3022[10] = {
   0.005494853,
   0.006177804,
   0.005949831,
   0.006570714,
   0.006686781,
   0.007308818,
   0.007187524,
   0.007690765,
   0.008835082,
   0.007824236};
   grae = new TGraphAsymmErrors(10,g_ratio1_fx3022,g_ratio1_fy3022,g_ratio1_felx3022,g_ratio1_fehx3022,g_ratio1_fely3022,g_ratio1_fehy3022);
   grae->SetName("g_ratio1");
   grae->SetTitle("Graph");

   ci = 1638;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph_g_ratio130173022 = new TH1F("Graph_Graph_g_ratio130173022","Graph",100,0,2);
   Graph_Graph_g_ratio130173022->SetMinimum(0.55);
   Graph_Graph_g_ratio130173022->SetMaximum(1.45);
   Graph_Graph_g_ratio130173022->SetDirectory(0);
   Graph_Graph_g_ratio130173022->SetStats(0);
   Graph_Graph_g_ratio130173022->SetLineStyle(0);
   Graph_Graph_g_ratio130173022->SetMarkerStyle(20);
   Graph_Graph_g_ratio130173022->GetXaxis()->SetTitle("|y_{CM}|");
   Graph_Graph_g_ratio130173022->GetXaxis()->SetMoreLogLabels();
   Graph_Graph_g_ratio130173022->GetXaxis()->SetNoExponent();
   Graph_Graph_g_ratio130173022->GetXaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio130173022->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio130173022->GetXaxis()->SetLabelSize(0.15);
   Graph_Graph_g_ratio130173022->GetXaxis()->SetTitleSize(0.2);
   Graph_Graph_g_ratio130173022->GetXaxis()->SetTitleOffset(0.88);
   Graph_Graph_g_ratio130173022->GetXaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio130173022->GetYaxis()->SetTitle("Pred./Data");
   Graph_Graph_g_ratio130173022->GetYaxis()->SetNdivisions(305);
   Graph_Graph_g_ratio130173022->GetYaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio130173022->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio130173022->GetYaxis()->SetLabelSize(0.15);
   Graph_Graph_g_ratio130173022->GetYaxis()->SetTitleSize(0.2);
   Graph_Graph_g_ratio130173022->GetYaxis()->SetTitleOffset(0.4);
   Graph_Graph_g_ratio130173022->GetYaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio130173022->GetZaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio130173022->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio130173022->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio130173022->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio130173022->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_g_ratio130173022->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_g_ratio130173022);
   
   grae->Draw("5");
   
   Double_t g_ratio2_fx3023[10] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.865};
   Double_t g_ratio2_fy3023[10] = {
   0.8836655,
   0.9311274,
   0.8770958,
   0.9238456,
   0.9226174,
   0.9395852,
   0.9141163,
   0.966463,
   1.102661,
   0.783104};
   Double_t g_ratio2_felx3023[10] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.065};
   Double_t g_ratio2_fely3023[10] = {
   0.01057488,
   0.02868113,
   0.04300724,
   0.05979337,
   0.07239819,
   0.08385595,
   0.08935519,
   0.1004351,
   0.1201547,
   0.08836747};
   Double_t g_ratio2_fehx3023[10] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.065};
   Double_t g_ratio2_fehy3023[10] = {
   0.009891955,
   0.02657785,
   0.04055938,
   0.0573322,
   0.07086937,
   0.08303325,
   0.08959909,
   0.101132,
   0.1204265,
   0.08706501};
   grae = new TGraphAsymmErrors(10,g_ratio2_fx3023,g_ratio2_fy3023,g_ratio2_felx3023,g_ratio2_fehx3023,g_ratio2_fely3023,g_ratio2_fehy3023);
   grae->SetName("g_ratio2");
   grae->SetTitle("Graph");

   ci = 1639;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph_g_ratio230183023 = new TH1F("Graph_Graph_g_ratio230183023","Graph",100,0,2.123);
   Graph_Graph_g_ratio230183023->SetMinimum(0.6419014);
   Graph_Graph_g_ratio230183023->SetMaximum(1.275922);
   Graph_Graph_g_ratio230183023->SetDirectory(0);
   Graph_Graph_g_ratio230183023->SetStats(0);
   Graph_Graph_g_ratio230183023->SetLineStyle(0);
   Graph_Graph_g_ratio230183023->SetMarkerStyle(20);
   Graph_Graph_g_ratio230183023->GetXaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio230183023->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio230183023->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio230183023->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio230183023->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_g_ratio230183023->GetXaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio230183023->GetYaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio230183023->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio230183023->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio230183023->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio230183023->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_g_ratio230183023->GetYaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio230183023->GetZaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio230183023->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio230183023->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio230183023->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio230183023->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_g_ratio230183023->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_g_ratio230183023);
   
   grae->Draw("5");
   
   Double_t g_ratio3_fx3024[10] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.865};
   Double_t g_ratio3_fy3024[10] = {
   0.8858156,
   0.9392668,
   0.8906797,
   0.9463932,
   0.9544789,
   0.9829985,
   0.965378,
   1.031111,
   1.181825,
   0.8425706};
   Double_t g_ratio3_felx3024[10] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.065};
   Double_t g_ratio3_fely3024[10] = {
   0.01158155,
   0.02759612,
   0.04086616,
   0.05740985,
   0.06952988,
   0.08051796,
   0.08457971,
   0.09375706,
   0.108903,
   0.07792494};
   Double_t g_ratio3_fehx3024[10] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.065};
   Double_t g_ratio3_fehy3024[10] = {
   0.01153549,
   0.02739694,
   0.0405464,
   0.05697304,
   0.06905045,
   0.08006871,
   0.08421046,
   0.0934883,
   0.1087436,
   0.07791228};
   grae = new TGraphAsymmErrors(10,g_ratio3_fx3024,g_ratio3_fy3024,g_ratio3_felx3024,g_ratio3_fehx3024,g_ratio3_fely3024,g_ratio3_fehy3024);
   grae->SetName("g_ratio3");
   grae->SetTitle("Graph");

   ci = 1640;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph_g_ratio330193024 = new TH1F("Graph_Graph_g_ratio330193024","Graph",100,0,2.123);
   Graph_Graph_g_ratio330193024->SetMinimum(0.7120533);
   Graph_Graph_g_ratio330193024->SetMaximum(1.343161);
   Graph_Graph_g_ratio330193024->SetDirectory(0);
   Graph_Graph_g_ratio330193024->SetStats(0);
   Graph_Graph_g_ratio330193024->SetLineStyle(0);
   Graph_Graph_g_ratio330193024->SetMarkerStyle(20);
   Graph_Graph_g_ratio330193024->GetXaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio330193024->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio330193024->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio330193024->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio330193024->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_g_ratio330193024->GetXaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio330193024->GetYaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio330193024->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio330193024->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio330193024->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio330193024->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_g_ratio330193024->GetYaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio330193024->GetZaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio330193024->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio330193024->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio330193024->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio330193024->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_g_ratio330193024->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_g_ratio330193024);
   
   grae->Draw("5");
   
   TH1F *g_ratio1_copy__4 = new TH1F("g_ratio1_copy__4","Graph",100,0,2);
   g_ratio1_copy__4->SetMinimum(0.55);
   g_ratio1_copy__4->SetMaximum(1.45);
   g_ratio1_copy__4->SetDirectory(0);
   g_ratio1_copy__4->SetStats(0);
   g_ratio1_copy__4->SetLineStyle(0);
   g_ratio1_copy__4->SetMarkerStyle(20);
   g_ratio1_copy__4->GetXaxis()->SetTitle("|y_{CM}|");
   g_ratio1_copy__4->GetXaxis()->SetMoreLogLabels();
   g_ratio1_copy__4->GetXaxis()->SetNoExponent();
   g_ratio1_copy__4->GetXaxis()->SetLabelFont(42);
   g_ratio1_copy__4->GetXaxis()->SetLabelOffset(0.007);
   g_ratio1_copy__4->GetXaxis()->SetLabelSize(0.15);
   g_ratio1_copy__4->GetXaxis()->SetTitleSize(0.2);
   g_ratio1_copy__4->GetXaxis()->SetTitleOffset(0.88);
   g_ratio1_copy__4->GetXaxis()->SetTitleFont(42);
   g_ratio1_copy__4->GetYaxis()->SetTitle("Pred./Data");
   g_ratio1_copy__4->GetYaxis()->SetNdivisions(305);
   g_ratio1_copy__4->GetYaxis()->SetLabelFont(42);
   g_ratio1_copy__4->GetYaxis()->SetLabelOffset(0.007);
   g_ratio1_copy__4->GetYaxis()->SetLabelSize(0.15);
   g_ratio1_copy__4->GetYaxis()->SetTitleSize(0.2);
   g_ratio1_copy__4->GetYaxis()->SetTitleOffset(0.4);
   g_ratio1_copy__4->GetYaxis()->SetTitleFont(42);
   g_ratio1_copy__4->GetZaxis()->SetLabelFont(42);
   g_ratio1_copy__4->GetZaxis()->SetLabelOffset(0.007);
   g_ratio1_copy__4->GetZaxis()->SetLabelSize(0.05);
   g_ratio1_copy__4->GetZaxis()->SetTitleSize(0.06);
   g_ratio1_copy__4->GetZaxis()->SetTitleOffset(1);
   g_ratio1_copy__4->GetZaxis()->SetTitleFont(42);
   g_ratio1_copy__4->Draw("sameaxis");
   BottomPad->Modified();
   TopPad->cd();
   TLatex *   tex = new TLatex(0.95,0.952,"#scale[0.85]{pPb (173 nb^{-1}, 8.16 TeV)}");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.03456);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.16,0.952,"CMS");
tex->SetNDC();
   tex->SetTextFont(61);
   tex->SetTextSize(0.0432);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.85,"60 < m_{#mu#mu} < 120 GeV");
tex->SetNDC();
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   TopPad->Modified();
   Plots/grfbp_rap60120_CT14_EPPS16->cd();
   Plots/grfbp_rap60120_CT14_EPPS16->Modified();
   Plots/grfbp_rap60120_CT14_EPPS16->cd();
   Plots/grfbp_rap60120_CT14_EPPS16->SetSelected(Plots/grfbp_rap60120_CT14_EPPS16);
}

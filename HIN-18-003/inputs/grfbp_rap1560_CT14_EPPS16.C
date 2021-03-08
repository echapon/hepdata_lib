void grfbp_rap1560_CT14_EPPS16()
{
//=========Macro generated from canvas: Plots/grfbp_rap1560_CT14_EPPS16/
//=========  (Thu Feb 18 15:56:12 2021) by ROOT version 6.16/00
   TCanvas *Plots/grfbp_rap1560_CT14_EPPS16 = new TCanvas("Plots/grfbp_rap1560_CT14_EPPS16", "",0,0,800,800);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   Plots/grfbp_rap1560_CT14_EPPS16->Range(0,0,1,1);
   Plots/grfbp_rap1560_CT14_EPPS16->SetFillColor(0);
   Plots/grfbp_rap1560_CT14_EPPS16->SetBorderMode(0);
   Plots/grfbp_rap1560_CT14_EPPS16->SetBorderSize(2);
   Plots/grfbp_rap1560_CT14_EPPS16->SetTickx(1);
   Plots/grfbp_rap1560_CT14_EPPS16->SetTicky(1);
   Plots/grfbp_rap1560_CT14_EPPS16->SetLeftMargin(0.16);
   Plots/grfbp_rap1560_CT14_EPPS16->SetRightMargin(0.02);
   Plots/grfbp_rap1560_CT14_EPPS16->SetTopMargin(0.05);
   Plots/grfbp_rap1560_CT14_EPPS16->SetBottomMargin(0.13);
   Plots/grfbp_rap1560_CT14_EPPS16->SetFrameFillStyle(0);
   Plots/grfbp_rap1560_CT14_EPPS16->SetFrameBorderMode(0);
  
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
   
   Double_t gth_CT14_rap1560_fx3001[5] = {
   0.2,
   0.6,
   1,
   1.4,
   1.765};
   Double_t gth_CT14_rap1560_fy3001[5] = {
   1.000337,
   1.000149,
   1.000487,
   1.009127,
   1.009352};
   Double_t gth_CT14_rap1560_felx3001[5] = {
   0.2,
   0.2,
   0.2,
   0.2,
   0.165};
   Double_t gth_CT14_rap1560_fely3001[5] = {
   0.007492198,
   0.009615671,
   0.01182209,
   0.01328641,
   0.01394964};
   Double_t gth_CT14_rap1560_fehx3001[5] = {
   0.2,
   0.2,
   0.2,
   0.2,
   0.165};
   Double_t gth_CT14_rap1560_fehy3001[5] = {
   0.00741952,
   0.00916308,
   0.01090121,
   0.012291,
   0.01310397};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,gth_CT14_rap1560_fx3001,gth_CT14_rap1560_fy3001,gth_CT14_rap1560_felx3001,gth_CT14_rap1560_fehx3001,gth_CT14_rap1560_fely3001,gth_CT14_rap1560_fehy3001);
   grae->SetName("gth_CT14_rap1560");
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
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_gth_CT14_rap15603001 = new TH1F("Graph_gth_CT14_rap15603001","Graph",100,0,2);
   Graph_gth_CT14_rap15603001->SetMinimum(0.65);
   Graph_gth_CT14_rap15603001->SetMaximum(1.45);
   Graph_gth_CT14_rap15603001->SetDirectory(0);
   Graph_gth_CT14_rap15603001->SetStats(0);
   Graph_gth_CT14_rap15603001->SetLineStyle(0);
   Graph_gth_CT14_rap15603001->SetMarkerStyle(20);
   Graph_gth_CT14_rap15603001->GetXaxis()->SetTitle("|y_{CM}|");
   Graph_gth_CT14_rap15603001->GetXaxis()->SetMoreLogLabels();
   Graph_gth_CT14_rap15603001->GetXaxis()->SetNoExponent();
   Graph_gth_CT14_rap15603001->GetXaxis()->SetLabelFont(42);
   Graph_gth_CT14_rap15603001->GetXaxis()->SetLabelOffset(0.007);
   Graph_gth_CT14_rap15603001->GetXaxis()->SetLabelSize(0);
   Graph_gth_CT14_rap15603001->GetXaxis()->SetTitleSize(0);
   Graph_gth_CT14_rap15603001->GetXaxis()->SetTitleOffset(0.9);
   Graph_gth_CT14_rap15603001->GetXaxis()->SetTitleFont(42);
   Graph_gth_CT14_rap15603001->GetYaxis()->SetTitle("R_{FB}");
   Graph_gth_CT14_rap15603001->GetYaxis()->SetLabelFont(42);
   Graph_gth_CT14_rap15603001->GetYaxis()->SetLabelOffset(0.007);
   Graph_gth_CT14_rap15603001->GetYaxis()->SetLabelSize(0.05);
   Graph_gth_CT14_rap15603001->GetYaxis()->SetTitleSize(0.06);
   Graph_gth_CT14_rap15603001->GetYaxis()->SetTitleOffset(1.25);
   Graph_gth_CT14_rap15603001->GetYaxis()->SetTitleFont(42);
   Graph_gth_CT14_rap15603001->GetZaxis()->SetLabelFont(42);
   Graph_gth_CT14_rap15603001->GetZaxis()->SetLabelOffset(0.007);
   Graph_gth_CT14_rap15603001->GetZaxis()->SetLabelSize(0.05);
   Graph_gth_CT14_rap15603001->GetZaxis()->SetTitleSize(0.06);
   Graph_gth_CT14_rap15603001->GetZaxis()->SetTitleOffset(1);
   Graph_gth_CT14_rap15603001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gth_CT14_rap15603001);
   
   grae->Draw("a5");
   
   Double_t gth_EPPS16_rap1560_fx3002[5] = {
   0.2,
   0.6,
   1,
   1.4,
   1.765};
   Double_t gth_EPPS16_rap1560_fy3002[5] = {
   0.9817981,
   0.9477186,
   0.9224183,
   0.90194,
   0.8636773};
   Double_t gth_EPPS16_rap1560_felx3002[5] = {
   0.2,
   0.2,
   0.2,
   0.2,
   0.165};
   Double_t gth_EPPS16_rap1560_fely3002[5] = {
   0.02058365,
   0.05529457,
   0.08651879,
   0.1127645,
   0.1274575};
   Double_t gth_EPPS16_rap1560_fehx3002[5] = {
   0.2,
   0.2,
   0.2,
   0.2,
   0.165};
   Double_t gth_EPPS16_rap1560_fehy3002[5] = {
   0.01560801,
   0.04083855,
   0.06632697,
   0.09030053,
   0.1065843};
   grae = new TGraphAsymmErrors(5,gth_EPPS16_rap1560_fx3002,gth_EPPS16_rap1560_fy3002,gth_EPPS16_rap1560_felx3002,gth_EPPS16_rap1560_fehx3002,gth_EPPS16_rap1560_fely3002,gth_EPPS16_rap1560_fehy3002);
   grae->SetName("gth_EPPS16_rap1560");
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
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_gth_EPPS16_rap15603002 = new TH1F("Graph_gth_EPPS16_rap15603002","Graph",100,0,2.123);
   Graph_gth_EPPS16_rap15603002->SetMinimum(0.7101011);
   Graph_gth_EPPS16_rap15603002->SetMaximum(1.023525);
   Graph_gth_EPPS16_rap15603002->SetDirectory(0);
   Graph_gth_EPPS16_rap15603002->SetStats(0);
   Graph_gth_EPPS16_rap15603002->SetLineStyle(0);
   Graph_gth_EPPS16_rap15603002->SetMarkerStyle(20);
   Graph_gth_EPPS16_rap15603002->GetXaxis()->SetLabelFont(42);
   Graph_gth_EPPS16_rap15603002->GetXaxis()->SetLabelOffset(0.007);
   Graph_gth_EPPS16_rap15603002->GetXaxis()->SetLabelSize(0.05);
   Graph_gth_EPPS16_rap15603002->GetXaxis()->SetTitleSize(0.06);
   Graph_gth_EPPS16_rap15603002->GetXaxis()->SetTitleOffset(0.9);
   Graph_gth_EPPS16_rap15603002->GetXaxis()->SetTitleFont(42);
   Graph_gth_EPPS16_rap15603002->GetYaxis()->SetLabelFont(42);
   Graph_gth_EPPS16_rap15603002->GetYaxis()->SetLabelOffset(0.007);
   Graph_gth_EPPS16_rap15603002->GetYaxis()->SetLabelSize(0.05);
   Graph_gth_EPPS16_rap15603002->GetYaxis()->SetTitleSize(0.06);
   Graph_gth_EPPS16_rap15603002->GetYaxis()->SetTitleOffset(1.25);
   Graph_gth_EPPS16_rap15603002->GetYaxis()->SetTitleFont(42);
   Graph_gth_EPPS16_rap15603002->GetZaxis()->SetLabelFont(42);
   Graph_gth_EPPS16_rap15603002->GetZaxis()->SetLabelOffset(0.007);
   Graph_gth_EPPS16_rap15603002->GetZaxis()->SetLabelSize(0.05);
   Graph_gth_EPPS16_rap15603002->GetZaxis()->SetTitleSize(0.06);
   Graph_gth_EPPS16_rap15603002->GetZaxis()->SetTitleOffset(1);
   Graph_gth_EPPS16_rap15603002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gth_EPPS16_rap15603002);
   
   grae->Draw("5");
   
   Double_t gth_nCTEQ_W_Z_rap1560_fx3003[5] = {
   0.2,
   0.6,
   1,
   1.4,
   1.765};
   Double_t gth_nCTEQ_W_Z_rap1560_fy3003[5] = {
   0.9734606,
   0.923437,
   0.8829684,
   0.850818,
   0.8045636};
   Double_t gth_nCTEQ_W_Z_rap1560_felx3003[5] = {
   0.2,
   0.2,
   0.2,
   0.2,
   0.165};
   Double_t gth_nCTEQ_W_Z_rap1560_fely3003[5] = {
   0.01349395,
   0.02751075,
   0.04413674,
   0.06098033,
   0.07394326};
   Double_t gth_nCTEQ_W_Z_rap1560_fehx3003[5] = {
   0.2,
   0.2,
   0.2,
   0.2,
   0.165};
   Double_t gth_nCTEQ_W_Z_rap1560_fehy3003[5] = {
   0.01327352,
   0.02674482,
   0.04314225,
   0.05980582,
   0.07256553};
   grae = new TGraphAsymmErrors(5,gth_nCTEQ_W_Z_rap1560_fx3003,gth_nCTEQ_W_Z_rap1560_fy3003,gth_nCTEQ_W_Z_rap1560_felx3003,gth_nCTEQ_W_Z_rap1560_fehx3003,gth_nCTEQ_W_Z_rap1560_fely3003,gth_nCTEQ_W_Z_rap1560_fehy3003);
   grae->SetName("gth_nCTEQ_W_Z_rap1560");
   grae->SetTitle("Graph");

   ci = 1636;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_gth_nCTEQ_W_Z_rap15603003 = new TH1F("Graph_gth_nCTEQ_W_Z_rap15603003","Graph",100,0,2.123);
   Graph_gth_nCTEQ_W_Z_rap15603003->SetMinimum(0.7050089);
   Graph_gth_nCTEQ_W_Z_rap15603003->SetMaximum(1.012346);
   Graph_gth_nCTEQ_W_Z_rap15603003->SetDirectory(0);
   Graph_gth_nCTEQ_W_Z_rap15603003->SetStats(0);
   Graph_gth_nCTEQ_W_Z_rap15603003->SetLineStyle(0);
   Graph_gth_nCTEQ_W_Z_rap15603003->SetMarkerStyle(20);
   Graph_gth_nCTEQ_W_Z_rap15603003->GetXaxis()->SetLabelFont(42);
   Graph_gth_nCTEQ_W_Z_rap15603003->GetXaxis()->SetLabelOffset(0.007);
   Graph_gth_nCTEQ_W_Z_rap15603003->GetXaxis()->SetLabelSize(0.05);
   Graph_gth_nCTEQ_W_Z_rap15603003->GetXaxis()->SetTitleSize(0.06);
   Graph_gth_nCTEQ_W_Z_rap15603003->GetXaxis()->SetTitleOffset(0.9);
   Graph_gth_nCTEQ_W_Z_rap15603003->GetXaxis()->SetTitleFont(42);
   Graph_gth_nCTEQ_W_Z_rap15603003->GetYaxis()->SetLabelFont(42);
   Graph_gth_nCTEQ_W_Z_rap15603003->GetYaxis()->SetLabelOffset(0.007);
   Graph_gth_nCTEQ_W_Z_rap15603003->GetYaxis()->SetLabelSize(0.05);
   Graph_gth_nCTEQ_W_Z_rap15603003->GetYaxis()->SetTitleSize(0.06);
   Graph_gth_nCTEQ_W_Z_rap15603003->GetYaxis()->SetTitleOffset(1.25);
   Graph_gth_nCTEQ_W_Z_rap15603003->GetYaxis()->SetTitleFont(42);
   Graph_gth_nCTEQ_W_Z_rap15603003->GetZaxis()->SetLabelFont(42);
   Graph_gth_nCTEQ_W_Z_rap15603003->GetZaxis()->SetLabelOffset(0.007);
   Graph_gth_nCTEQ_W_Z_rap15603003->GetZaxis()->SetLabelSize(0.05);
   Graph_gth_nCTEQ_W_Z_rap15603003->GetZaxis()->SetTitleSize(0.06);
   Graph_gth_nCTEQ_W_Z_rap15603003->GetZaxis()->SetTitleOffset(1);
   Graph_gth_nCTEQ_W_Z_rap15603003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gth_nCTEQ_W_Z_rap15603003);
   
   grae->Draw("5");
   
   Double_t divide_f_rap1560_temp_by_b_rap1560_temp_fx3004[5] = {
   0.2,
   0.6,
   1,
   1.4,
   1.765};
   Double_t divide_f_rap1560_temp_by_b_rap1560_temp_fy3004[5] = {
   1.039151,
   0.9595393,
   0.8597906,
   1.030996,
   1.070291};
   Double_t divide_f_rap1560_temp_by_b_rap1560_temp_felx3004[5] = {
   0.2,
   0.2,
   0.2,
   0.2,
   0.165};
   Double_t divide_f_rap1560_temp_by_b_rap1560_temp_fely3004[5] = {
   0.118833,
   0.1111792,
   0.1050165,
   0.1168844,
   0.2275657};
   Double_t divide_f_rap1560_temp_by_b_rap1560_temp_fehx3004[5] = {
   0.2,
   0.2,
   0.2,
   0.2,
   0.165};
   Double_t divide_f_rap1560_temp_by_b_rap1560_temp_fehy3004[5] = {
   0.118833,
   0.1111792,
   0.1050165,
   0.1168844,
   0.2275657};
   grae = new TGraphAsymmErrors(5,divide_f_rap1560_temp_by_b_rap1560_temp_fx3004,divide_f_rap1560_temp_by_b_rap1560_temp_fy3004,divide_f_rap1560_temp_by_b_rap1560_temp_felx3004,divide_f_rap1560_temp_by_b_rap1560_temp_fehx3004,divide_f_rap1560_temp_by_b_rap1560_temp_fely3004,divide_f_rap1560_temp_by_b_rap1560_temp_fehy3004);
   grae->SetName("divide_f_rap1560_temp_by_b_rap1560_temp");
   grae->SetTitle("");

   ci = 1637;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_divide_f_rap1560_temp_by_b_rap1560_temp3004 = new TH1F("Graph_divide_f_rap1560_temp_by_b_rap1560_temp3004","",100,0,2.123);
   Graph_divide_f_rap1560_temp_by_b_rap1560_temp3004->SetMinimum(0.7004659);
   Graph_divide_f_rap1560_temp_by_b_rap1560_temp3004->SetMaximum(1.352164);
   Graph_divide_f_rap1560_temp_by_b_rap1560_temp3004->SetDirectory(0);
   Graph_divide_f_rap1560_temp_by_b_rap1560_temp3004->SetStats(0);
   Graph_divide_f_rap1560_temp_by_b_rap1560_temp3004->SetLineStyle(0);
   Graph_divide_f_rap1560_temp_by_b_rap1560_temp3004->SetMarkerStyle(20);
   Graph_divide_f_rap1560_temp_by_b_rap1560_temp3004->GetXaxis()->SetLabelFont(42);
   Graph_divide_f_rap1560_temp_by_b_rap1560_temp3004->GetXaxis()->SetLabelOffset(0.007);
   Graph_divide_f_rap1560_temp_by_b_rap1560_temp3004->GetXaxis()->SetLabelSize(0.05);
   Graph_divide_f_rap1560_temp_by_b_rap1560_temp3004->GetXaxis()->SetTitleSize(0.06);
   Graph_divide_f_rap1560_temp_by_b_rap1560_temp3004->GetXaxis()->SetTitleOffset(0.9);
   Graph_divide_f_rap1560_temp_by_b_rap1560_temp3004->GetXaxis()->SetTitleFont(42);
   Graph_divide_f_rap1560_temp_by_b_rap1560_temp3004->GetYaxis()->SetLabelFont(42);
   Graph_divide_f_rap1560_temp_by_b_rap1560_temp3004->GetYaxis()->SetLabelOffset(0.007);
   Graph_divide_f_rap1560_temp_by_b_rap1560_temp3004->GetYaxis()->SetLabelSize(0.05);
   Graph_divide_f_rap1560_temp_by_b_rap1560_temp3004->GetYaxis()->SetTitleSize(0.06);
   Graph_divide_f_rap1560_temp_by_b_rap1560_temp3004->GetYaxis()->SetTitleOffset(1.25);
   Graph_divide_f_rap1560_temp_by_b_rap1560_temp3004->GetYaxis()->SetTitleFont(42);
   Graph_divide_f_rap1560_temp_by_b_rap1560_temp3004->GetZaxis()->SetLabelFont(42);
   Graph_divide_f_rap1560_temp_by_b_rap1560_temp3004->GetZaxis()->SetLabelOffset(0.007);
   Graph_divide_f_rap1560_temp_by_b_rap1560_temp3004->GetZaxis()->SetLabelSize(0.05);
   Graph_divide_f_rap1560_temp_by_b_rap1560_temp3004->GetZaxis()->SetTitleSize(0.06);
   Graph_divide_f_rap1560_temp_by_b_rap1560_temp3004->GetZaxis()->SetTitleOffset(1);
   Graph_divide_f_rap1560_temp_by_b_rap1560_temp3004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_divide_f_rap1560_temp_by_b_rap1560_temp3004);
   
   grae->Draw("ep");
   
   TLegend *leg = new TLegend(0.51,0.72,0.89,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("divide_f_rap1560_temp_by_b_rap1560_temp","Data","lpf");

   ci = 1637;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(62);
   entry=leg->AddEntry("gth_CT14_rap1560","CT14","F");

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
   entry=leg->AddEntry("gth_EPPS16_rap1560","CT14+EPPS16","F");

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
   entry=leg->AddEntry("gth_nCTEQ_W_Z_rap1560","CT14+nCTEQ W/Z","F");

   ci = 1636;
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
   
   TH1F *gth_CT14_rap1560_copy__1 = new TH1F("gth_CT14_rap1560_copy__1","Graph",100,0,2);
   gth_CT14_rap1560_copy__1->SetMinimum(0.65);
   gth_CT14_rap1560_copy__1->SetMaximum(1.45);
   gth_CT14_rap1560_copy__1->SetDirectory(0);
   gth_CT14_rap1560_copy__1->SetStats(0);
   gth_CT14_rap1560_copy__1->SetLineStyle(0);
   gth_CT14_rap1560_copy__1->SetMarkerStyle(20);
   gth_CT14_rap1560_copy__1->GetXaxis()->SetTitle("|y_{CM}|");
   gth_CT14_rap1560_copy__1->GetXaxis()->SetMoreLogLabels();
   gth_CT14_rap1560_copy__1->GetXaxis()->SetNoExponent();
   gth_CT14_rap1560_copy__1->GetXaxis()->SetLabelFont(42);
   gth_CT14_rap1560_copy__1->GetXaxis()->SetLabelOffset(0.007);
   gth_CT14_rap1560_copy__1->GetXaxis()->SetLabelSize(0);
   gth_CT14_rap1560_copy__1->GetXaxis()->SetTitleSize(0);
   gth_CT14_rap1560_copy__1->GetXaxis()->SetTitleOffset(0.9);
   gth_CT14_rap1560_copy__1->GetXaxis()->SetTitleFont(42);
   gth_CT14_rap1560_copy__1->GetYaxis()->SetTitle("R_{FB}");
   gth_CT14_rap1560_copy__1->GetYaxis()->SetLabelFont(42);
   gth_CT14_rap1560_copy__1->GetYaxis()->SetLabelOffset(0.007);
   gth_CT14_rap1560_copy__1->GetYaxis()->SetLabelSize(0.05);
   gth_CT14_rap1560_copy__1->GetYaxis()->SetTitleSize(0.06);
   gth_CT14_rap1560_copy__1->GetYaxis()->SetTitleOffset(1.25);
   gth_CT14_rap1560_copy__1->GetYaxis()->SetTitleFont(42);
   gth_CT14_rap1560_copy__1->GetZaxis()->SetLabelFont(42);
   gth_CT14_rap1560_copy__1->GetZaxis()->SetLabelOffset(0.007);
   gth_CT14_rap1560_copy__1->GetZaxis()->SetLabelSize(0.05);
   gth_CT14_rap1560_copy__1->GetZaxis()->SetTitleSize(0.06);
   gth_CT14_rap1560_copy__1->GetZaxis()->SetTitleOffset(1);
   gth_CT14_rap1560_copy__1->GetZaxis()->SetTitleFont(42);
   gth_CT14_rap1560_copy__1->Draw("sameaxis");
  
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
   
   Double_t g_ratio1_fx3005[5] = {
   0.2,
   0.6,
   1,
   1.4,
   1.765};
   Double_t g_ratio1_fy3005[5] = {
   0.9626486,
   1.042322,
   1.16364,
   0.9787889,
   0.9430632};
   Double_t g_ratio1_felx3005[5] = {
   0.2,
   0.2,
   0.2,
   0.2,
   0.165};
   Double_t g_ratio1_fely3005[5] = {
   0.007209925,
   0.01002113,
   0.01374996,
   0.01288697,
   0.01303351};
   Double_t g_ratio1_fehx3005[5] = {
   0.2,
   0.2,
   0.2,
   0.2,
   0.165};
   Double_t g_ratio1_fehy3005[5] = {
   0.007139986,
   0.009549458,
   0.01267891,
   0.01192148,
   0.01224338};
   grae = new TGraphAsymmErrors(5,g_ratio1_fx3005,g_ratio1_fy3005,g_ratio1_felx3005,g_ratio1_fehx3005,g_ratio1_fely3005,g_ratio1_fehy3005);
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
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_g_ratio13005 = new TH1F("Graph_g_ratio13005","Graph",100,0,2);
   Graph_g_ratio13005->SetMinimum(0.55);
   Graph_g_ratio13005->SetMaximum(1.45);
   Graph_g_ratio13005->SetDirectory(0);
   Graph_g_ratio13005->SetStats(0);
   Graph_g_ratio13005->SetLineStyle(0);
   Graph_g_ratio13005->SetMarkerStyle(20);
   Graph_g_ratio13005->GetXaxis()->SetTitle("|y_{CM}|");
   Graph_g_ratio13005->GetXaxis()->SetMoreLogLabels();
   Graph_g_ratio13005->GetXaxis()->SetNoExponent();
   Graph_g_ratio13005->GetXaxis()->SetLabelFont(42);
   Graph_g_ratio13005->GetXaxis()->SetLabelOffset(0.007);
   Graph_g_ratio13005->GetXaxis()->SetLabelSize(0.15);
   Graph_g_ratio13005->GetXaxis()->SetTitleSize(0.2);
   Graph_g_ratio13005->GetXaxis()->SetTitleOffset(0.88);
   Graph_g_ratio13005->GetXaxis()->SetTitleFont(42);
   Graph_g_ratio13005->GetYaxis()->SetTitle("Pred./Data");
   Graph_g_ratio13005->GetYaxis()->SetNdivisions(305);
   Graph_g_ratio13005->GetYaxis()->SetLabelFont(42);
   Graph_g_ratio13005->GetYaxis()->SetLabelOffset(0.007);
   Graph_g_ratio13005->GetYaxis()->SetLabelSize(0.15);
   Graph_g_ratio13005->GetYaxis()->SetTitleSize(0.2);
   Graph_g_ratio13005->GetYaxis()->SetTitleOffset(0.4);
   Graph_g_ratio13005->GetYaxis()->SetTitleFont(42);
   Graph_g_ratio13005->GetZaxis()->SetLabelFont(42);
   Graph_g_ratio13005->GetZaxis()->SetLabelOffset(0.007);
   Graph_g_ratio13005->GetZaxis()->SetLabelSize(0.05);
   Graph_g_ratio13005->GetZaxis()->SetTitleSize(0.06);
   Graph_g_ratio13005->GetZaxis()->SetTitleOffset(1);
   Graph_g_ratio13005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g_ratio13005);
   
   grae->Draw("a5");
   
   Double_t g_ratio2_fx3006[5] = {
   0.2,
   0.6,
   1,
   1.4,
   1.765};
   Double_t g_ratio2_fy3006[5] = {
   0.9448083,
   0.9876809,
   1.072841,
   0.8748242,
   0.8069559};
   Double_t g_ratio2_felx3006[5] = {
   0.2,
   0.2,
   0.2,
   0.2,
   0.165};
   Double_t g_ratio2_fely3006[5] = {
   0.01980815,
   0.05762616,
   0.1006277,
   0.1093744,
   0.1190868};
   Double_t g_ratio2_fehx3006[5] = {
   0.2,
   0.2,
   0.2,
   0.2,
   0.165};
   Double_t g_ratio2_fehy3006[5] = {
   0.01501997,
   0.04256058,
   0.07714317,
   0.08758575,
   0.09958449};
   grae = new TGraphAsymmErrors(5,g_ratio2_fx3006,g_ratio2_fy3006,g_ratio2_felx3006,g_ratio2_fehx3006,g_ratio2_fely3006,g_ratio2_fehy3006);
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
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_g_ratio23006 = new TH1F("Graph_g_ratio23006","Graph",100,0,2.123);
   Graph_g_ratio23006->SetMinimum(0.6416576);
   Graph_g_ratio23006->SetMaximum(1.196195);
   Graph_g_ratio23006->SetDirectory(0);
   Graph_g_ratio23006->SetStats(0);
   Graph_g_ratio23006->SetLineStyle(0);
   Graph_g_ratio23006->SetMarkerStyle(20);
   Graph_g_ratio23006->GetXaxis()->SetLabelFont(42);
   Graph_g_ratio23006->GetXaxis()->SetLabelOffset(0.007);
   Graph_g_ratio23006->GetXaxis()->SetLabelSize(0.05);
   Graph_g_ratio23006->GetXaxis()->SetTitleSize(0.06);
   Graph_g_ratio23006->GetXaxis()->SetTitleOffset(0.9);
   Graph_g_ratio23006->GetXaxis()->SetTitleFont(42);
   Graph_g_ratio23006->GetYaxis()->SetLabelFont(42);
   Graph_g_ratio23006->GetYaxis()->SetLabelOffset(0.007);
   Graph_g_ratio23006->GetYaxis()->SetLabelSize(0.05);
   Graph_g_ratio23006->GetYaxis()->SetTitleSize(0.06);
   Graph_g_ratio23006->GetYaxis()->SetTitleOffset(1.25);
   Graph_g_ratio23006->GetYaxis()->SetTitleFont(42);
   Graph_g_ratio23006->GetZaxis()->SetLabelFont(42);
   Graph_g_ratio23006->GetZaxis()->SetLabelOffset(0.007);
   Graph_g_ratio23006->GetZaxis()->SetLabelSize(0.05);
   Graph_g_ratio23006->GetZaxis()->SetTitleSize(0.06);
   Graph_g_ratio23006->GetZaxis()->SetTitleOffset(1);
   Graph_g_ratio23006->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g_ratio23006);
   
   grae->Draw("5");
   
   Double_t g_ratio3_fx3007[5] = {
   0.2,
   0.6,
   1,
   1.4,
   1.765};
   Double_t g_ratio3_fy3007[5] = {
   0.936785,
   0.9623754,
   1.026958,
   0.8252392,
   0.7517244};
   Double_t g_ratio3_felx3007[5] = {
   0.2,
   0.2,
   0.2,
   0.2,
   0.165};
   Double_t g_ratio3_fely3007[5] = {
   0.01298555,
   0.02867079,
   0.05133429,
   0.05914703,
   0.06908709};
   Double_t g_ratio3_fehx3007[5] = {
   0.2,
   0.2,
   0.2,
   0.2,
   0.165};
   Double_t g_ratio3_fehy3007[5] = {
   0.01277343,
   0.02787256,
   0.05017763,
   0.05800783,
   0.06779984};
   grae = new TGraphAsymmErrors(5,g_ratio3_fx3007,g_ratio3_fy3007,g_ratio3_felx3007,g_ratio3_fehx3007,g_ratio3_fely3007,g_ratio3_fehy3007);
   grae->SetName("g_ratio3");
   grae->SetTitle("Graph");

   ci = 1636;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_g_ratio33007 = new TH1F("Graph_g_ratio33007","Graph",100,0,2.123);
   Graph_g_ratio33007->SetMinimum(0.6431875);
   Graph_g_ratio33007->SetMaximum(1.116585);
   Graph_g_ratio33007->SetDirectory(0);
   Graph_g_ratio33007->SetStats(0);
   Graph_g_ratio33007->SetLineStyle(0);
   Graph_g_ratio33007->SetMarkerStyle(20);
   Graph_g_ratio33007->GetXaxis()->SetLabelFont(42);
   Graph_g_ratio33007->GetXaxis()->SetLabelOffset(0.007);
   Graph_g_ratio33007->GetXaxis()->SetLabelSize(0.05);
   Graph_g_ratio33007->GetXaxis()->SetTitleSize(0.06);
   Graph_g_ratio33007->GetXaxis()->SetTitleOffset(0.9);
   Graph_g_ratio33007->GetXaxis()->SetTitleFont(42);
   Graph_g_ratio33007->GetYaxis()->SetLabelFont(42);
   Graph_g_ratio33007->GetYaxis()->SetLabelOffset(0.007);
   Graph_g_ratio33007->GetYaxis()->SetLabelSize(0.05);
   Graph_g_ratio33007->GetYaxis()->SetTitleSize(0.06);
   Graph_g_ratio33007->GetYaxis()->SetTitleOffset(1.25);
   Graph_g_ratio33007->GetYaxis()->SetTitleFont(42);
   Graph_g_ratio33007->GetZaxis()->SetLabelFont(42);
   Graph_g_ratio33007->GetZaxis()->SetLabelOffset(0.007);
   Graph_g_ratio33007->GetZaxis()->SetLabelSize(0.05);
   Graph_g_ratio33007->GetZaxis()->SetTitleSize(0.06);
   Graph_g_ratio33007->GetZaxis()->SetTitleOffset(1);
   Graph_g_ratio33007->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g_ratio33007);
   
   grae->Draw("5");
   
   Double_t g_ratio_refAtOne_fx3008[5] = {
   0.2,
   0.6,
   1,
   1.4,
   1.765};
   Double_t g_ratio_refAtOne_fy3008[5] = {
   1,
   1,
   1,
   1,
   1};
   Double_t g_ratio_refAtOne_felx3008[5] = {
   0.2,
   0.2,
   0.2,
   0.2,
   0.165};
   Double_t g_ratio_refAtOne_fely3008[5] = {
   0.1143559,
   0.1158673,
   0.1221419,
   0.1133705,
   0.2126204};
   Double_t g_ratio_refAtOne_fehx3008[5] = {
   0.2,
   0.2,
   0.2,
   0.2,
   0.165};
   Double_t g_ratio_refAtOne_fehy3008[5] = {
   0.1143559,
   0.1158673,
   0.1221419,
   0.1133705,
   0.2126204};
   grae = new TGraphAsymmErrors(5,g_ratio_refAtOne_fx3008,g_ratio_refAtOne_fy3008,g_ratio_refAtOne_felx3008,g_ratio_refAtOne_fehx3008,g_ratio_refAtOne_fely3008,g_ratio_refAtOne_fehy3008);
   grae->SetName("g_ratio_refAtOne");
   grae->SetTitle("");

   ci = 1637;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_g_ratio_refAtOne3008 = new TH1F("Graph_g_ratio_refAtOne3008","",100,0,2.123);
   Graph_g_ratio_refAtOne3008->SetMinimum(0.7448555);
   Graph_g_ratio_refAtOne3008->SetMaximum(1.255145);
   Graph_g_ratio_refAtOne3008->SetDirectory(0);
   Graph_g_ratio_refAtOne3008->SetStats(0);
   Graph_g_ratio_refAtOne3008->SetLineStyle(0);
   Graph_g_ratio_refAtOne3008->SetMarkerStyle(20);
   Graph_g_ratio_refAtOne3008->GetXaxis()->SetLabelFont(42);
   Graph_g_ratio_refAtOne3008->GetXaxis()->SetLabelOffset(0.007);
   Graph_g_ratio_refAtOne3008->GetXaxis()->SetLabelSize(0.05);
   Graph_g_ratio_refAtOne3008->GetXaxis()->SetTitleSize(0.06);
   Graph_g_ratio_refAtOne3008->GetXaxis()->SetTitleOffset(0.9);
   Graph_g_ratio_refAtOne3008->GetXaxis()->SetTitleFont(42);
   Graph_g_ratio_refAtOne3008->GetYaxis()->SetLabelFont(42);
   Graph_g_ratio_refAtOne3008->GetYaxis()->SetLabelOffset(0.007);
   Graph_g_ratio_refAtOne3008->GetYaxis()->SetLabelSize(0.05);
   Graph_g_ratio_refAtOne3008->GetYaxis()->SetTitleSize(0.06);
   Graph_g_ratio_refAtOne3008->GetYaxis()->SetTitleOffset(1.25);
   Graph_g_ratio_refAtOne3008->GetYaxis()->SetTitleFont(42);
   Graph_g_ratio_refAtOne3008->GetZaxis()->SetLabelFont(42);
   Graph_g_ratio_refAtOne3008->GetZaxis()->SetLabelOffset(0.007);
   Graph_g_ratio_refAtOne3008->GetZaxis()->SetLabelSize(0.05);
   Graph_g_ratio_refAtOne3008->GetZaxis()->SetTitleSize(0.06);
   Graph_g_ratio_refAtOne3008->GetZaxis()->SetTitleOffset(1);
   Graph_g_ratio_refAtOne3008->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g_ratio_refAtOne3008);
   
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
   
   Double_t g_ratio_refAtOne_fx3009[5] = {
   0.2,
   0.6,
   1,
   1.4,
   1.765};
   Double_t g_ratio_refAtOne_fy3009[5] = {
   1,
   1,
   1,
   1,
   1};
   Double_t g_ratio_refAtOne_felx3009[5] = {
   0.2,
   0.2,
   0.2,
   0.2,
   0.165};
   Double_t g_ratio_refAtOne_fely3009[5] = {
   0.1143559,
   0.1158673,
   0.1221419,
   0.1133705,
   0.2126204};
   Double_t g_ratio_refAtOne_fehx3009[5] = {
   0.2,
   0.2,
   0.2,
   0.2,
   0.165};
   Double_t g_ratio_refAtOne_fehy3009[5] = {
   0.1143559,
   0.1158673,
   0.1221419,
   0.1133705,
   0.2126204};
   grae = new TGraphAsymmErrors(5,g_ratio_refAtOne_fx3009,g_ratio_refAtOne_fy3009,g_ratio_refAtOne_felx3009,g_ratio_refAtOne_fehx3009,g_ratio_refAtOne_fely3009,g_ratio_refAtOne_fehy3009);
   grae->SetName("g_ratio_refAtOne");
   grae->SetTitle("");

   ci = 1637;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph_g_ratio_refAtOne30083009 = new TH1F("Graph_Graph_g_ratio_refAtOne30083009","",100,0,2.123);
   Graph_Graph_g_ratio_refAtOne30083009->SetMinimum(0.7448555);
   Graph_Graph_g_ratio_refAtOne30083009->SetMaximum(1.255145);
   Graph_Graph_g_ratio_refAtOne30083009->SetDirectory(0);
   Graph_Graph_g_ratio_refAtOne30083009->SetStats(0);
   Graph_Graph_g_ratio_refAtOne30083009->SetLineStyle(0);
   Graph_Graph_g_ratio_refAtOne30083009->SetMarkerStyle(20);
   Graph_Graph_g_ratio_refAtOne30083009->GetXaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio_refAtOne30083009->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio_refAtOne30083009->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio_refAtOne30083009->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio_refAtOne30083009->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_g_ratio_refAtOne30083009->GetXaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio_refAtOne30083009->GetYaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio_refAtOne30083009->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio_refAtOne30083009->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio_refAtOne30083009->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio_refAtOne30083009->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_g_ratio_refAtOne30083009->GetYaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio_refAtOne30083009->GetZaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio_refAtOne30083009->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio_refAtOne30083009->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio_refAtOne30083009->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio_refAtOne30083009->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_g_ratio_refAtOne30083009->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_g_ratio_refAtOne30083009);
   
   grae->Draw("ep");
   
   Double_t g_ratio1_fx3010[5] = {
   0.2,
   0.6,
   1,
   1.4,
   1.765};
   Double_t g_ratio1_fy3010[5] = {
   0.9626486,
   1.042322,
   1.16364,
   0.9787889,
   0.9430632};
   Double_t g_ratio1_felx3010[5] = {
   0.2,
   0.2,
   0.2,
   0.2,
   0.165};
   Double_t g_ratio1_fely3010[5] = {
   0.007209925,
   0.01002113,
   0.01374996,
   0.01288697,
   0.01303351};
   Double_t g_ratio1_fehx3010[5] = {
   0.2,
   0.2,
   0.2,
   0.2,
   0.165};
   Double_t g_ratio1_fehy3010[5] = {
   0.007139986,
   0.009549458,
   0.01267891,
   0.01192148,
   0.01224338};
   grae = new TGraphAsymmErrors(5,g_ratio1_fx3010,g_ratio1_fy3010,g_ratio1_felx3010,g_ratio1_fehx3010,g_ratio1_fely3010,g_ratio1_fehy3010);
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
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph_g_ratio130053010 = new TH1F("Graph_Graph_g_ratio130053010","Graph",100,0,2);
   Graph_Graph_g_ratio130053010->SetMinimum(0.55);
   Graph_Graph_g_ratio130053010->SetMaximum(1.45);
   Graph_Graph_g_ratio130053010->SetDirectory(0);
   Graph_Graph_g_ratio130053010->SetStats(0);
   Graph_Graph_g_ratio130053010->SetLineStyle(0);
   Graph_Graph_g_ratio130053010->SetMarkerStyle(20);
   Graph_Graph_g_ratio130053010->GetXaxis()->SetTitle("|y_{CM}|");
   Graph_Graph_g_ratio130053010->GetXaxis()->SetMoreLogLabels();
   Graph_Graph_g_ratio130053010->GetXaxis()->SetNoExponent();
   Graph_Graph_g_ratio130053010->GetXaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio130053010->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio130053010->GetXaxis()->SetLabelSize(0.15);
   Graph_Graph_g_ratio130053010->GetXaxis()->SetTitleSize(0.2);
   Graph_Graph_g_ratio130053010->GetXaxis()->SetTitleOffset(0.88);
   Graph_Graph_g_ratio130053010->GetXaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio130053010->GetYaxis()->SetTitle("Pred./Data");
   Graph_Graph_g_ratio130053010->GetYaxis()->SetNdivisions(305);
   Graph_Graph_g_ratio130053010->GetYaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio130053010->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio130053010->GetYaxis()->SetLabelSize(0.15);
   Graph_Graph_g_ratio130053010->GetYaxis()->SetTitleSize(0.2);
   Graph_Graph_g_ratio130053010->GetYaxis()->SetTitleOffset(0.4);
   Graph_Graph_g_ratio130053010->GetYaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio130053010->GetZaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio130053010->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio130053010->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio130053010->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio130053010->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_g_ratio130053010->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_g_ratio130053010);
   
   grae->Draw("5");
   
   Double_t g_ratio2_fx3011[5] = {
   0.2,
   0.6,
   1,
   1.4,
   1.765};
   Double_t g_ratio2_fy3011[5] = {
   0.9448083,
   0.9876809,
   1.072841,
   0.8748242,
   0.8069559};
   Double_t g_ratio2_felx3011[5] = {
   0.2,
   0.2,
   0.2,
   0.2,
   0.165};
   Double_t g_ratio2_fely3011[5] = {
   0.01980815,
   0.05762616,
   0.1006277,
   0.1093744,
   0.1190868};
   Double_t g_ratio2_fehx3011[5] = {
   0.2,
   0.2,
   0.2,
   0.2,
   0.165};
   Double_t g_ratio2_fehy3011[5] = {
   0.01501997,
   0.04256058,
   0.07714317,
   0.08758575,
   0.09958449};
   grae = new TGraphAsymmErrors(5,g_ratio2_fx3011,g_ratio2_fy3011,g_ratio2_felx3011,g_ratio2_fehx3011,g_ratio2_fely3011,g_ratio2_fehy3011);
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
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph_g_ratio230063011 = new TH1F("Graph_Graph_g_ratio230063011","Graph",100,0,2.123);
   Graph_Graph_g_ratio230063011->SetMinimum(0.6416576);
   Graph_Graph_g_ratio230063011->SetMaximum(1.196195);
   Graph_Graph_g_ratio230063011->SetDirectory(0);
   Graph_Graph_g_ratio230063011->SetStats(0);
   Graph_Graph_g_ratio230063011->SetLineStyle(0);
   Graph_Graph_g_ratio230063011->SetMarkerStyle(20);
   Graph_Graph_g_ratio230063011->GetXaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio230063011->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio230063011->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio230063011->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio230063011->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_g_ratio230063011->GetXaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio230063011->GetYaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio230063011->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio230063011->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio230063011->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio230063011->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_g_ratio230063011->GetYaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio230063011->GetZaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio230063011->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio230063011->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio230063011->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio230063011->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_g_ratio230063011->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_g_ratio230063011);
   
   grae->Draw("5");
   
   Double_t g_ratio3_fx3012[5] = {
   0.2,
   0.6,
   1,
   1.4,
   1.765};
   Double_t g_ratio3_fy3012[5] = {
   0.936785,
   0.9623754,
   1.026958,
   0.8252392,
   0.7517244};
   Double_t g_ratio3_felx3012[5] = {
   0.2,
   0.2,
   0.2,
   0.2,
   0.165};
   Double_t g_ratio3_fely3012[5] = {
   0.01298555,
   0.02867079,
   0.05133429,
   0.05914703,
   0.06908709};
   Double_t g_ratio3_fehx3012[5] = {
   0.2,
   0.2,
   0.2,
   0.2,
   0.165};
   Double_t g_ratio3_fehy3012[5] = {
   0.01277343,
   0.02787256,
   0.05017763,
   0.05800783,
   0.06779984};
   grae = new TGraphAsymmErrors(5,g_ratio3_fx3012,g_ratio3_fy3012,g_ratio3_felx3012,g_ratio3_fehx3012,g_ratio3_fely3012,g_ratio3_fehy3012);
   grae->SetName("g_ratio3");
   grae->SetTitle("Graph");

   ci = 1636;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph_g_ratio330073012 = new TH1F("Graph_Graph_g_ratio330073012","Graph",100,0,2.123);
   Graph_Graph_g_ratio330073012->SetMinimum(0.6431875);
   Graph_Graph_g_ratio330073012->SetMaximum(1.116585);
   Graph_Graph_g_ratio330073012->SetDirectory(0);
   Graph_Graph_g_ratio330073012->SetStats(0);
   Graph_Graph_g_ratio330073012->SetLineStyle(0);
   Graph_Graph_g_ratio330073012->SetMarkerStyle(20);
   Graph_Graph_g_ratio330073012->GetXaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio330073012->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio330073012->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio330073012->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio330073012->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_g_ratio330073012->GetXaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio330073012->GetYaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio330073012->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio330073012->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio330073012->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio330073012->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_g_ratio330073012->GetYaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio330073012->GetZaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio330073012->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio330073012->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio330073012->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio330073012->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_g_ratio330073012->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_g_ratio330073012);
   
   grae->Draw("5");
   
   TH1F *g_ratio1_copy__2 = new TH1F("g_ratio1_copy__2","Graph",100,0,2);
   g_ratio1_copy__2->SetMinimum(0.55);
   g_ratio1_copy__2->SetMaximum(1.45);
   g_ratio1_copy__2->SetDirectory(0);
   g_ratio1_copy__2->SetStats(0);
   g_ratio1_copy__2->SetLineStyle(0);
   g_ratio1_copy__2->SetMarkerStyle(20);
   g_ratio1_copy__2->GetXaxis()->SetTitle("|y_{CM}|");
   g_ratio1_copy__2->GetXaxis()->SetMoreLogLabels();
   g_ratio1_copy__2->GetXaxis()->SetNoExponent();
   g_ratio1_copy__2->GetXaxis()->SetLabelFont(42);
   g_ratio1_copy__2->GetXaxis()->SetLabelOffset(0.007);
   g_ratio1_copy__2->GetXaxis()->SetLabelSize(0.15);
   g_ratio1_copy__2->GetXaxis()->SetTitleSize(0.2);
   g_ratio1_copy__2->GetXaxis()->SetTitleOffset(0.88);
   g_ratio1_copy__2->GetXaxis()->SetTitleFont(42);
   g_ratio1_copy__2->GetYaxis()->SetTitle("Pred./Data");
   g_ratio1_copy__2->GetYaxis()->SetNdivisions(305);
   g_ratio1_copy__2->GetYaxis()->SetLabelFont(42);
   g_ratio1_copy__2->GetYaxis()->SetLabelOffset(0.007);
   g_ratio1_copy__2->GetYaxis()->SetLabelSize(0.15);
   g_ratio1_copy__2->GetYaxis()->SetTitleSize(0.2);
   g_ratio1_copy__2->GetYaxis()->SetTitleOffset(0.4);
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
      tex = new TLatex(0.2,0.85,"15 < m_{#mu#mu} < 60 GeV");
tex->SetNDC();
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   TopPad->Modified();
   Plots/grfbp_rap1560_CT14_EPPS16->cd();
   Plots/grfbp_rap1560_CT14_EPPS16->Modified();
   Plots/grfbp_rap1560_CT14_EPPS16->cd();
   Plots/grfbp_rap1560_CT14_EPPS16->SetSelected(Plots/grfbp_rap1560_CT14_EPPS16);
}

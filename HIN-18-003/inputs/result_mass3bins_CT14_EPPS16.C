void result_mass3bins_CT14_EPPS16()
{
//=========Macro generated from canvas: Plots/results/plots/result_mass3bins_CT14_EPPS16/
//=========  (Tue Feb 23 17:21:34 2021) by ROOT version 6.16/00
   TCanvas *Plots/results/plots/result_mass3bins_CT14_EPPS16 = new TCanvas("Plots/results/plots/result_mass3bins_CT14_EPPS16", "",0,0,800,800);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   Plots/results/plots/result_mass3bins_CT14_EPPS16->Range(0,0,1,1);
   Plots/results/plots/result_mass3bins_CT14_EPPS16->SetFillColor(0);
   Plots/results/plots/result_mass3bins_CT14_EPPS16->SetBorderMode(0);
   Plots/results/plots/result_mass3bins_CT14_EPPS16->SetBorderSize(2);
   Plots/results/plots/result_mass3bins_CT14_EPPS16->SetTickx(1);
   Plots/results/plots/result_mass3bins_CT14_EPPS16->SetTicky(1);
   Plots/results/plots/result_mass3bins_CT14_EPPS16->SetLeftMargin(0.16);
   Plots/results/plots/result_mass3bins_CT14_EPPS16->SetRightMargin(0.02);
   Plots/results/plots/result_mass3bins_CT14_EPPS16->SetTopMargin(0.05);
   Plots/results/plots/result_mass3bins_CT14_EPPS16->SetBottomMargin(0.13);
   Plots/results/plots/result_mass3bins_CT14_EPPS16->SetFrameFillStyle(0);
   Plots/results/plots/result_mass3bins_CT14_EPPS16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: TopPad
   TPad *TopPad = new TPad("TopPad", "TopPad",0.01,0.01,0.99,0.99);
   TopPad->Draw();
   TopPad->cd();
   TopPad->Range(-133.3671,-2.353908,700.1772,5.013897);
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
   
   Double_t gth_CT14_mass3bins_fx3010[3] = {
   37.5,
   90,
   360};
   Double_t gth_CT14_mass3bins_fy3010[3] = {
   3.895878,
   2.980299,
   0.004318306};
   Double_t gth_CT14_mass3bins_felx3010[3] = {
   22.5,
   30,
   240};
   Double_t gth_CT14_mass3bins_fely3010[3] = {
   0.1493028,
   0.08479694,
   0.0001073868};
   Double_t gth_CT14_mass3bins_fehx3010[3] = {
   22.5,
   30,
   240};
   Double_t gth_CT14_mass3bins_fehy3010[3] = {
   0.1267534,
   0.06422404,
   8.102148e-05};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(3,gth_CT14_mass3bins_fx3010,gth_CT14_mass3bins_fy3010,gth_CT14_mass3bins_felx3010,gth_CT14_mass3bins_fehx3010,gth_CT14_mass3bins_fely3010,gth_CT14_mass3bins_fehy3010);
   grae->SetName("gth_CT14_mass3bins");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1637;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_gth_CT14_mass3bins3010 = new TH1F("Graph_gth_CT14_mass3bins3010","Graph",100,0,658.5);
   Graph_gth_CT14_mass3bins3010->SetMinimum(0.003789827);
   Graph_gth_CT14_mass3bins3010->SetMaximum(4.424473);
   Graph_gth_CT14_mass3bins3010->SetDirectory(0);
   Graph_gth_CT14_mass3bins3010->SetStats(0);
   Graph_gth_CT14_mass3bins3010->SetLineStyle(0);
   Graph_gth_CT14_mass3bins3010->SetMarkerStyle(20);
   Graph_gth_CT14_mass3bins3010->GetXaxis()->SetTitle("m_{#mu#mu} [GeV]");
   Graph_gth_CT14_mass3bins3010->GetXaxis()->SetMoreLogLabels();
   Graph_gth_CT14_mass3bins3010->GetXaxis()->SetNoExponent();
   Graph_gth_CT14_mass3bins3010->GetXaxis()->SetLabelFont(42);
   Graph_gth_CT14_mass3bins3010->GetXaxis()->SetLabelOffset(0.007);
   Graph_gth_CT14_mass3bins3010->GetXaxis()->SetLabelSize(0);
   Graph_gth_CT14_mass3bins3010->GetXaxis()->SetTitleSize(0);
   Graph_gth_CT14_mass3bins3010->GetXaxis()->SetTitleOffset(0.9);
   Graph_gth_CT14_mass3bins3010->GetXaxis()->SetTitleFont(42);
   Graph_gth_CT14_mass3bins3010->GetYaxis()->SetLabelFont(42);
   Graph_gth_CT14_mass3bins3010->GetYaxis()->SetLabelOffset(0.007);
   Graph_gth_CT14_mass3bins3010->GetYaxis()->SetLabelSize(0.05);
   Graph_gth_CT14_mass3bins3010->GetYaxis()->SetTitleSize(0.072);
   Graph_gth_CT14_mass3bins3010->GetYaxis()->SetTitleOffset(1.041667);
   Graph_gth_CT14_mass3bins3010->GetYaxis()->SetTitleFont(42);
   Graph_gth_CT14_mass3bins3010->GetZaxis()->SetLabelFont(42);
   Graph_gth_CT14_mass3bins3010->GetZaxis()->SetLabelOffset(0.007);
   Graph_gth_CT14_mass3bins3010->GetZaxis()->SetLabelSize(0.05);
   Graph_gth_CT14_mass3bins3010->GetZaxis()->SetTitleSize(0.06);
   Graph_gth_CT14_mass3bins3010->GetZaxis()->SetTitleOffset(1);
   Graph_gth_CT14_mass3bins3010->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gth_CT14_mass3bins3010);
   
   grae->Draw("a5");
   
   Double_t gth_EPPS16_mass3bins_fx3011[3] = {
   37.5,
   90,
   360};
   Double_t gth_EPPS16_mass3bins_fy3011[3] = {
   3.494554,
   2.895296,
   0.004185872};
   Double_t gth_EPPS16_mass3bins_felx3011[3] = {
   22.5,
   30,
   240};
   Double_t gth_EPPS16_mass3bins_fely3011[3] = {
   0.2581567,
   0.09346997,
   0.0001054924};
   Double_t gth_EPPS16_mass3bins_fehx3011[3] = {
   22.5,
   30,
   240};
   Double_t gth_EPPS16_mass3bins_fehy3011[3] = {
   0.2480468,
   0.08778812,
   8.997676e-05};
   grae = new TGraphAsymmErrors(3,gth_EPPS16_mass3bins_fx3011,gth_EPPS16_mass3bins_fy3011,gth_EPPS16_mass3bins_felx3011,gth_EPPS16_mass3bins_fehx3011,gth_EPPS16_mass3bins_fely3011,gth_EPPS16_mass3bins_fehy3011);
   grae->SetName("gth_EPPS16_mass3bins");
   grae->SetTitle("Graph");

   ci = 1638;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_gth_EPPS16_mass3bins3011 = new TH1F("Graph_gth_EPPS16_mass3bins3011","Graph",100,0,658.5);
   Graph_gth_EPPS16_mass3bins3011->SetMinimum(0.003672342);
   Graph_gth_EPPS16_mass3bins3011->SetMaximum(4.116453);
   Graph_gth_EPPS16_mass3bins3011->SetDirectory(0);
   Graph_gth_EPPS16_mass3bins3011->SetStats(0);
   Graph_gth_EPPS16_mass3bins3011->SetLineStyle(0);
   Graph_gth_EPPS16_mass3bins3011->SetMarkerStyle(20);
   Graph_gth_EPPS16_mass3bins3011->GetXaxis()->SetLabelFont(42);
   Graph_gth_EPPS16_mass3bins3011->GetXaxis()->SetLabelOffset(0.007);
   Graph_gth_EPPS16_mass3bins3011->GetXaxis()->SetLabelSize(0.05);
   Graph_gth_EPPS16_mass3bins3011->GetXaxis()->SetTitleSize(0.06);
   Graph_gth_EPPS16_mass3bins3011->GetXaxis()->SetTitleOffset(0.9);
   Graph_gth_EPPS16_mass3bins3011->GetXaxis()->SetTitleFont(42);
   Graph_gth_EPPS16_mass3bins3011->GetYaxis()->SetLabelFont(42);
   Graph_gth_EPPS16_mass3bins3011->GetYaxis()->SetLabelOffset(0.007);
   Graph_gth_EPPS16_mass3bins3011->GetYaxis()->SetLabelSize(0.05);
   Graph_gth_EPPS16_mass3bins3011->GetYaxis()->SetTitleSize(0.06);
   Graph_gth_EPPS16_mass3bins3011->GetYaxis()->SetTitleOffset(1.25);
   Graph_gth_EPPS16_mass3bins3011->GetYaxis()->SetTitleFont(42);
   Graph_gth_EPPS16_mass3bins3011->GetZaxis()->SetLabelFont(42);
   Graph_gth_EPPS16_mass3bins3011->GetZaxis()->SetLabelOffset(0.007);
   Graph_gth_EPPS16_mass3bins3011->GetZaxis()->SetLabelSize(0.05);
   Graph_gth_EPPS16_mass3bins3011->GetZaxis()->SetTitleSize(0.06);
   Graph_gth_EPPS16_mass3bins3011->GetZaxis()->SetTitleOffset(1);
   Graph_gth_EPPS16_mass3bins3011->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gth_EPPS16_mass3bins3011);
   
   grae->Draw("5");
   
   Double_t gres_mass3bins_fx3012[3] = {
   37.5,
   90,
   360};
   Double_t gres_mass3bins_fy3012[3] = {
   4.037607,
   2.961678,
   0.004794278};
   Double_t gres_mass3bins_felx3012[3] = {
   22.5,
   30,
   240};
   Double_t gres_mass3bins_fely3012[3] = {
   0.3298803,
   0.04945396,
   0.0003562316};
   Double_t gres_mass3bins_fehx3012[3] = {
   22.5,
   30,
   240};
   Double_t gres_mass3bins_fehy3012[3] = {
   0.3298803,
   0.04945396,
   0.0003562316};
   grae = new TGraphAsymmErrors(3,gres_mass3bins_fx3012,gres_mass3bins_fy3012,gres_mass3bins_felx3012,gres_mass3bins_fehx3012,gres_mass3bins_fely3012,gres_mass3bins_fehy3012);
   grae->SetName("gres_mass3bins");
   grae->SetTitle("Graph");

   ci = 1639;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_gres_mass3bins3012 = new TH1F("Graph_gres_mass3bins3012","Graph",100,0,658.5);
   Graph_gres_mass3bins3012->SetMinimum(0.003994241);
   Graph_gres_mass3bins3012->SetMaximum(4.803793);
   Graph_gres_mass3bins3012->SetDirectory(0);
   Graph_gres_mass3bins3012->SetStats(0);
   Graph_gres_mass3bins3012->SetLineStyle(0);
   Graph_gres_mass3bins3012->SetMarkerStyle(20);
   Graph_gres_mass3bins3012->GetXaxis()->SetLabelFont(42);
   Graph_gres_mass3bins3012->GetXaxis()->SetLabelOffset(0.007);
   Graph_gres_mass3bins3012->GetXaxis()->SetLabelSize(0.05);
   Graph_gres_mass3bins3012->GetXaxis()->SetTitleSize(0.06);
   Graph_gres_mass3bins3012->GetXaxis()->SetTitleOffset(0.9);
   Graph_gres_mass3bins3012->GetXaxis()->SetTitleFont(42);
   Graph_gres_mass3bins3012->GetYaxis()->SetLabelFont(42);
   Graph_gres_mass3bins3012->GetYaxis()->SetLabelOffset(0.007);
   Graph_gres_mass3bins3012->GetYaxis()->SetLabelSize(0.05);
   Graph_gres_mass3bins3012->GetYaxis()->SetTitleSize(0.06);
   Graph_gres_mass3bins3012->GetYaxis()->SetTitleOffset(1.25);
   Graph_gres_mass3bins3012->GetYaxis()->SetTitleFont(42);
   Graph_gres_mass3bins3012->GetZaxis()->SetLabelFont(42);
   Graph_gres_mass3bins3012->GetZaxis()->SetLabelOffset(0.007);
   Graph_gres_mass3bins3012->GetZaxis()->SetLabelSize(0.05);
   Graph_gres_mass3bins3012->GetZaxis()->SetTitleSize(0.06);
   Graph_gres_mass3bins3012->GetZaxis()->SetTitleOffset(1);
   Graph_gres_mass3bins3012->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gres_mass3bins3012);
   
   grae->Draw("ep");
   
   TLegend *leg = new TLegend(0.464,0.66,0.98,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("gres_mass3bins","Data","lpf");

   ci = 1639;
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
   entry=leg->AddEntry("gth_CT14_mass3bins","CT14","F");

   ci = 1637;
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
   entry=leg->AddEntry("gth_EPPS16_mass3bins","CT14+EPPS16","F");

   ci = 1638;
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
   
   TH1F *gth_CT14_mass3bins_copy__3 = new TH1F("gth_CT14_mass3bins_copy__3","Graph",100,0,658.5);
   gth_CT14_mass3bins_copy__3->SetMinimum(0.003789827);
   gth_CT14_mass3bins_copy__3->SetMaximum(4.424473);
   gth_CT14_mass3bins_copy__3->SetDirectory(0);
   gth_CT14_mass3bins_copy__3->SetStats(0);
   gth_CT14_mass3bins_copy__3->SetLineStyle(0);
   gth_CT14_mass3bins_copy__3->SetMarkerStyle(20);
   gth_CT14_mass3bins_copy__3->GetXaxis()->SetTitle("m_{#mu#mu} [GeV]");
   gth_CT14_mass3bins_copy__3->GetXaxis()->SetMoreLogLabels();
   gth_CT14_mass3bins_copy__3->GetXaxis()->SetNoExponent();
   gth_CT14_mass3bins_copy__3->GetXaxis()->SetLabelFont(42);
   gth_CT14_mass3bins_copy__3->GetXaxis()->SetLabelOffset(0.007);
   gth_CT14_mass3bins_copy__3->GetXaxis()->SetLabelSize(0);
   gth_CT14_mass3bins_copy__3->GetXaxis()->SetTitleSize(0);
   gth_CT14_mass3bins_copy__3->GetXaxis()->SetTitleOffset(0.9);
   gth_CT14_mass3bins_copy__3->GetXaxis()->SetTitleFont(42);
   gth_CT14_mass3bins_copy__3->GetYaxis()->SetLabelFont(42);
   gth_CT14_mass3bins_copy__3->GetYaxis()->SetLabelOffset(0.007);
   gth_CT14_mass3bins_copy__3->GetYaxis()->SetLabelSize(0.05);
   gth_CT14_mass3bins_copy__3->GetYaxis()->SetTitleSize(0.072);
   gth_CT14_mass3bins_copy__3->GetYaxis()->SetTitleOffset(1.041667);
   gth_CT14_mass3bins_copy__3->GetYaxis()->SetTitleFont(42);
   gth_CT14_mass3bins_copy__3->GetZaxis()->SetLabelFont(42);
   gth_CT14_mass3bins_copy__3->GetZaxis()->SetLabelOffset(0.007);
   gth_CT14_mass3bins_copy__3->GetZaxis()->SetLabelSize(0.05);
   gth_CT14_mass3bins_copy__3->GetZaxis()->SetTitleSize(0.06);
   gth_CT14_mass3bins_copy__3->GetZaxis()->SetTitleOffset(1);
   gth_CT14_mass3bins_copy__3->GetZaxis()->SetTitleFont(42);
   gth_CT14_mass3bins_copy__3->Draw("sameaxis");
  
// ------------>Primitives in pad: BottomPad
   TPad *BottomPad = new TPad("BottomPad", "BottomPad",0.01,0.01,0.99,0.3);
   BottomPad->Draw();
   BottomPad->cd();
   BottomPad->Range(-121.9444,-0.54,691.0185,1.66);
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
   
   Double_t g_ratio1_fx3013[3] = {
   37.5,
   90,
   360};
   Double_t g_ratio1_fy3013[3] = {
   0.9648976,
   1.006287,
   0.9007209};
   Double_t g_ratio1_felx3013[3] = {
   22.5,
   30,
   240};
   Double_t g_ratio1_fely3013[3] = {
   0.03697804,
   0.02863138,
   0.02239895};
   Double_t g_ratio1_fehx3013[3] = {
   22.5,
   30,
   240};
   Double_t g_ratio1_fehy3013[3] = {
   0.03139319,
   0.02168502,
   0.01689962};
   grae = new TGraphAsymmErrors(3,g_ratio1_fx3013,g_ratio1_fy3013,g_ratio1_felx3013,g_ratio1_fehx3013,g_ratio1_fely3013,g_ratio1_fehy3013);
   grae->SetName("g_ratio1");
   grae->SetTitle("Graph");

   ci = 1637;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_g_ratio13013 = new TH1F("Graph_g_ratio13013","Graph",100,0,658.5);
   Graph_g_ratio13013->SetMinimum(0.45);
   Graph_g_ratio13013->SetMaximum(1.55);
   Graph_g_ratio13013->SetDirectory(0);
   Graph_g_ratio13013->SetStats(0);
   Graph_g_ratio13013->SetLineStyle(0);
   Graph_g_ratio13013->SetMarkerStyle(20);
   Graph_g_ratio13013->GetXaxis()->SetTitle("m_{#mu#mu} [GeV]");
   Graph_g_ratio13013->GetXaxis()->SetMoreLogLabels();
   Graph_g_ratio13013->GetXaxis()->SetNoExponent();
   Graph_g_ratio13013->GetXaxis()->SetLabelFont(42);
   Graph_g_ratio13013->GetXaxis()->SetLabelOffset(0.008400001);
   Graph_g_ratio13013->GetXaxis()->SetLabelSize(0.18);
   Graph_g_ratio13013->GetXaxis()->SetTitleSize(0.2);
   Graph_g_ratio13013->GetXaxis()->SetTitleOffset(0.88);
   Graph_g_ratio13013->GetXaxis()->SetTitleFont(42);
   Graph_g_ratio13013->GetYaxis()->SetTitle("Pred./Data");
   Graph_g_ratio13013->GetYaxis()->SetLabelFont(42);
   Graph_g_ratio13013->GetYaxis()->SetLabelOffset(0.007);
   Graph_g_ratio13013->GetYaxis()->SetLabelSize(0.12);
   Graph_g_ratio13013->GetYaxis()->SetTitleSize(0.15);
   Graph_g_ratio13013->GetYaxis()->SetTitleOffset(0.4);
   Graph_g_ratio13013->GetYaxis()->SetTitleFont(42);
   Graph_g_ratio13013->GetZaxis()->SetLabelFont(42);
   Graph_g_ratio13013->GetZaxis()->SetLabelOffset(0.007);
   Graph_g_ratio13013->GetZaxis()->SetLabelSize(0.05);
   Graph_g_ratio13013->GetZaxis()->SetTitleSize(0.06);
   Graph_g_ratio13013->GetZaxis()->SetTitleOffset(1);
   Graph_g_ratio13013->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g_ratio13013);
   
   grae->Draw("a5");
   
   Double_t g_ratio2_fx3014[3] = {
   37.5,
   90,
   360};
   Double_t g_ratio2_fy3014[3] = {
   0.8655013,
   0.9775863,
   0.8730976};
   Double_t g_ratio2_felx3014[3] = {
   22.5,
   30,
   240};
   Double_t g_ratio2_fely3014[3] = {
   0.06393804,
   0.0315598,
   0.02200382};
   Double_t g_ratio2_fehx3014[3] = {
   22.5,
   30,
   240};
   Double_t g_ratio2_fehy3014[3] = {
   0.06143411,
   0.02964134,
   0.01876753};
   grae = new TGraphAsymmErrors(3,g_ratio2_fx3014,g_ratio2_fy3014,g_ratio2_felx3014,g_ratio2_fehx3014,g_ratio2_fely3014,g_ratio2_fehy3014);
   grae->SetName("g_ratio2");
   grae->SetTitle("Graph");

   ci = 1638;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_g_ratio23014 = new TH1F("Graph_g_ratio23014","Graph",100,0,658.5);
   Graph_g_ratio23014->SetMinimum(0.7809968);
   Graph_g_ratio23014->SetMaximum(1.027794);
   Graph_g_ratio23014->SetDirectory(0);
   Graph_g_ratio23014->SetStats(0);
   Graph_g_ratio23014->SetLineStyle(0);
   Graph_g_ratio23014->SetMarkerStyle(20);
   Graph_g_ratio23014->GetXaxis()->SetLabelFont(42);
   Graph_g_ratio23014->GetXaxis()->SetLabelOffset(0.007);
   Graph_g_ratio23014->GetXaxis()->SetLabelSize(0.05);
   Graph_g_ratio23014->GetXaxis()->SetTitleSize(0.06);
   Graph_g_ratio23014->GetXaxis()->SetTitleOffset(0.9);
   Graph_g_ratio23014->GetXaxis()->SetTitleFont(42);
   Graph_g_ratio23014->GetYaxis()->SetLabelFont(42);
   Graph_g_ratio23014->GetYaxis()->SetLabelOffset(0.007);
   Graph_g_ratio23014->GetYaxis()->SetLabelSize(0.05);
   Graph_g_ratio23014->GetYaxis()->SetTitleSize(0.06);
   Graph_g_ratio23014->GetYaxis()->SetTitleOffset(1.25);
   Graph_g_ratio23014->GetYaxis()->SetTitleFont(42);
   Graph_g_ratio23014->GetZaxis()->SetLabelFont(42);
   Graph_g_ratio23014->GetZaxis()->SetLabelOffset(0.007);
   Graph_g_ratio23014->GetZaxis()->SetLabelSize(0.05);
   Graph_g_ratio23014->GetZaxis()->SetTitleSize(0.06);
   Graph_g_ratio23014->GetZaxis()->SetTitleOffset(1);
   Graph_g_ratio23014->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g_ratio23014);
   
   grae->Draw("5");
   
   Double_t g_ratio_refAtOne_fx3015[3] = {
   37.5,
   90,
   360};
   Double_t g_ratio_refAtOne_fy3015[3] = {
   1,
   1,
   1};
   Double_t g_ratio_refAtOne_felx3015[3] = {
   22.5,
   30,
   240};
   Double_t g_ratio_refAtOne_fely3015[3] = {
   0.08170192,
   0.01669795,
   0.07430351};
   Double_t g_ratio_refAtOne_fehx3015[3] = {
   22.5,
   30,
   240};
   Double_t g_ratio_refAtOne_fehy3015[3] = {
   0.08170192,
   0.01669795,
   0.07430351};
   grae = new TGraphAsymmErrors(3,g_ratio_refAtOne_fx3015,g_ratio_refAtOne_fy3015,g_ratio_refAtOne_felx3015,g_ratio_refAtOne_fehx3015,g_ratio_refAtOne_fely3015,g_ratio_refAtOne_fehy3015);
   grae->SetName("g_ratio_refAtOne");
   grae->SetTitle("Graph");

   ci = 1639;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_g_ratio_refAtOne3015 = new TH1F("Graph_g_ratio_refAtOne3015","Graph",100,0,658.5);
   Graph_g_ratio_refAtOne3015->SetMinimum(0.9019577);
   Graph_g_ratio_refAtOne3015->SetMaximum(1.098042);
   Graph_g_ratio_refAtOne3015->SetDirectory(0);
   Graph_g_ratio_refAtOne3015->SetStats(0);
   Graph_g_ratio_refAtOne3015->SetLineStyle(0);
   Graph_g_ratio_refAtOne3015->SetMarkerStyle(20);
   Graph_g_ratio_refAtOne3015->GetXaxis()->SetLabelFont(42);
   Graph_g_ratio_refAtOne3015->GetXaxis()->SetLabelOffset(0.007);
   Graph_g_ratio_refAtOne3015->GetXaxis()->SetLabelSize(0.05);
   Graph_g_ratio_refAtOne3015->GetXaxis()->SetTitleSize(0.06);
   Graph_g_ratio_refAtOne3015->GetXaxis()->SetTitleOffset(0.9);
   Graph_g_ratio_refAtOne3015->GetXaxis()->SetTitleFont(42);
   Graph_g_ratio_refAtOne3015->GetYaxis()->SetLabelFont(42);
   Graph_g_ratio_refAtOne3015->GetYaxis()->SetLabelOffset(0.007);
   Graph_g_ratio_refAtOne3015->GetYaxis()->SetLabelSize(0.05);
   Graph_g_ratio_refAtOne3015->GetYaxis()->SetTitleSize(0.06);
   Graph_g_ratio_refAtOne3015->GetYaxis()->SetTitleOffset(1.25);
   Graph_g_ratio_refAtOne3015->GetYaxis()->SetTitleFont(42);
   Graph_g_ratio_refAtOne3015->GetZaxis()->SetLabelFont(42);
   Graph_g_ratio_refAtOne3015->GetZaxis()->SetLabelOffset(0.007);
   Graph_g_ratio_refAtOne3015->GetZaxis()->SetLabelSize(0.05);
   Graph_g_ratio_refAtOne3015->GetZaxis()->SetTitleSize(0.06);
   Graph_g_ratio_refAtOne3015->GetZaxis()->SetTitleOffset(1);
   Graph_g_ratio_refAtOne3015->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g_ratio_refAtOne3015);
   
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
   
   Double_t g_ratio_refAtOne_fx3016[3] = {
   37.5,
   90,
   360};
   Double_t g_ratio_refAtOne_fy3016[3] = {
   1,
   1,
   1};
   Double_t g_ratio_refAtOne_felx3016[3] = {
   22.5,
   30,
   240};
   Double_t g_ratio_refAtOne_fely3016[3] = {
   0.08170192,
   0.01669795,
   0.07430351};
   Double_t g_ratio_refAtOne_fehx3016[3] = {
   22.5,
   30,
   240};
   Double_t g_ratio_refAtOne_fehy3016[3] = {
   0.08170192,
   0.01669795,
   0.07430351};
   grae = new TGraphAsymmErrors(3,g_ratio_refAtOne_fx3016,g_ratio_refAtOne_fy3016,g_ratio_refAtOne_felx3016,g_ratio_refAtOne_fehx3016,g_ratio_refAtOne_fely3016,g_ratio_refAtOne_fehy3016);
   grae->SetName("g_ratio_refAtOne");
   grae->SetTitle("Graph");

   ci = 1639;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph_g_ratio_refAtOne30153016 = new TH1F("Graph_Graph_g_ratio_refAtOne30153016","Graph",100,0,658.5);
   Graph_Graph_g_ratio_refAtOne30153016->SetMinimum(0.9019577);
   Graph_Graph_g_ratio_refAtOne30153016->SetMaximum(1.098042);
   Graph_Graph_g_ratio_refAtOne30153016->SetDirectory(0);
   Graph_Graph_g_ratio_refAtOne30153016->SetStats(0);
   Graph_Graph_g_ratio_refAtOne30153016->SetLineStyle(0);
   Graph_Graph_g_ratio_refAtOne30153016->SetMarkerStyle(20);
   Graph_Graph_g_ratio_refAtOne30153016->GetXaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio_refAtOne30153016->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio_refAtOne30153016->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio_refAtOne30153016->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio_refAtOne30153016->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_g_ratio_refAtOne30153016->GetXaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio_refAtOne30153016->GetYaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio_refAtOne30153016->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio_refAtOne30153016->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio_refAtOne30153016->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio_refAtOne30153016->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_g_ratio_refAtOne30153016->GetYaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio_refAtOne30153016->GetZaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio_refAtOne30153016->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio_refAtOne30153016->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio_refAtOne30153016->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio_refAtOne30153016->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_g_ratio_refAtOne30153016->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_g_ratio_refAtOne30153016);
   
   grae->Draw("ep");
   
   Double_t g_ratio1_fx3017[3] = {
   37.5,
   90,
   360};
   Double_t g_ratio1_fy3017[3] = {
   0.9648976,
   1.006287,
   0.9007209};
   Double_t g_ratio1_felx3017[3] = {
   22.5,
   30,
   240};
   Double_t g_ratio1_fely3017[3] = {
   0.03697804,
   0.02863138,
   0.02239895};
   Double_t g_ratio1_fehx3017[3] = {
   22.5,
   30,
   240};
   Double_t g_ratio1_fehy3017[3] = {
   0.03139319,
   0.02168502,
   0.01689962};
   grae = new TGraphAsymmErrors(3,g_ratio1_fx3017,g_ratio1_fy3017,g_ratio1_felx3017,g_ratio1_fehx3017,g_ratio1_fely3017,g_ratio1_fehy3017);
   grae->SetName("g_ratio1");
   grae->SetTitle("Graph");

   ci = 1637;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph_g_ratio130133017 = new TH1F("Graph_Graph_g_ratio130133017","Graph",100,0,658.5);
   Graph_Graph_g_ratio130133017->SetMinimum(0.45);
   Graph_Graph_g_ratio130133017->SetMaximum(1.55);
   Graph_Graph_g_ratio130133017->SetDirectory(0);
   Graph_Graph_g_ratio130133017->SetStats(0);
   Graph_Graph_g_ratio130133017->SetLineStyle(0);
   Graph_Graph_g_ratio130133017->SetMarkerStyle(20);
   Graph_Graph_g_ratio130133017->GetXaxis()->SetTitle("m_{#mu#mu} [GeV]");
   Graph_Graph_g_ratio130133017->GetXaxis()->SetMoreLogLabels();
   Graph_Graph_g_ratio130133017->GetXaxis()->SetNoExponent();
   Graph_Graph_g_ratio130133017->GetXaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio130133017->GetXaxis()->SetLabelOffset(0.008400001);
   Graph_Graph_g_ratio130133017->GetXaxis()->SetLabelSize(0.18);
   Graph_Graph_g_ratio130133017->GetXaxis()->SetTitleSize(0.2);
   Graph_Graph_g_ratio130133017->GetXaxis()->SetTitleOffset(0.88);
   Graph_Graph_g_ratio130133017->GetXaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio130133017->GetYaxis()->SetTitle("Pred./Data");
   Graph_Graph_g_ratio130133017->GetYaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio130133017->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio130133017->GetYaxis()->SetLabelSize(0.12);
   Graph_Graph_g_ratio130133017->GetYaxis()->SetTitleSize(0.15);
   Graph_Graph_g_ratio130133017->GetYaxis()->SetTitleOffset(0.4);
   Graph_Graph_g_ratio130133017->GetYaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio130133017->GetZaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio130133017->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio130133017->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio130133017->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio130133017->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_g_ratio130133017->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_g_ratio130133017);
   
   grae->Draw("5");
   
   Double_t g_ratio2_fx3018[3] = {
   37.5,
   90,
   360};
   Double_t g_ratio2_fy3018[3] = {
   0.8655013,
   0.9775863,
   0.8730976};
   Double_t g_ratio2_felx3018[3] = {
   22.5,
   30,
   240};
   Double_t g_ratio2_fely3018[3] = {
   0.06393804,
   0.0315598,
   0.02200382};
   Double_t g_ratio2_fehx3018[3] = {
   22.5,
   30,
   240};
   Double_t g_ratio2_fehy3018[3] = {
   0.06143411,
   0.02964134,
   0.01876753};
   grae = new TGraphAsymmErrors(3,g_ratio2_fx3018,g_ratio2_fy3018,g_ratio2_felx3018,g_ratio2_fehx3018,g_ratio2_fely3018,g_ratio2_fehy3018);
   grae->SetName("g_ratio2");
   grae->SetTitle("Graph");

   ci = 1638;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph_g_ratio230143018 = new TH1F("Graph_Graph_g_ratio230143018","Graph",100,0,658.5);
   Graph_Graph_g_ratio230143018->SetMinimum(0.7809968);
   Graph_Graph_g_ratio230143018->SetMaximum(1.027794);
   Graph_Graph_g_ratio230143018->SetDirectory(0);
   Graph_Graph_g_ratio230143018->SetStats(0);
   Graph_Graph_g_ratio230143018->SetLineStyle(0);
   Graph_Graph_g_ratio230143018->SetMarkerStyle(20);
   Graph_Graph_g_ratio230143018->GetXaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio230143018->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio230143018->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio230143018->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio230143018->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_g_ratio230143018->GetXaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio230143018->GetYaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio230143018->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio230143018->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio230143018->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio230143018->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_g_ratio230143018->GetYaxis()->SetTitleFont(42);
   Graph_Graph_g_ratio230143018->GetZaxis()->SetLabelFont(42);
   Graph_Graph_g_ratio230143018->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_g_ratio230143018->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_g_ratio230143018->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_g_ratio230143018->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_g_ratio230143018->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_g_ratio230143018);
   
   grae->Draw("5");
   
   TH1F *g_ratio1_copy__4 = new TH1F("g_ratio1_copy__4","Graph",100,0,658.5);
   g_ratio1_copy__4->SetMinimum(0.45);
   g_ratio1_copy__4->SetMaximum(1.55);
   g_ratio1_copy__4->SetDirectory(0);
   g_ratio1_copy__4->SetStats(0);
   g_ratio1_copy__4->SetLineStyle(0);
   g_ratio1_copy__4->SetMarkerStyle(20);
   g_ratio1_copy__4->GetXaxis()->SetTitle("m_{#mu#mu} [GeV]");
   g_ratio1_copy__4->GetXaxis()->SetMoreLogLabels();
   g_ratio1_copy__4->GetXaxis()->SetNoExponent();
   g_ratio1_copy__4->GetXaxis()->SetLabelFont(42);
   g_ratio1_copy__4->GetXaxis()->SetLabelOffset(0.008400001);
   g_ratio1_copy__4->GetXaxis()->SetLabelSize(0.18);
   g_ratio1_copy__4->GetXaxis()->SetTitleSize(0.2);
   g_ratio1_copy__4->GetXaxis()->SetTitleOffset(0.88);
   g_ratio1_copy__4->GetXaxis()->SetTitleFont(42);
   g_ratio1_copy__4->GetYaxis()->SetTitle("Pred./Data");
   g_ratio1_copy__4->GetYaxis()->SetLabelFont(42);
   g_ratio1_copy__4->GetYaxis()->SetLabelOffset(0.007);
   g_ratio1_copy__4->GetYaxis()->SetLabelSize(0.12);
   g_ratio1_copy__4->GetYaxis()->SetTitleSize(0.15);
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
   TopPad->Modified();
   Plots/results/plots/result_mass3bins_CT14_EPPS16->cd();
   Plots/results/plots/result_mass3bins_CT14_EPPS16->Modified();
   Plots/results/plots/result_mass3bins_CT14_EPPS16->cd();
   Plots/results/plots/result_mass3bins_CT14_EPPS16->SetSelected(Plots/results/plots/result_mass3bins_CT14_EPPS16);
}

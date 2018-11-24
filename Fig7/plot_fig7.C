#include "data/slopes.C"
plot_fig7(){
  gROOT->SetStyle("Plain");
  gStyle->SetLabelSize(0.06,"X");
  gStyle->SetLabelSize(0.06,"Y");
  gStyle->SetTitleSize(0.06,"X");
  gStyle->SetTitleSize(0.06,"Y");
  gStyle->SetTitleOffset(1.2,"X");
  gStyle->SetTitleOffset(1.2,"Y");
  gStyle->SetNdivisions(505,"X");
  gStyle->SetTitleFont(42,"XY");
  gStyle->SetLabelFont(42,"XY");
  gStyle->SetMarkerSize(0.75);
  //Pb
  Float_t mean_Pb_asym[25];
  Float_t error_mean_Pb_asym[25];

  Float_t mean_NPb_asym[25];
  Float_t error_mean_NPb_asym[25];

  Float_t mean_ratioPb_asym[25];
  Float_t error_mean_ratioPb_asym[25];

  Float_t sigma_Pb_asym[25];
  Float_t error_sigma_Pb_asym[25];
  //Be
  Float_t mean_Be_asym[25];
  Float_t error_mean_Be_asym[25];

  Float_t mean_NBe_asym[25];
  Float_t error_mean_NBe_asym[25];

  Float_t mean_ratioBe_asym[25];
  Float_t error_mean_ratioBe_asym[25];

  Float_t sigma_Be_asym[25];
  Float_t error_sigma_Be_asym[25];
  //Deltas
  Float_t Delta_sigma_asym[25];
  Float_t Delta_mean_asym[25];
  Float_t mean_pereira[25];
  Float_t sigma_pereira[25];
  Float_t Z_pereira[25];
  Float_t ratio_pereira[25];
  Float_t mean_donzaud[25];
  Float_t sigma_donzaud[25];
  Float_t Z_donzaud[25];
 Float_t ratio_donzaud[25];
 Float_t Z[25];
 Char_t dummy[265];
 ifstream *in=new ifstream("data/widths_Pb_Be_werrors.dat");
 ifstream *in2=new ifstream("data/widths_pereira.dat");
 ifstream *in3=new ifstream("data/widths_donzaud.dat");
 Int_t j=0,j2=0,j3=0;
 in->getline(dummy,256);
 cout<<dummy<<endl;
 in2->getline(dummy,256);
 cout<<dummy<<endl;
 in3->getline(dummy,256);
 cout<<dummy<<endl;
 while(!in->eof()){
   //cout<<"Here I am"<<endl;
   *in>>Z[j]
      >>mean_Be_asym[j]>>error_mean_Be_asym[j]
      >>sigma_Be_asym[j]>>error_sigma_Be_asym[j]
      >>mean_Pb_asym[j]>>error_mean_Pb_asym[j]
      >>sigma_Pb_asym[j]>>error_sigma_Pb_asym[j];
   cout<<Z[j]<<" "<<error_sigma_Be_asym[j]<<" "<<error_sigma_Pb_asym[j]<<" "<<error_mean_Be_asym[j]
       <<" "<<error_mean_Pb_asym[j]<<endl;
   //out<<Z[j]<<mean_ratioPb_asym[j]<<"\t"<<error_mean_ratioBe_asym[j]<<endl;
   Delta_sigma_asym[j]=sigma_Be_asym[j]-sigma_Pb_asym[j];
   Delta_mean_asym[j]=mean_Be_asym[j]-mean_Pb_asym[j];
   mean_NPb_asym[j]=mean_Pb_asym[j]-Z[j];
   error_mean_NPb_asym[j]=error_mean_Pb_asym[j];
   mean_NBe_asym[j]=mean_Be_asym[j]-Z[j];
   error_mean_NBe_asym[j]=error_mean_Be_asym[j];
   if(Z[j]!=0){
     mean_ratioPb_asym[j]= mean_NPb_asym[j]/Z[j];
     error_mean_ratioPb_asym[j]= error_mean_NPb_asym[j]/Z[j];
     //error_mean_ratioPb_asym[j]= error_mean_Pb_asym[j]/mean_Pb_asym[j]*mean_ratioPb_asym[j];
     cout<<"ERROR Pb "<<error_mean_ratioPb_asym[j]<<endl;
     mean_ratioBe_asym[j]= mean_NBe_asym[j]/Z[j];
     error_mean_ratioBe_asym[j]= error_mean_NBe_asym[j]/Z[j];
     //error_mean_ratioBe_asym[j]= error_mean_Be_asym[j]/mean_Be_asym[j]*mean_ratioBe_asym[j];
     cout<<"ERROR Be "<<error_mean_ratioBe_asym[j]<<endl;
   }
   j++;
 }
 while(*in2>>Z_pereira[j2]>>mean_pereira[j2]>>sigma_pereira[j2]){
   //cout<<Z_pereira[j2]<<" "<<mean_pereira[j2]<<" "<<sigma_pereira[j2]<<endl;
   sigma_pereira[j2]=2.35* sigma_pereira[j2];
   mean_pereira[j2]=mean_pereira[j2]-Z_pereira[j2];
   ratio_pereira[j2]=mean_pereira[j2]/Z_pereira[j2];
   cout<<Z_pereira[j2]<<" "<<mean_pereira[j2]<<" "<<sigma_pereira[j2]<<endl;
   j2++;
 }
 while(*in3>>Z_donzaud[j3]>>mean_donzaud[j3]>>sigma_donzaud[j3]){
   //cout<<Z_pereira[j2]<<" "<<mean_pereira[j2]<<" "<<sigma_pereira[j2]<<endl;
   sigma_donzaud[j3]=2.35* sigma_donzaud[j3];
   mean_donzaud[j3]=mean_donzaud[j3]-Z_donzaud[j3];
   ratio_donzaud[j3]=mean_donzaud[j3]/Z_donzaud[j3];
   //cout<<Z_pereira[j2]<<" "<<mean_pereira[j2]<<" "<<sigma_pereira[j2]<<endl;
   j3++;
 }
 TGraph *g_mean_Pereira=new TGraph(j2,Z_pereira,mean_pereira);
 TGraph *g_sigma_Pereira=new TGraph(j2,Z_pereira,sigma_pereira);
 TGraph *g_ratio_Pereira=new TGraph(j2,Z_pereira,ratio_pereira);
 TGraph *g_mean_Donzaud=new TGraph(j3,Z_donzaud,mean_donzaud);
 TGraph *g_sigma_Donzaud=new TGraph(j3,Z_donzaud,sigma_donzaud);
 TGraph *g_ratio_Donzaud=new TGraph(j3,Z_donzaud,ratio_donzaud);
 g_mean_Pereira->SetMarkerStyle(22);
 g_mean_Pereira->SetMarkerColor(4);
 g_mean_Pereira->SetLineColor(4);
 g_sigma_Pereira->SetMarkerStyle(22);
 g_sigma_Pereira->SetMarkerColor(4);
 g_sigma_Pereira->SetLineColor(4);
 g_ratio_Pereira->SetMarkerStyle(22);
 g_ratio_Pereira->SetMarkerColor(4);
 g_ratio_Pereira->SetLineColor(4);
 g_mean_Donzaud->SetMarkerStyle(23);
 g_mean_Donzaud->SetMarkerColor(6);
 g_mean_Donzaud->SetLineColor(6);
 g_sigma_Donzaud->SetMarkerStyle(23);
 g_sigma_Donzaud->SetMarkerColor(6);
 g_sigma_Donzaud->SetLineColor(6);
 g_ratio_Donzaud->SetMarkerStyle(23);
 g_ratio_Donzaud->SetMarkerColor(6);
 g_ratio_Donzaud->SetLineColor(6);
 TGraphErrors *g1=new TGraphErrors(j-1,Z,sigma_Be_asym,0,error_sigma_Be_asym);
 g1->SetTitle("");
 g1->GetXaxis()->SetTitle("Atomic number");
 g1->GetYaxis()->SetTitle("FWHM [N]");

 TGraphErrors *g2=new TGraphErrors(j-1,Z,sigma_Pb_asym,0,error_sigma_Pb_asym);

 TGraphErrors *g3=new TGraphErrors(j-1,Z,mean_NBe_asym,0,error_mean_NBe_asym);

 TGraphErrors *g4=new TGraphErrors(j-1,Z,mean_NPb_asym,0,error_mean_NPb_asym);
 TF1 *f=new TF1("f","(238./92.-1)*x",30,60);
 TF1 *f2=new TF1("f2","(233./91.-1)*x",30,60);
 TF1 *f3=new TF1("f3","(230./90.-1)*x",30,60);
 TF1 *f4=new TF1("f4","(146./92.)",30,60);
 TF1 *f5=new TF1("f5","(233./91.)-1",30,60);
 f4->SetLineWidth(1);
 f5->SetLineWidth(1);
 g3->SetTitle("");
 g3->GetXaxis()->SetTitle("Atomic number");
 g3->GetYaxis()->SetTitle("#LTN#GT");

 TGraphErrors *g5=new TGraphErrors(j-1,Z,mean_ratioPb_asym,0,error_mean_ratioPb_asym);
 
 TGraphErrors *g6=new TGraphErrors(j-1,Z, mean_ratioBe_asym,0,error_mean_ratioBe_asym);

 g1->SetMarkerStyle(21);
 g2->SetMarkerStyle(20);
 g3->SetMarkerStyle(21);
 g4->SetMarkerStyle(20);
 g1->SetMarkerColor(2);
 g2->SetMarkerColor(1);
 g4->SetMarkerColor(1);
 g3->SetMarkerColor(2);
 g1->SetLineColor(2);
 g3->SetLineColor(2);
 g5->SetMarkerStyle(21);
 g6->SetMarkerStyle(21);

 TLegend *leg=new TLegend(0.5,0.720512,0.877155,0.880491);
 leg->SetFillColor(0);
 leg->SetTextSize(0.045);
 TCanvas *c2=new TCanvas("c2","",1055,378); 
 c2->Divide(3,1,0.001,0.001);
 //c2->cd(1);
 TLegend *leg2=new TLegend(0.232,0.7256,0.381,0.865);
 leg2->SetFillColor(0);
 leg2->SetLineColor(0);
 leg2->SetTextSize(0.045);
 TVirtualPad *vp2=c2->cd(2);
 vp2->SetLeftMargin(0.15);
 vp2->SetBottomMargin(0.15);
 vp2->SetRightMargin(0.03);
 leg2->AddEntry(g2,"Pb","P");
 leg2->AddEntry(g1,"Be","P");
 
  g1->Draw("ALP");
  g1->GetYaxis()->SetRangeUser(2,8);
  g2->Draw("LP");
  
  vp2=c2->cd(1);
  vp2->SetLeftMargin(0.15);
  vp2->SetRightMargin(0.03);
  vp2->SetBottomMargin(0.15);
  g5->Draw("ALP");
  g5->SetTitle("");
  g5->GetXaxis()->SetTitle("Atomic number");
  g5->GetYaxis()->SetTitle("#LTN#GT/Z");
  g5->GetYaxis()->SetRangeUser(1.3,1.7);
  //g5->GetYaxis()->SetRangeUser(1.,2.);
  g6->SetLineColor(2);
  g5->SetMarkerStyle(20);
  g6->SetMarkerStyle(21);
  g6->SetMarkerColor(2);
  g5->SetMarkerColor(1);
  g6->Draw("LP");
  //g_ratio_Pereira->Draw("LP");
  //g_ratio_Donzaud->Draw("LP");
  f4->Draw("same");
  leg2->Draw();
  //f5->Draw("same");
  //c2->Print("Fig7_c.eps");
  vp2=c2->cd(3);
  vp2->SetLeftMargin(0.15);
  vp2->SetBottomMargin(0.15);
  vp2->SetRightMargin(0.03);
  slopes(vp2);
}

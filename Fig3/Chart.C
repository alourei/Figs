void Chart(Char_t *filename,Int_t x1=50,Int_t y1=33,Int_t x2=100,Int_t y2=59){
  //TCanvas *c=new TCanvas("c","Chart of Nuclides",700,415);
  //TCanvas *c=new TCanvas("c","Chart of Nuclides");
  //TCanvas *c=new TCanvas("c","Chart of Nuclides",854,472);
  //TCanvas *c=new TCanvas("c","Chart of Nuclides",854,472);
  //gPad->Range(-5,-5,180,120);
  gPad->Range(x1,y1,x2,y2);
  TArrow *arrowX=new TArrow(0,0,180,0,0.05,"|>");
  TArrow *arrowY=new TArrow(0,0,0,120,0.05,"|>");
  arrowX->SetFillColor(1);
  arrowX->SetAngle(30);
  arrowY->SetAngle(30);
  arrowY->SetFillColor(1);
  arrowX->Draw();
  arrowY->Draw();
  TText *Xaxis=new TText(90,-5,"N");
  TText *Yaxis=new TText(-5,60,"Z");
  Xaxis->Draw();
  Yaxis->Draw();
  //limits();
  //magic();
  //stable();
  limits(x1,y1,x2,y2);
  //NeutronDripLine("neutron_dripline_2018.dat",4,x1,y1,x2,y2);
  magic(x1,y1,x2,y2);
  stable(x1,y1,x2,y2);
  read_XS(filename);
  magic(x1,y1,x2,y2);
  //read_XS("xs_final_Pb_noerr.dat");
  //read_XS("xs_final_Be_noerr.dat");
  //read_XS("xs_u1_pb_timo.dat");
  //read_XS("fission_Pb.dat");
  //read_XS("fission_Be.dat");
  //read_XS("fission_Be2.dat");
  //read_XS("UBe1AGeV.xs");
  //scale();
  //limits();
  //magic();
  //rprocess();
  //stable();
  if(strcmp(filename,"data/xs_final_Pb_2012_noerr.dat")==0)
  label("^{238}U(Pb,f)");
  else{
  label("^{238}U(Be,f)");
  scale();
  }

  //label("^{238}U(Be,f)");
  //c->Print("UPb.eps");
  return;
}

void limits(){
  //Proton Rich side
  TLine *proton_drip_line[220];
  TBox *proton_drip_box[10];
  ifstream *in=new ifstream("data/proton_dripline.dat");
  Int_t x1,y1,x2,y2;
  Char_t type[25];
  Int_t j=0;
  Int_t k=0;
  while(!in->eof()){
    *in>>type>>x1>>y1>>x2>>y2;
    //cout<<type<<x1<<y1<<x2<<y2;
    if(strcmp(type,"line")==0){
      proton_drip_line[j]=new TLine( x1, y1, x2, y2);
      proton_drip_line[j]->Draw();
      j++;
    }
    else if((type,"box")==0){
      proton_drip_box[k]=new TBox( x1, y1, x2, y2);
      proton_drip_box[k]->SetLineColor(1);
      proton_drip_box[k]->SetFillColor(0);
      proton_drip_box[k]->Draw();
      k++;
    }
  }  
  //Neutron Rich side
  TLine *neutron_drip_line[230];
  TBox *neutron_drip_box[10];
  ifstream *in2=new ifstream("data/neutron_dripline.dat");
  j=0;
  k=0;
  while(!in2->eof()){
    *in2>>type>>x1>>y1>>x2>>y2;
    //cout<<type<<x1<<y1<<x2<<y2;
    if(strcmp(type,"line")==0){
      neutron_drip_line[j]=new TLine( x1, y1, x2, y2);
      neutron_drip_line[j]->Draw();
      j++;
    }
    else if((type,"box")==0){
      neutron_drip_box[k]=new TBox( x1, y1, x2, y2);
      neutron_drip_box[k]->SetLineColor(1);
      neutron_drip_box[k]->SetFillColor(0);
      neutron_drip_box[k]->Draw();
      k++;
    }
  }  
  return;
}

void magic(){
  //Magic Numbers
  TLine *magic_numbers_lines[100];
  TText *labels[13];
  ifstream *in=new ifstream("data/magic.dat");
  Int_t x1,y1,x2,y2;
  Float_t z1,z2;
  Char_t type[3];
  Char_t text[256];
  Int_t j=0;
  Int_t k=0;
  labels[0]=new TText( 12.5, 1.5, "2");
  labels[1]=new TText( 1.5, 12.5, "2");
  labels[2]=new TText(26., 7.5 ,"8");
  labels[3]=new TText( 7.5 ,17, "8");
  labels[4]=new TText(41., 19.5, "20");
  labels[5]=new TText(18.5, 32., "20");
  labels[6]=new TText( 56., 27.5, "28");
  labels[7]=new TText( 26.5, 36., "28");
  labels[8]=new TText( 96., 49.5, "50");
  labels[9]=new TText( 85.5, 50.2, "50");
  labels[10]=new TText(141, 81.5,  "82");
  labels[11]=new TText(83.5, 42,  "82");
  labels[12]=new TText(123.5, 96,  "126");
  for(k=0;k<13;k++){
    if(k!=9)
    labels[k]->Draw();
    else continue;
  }
  while(!in->eof()){
    *in>>type;
    //cout<<"TYPE "<<type<<endl;
    if(strcmp(type,"LINE")==0){
      //cout<<type<<x1<<y1<<x2<<y2;
      *in>>x1>>y1>>x2>>y2;
      magic_numbers_lines[j]=new TLine( x1, y1, x2, y2);
      magic_numbers_lines[j]->SetLineWidth(2);
      magic_numbers_lines[j]->Draw();
      j++;
    }  
  }  
  return;

}

void stable(){
  Int_t x1,x2,y1,y2;
  Int_t stabnucz[262]={ 1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6, 7, 7, 8, 8, 8, 9,  10, 10, 10, 11, 12, 12, 12, 13, 14, 14, 14, 15, 16, 16, 16, 16, 17, 17, 18, 18, 18, 19, 19, 20, 20, 20, 20, 20, 20, 21, 22, 22, 22, 22, 22, 23, 24, 24, 24, 24, 25, 26, 26, 26, 26, 27, 28, 28, 28, 28, 28, 29, 29, 30, 30, 30, 30, 30, 31, 31, 32, 32, 32, 32, 33, 34, 34, 34, 34, 34, 35, 35, 36, 36, 36, 36, 36, 36, 37, 38, 38, 38, 38, 39, 40, 40, 40, 40, 41, 42, 42, 42, 42, 42, 42, 44, 44, 44, 44, 44, 44, 44, 45, 46, 46, 46, 46, 46, 46, 47, 47, 48, 48, 48, 48, 48, 48, 49, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 51, 51, 52, 52, 52, 52, 52, 53, 54, 54, 54, 54, 54, 54, 54, 54, 54, 55, 56, 56, 56, 56, 56, 56, 56, 57, 58, 58, 58, 58, 59, 60, 60, 60, 60, 60, 62, 62, 62, 62, 62, 63, 63, 64, 64, 64, 64, 64, 64, 65, 66, 66, 66, 66, 66, 66, 66, 67, 68, 68, 68, 68, 68,  68,   69, 70,  70,  70,  70,  70,  70,  70,  71,  72,  72,  72,  72,  72,  73,  74,  74,  74,  74,  74,  75,  76,  76,  76,  76,  76,  76,  77,  77,  78,  78,  78,  78,  78,  79,  80,  80,  80,  80,  80,  80,  80,  81,  81,  82,  82,  82,  82,  83, 90, 92, 92, 92};
  Int_t stabnucn[262]={0, 1, 1, 2, 3, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 10, 10, 10, 11, 12, 12, 12, 13, 14, 14, 14, 15, 16, 16, 16, 17, 18, 20, 18, 20, 18, 20, 22, 20, 22, 20, 22, 23, 24, 26, 28, 24, 24, 25, 26, 27, 28, 28, 26, 28, 29, 30, 30, 28, 30, 31, 32, 32, 30, 32, 33, 34, 36, 34, 36, 34, 36, 37, 37, 40, 38, 40, 38, 40, 41, 42, 43, 40, 42, 43, 44, 46, 44, 46, 42, 44, 46, 47, 48, 50, 48, 46, 48, 49, 50, 50, 50, 51, 52, 54, 52, 50, 52, 53, 54, 55, 56, 52, 54, 55, 56, 57, 58, 60, 58, 56, 58, 59, 60, 62, 64, 60, 62, 58, 60, 62, 63, 64, 66, 64, 62, 64, 65, 66, 67, 68, 69, 70, 72, 74, 70, 72, 68, 70, 72, 73, 74, 74, 70, 72, 74, 75, 76, 77, 78, 80, 82, 78, 74, 76, 78, 79, 80, 81, 82, 82, 78, 80, 82, 84, 82, 82, 83, 85, 86, 88, 82, 87, 88, 90, 92, 88, 90, 90, 91, 92, 93, 94, 96, 94, 90, 92, 94, 95, 96, 97, 98, 98, 94, 96, 98, 99, 100, 102, 100, 98, 100, 101, 102, 103, 104, 106, 104, 104, 105, 106, 107, 108, 108, 106, 108, 109, 110, 112, 110, 108, 111, 112, 113, 114, 116, 114, 116, 114, 116, 117, 118, 120, 118, 116, 118, 119, 120, 121, 122, 124, 122, 124, 122, 124, 125, 126, 126, 142, 142, 143, 146};
  TBox *stable_nuclei[262];
  for(Int_t j=0;j<262;j++){
    x1= stabnucn[j];
    y1= stabnucz[j];
    x2=x1+1;
    y2=y1+1;
    stable_nuclei[j]=new TBox(x1,y1,x2,y2);
    stable_nuclei[j]->SetLineColor(1);
    stable_nuclei[j]->SetFillColor(0);
    stable_nuclei[j]->SetFillStyle(1);
    stable_nuclei[j]->Draw();
  } 
  return;
}

void read_XS(Char_t *file_name){
  Float_t x1,y1,x2,y2,bs;
  Float_t xx;
  Int_t z[1500];
  Int_t a[1500];
  Float_t xs[1500];
  TBox *nuclei[1500];
  Int_t j=0;
  ifstream *in=new ifstream(file_name);
  if(in)cout<<"FILE opened"<<endl;
  while(!in->eof()){
    *in>>z[j]>>a[j]>>xs[j];
    //cout<<z[j]<<" "<<a[j]<<" "<<xs[j]<<endl;
    j++;
  }
  for(Int_t k=0;k<j-1;k++){
    xx=xs[k];
    bs=0.6;
    if(xx>10){
      bs=1;   
      y1=z[k];
      x1=a[k]-z[k]; 
      y2=y1+bs;
      x2=x1+bs;
      nuclei[j]=new TBox(x1,y1,x2,y2);
      nuclei[j]->SetFillColor(kRed);
      nuclei[j]->Draw();
    }
    else if(xx>5){
      bs=1;   
      y1=z[k];
      x1=a[k]-z[k]; 
      y2=y1+bs;
      x2=x1+bs;
      nuclei[j]=new TBox(x1,y1,x2,y2);
      nuclei[j]->SetFillColor(kOrange+7);
      nuclei[j]->Draw();
    }
    else if(xx>1){
      bs=1;   
      y1=z[k];
      x1=a[k]-z[k]; 
      y2=y1+bs;
      x2=x1+bs;
      nuclei[j]=new TBox(x1,y1,x2,y2);
      nuclei[j]->SetFillColor(kOrange);
      nuclei[j]->Draw();
    }
    else if(xx>1e-1){
      bs=0.9;   
      y1=z[k];
      x1=a[k]-z[k]; 
      y2=y1+bs;
      x2=x1+bs;
      nuclei[j]=new TBox(x1,y1,x2,y2);
      nuclei[j]->SetFillColor(kYellow);
      nuclei[j]->Draw();
    }
    else if(xx>1e-2){
      bs=0.9;   
      y1=z[k];
      x1=a[k]-z[k]; 
      y2=y1+bs;
      x2=x1+bs;
      nuclei[j]=new TBox(x1,y1,x2,y2);
      nuclei[j]->SetFillColor(kSpring+5);
      nuclei[j]->Draw();
    }
    else if(xx>1e-3){
      bs=0.8;   
      y1=z[k];
      x1=a[k]-z[k]; 
      y2=y1+bs;
      x2=x1+bs;
      nuclei[j]=new TBox(x1,y1,x2,y2);
      nuclei[j]->SetFillColor(kGreen);
      nuclei[j]->Draw();
    }
    else if(xx>1e-4){
      bs=0.8;   
      y1=z[k];
      x1=a[k]-z[k]; 
      y2=y1+bs;
      x2=x1+bs;
      nuclei[j]=new TBox(x1,y1,x2,y2);
      nuclei[j]->SetFillColor(kGreen+3);
      nuclei[j]->Draw();
    }
    else if(xx>1e-5){
      bs=0.7;   
      y1=z[k];
      x1=a[k]-z[k]; 
      y2=y1+bs;
      x2=x1+bs;
      nuclei[j]=new TBox(x1,y1,x2,y2);
      nuclei[j]->SetFillColor(kTeal-5);
      nuclei[j]->Draw();
    }
    else if(xx>1e-6){
      bs=0.7;   
      y1=z[k];
      x1=a[k]-z[k]; 
      y2=y1+bs;
      x2=x1+bs;
      nuclei[j]=new TBox(x1,y1,x2,y2);
      nuclei[j]->SetFillColor(kCyan);
      nuclei[j]->Draw();
    }
    else if(xx>1e-7){
      bs=0.7;   
      y1=z[k];
      x1=a[k]-z[k]; 
      y2=y1+bs;
      x2=x1+bs;
      nuclei[j]=new TBox(x1,y1,x2,y2);
      nuclei[j]->SetFillColor(kBlue);
      nuclei[j]->Draw();
    }
    else if(xx>1e-8){
      bs=0.7;   
      y1=z[k];
      x1=a[k]-z[k]; 
      y2=y1+bs;
      x2=x1+bs;
      nuclei[j]=new TBox(x1,y1,x2,y2);
      nuclei[j]->SetFillColor(kBlue+1);
      nuclei[j]->Draw();
    }
    else if(xx>1e-9){
      bs=0.7;   
      y1=z[k];
      x1=a[k]-z[k]; 
      y2=y1+bs;
      x2=x1+bs;
      nuclei[j]=new TBox(x1,y1,x2,y2);
      nuclei[j]->SetFillColor(kBlue+2);
      nuclei[j]->Draw();
    }

  }
  return;
}

void scale()
{
  TBox *b1=new TBox( 88, 43, 88.8,43.8);
  TText *t1=new TText( 89, 43, "> 10 mb");
  t1->SetTextSize(0.08);
  b1->SetFillColor(kRed);
  b1->Draw();
  t1->Draw();
  TBox *b2=new TBox(88, 41, 88.7, 41.7);
  TText *t2=new TText( 89, 41, "> 1 mb");
  t2->SetTextSize(0.08);
  b2->SetFillColor(kOrange);
  b2->Draw();
  t2->Draw();
  TBox *b3=new TBox(88, 39,88.6, 39.6);
  TLatex *t3=new TLatex( 89, 39, "> 1 #mub");
  t3->SetTextSize(0.08);
  b3->SetFillColor(kGreen);
  b3->Draw();
  t3->Draw();
  TBox *b4=new TBox(88, 37, 88.5, 37.5);
  TText *t4=new TText( 89, 37, "> 1 nb");
  t4->SetTextSize(0.08);
  b4->SetFillColor(kCyan);
  b4->Draw();
  t4->Draw();
  TBox *b4=new TBox( 88, 35, 88.4,35.4);
  TText *t4=new TText( 89, 35, "> 100 pb");
  b4->SetFillColor(kBlue);
  //b4->Draw();
  //t4->Draw();

}

void label(Char_t *lab){
  TPaveLabel *thelabel=new TPaveLabel(51.3621,53.3008,65.0948,57.5508,lab);
  //TPaveLabel *thelabel=new TPaveLabel(8.02443,97.3243,43.908,110.079,lab);
  thelabel->SetFillColor(0);
  thelabel->Draw();
}


void do(){
  TCanvas *c=new TCanvas("C","nuclide Chart",905,905);
  //TCanvas *c=new TCanvas("C","nuclide Chart",1300,452);
  //c->Divide(2,1,0.01,0.01,0);
  c->Divide(1,2);
  TVirtualPad *vp=c->cd(1);
  Chart("data/xs_final_Pb_2012_noerr.dat");
  vp=c->cd(2);
  Chart("data/xs_final_Be_noerr.dat");
  c->cd();

}

void rprocess(){
  ifstream *in=new ifstream("data/r-process-path.dat");
  Float_t x[140],y[140];
  Int_t j=0;
  while(!in->eof()){
    *in>>x[j]>>y[j];
    x[j]++;
    j++;
  }
  TGraph *g=new TGraph(j-1,x,y);
  g->SetFillStyle(3003);
  g->Draw("F");
}

void limits(Int_t x0=0,Int_t y0=0,Int_t xf=200,Int_t yf=200){
  //Proton Rich side
  TLine *proton_drip_line[220];
  TBox *proton_drip_box[10];
  ifstream *in=new ifstream("data/proton_dripline.dat");
  Int_t x1,y1,x2,y2;
  Char_t type[25];
  Int_t j=0;
  Int_t k=0;
  while(!in->eof()){
    *in>>type>>x1>>y1>>x2>>y2;
    //cout<<type<<x1<<y1<<x2<<y2;
    if(strcmp(type,"line")==0){
      proton_drip_line[j]=new TLine( x1, y1, x2, y2);
      proton_drip_line[j]->SetLineColor(1);
      if(x1>=x0&&x2<=xf&&y1>=y0&&y2<=yf)
	proton_drip_line[j]->Draw();
      else
	continue;
      j++;
    }
    else if((type,"box")==0){
      proton_drip_box[k]=new TBox( x1, y1, x2, y2);
      proton_drip_box[k]->SetLineColor(1);
      proton_drip_box[k]->SetFillColor(0);
      if(x1>=x0&&x2<=xf&&y1>=y0&&y2<=yf)
	proton_drip_box[k]->Draw();
      else
	continue;
      k++;
    }
  }  
  //Neutron Rich side
  TLine *neutron_drip_line[230];
  TBox *neutron_drip_box[10];
  ifstream *in2=new ifstream("data/neutron_dripline_2018.dat");
  j=0;
   k=0;
  while(!in2->eof()){
    *in2>>type>>x1>>y1>>x2>>y2;
    //cout<<type<<x1<<y1<<x2<<y2;
    if(strcmp(type,"line")==0){
      neutron_drip_line[j]=new TLine( x1, y1, x2, y2);
      neutron_drip_line[j]->SetLineColor(1);
      if(x1>x0&&x2<xf&&y1>y0&&y2<yf)
	neutron_drip_line[j]->Draw();
      else
	continue;
      j++;
    }
    else if((type,"box")==0){
      neutron_drip_box[k]=new TBox( x1, y1, x2, y2);
      neutron_drip_box[k]->SetLineColor(1);
      neutron_drip_box[k]->SetFillColor(0);
      if(x1>x0&&x2<xf&&y1>y0&&y2<yf)
	neutron_drip_box[k]->Draw();
      else
	continue;
      k++;
    }
  }  
  return;
}

void magic(Int_t x0=0,Int_t y0=0,Int_t xf=200,Int_t yf=200){
  //Magic Numbers
  TLine *magic_numbers_lines[100];
  TText *labels[13];
  ifstream *in=new ifstream("data/magic.dat");
  Int_t x1,y1,x2,y2;
  Float_t z1,z2;
  Char_t type[3];
  Char_t text[256];
  Int_t j=0;
  Int_t k=0;
  labels[0]=new TText( 12.5, 1.5, "2");
  labels[1]=new TText( 1.5, 12.5, "2");
  labels[2]=new TText(26., 7.5 ,"8");
  labels[3]=new TText( 7.5 ,17, "8");
  labels[4]=new TText(41., 19.5, "20");
  labels[5]=new TText(18.5, 32., "20");
  labels[6]=new TText( 56., 27.5, "28");
  labels[7]=new TText( 26.5, 36., "28");
  labels[8]=new TText( 96., 49.5, "Z=50");
  labels[9]=new TText( 49.5, 21.5, "50");
  labels[10]=new TText(141, 81.5,  "82");
  labels[11]=new TText(81.5, 41,  "N=82");
  labels[12]=new TText(123.5, 96,  "126");
  for(k=0;k<13;k++){
    if(k>3&&k!=9)
      labels[k]->SetTextSize(0.08);
      labels[k]->Draw();
      //else continue;
  }
  while(!in->eof()){
    *in>>type;
    //cout<<"TYPE "<<type<<endl;
    if(strcmp(type,"LINE")==0){
      //cout<<type<<x1<<y1<<x2<<y2;
      *in>>x1>>y1>>x2>>y2;
      //if(x1>x0&&x2<xf&&y1>y0&&y2<yf)
      //if(x1==82 ||x1==83)
      //magic_numbers_lines[j]=new TLine( x1, y1-4, x2, y2-4);
      //else
      magic_numbers_lines[j]=new TLine( x1, y1, x2, y2);
      magic_numbers_lines[j]->SetLineWidth(2);
      //if(x1>x0&&x2<xf&&y1>y0&&y2<yf)
      magic_numbers_lines[j]->Draw();
      //else continue;
    j++;
    }  
  }  
  return;

}

void stable(Int_t x0=0,Int_t y0=0,Int_t xf=200,Int_t yf=200){
  Int_t x1,x2,y1,y2;
  Int_t stabnucz[262]={ 1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6, 7, 7, 8, 8, 8, 9,  10, 10, 10, 11, 12, 12, 12, 13, 14, 14, 14, 15, 16, 16, 16, 16, 17, 17, 18, 18, 18, 19, 19, 20, 20, 20, 20, 20, 20, 21, 22, 22, 22, 22, 22, 23, 24, 24, 24, 24, 25, 26, 26, 26, 26, 27, 28, 28, 28, 28, 28, 29, 29, 30, 30, 30, 30, 30, 31, 31, 32, 32, 32, 32, 33, 34, 34, 34, 34, 34, 35, 35, 36, 36, 36, 36, 36, 36, 37, 38, 38, 38, 38, 39, 40, 40, 40, 40, 41, 42, 42, 42, 42, 42, 42, 44, 44, 44, 44, 44, 44, 44, 45, 46, 46, 46, 46, 46, 46, 47, 47, 48, 48, 48, 48, 48, 48, 49, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 51, 51, 52, 52, 52, 52, 52, 53, 54, 54, 54, 54, 54, 54, 54, 54, 54, 55, 56, 56, 56, 56, 56, 56, 56, 57, 58, 58, 58, 58, 59, 60, 60, 60, 60, 60, 62, 62, 62, 62, 62, 63, 63, 64, 64, 64, 64, 64, 64, 65, 66, 66, 66, 66, 66, 66, 66, 67, 68, 68, 68, 68, 68,  68,   69, 70,  70,  70,  70,  70,  70,  70,  71,  72,  72,  72,  72,  72,  73,  74,  74,  74,  74,  74,  75,  76,  76,  76,  76,  76,  76,  77,  77,  78,  78,  78,  78,  78,  79,  80,  80,  80,  80,  80,  80,  80,  81,  81,  82,  82,  82,  82,  83, 90, 92, 92, 92};
  Int_t stabnucn[262]={0, 1, 1, 2, 3, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 10, 10, 10, 11, 12, 12, 12, 13, 14, 14, 14, 15, 16, 16, 16, 17, 18, 20, 18, 20, 18, 20, 22, 20, 22, 20, 22, 23, 24, 26, 28, 24, 24, 25, 26, 27, 28, 28, 26, 28, 29, 30, 30, 28, 30, 31, 32, 32, 30, 32, 33, 34, 36, 34, 36, 34, 36, 37, 37, 40, 38, 40, 38, 40, 41, 42, 43, 40, 42, 43, 44, 46, 44, 46, 42, 44, 46, 47, 48, 50, 48, 46, 48, 49, 50, 50, 50, 51, 52, 54, 52, 50, 52, 53, 54, 55, 56, 52, 54, 55, 56, 57, 58, 60, 58, 56, 58, 59, 60, 62, 64, 60, 62, 58, 60, 62, 63, 64, 66, 64, 62, 64, 65, 66, 67, 68, 69, 70, 72, 74, 70, 72, 68, 70, 72, 73, 74, 74, 70, 72, 74, 75, 76, 77, 78, 80, 82, 78, 74, 76, 78, 79, 80, 81, 82, 82, 78, 80, 82, 84, 82, 82, 83, 85, 86, 88, 82, 87, 88, 90, 92, 88, 90, 90, 91, 92, 93, 94, 96, 94, 90, 92, 94, 95, 96, 97, 98, 98, 94, 96, 98, 99, 100, 102, 100, 98, 100, 101, 102, 103, 104, 106, 104, 104, 105, 106, 107, 108, 108, 106, 108, 109, 110, 112, 110, 108, 111, 112, 113, 114, 116, 114, 116, 114, 116, 117, 118, 120, 118, 116, 118, 119, 120, 121, 122, 124, 122, 124, 122, 124, 125, 126, 126, 142, 142, 143, 146};
  TBox *stable_nuclei[262];
  for(Int_t j=0;j<262;j++){
    x1= stabnucn[j];
    y1= stabnucz[j];
    x2=x1+1;
    y2=y1+1;
    stable_nuclei[j]=new TBox(x1,y1,x2,y2);
    stable_nuclei[j]->SetLineColor(1);
    stable_nuclei[j]->SetFillColor(2);
    stable_nuclei[j]->SetFillStyle(1);
    if(x1>x0&&x2<xf&&y1>y0&&y2<yf)
      stable_nuclei[j]->Draw();
    else continue;
  } 
  return;
}

void ProtonDripLine(Int_t x0=0,Int_t y0=0,Int_t xf=200,Int_t yf=200){

  //Proton Rich side
  TLine *proton_drip_line[220];
  TBox *proton_drip_box[10];
  ifstream *in=new ifstream("data/proton_dripline.dat");
  Int_t x1,y1,x2,y2;
  Char_t type[25];
  Int_t j=0;
  Int_t k=0;
  while(!in->eof()){
    *in>>type>>x1>>y1>>x2>>y2;
    //cout<<type<<x1<<y1<<x2<<y2;
    if(strcmp(type,"line")==0){
      proton_drip_line[j]=new TLine( x1, y1, x2, y2);
      proton_drip_line[j]->SetLineColor(2);
      if(x1>x0&&x2<xf&&y1>y0&&y2<yf)
	proton_drip_line[j]->Draw();
      else
	continue;
      j++;
    }
    else if((type,"box")==0){
      proton_drip_box[k]=new TBox( x1, y1, x2, y2);
      proton_drip_box[k]->SetLineColor(2);
      proton_drip_box[k]->SetFillColor(0);
      if(x1>x0&&x2<xf&&y1>y0&&y2<yf)
	proton_drip_box[k]->Draw();
      else
	continue;
      k++;
    }
  }  
}


void NeutronDripLine(Char_t *filename="data/neutron_dripline.dat",Int_t color=4,Int_t x0=-1,Int_t y0=-1,Int_t xf=200,Int_t yf=200){

  //Neutron Rich side
   Int_t x1,y1,x2,y2;
  Char_t type[25];
  TLine *neutron_drip_line[300];
  TBox *neutron_drip_box[10];
  ifstream *in2=new ifstream(filename);
  Int_t j=0;
  Int_t k=0;
  while(!in2->eof()){
    *in2>>type>>x1>>y1>>x2>>y2;
    //cout<<type<<" "<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
    if(strcmp(type,"line")==0){
      neutron_drip_line[j]=new TLine( x1, y1, x2, y2);
      neutron_drip_line[j]->SetLineColor(color);
      if(x1>x0&&x2<xf&&y1>y0&&y2<yf)
	neutron_drip_line[j]->Draw();
      else
	continue;
      j++;
    }
    else if((type,"box")==0){
      neutron_drip_box[k]=new TBox( x1, y1, x2, y2);
      neutron_drip_box[k]->SetLineColor(color);
      neutron_drip_box[k]->SetFillColor(0);
      if(x1>x0&&x2<xf&&y1>y0&&y2<yf)
	neutron_drip_box[k]->Draw();
      else
	continue;
      k++;
    }
  }  
}

void slopes(TVirtualPad *vp){
  //TCanvas *c=new TCanvas();
  TFile *file=new TFile("data/Derivatives.root");
  Char_t *name[]={"Rb","Sr","Y","Zr","Nb","Mo","Tc","Ru","Rh","Pd",
		  "Ag","Cd","In","Sn","Sb","Te","I","Xe","Cs","Ba"};
  Float_t errors_a_Pb[]={0.0086,0.0037,0.0032,0.0029,0.0042,0.0032,0.0031,0.0042,0.0029,0.0020,
			 0.006,0.004,0.0097,0.0068,0.0079,0.0035,0.0037,0.0035,0.00480,0.0048};
  Float_t errors_a_Be[]={0.0056,0.0038,0.0034,0.0028,0.0017,0.0021,0.0017,0.0019,0.0019,0.0014,
			 0.0012,0.0011,0.0026,0.0055,0.0046,0.0031,0.00260,0.0026,0.0026,0.0017};
  Char_t fname[256];
  Float_t Z[30];
  Float_t slope_be[30];
  Float_t error_slope_be[30];
  Float_t slope_pb[30]; 
  Float_t error_slope_pb[30]; 
  for(Int_t k=0;k<20;k++){
    sprintf(fname,"%s_fderiv_Be",name[k]);
    TF1 *fBe=(TF1*)file->Get(fname);
    Z[k]=(Float_t)atomic_number(name[k]);
    slope_be[k]=fBe->GetParameter(1);
    error_slope_be[k]=2*errors_a_Be[k];
    sprintf(fname,"%s_fderiv_Pb",name[k]);
    TF1 *fPb=(TF1*)file->Get(fname);
    slope_pb[k]=fPb->GetParameter(1);
    error_slope_pb[k]=2*errors_a_Pb[k];
  }
  TGraphErrors *gPb=new TGraphErrors(k,Z,slope_pb,0,error_slope_pb);
  TGraphErrors *gBe=new TGraphErrors(k,Z,slope_be,0,error_slope_be);
  gBe->SetTitle("");
  gBe->GetYaxis()->SetRangeUser(-0.3,0);
  gBe->GetYaxis()->SetTitle("Derivative Slope");
  gBe->GetXaxis()->SetTitle("Atomic Number");
  gBe->Draw("ALP");
  gBe->SetMarkerStyle(21);
  gBe->SetMarkerColor(2);
  gBe->SetLineColor(2);
  gPb->SetMarkerColor(1);
  gPb->SetMarkerStyle(20);
  gPb->Draw("LP");
  //return c;
}

Int_t atomic_number(Char_t *input){
  Char_t *element[]={"H","He","Li","Be","B","C","N","O","F","Ne",
                   "Na","Mg","Al","Si","P","S","Cl","Ar","K",
                   "Ca","Sc","Ti","V","Cr","Mn","Fe","Co","Ni",
                   "Cu","Zn","Ga","Ge","As","Se","Br","Kr","Rb",
                   "Sr","Y","Zr","Nb","Mo","Tc","Ru","Rh","Pd",
                   "Ag","Cd","In","Sn","Sb","Te","I","Xe","Cs",
                   "Ba","La","Ce","Pr","Nd","Pm","Sm","Eu","Gd",
                   "Tb","Dy","Ho","Er","Tm","Yb","Lu","Hf","Ta",
                   "W","Re","Os","Ir","Pt","Au","Hg","Tl","Pb",
                   "Bi","Po","At","Rn","Fr","Ra","Ac","Th","Pa","U","Np",
                   "Pu","Am","Cm","Bk","Cf","Es","Fm","Md","No",
                   "Lr","Rf","Db","Sg","Hs","Mt","Ds","Rg","Uuu",
                   "UUb","Uut","UUq","Uup","Uuh","Uus","Uuo"};
 
 for(Int_t i=0;i<=117;i++)
  {
	  if(strcmp(input,element[i])==0)
	  {
		  cout << input <<" " << i+1 << endl;
                return i+1;
                }
        else
	  continue;
        }
 cout << "El elemento " << input << " no existe" << endl;
 return 0;
}

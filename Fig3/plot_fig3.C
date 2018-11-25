#include "Chart.C"
void plot_fig3(){
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

#include "Chart6.C"
#include <TH2F.h>

void test(){
gStyle->SetOptStat(0);
TH2F *h=new TH2F("h","",200,49,105,200,30,60);
TLatex *lat=new TLatex();
h->Draw();
h->GetXaxis()->SetNdivisions(613);
h->GetXaxis()->SetNdivisions(510);
//gPad->SetGridx();
gPad->SetGridy();
stable(49,30,99,60);
NeutronDripLine("neutron_dripline.dat");
NeutronDripLine("neutron_dripline_2018.dat",3,49,30,105,60);
//read_XS("xs_final_Pb_2012_noerr.dat");
//read_XS("xs_final_Be_noerr.dat");
lat->DrawLatex(56.2,31.5,"^{87}Ga");
lat->DrawLatex(58.2,32.5,"^{90}Ge");
lat->DrawLatex(59.2,33.5,"^{92}As");
lat->DrawLatex(61.2,34.5,"^{95}Se");
lat->DrawLatex(63.2,35.5,"^{98}Br");
lat->DrawLatex(63.2,35.5,"^{98}Br");
lat->DrawLatex(65.2,36.5,"^{101}Kr");
lat->DrawLatex(67.2,37.5,"^{104}Rb");
lat->DrawLatex(69.2,38.5,"^{107}Sr");
lat->DrawLatex(70.2,39.5,"^{109}Y");
lat->DrawLatex(73.2,40.5,"^{113}Zr");
lat->DrawLatex(75.2,41.5,"^{116}Nb");
lat->DrawLatex(77.2,42.5,"^{119}Mo");
lat->DrawLatex(79.2,43.5,"^{122}Tc");
lat->DrawLatex(81.2,44.5,"^{125}Ru");
lat->DrawLatex(83.2,45.5,"^{128}Rh");
lat->DrawLatex(85.2,46.5,"^{131}Pd");
lat->DrawLatex(85.2,47.5,"^{132}Ag");
lat->DrawLatex(86.2,48.5,"^{134}Cd");
lat->DrawLatex(88.2,49.5,"^{137}In");
lat->DrawLatex(90.2,50.5,"^{140}Sn");
lat->DrawLatex(91.2,51.5,"^{142}Sb");
lat->DrawLatex(93.2,52.5,"^{145}Te");
lat->DrawLatex(94.2,53.5,"^{147}I");
lat->DrawLatex(96.2,54.5,"^{150}Xe");
lat->DrawLatex(96.2,55.5,"^{151}Cs");
lat->DrawLatex(98.2,56.5,"^{154}Ba");
lat->DrawLatex(100.2,57.5,"^{157}La");
lat->DrawLatex(100.2,58.5,"^{158}Ce");

}

{
//=========Macro generated from canvas: C/nuclide Chart
//=========  (Sat Nov 24 20:04:42 2018) by ROOT version5.34/36
   TCanvas *C = new TCanvas("C", "nuclide Chart",0,45,905,717);
   C->Range(0,0,1,1);
   C->SetFillColor(0);
   C->SetBorderMode(0);
   C->SetBorderSize(2);
   C->SetLeftMargin(0.15);
   C->SetBottomMargin(0.15);
   C->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: C_1
   TPad *C_1 = new TPad("C_1", "C_1",0.01,0.51,0.99,0.99);
   C_1->Draw();
   C_1->cd();
   C_1->Range(50,33,100,59);
   C_1->SetFillColor(0);
   C_1->SetBorderSize(2);
   C_1->SetLeftMargin(0.15);
   C_1->SetBottomMargin(0.15);
   C_1->SetFrameBorderMode(0);
   TArrow *arrow = new TArrow(0,0,180,0,0.05,"|>");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetAngle(30);
   arrow->Draw();
   arrow = new TArrow(0,0,0,120,0.05,"|>");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetAngle(30);
   arrow->Draw();
   TText *text = new TText(90,-5,"N");
   text->Draw();
   text = new TText(-5,60,"Z");
   text->Draw();
   TLine *line = new TLine(50,50,50,51);
   line->Draw();
   line = new TLine(50,51,52,51);
   line->Draw();
   line = new TLine(52,51,52,52);
   line->Draw();
   line = new TLine(52,52,54,52);
   line->Draw();
   line = new TLine(54,52,54,53);
   line->Draw();
   line = new TLine(54,53,55,53);
   line->Draw();
   line = new TLine(55,53,55,54);
   line->Draw();
   line = new TLine(55,54,56,54);
   line->Draw();
   line = new TLine(56,54,56,55);
   line->Draw();
   line = new TLine(56,55,57,55);
   line->Draw();
   line = new TLine(57,55,57,56);
   line->Draw();
   line = new TLine(57,56,58,56);
   line->Draw();
   line = new TLine(58,56,58,57);
   line->Draw();
   line = new TLine(58,57,60,57);
   line->Draw();
   line = new TLine(60,57,60,58);
   line->Draw();
   line = new TLine(60,58,63,58);
   line->Draw();
   line = new TLine(63,58,63,59);
   line->Draw();
   line = new TLine(63,59,62,59);
   line->Draw();
   line = new TLine(60,34,62,34);
   line->Draw();
   line = new TLine(62,34,62,35);
   line->Draw();
   line = new TLine(62,35,64,35);
   line->Draw();
   line = new TLine(64,35,64,36);
   line->Draw();
   line = new TLine(64,36,66,36);
   line->Draw();
   line = new TLine(66,36,66,37);
   line->Draw();
   line = new TLine(66,37,68,37);
   line->Draw();
   line = new TLine(68,37,68,38);
   line->Draw();
   line = new TLine(68,38,70,38);
   line->Draw();
   line = new TLine(70,38,70,39);
   line->Draw();
   line = new TLine(69,39,71,39);
   line->Draw();
   line = new TLine(71,39,71,40);
   line->Draw();
   line = new TLine(71,40,74,40);
   line->Draw();
   line = new TLine(74,40,74,41);
   line->Draw();
   line = new TLine(74,41,76,41);
   line->Draw();
   line = new TLine(76,41,76,42);
   line->Draw();
   line = new TLine(76,42,78,42);
   line->Draw();
   line = new TLine(78,42,78,43);
   line->Draw();
   line = new TLine(78,43,80,43);
   line->Draw();
   line = new TLine(80,43,80,44);
   line->Draw();
   line = new TLine(80,44,82,44);
   line->Draw();
   line = new TLine(82,44,82,45);
   line->Draw();
   line = new TLine(82,45,84,45);
   line->Draw();
   line = new TLine(84,45,84,46);
   line->Draw();
   line = new TLine(84,46,86,46);
   line->Draw();
   line = new TLine(86,46,86,47);
   line->Draw();
   line = new TLine(86,47,86,48);
   line->Draw();
   line = new TLine(86,48,87,48);
   line->Draw();
   line = new TLine(87,48,87,49);
   line->Draw();
   line = new TLine(87,49,89,49);
   line->Draw();
   line = new TLine(89,49,89,50);
   line->Draw();
   line = new TLine(89,50,91,50);
   line->Draw();
   line = new TLine(91,50,91,51);
   line->Draw();
   line = new TLine(91,51,92,51);
   line->Draw();
   line = new TLine(92,51,92,52);
   line->Draw();
   line = new TLine(92,52,94,52);
   line->Draw();
   line = new TLine(94,52,94,53);
   line->Draw();
   line = new TLine(94,53,95,53);
   line->Draw();
   line = new TLine(95,53,95,54);
   line->Draw();
   line = new TLine(95,54,97,54);
   line->Draw();
   line = new TLine(97,54,97,55);
   line->Draw();
   line = new TLine(97,55,97,56);
   line->Draw();
   line = new TLine(97,56,99,56);
   line->Draw();
   line = new TLine(99,56,99,57);
   line->Draw();
   text = new TText(12.5,1.5,"2");
   text->Draw();
   text = new TText(1.5,12.5,"2");
   text->Draw();
   text = new TText(26,7.5,"8");
   text->Draw();
   text = new TText(7.5,17,"8");
   text->Draw();
   text = new TText(41,19.5,"20");
   text->SetTextSize(0.08);
   text->Draw();
   text = new TText(18.5,32,"20");
   text->SetTextSize(0.08);
   text->Draw();
   text = new TText(56,27.5,"28");
   text->SetTextSize(0.08);
   text->Draw();
   text = new TText(26.5,36,"28");
   text->SetTextSize(0.08);
   text->Draw();
   text = new TText(96,49.5,"Z=50");
   text->SetTextSize(0.08);
   text->Draw();
   text = new TText(49.5,21.5,"50");
   text->Draw();
   text = new TText(141,81.5,"82");
   text->SetTextSize(0.08);
   text->Draw();
   text = new TText(81.5,41,"N=82");
   text->SetTextSize(0.08);
   text->Draw();
   text = new TText(123.5,96,"126");
   text->SetTextSize(0.08);
   text->Draw();
   line = new TLine(-1,2,12,2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-1,3,12,3);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(2,0,2,12);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(3,0,3,12);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0,8,25,8);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0,9,25,9);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(8,0,8,16);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(9,0,9,16);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(12,20,40,20);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(12,21,40,21);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(20,6,20,31);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(21,6,21,31);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(17,28,55,28);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(17,29,55,29);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(28,10,28,35);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(29,10,29,35);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(45,50,95,50);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(45,51,95,51);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(50,24,50,55);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(51,24,51,55);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(92,82,140,82);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(92,83,140,83);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(82,43,82,77);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(83,43,83,77);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(126,75,126,95);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(127,75,127,95);
   line->SetLineWidth(2);
   line->Draw();
   TBox *box = new TBox(51,40,52,41);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(52,40,53,41);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(54,40,55,41);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(52,41,53,42);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(52,42,53,43);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(53,42,54,43);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(54,42,55,43);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(55,42,56,43);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(56,42,57,43);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(52,44,53,45);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(54,44,55,45);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(55,44,56,45);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(56,44,57,45);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(57,44,58,45);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(58,44,59,45);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(60,44,61,45);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(58,45,59,46);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(56,46,57,47);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(58,46,59,47);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(59,46,60,47);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(60,46,61,47);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(62,46,63,47);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(64,46,65,47);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(60,47,61,48);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(62,47,63,48);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(58,48,59,49);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(60,48,61,49);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(62,48,63,49);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(63,48,64,49);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(64,48,65,49);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(66,48,67,49);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(64,49,65,50);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(62,50,63,51);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(64,50,65,51);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(65,50,66,51);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(66,50,67,51);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(67,50,68,51);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(68,50,69,51);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(69,50,70,51);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(70,50,71,51);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(72,50,73,51);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(74,50,75,51);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(70,51,71,52);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(72,51,73,52);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(68,52,69,53);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(70,52,71,53);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(72,52,73,53);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(73,52,74,53);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(74,52,75,53);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(74,53,75,54);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(70,54,71,55);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(72,54,73,55);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(74,54,75,55);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(75,54,76,55);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(76,54,77,55);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(77,54,78,55);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(78,54,79,55);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(80,54,81,55);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(82,54,83,55);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(78,55,79,56);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(74,56,75,57);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(76,56,77,57);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(78,56,79,57);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(79,56,80,57);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(80,56,81,57);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(81,56,82,57);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(82,56,83,57);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(82,57,83,58);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(54,36,55,37);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(55,36,56,37);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(57,37,58,38);

   ci = TColor::GetColor("#ff0000");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(58,37,59,38);

   ci = TColor::GetColor("#ff6600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(59,37,60,38);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(60,37,60.9,37.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(61,37,61.9,37.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(62,37,62.9,37.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(63,37,63.8,37.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(58,38,59,39);

   ci = TColor::GetColor("#ff0000");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(59,38,60,39);

   ci = TColor::GetColor("#ff0000");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(60,38,61,39);

   ci = TColor::GetColor("#ff0000");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(61,38,62,39);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(62,38,63,39);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(63,38,63.9,38.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(64,38,64.9,38.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(65,38,65.8,38.8);

   ci = TColor::GetColor("#006600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(60,39,61,40);

   ci = TColor::GetColor("#ff0000");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(61,39,62,40);

   ci = TColor::GetColor("#ff0000");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(62,39,63,40);

   ci = TColor::GetColor("#ff0000");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(63,39,64,40);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(64,39,64.9,39.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(65,39,65.9,39.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(66,39,66.8,39.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(67,39,67.8,39.8);

   ci = TColor::GetColor("#006600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(62,40,63,41);

   ci = TColor::GetColor("#ff0000");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(63,40,64,41);

   ci = TColor::GetColor("#ff0000");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(64,40,65,41);

   ci = TColor::GetColor("#ff0000");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(65,40,66,41);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(66,40,66.9,40.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(67,40,67.9,40.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(68,40,68.8,40.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(69,40,69.7,40.7);

   ci = TColor::GetColor("#33cc99");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(62,41,63,42);

   ci = TColor::GetColor("#ff0000");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(63,41,64,42);

   ci = TColor::GetColor("#ff0000");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(64,41,65,42);

   ci = TColor::GetColor("#ff0000");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(65,41,66,42);

   ci = TColor::GetColor("#ff6600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(66,41,67,42);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(67,41,67.9,41.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(68,41,68.9,41.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(69,41,69.8,41.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(70,41,70.8,41.8);

   ci = TColor::GetColor("#006600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(65,42,66,43);

   ci = TColor::GetColor("#ff0000");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(66,42,67,43);

   ci = TColor::GetColor("#ff6600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(67,42,68,43);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(68,42,68.9,42.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(69,42,69.9,42.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(70,42,70.9,42.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(71,42,71.8,42.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(67,43,68,44);

   ci = TColor::GetColor("#ff6600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(68,43,69,44);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(69,43,69.9,43.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(70,43,70.9,43.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(71,43,71.9,43.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(72,43,72.8,43.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(73,43,73.8,43.8);

   ci = TColor::GetColor("#006600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(74,43,74.8,43.8);

   ci = TColor::GetColor("#006600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(68,44,69,45);

   ci = TColor::GetColor("#ff0000");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(69,44,70,45);

   ci = TColor::GetColor("#ff6600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(70,44,71,45);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(71,44,71.9,44.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(72,44,72.9,44.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(73,44,73.9,44.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(74,44,74.8,44.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(75,44,75.8,44.8);

   ci = TColor::GetColor("#006600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(70,45,71,46);

   ci = TColor::GetColor("#ff0000");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(71,45,72,46);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(72,45,72.9,45.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(73,45,73.9,45.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(74,45,74.9,45.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(75,45,75.9,45.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(76,45,76.8,45.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(77,45,77.8,45.8);

   ci = TColor::GetColor("#006600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(72,46,73,47);

   ci = TColor::GetColor("#ff6600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(73,46,74,47);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(74,46,74.9,46.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(75,46,75.9,46.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(76,46,76.9,46.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(77,46,77.8,46.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(78,46,78.8,46.8);

   ci = TColor::GetColor("#006600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(79,46,79.7,46.7);

   ci = TColor::GetColor("#33cc99");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(73,47,74,48);

   ci = TColor::GetColor("#ff0000");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(74,47,75,48);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(75,47,76,48);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(76,47,76.9,47.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(77,47,77.9,47.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(78,47,78.9,47.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(79,47,79.8,47.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(80,47,80.8,47.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(81,47,81.7,47.7);

   ci = TColor::GetColor("#33cc99");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(75,48,76,49);

   ci = TColor::GetColor("#ff6600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(76,48,77,49);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(77,48,78,49);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(78,48,79,49);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(79,48,79.9,48.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(80,48,80.9,48.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(81,48,81.9,48.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(82,48,82.8,48.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(83,48,83.8,48.8);

   ci = TColor::GetColor("#006600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(77,49,78,50);

   ci = TColor::GetColor("#ff6600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(78,49,79,50);

   ci = TColor::GetColor("#ff6600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(79,49,80,50);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(80,49,81,50);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(81,49,82,50);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(82,49,82.9,49.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(83,49,83.9,49.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(84,49,84.8,49.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(85,49,85.8,49.8);

   ci = TColor::GetColor("#006600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(86,49,86.7,49.7);

   ci = TColor::GetColor("#33cc99");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(78,50,79,51);

   ci = TColor::GetColor("#ff0000");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(79,50,80,51);

   ci = TColor::GetColor("#ff0000");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(80,50,81,51);

   ci = TColor::GetColor("#ff0000");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(81,50,82,51);

   ci = TColor::GetColor("#ff0000");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(82,50,83,51);

   ci = TColor::GetColor("#ff0000");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(83,50,84,51);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(84,50,85,51);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(85,50,85.9,50.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(86,50,86.8,50.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(87,50,87.8,50.8);

   ci = TColor::GetColor("#006600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(81,51,82,52);

   ci = TColor::GetColor("#ff0000");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(82,51,83,52);

   ci = TColor::GetColor("#ff0000");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(83,51,84,52);

   ci = TColor::GetColor("#ff0000");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(84,51,85,52);

   ci = TColor::GetColor("#ff6600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(85,51,85.9,51.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(86,51,86.9,51.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(87,51,87.9,51.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(88,51,88.8,51.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(83,52,84,53);

   ci = TColor::GetColor("#ff0000");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(84,52,85,53);

   ci = TColor::GetColor("#ff0000");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(85,52,86,53);

   ci = TColor::GetColor("#ff0000");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(86,52,87,53);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(87,52,87.9,52.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(88,52,88.9,52.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(89,52,89.8,52.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(90,52,90.8,52.8);

   ci = TColor::GetColor("#006600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(84,53,85,54);

   ci = TColor::GetColor("#ff0000");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(85,53,86,54);

   ci = TColor::GetColor("#ff0000");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(86,53,87,54);

   ci = TColor::GetColor("#ff0000");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(87,53,88,54);

   ci = TColor::GetColor("#ff6600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(88,53,89,54);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(89,53,89.9,53.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(90,53,90.9,53.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(91,53,91.8,53.8);

   ci = TColor::GetColor("#006600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(87,54,88,55);

   ci = TColor::GetColor("#ff0000");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(88,54,89,55);

   ci = TColor::GetColor("#ff0000");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(89,54,90,55);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(90,54,90.9,54.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(91,54,91.9,54.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(92,54,92.8,54.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(93,54,93.8,54.8);

   ci = TColor::GetColor("#006600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(89,55,90,56);

   ci = TColor::GetColor("#ff0000");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(90,55,91,56);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(91,55,91.9,55.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(92,55,92.9,55.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(93,55,93.8,55.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(94,55,94.8,55.8);

   ci = TColor::GetColor("#006600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(89,56,90,57);

   ci = TColor::GetColor("#ff0000");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(90,56,91,57);

   ci = TColor::GetColor("#ff0000");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(91,56,92,57);

   ci = TColor::GetColor("#ff6600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(92,56,93,57);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(93,56,93.9,56.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(94,56,94.9,56.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(95,56,95.8,56.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(91,57,92,58);

   ci = TColor::GetColor("#ff0000");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(92,57,93,58);

   ci = TColor::GetColor("#ff6600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(93,57,94,58);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(94,57,94.9,57.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(95,57,95.9,57.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(96,57,96.8,57.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(93,58,94,59);

   ci = TColor::GetColor("#ff6600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(94,58,95,59);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(95,58,95.9,58.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(96,58,96.9,58.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(93,59,94,60);

   ci = TColor::GetColor("#ff0000");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(94,59,95,60);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(96,59,96.9,59.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(95,60,96,61);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(96,60,96.9,60.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   text = new TText(12.5,1.5,"2");
   text->Draw();
   text = new TText(1.5,12.5,"2");
   text->Draw();
   text = new TText(26,7.5,"8");
   text->Draw();
   text = new TText(7.5,17,"8");
   text->Draw();
   text = new TText(41,19.5,"20");
   text->SetTextSize(0.08);
   text->Draw();
   text = new TText(18.5,32,"20");
   text->SetTextSize(0.08);
   text->Draw();
   text = new TText(56,27.5,"28");
   text->SetTextSize(0.08);
   text->Draw();
   text = new TText(26.5,36,"28");
   text->SetTextSize(0.08);
   text->Draw();
   text = new TText(96,49.5,"Z=50");
   text->SetTextSize(0.08);
   text->Draw();
   text = new TText(49.5,21.5,"50");
   text->Draw();
   text = new TText(141,81.5,"82");
   text->SetTextSize(0.08);
   text->Draw();
   text = new TText(81.5,41,"N=82");
   text->SetTextSize(0.08);
   text->Draw();
   text = new TText(123.5,96,"126");
   text->SetTextSize(0.08);
   text->Draw();
   line = new TLine(-1,2,12,2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-1,3,12,3);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(2,0,2,12);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(3,0,3,12);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0,8,25,8);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0,9,25,9);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(8,0,8,16);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(9,0,9,16);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(12,20,40,20);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(12,21,40,21);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(20,6,20,31);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(21,6,21,31);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(17,28,55,28);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(17,29,55,29);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(28,10,28,35);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(29,10,29,35);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(45,50,95,50);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(45,51,95,51);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(50,24,50,55);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(51,24,51,55);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(92,82,140,82);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(92,83,140,83);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(82,43,82,77);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(83,43,83,77);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(126,75,126,95);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(127,75,127,95);
   line->SetLineWidth(2);
   line->Draw();
   
   TPaveLabel *pl = new TPaveLabel(51.3621,53.3008,65.0948,57.5508,"^{238}U(Pb,f)","br");
   pl->SetFillColor(0);
   pl->SetTextSize(0.99);
   pl->Draw();
   C_1->Modified();
   C->cd();
  
// ------------>Primitives in pad: C_2
   C_2 = new TPad("C_2", "C_2",0.01,0.01,0.99,0.49);
   C_2->Draw();
   C_2->cd();
   C_2->Range(50,33,100,59);
   C_2->SetFillColor(0);
   C_2->SetBorderSize(2);
   C_2->SetLeftMargin(0.15);
   C_2->SetBottomMargin(0.15);
   C_2->SetFrameBorderMode(0);
   arrow = new TArrow(0,0,180,0,0.05,"|>");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetAngle(30);
   arrow->Draw();
   arrow = new TArrow(0,0,0,120,0.05,"|>");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetAngle(30);
   arrow->Draw();
   text = new TText(90,-5,"N");
   text->Draw();
   text = new TText(-5,60,"Z");
   text->Draw();
   line = new TLine(50,50,50,51);
   line->Draw();
   line = new TLine(50,51,52,51);
   line->Draw();
   line = new TLine(52,51,52,52);
   line->Draw();
   line = new TLine(52,52,54,52);
   line->Draw();
   line = new TLine(54,52,54,53);
   line->Draw();
   line = new TLine(54,53,55,53);
   line->Draw();
   line = new TLine(55,53,55,54);
   line->Draw();
   line = new TLine(55,54,56,54);
   line->Draw();
   line = new TLine(56,54,56,55);
   line->Draw();
   line = new TLine(56,55,57,55);
   line->Draw();
   line = new TLine(57,55,57,56);
   line->Draw();
   line = new TLine(57,56,58,56);
   line->Draw();
   line = new TLine(58,56,58,57);
   line->Draw();
   line = new TLine(58,57,60,57);
   line->Draw();
   line = new TLine(60,57,60,58);
   line->Draw();
   line = new TLine(60,58,63,58);
   line->Draw();
   line = new TLine(63,58,63,59);
   line->Draw();
   line = new TLine(63,59,62,59);
   line->Draw();
   line = new TLine(60,34,62,34);
   line->Draw();
   line = new TLine(62,34,62,35);
   line->Draw();
   line = new TLine(62,35,64,35);
   line->Draw();
   line = new TLine(64,35,64,36);
   line->Draw();
   line = new TLine(64,36,66,36);
   line->Draw();
   line = new TLine(66,36,66,37);
   line->Draw();
   line = new TLine(66,37,68,37);
   line->Draw();
   line = new TLine(68,37,68,38);
   line->Draw();
   line = new TLine(68,38,70,38);
   line->Draw();
   line = new TLine(70,38,70,39);
   line->Draw();
   line = new TLine(69,39,71,39);
   line->Draw();
   line = new TLine(71,39,71,40);
   line->Draw();
   line = new TLine(71,40,74,40);
   line->Draw();
   line = new TLine(74,40,74,41);
   line->Draw();
   line = new TLine(74,41,76,41);
   line->Draw();
   line = new TLine(76,41,76,42);
   line->Draw();
   line = new TLine(76,42,78,42);
   line->Draw();
   line = new TLine(78,42,78,43);
   line->Draw();
   line = new TLine(78,43,80,43);
   line->Draw();
   line = new TLine(80,43,80,44);
   line->Draw();
   line = new TLine(80,44,82,44);
   line->Draw();
   line = new TLine(82,44,82,45);
   line->Draw();
   line = new TLine(82,45,84,45);
   line->Draw();
   line = new TLine(84,45,84,46);
   line->Draw();
   line = new TLine(84,46,86,46);
   line->Draw();
   line = new TLine(86,46,86,47);
   line->Draw();
   line = new TLine(86,47,86,48);
   line->Draw();
   line = new TLine(86,48,87,48);
   line->Draw();
   line = new TLine(87,48,87,49);
   line->Draw();
   line = new TLine(87,49,89,49);
   line->Draw();
   line = new TLine(89,49,89,50);
   line->Draw();
   line = new TLine(89,50,91,50);
   line->Draw();
   line = new TLine(91,50,91,51);
   line->Draw();
   line = new TLine(91,51,92,51);
   line->Draw();
   line = new TLine(92,51,92,52);
   line->Draw();
   line = new TLine(92,52,94,52);
   line->Draw();
   line = new TLine(94,52,94,53);
   line->Draw();
   line = new TLine(94,53,95,53);
   line->Draw();
   line = new TLine(95,53,95,54);
   line->Draw();
   line = new TLine(95,54,97,54);
   line->Draw();
   line = new TLine(97,54,97,55);
   line->Draw();
   line = new TLine(97,55,97,56);
   line->Draw();
   line = new TLine(97,56,99,56);
   line->Draw();
   line = new TLine(99,56,99,57);
   line->Draw();
   text = new TText(12.5,1.5,"2");
   text->Draw();
   text = new TText(1.5,12.5,"2");
   text->Draw();
   text = new TText(26,7.5,"8");
   text->Draw();
   text = new TText(7.5,17,"8");
   text->Draw();
   text = new TText(41,19.5,"20");
   text->SetTextSize(0.08);
   text->Draw();
   text = new TText(18.5,32,"20");
   text->SetTextSize(0.08);
   text->Draw();
   text = new TText(56,27.5,"28");
   text->SetTextSize(0.08);
   text->Draw();
   text = new TText(26.5,36,"28");
   text->SetTextSize(0.08);
   text->Draw();
   text = new TText(96,49.5,"Z=50");
   text->SetTextSize(0.08);
   text->Draw();
   text = new TText(49.5,21.5,"50");
   text->Draw();
   text = new TText(141,81.5,"82");
   text->SetTextSize(0.08);
   text->Draw();
   text = new TText(81.5,41,"N=82");
   text->SetTextSize(0.08);
   text->Draw();
   text = new TText(123.5,96,"126");
   text->SetTextSize(0.08);
   text->Draw();
   line = new TLine(-1,2,12,2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-1,3,12,3);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(2,0,2,12);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(3,0,3,12);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0,8,25,8);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0,9,25,9);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(8,0,8,16);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(9,0,9,16);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(12,20,40,20);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(12,21,40,21);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(20,6,20,31);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(21,6,21,31);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(17,28,55,28);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(17,29,55,29);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(28,10,28,35);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(29,10,29,35);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(45,50,95,50);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(45,51,95,51);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(50,24,50,55);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(51,24,51,55);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(92,82,140,82);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(92,83,140,83);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(82,43,82,77);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(83,43,83,77);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(126,75,126,95);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(127,75,127,95);
   line->SetLineWidth(2);
   line->Draw();
   box = new TBox(51,40,52,41);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(52,40,53,41);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(54,40,55,41);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(52,41,53,42);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(52,42,53,43);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(53,42,54,43);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(54,42,55,43);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(55,42,56,43);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(56,42,57,43);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(52,44,53,45);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(54,44,55,45);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(55,44,56,45);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(56,44,57,45);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(57,44,58,45);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(58,44,59,45);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(60,44,61,45);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(58,45,59,46);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(56,46,57,47);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(58,46,59,47);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(59,46,60,47);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(60,46,61,47);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(62,46,63,47);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(64,46,65,47);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(60,47,61,48);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(62,47,63,48);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(58,48,59,49);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(60,48,61,49);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(62,48,63,49);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(63,48,64,49);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(64,48,65,49);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(66,48,67,49);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(64,49,65,50);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(62,50,63,51);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(64,50,65,51);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(65,50,66,51);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(66,50,67,51);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(67,50,68,51);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(68,50,69,51);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(69,50,70,51);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(70,50,71,51);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(72,50,73,51);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(74,50,75,51);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(70,51,71,52);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(72,51,73,52);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(68,52,69,53);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(70,52,71,53);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(72,52,73,53);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(73,52,74,53);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(74,52,75,53);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(74,53,75,54);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(70,54,71,55);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(72,54,73,55);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(74,54,75,55);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(75,54,76,55);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(76,54,77,55);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(77,54,78,55);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(78,54,79,55);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(80,54,81,55);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(82,54,83,55);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(78,55,79,56);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(74,56,75,57);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(76,56,77,57);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(78,56,79,57);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(79,56,80,57);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(80,56,81,57);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(81,56,82,57);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(82,56,83,57);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(82,57,83,58);
   box->SetFillColor(2);
   box->SetFillStyle(1);
   box->Draw();
   box = new TBox(49,31,49.8,31.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(53,31,53.7,31.7);

   ci = TColor::GetColor("#33cc99");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(47,32,47.9,32.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(48,32,48.9,32.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(50,32,50.9,32.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(51,32,51.8,32.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(52,32,52.8,32.8);

   ci = TColor::GetColor("#006600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(48,33,49,34);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(49,33,49.9,33.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(50,33,50.9,33.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(52,33,52.9,33.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(53,33,53.8,33.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(54,33,54.8,33.8);

   ci = TColor::GetColor("#006600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(55,33,55.8,33.8);

   ci = TColor::GetColor("#006600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(50,34,51,35);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(51,34,51.9,34.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(53,34,54,35);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(54,34,54.9,34.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(55,34,55.8,34.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(56,34,56.8,34.8);

   ci = TColor::GetColor("#006600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(51,35,52,36);

   ci = TColor::GetColor("#ff0000");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(52,35,53,36);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(53,35,53.9,35.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(54,35,54.9,35.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(56,35,56.8,35.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(57,35,57.9,35.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(58,35,58.9,35.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(59,35,59.8,35.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(53,36,54,37);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(54,36,55,37);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(55,36,56,37);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(56,36,57,37);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(57,36,57.9,36.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(58,36,58.9,36.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(59,36,59.9,36.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(60,36,60.8,36.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(61,36,61.8,36.8);

   ci = TColor::GetColor("#006600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(55,37,56,38);

   ci = TColor::GetColor("#ff6600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(56,37,57,38);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(57,37,58,38);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(58,37,59,38);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(59,37,59.9,37.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(60,37,60.9,37.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(61,37,61.9,37.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(62,37,62.8,37.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(63,37,63.8,37.8);

   ci = TColor::GetColor("#006600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(64,37,64.7,37.7);

   ci = TColor::GetColor("#33cc99");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(56,38,57,39);

   ci = TColor::GetColor("#ff0000");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(57,38,58,39);

   ci = TColor::GetColor("#ff6600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(58,38,59,39);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(59,38,60,39);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(60,38,61,39);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(61,38,61.9,38.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(62,38,62.9,38.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(63,38,63.9,38.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(64,38,64.8,38.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(65,38,65.8,38.8);

   ci = TColor::GetColor("#006600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(66,38,66.7,38.7);

   ci = TColor::GetColor("#33cc99");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(58,39,59,40);

   ci = TColor::GetColor("#ff0000");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(59,39,60,40);

   ci = TColor::GetColor("#ff6600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(60,39,61,40);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(61,39,62,40);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(62,39,62.9,39.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(63,39,63.9,39.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(64,39,64.9,39.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(65,39,65.8,39.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(66,39,66.8,39.8);

   ci = TColor::GetColor("#006600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(67,39,67.7,39.7);

   ci = TColor::GetColor("#33cc99");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(59,40,60,41);

   ci = TColor::GetColor("#ff0000");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(60,40,61,41);

   ci = TColor::GetColor("#ff0000");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(61,40,62,41);

   ci = TColor::GetColor("#ff6600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(62,40,63,41);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(63,40,64,41);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(64,40,64.9,40.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(65,40,65.9,40.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(66,40,66.9,40.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(67,40,67.8,40.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(68,40,68.8,40.8);

   ci = TColor::GetColor("#006600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(69,40,69.7,40.7);

   ci = TColor::GetColor("#33cc99");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(61,41,62,42);

   ci = TColor::GetColor("#ff0000");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(62,41,63,42);

   ci = TColor::GetColor("#ff6600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(63,41,64,42);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(64,41,65,42);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(65,41,65.9,41.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(66,41,66.9,41.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(67,41,67.9,41.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(68,41,68.9,41.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(69,41,69.8,41.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(70,41,70.8,41.8);

   ci = TColor::GetColor("#006600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(71,41,71.7,41.7);

   ci = TColor::GetColor("#33cc99");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(63,42,64,43);

   ci = TColor::GetColor("#ff6600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(64,42,65,43);

   ci = TColor::GetColor("#ff6600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(65,42,66,43);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(66,42,66.9,42.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(67,42,67.9,42.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(68,42,68.9,42.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(70,42,70.8,42.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(71,42,71.8,42.8);

   ci = TColor::GetColor("#006600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(72,42,72.7,42.7);

   ci = TColor::GetColor("#33cc99");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(73,42,73.7,42.7);

   ci = TColor::GetColor("#00ffff");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(64,43,65,44);

   ci = TColor::GetColor("#ff0000");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(65,43,66,44);

   ci = TColor::GetColor("#ff6600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(66,43,67,44);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(67,43,68,44);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(68,43,68.9,43.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(69,43,69.9,43.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(70,43,70.9,43.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(71,43,71.9,43.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(72,43,72.8,43.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(73,43,73.7,43.7);

   ci = TColor::GetColor("#33cc99");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(74,43,74.7,43.7);

   ci = TColor::GetColor("#33cc99");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(75,43,75.7,43.7);

   ci = TColor::GetColor("#00ffff");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(66,44,67,45);

   ci = TColor::GetColor("#ff6600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(67,44,68,45);

   ci = TColor::GetColor("#ff6600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(68,44,69,45);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(69,44,69.9,44.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(70,44,70.9,44.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(71,44,71.9,44.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(72,44,72.9,44.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(73,44,73.8,44.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(74,44,74.8,44.8);

   ci = TColor::GetColor("#006600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(75,44,75.7,44.7);

   ci = TColor::GetColor("#33cc99");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(76,44,76.7,44.7);

   ci = TColor::GetColor("#00ffff");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(68,45,69,46);

   ci = TColor::GetColor("#ff6600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(69,45,70,46);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(70,45,71,46);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(71,45,71.9,45.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(72,45,72.9,45.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(73,45,73.9,45.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(74,45,74.9,45.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(75,45,75.8,45.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(76,45,76.8,45.8);

   ci = TColor::GetColor("#006600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(77,45,77.7,45.7);

   ci = TColor::GetColor("#33cc99");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(78,45,78.7,45.7);

   ci = TColor::GetColor("#00ffff");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(69,46,70,47);

   ci = TColor::GetColor("#ff0000");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(70,46,71,47);

   ci = TColor::GetColor("#ff6600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(71,46,72,47);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(72,46,73,47);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(73,46,73.9,46.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(74,46,74.9,46.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(75,46,75.9,46.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(76,46,76.8,46.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(77,46,77.8,46.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(78,46,78.8,46.8);

   ci = TColor::GetColor("#006600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(79,46,79.7,46.7);

   ci = TColor::GetColor("#33cc99");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(71,47,72,48);

   ci = TColor::GetColor("#ff6600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(72,47,73,48);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(73,47,74,48);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(74,47,74.9,47.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(75,47,75.9,47.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(76,47,76.9,47.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(77,47,77.9,47.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(78,47,78.8,47.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(79,47,79.8,47.8);

   ci = TColor::GetColor("#006600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(80,47,80.7,47.7);

   ci = TColor::GetColor("#33cc99");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(81,47,81.7,47.7);

   ci = TColor::GetColor("#33cc99");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(73,48,74,49);

   ci = TColor::GetColor("#ff6600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(74,48,75,49);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(75,48,76,49);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(76,48,76.9,48.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(77,48,77.9,48.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(78,48,78.9,48.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(79,48,79.9,48.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(80,48,80.8,48.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(81,48,81.8,48.8);

   ci = TColor::GetColor("#006600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(82,48,82.8,48.8);

   ci = TColor::GetColor("#006600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(83,48,83.7,48.7);

   ci = TColor::GetColor("#00ffff");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(84,48,84.7,48.7);

   ci = TColor::GetColor("#00ffff");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(74,49,75,50);

   ci = TColor::GetColor("#ff0000");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(75,49,76,50);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(76,49,77,50);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(77,49,78,50);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(78,49,79,50);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(79,49,79.9,49.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(80,49,80.9,49.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(81,49,81.9,49.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(82,49,82.8,49.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(83,49,83.8,49.8);

   ci = TColor::GetColor("#006600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(84,49,84.8,49.8);

   ci = TColor::GetColor("#006600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(85,49,85.7,49.7);

   ci = TColor::GetColor("#00ffff");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(76,50,77,51);

   ci = TColor::GetColor("#ff6600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(77,50,78,51);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(78,50,79,51);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(79,50,80,51);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(80,50,81,51);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(81,50,81.9,50.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(82,50,82.9,50.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(83,50,83.9,50.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(84,50,84.9,50.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(85,50,85.8,50.8);

   ci = TColor::GetColor("#006600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(86,50,86.8,50.8);

   ci = TColor::GetColor("#006600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(87,50,87.7,50.7);

   ci = TColor::GetColor("#00ffff");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(78,51,79,52);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(79,51,80,52);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(80,51,81,52);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(81,51,82,52);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(82,51,83,52);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(83,51,83.9,51.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(84,51,84.9,51.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(85,51,85.9,51.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(86,51,86.9,51.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(87,51,87.8,51.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(88,51,88.8,51.8);

   ci = TColor::GetColor("#006600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(80,52,81,53);

   ci = TColor::GetColor("#ff6600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(81,52,82,53);

   ci = TColor::GetColor("#ff6600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(82,52,83,53);

   ci = TColor::GetColor("#ff6600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(83,52,84,53);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(84,52,84.9,52.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(85,52,85.9,52.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(86,52,86.9,52.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(87,52,87.8,52.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(88,52,88.8,52.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(89,52,89.8,52.8);

   ci = TColor::GetColor("#006600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(90,52,90.7,52.7);

   ci = TColor::GetColor("#33cc99");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(91,52,91.7,52.7);

   ci = TColor::GetColor("#00ffff");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(82,53,83,54);

   ci = TColor::GetColor("#ff6600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(83,53,84,54);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(84,53,85,54);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(85,53,86,54);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(86,53,86.9,53.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(87,53,87.9,53.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(88,53,88.9,53.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(89,53,89.8,53.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(90,53,90.8,53.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(91,53,91.8,53.8);

   ci = TColor::GetColor("#006600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(92,53,92.7,53.7);

   ci = TColor::GetColor("#00ffff");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(83,54,84,55);

   ci = TColor::GetColor("#ff6600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(84,54,85,55);

   ci = TColor::GetColor("#ff6600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(85,54,86,55);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(86,54,87,55);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(87,54,88,55);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(88,54,88.9,54.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(89,54,89.9,54.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(90,54,90.8,54.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(91,54,91.8,54.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(92,54,92.8,54.8);

   ci = TColor::GetColor("#006600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(93,54,93.7,54.7);

   ci = TColor::GetColor("#00ffff");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(85,55,86,56);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(86,55,87,56);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(87,55,88,56);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(88,55,89,56);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(89,55,89.9,55.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(90,55,90.9,55.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(91,55,91.9,55.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(92,55,92.8,55.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(93,55,93.8,55.8);

   ci = TColor::GetColor("#006600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(94,55,94.7,55.7);

   ci = TColor::GetColor("#33cc99");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(87,56,88,57);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(88,56,89,57);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(89,56,90,57);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(90,56,90.9,56.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(91,56,91.9,56.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(92,56,92.9,56.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(93,56,93.9,56.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(94,56,94.8,56.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(95,56,95.8,56.8);

   ci = TColor::GetColor("#006600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(96,56,96.7,56.7);

   ci = TColor::GetColor("#33cc99");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(89,57,90,58);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(90,57,91,58);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(91,57,91.9,57.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(92,57,92.9,57.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(93,57,93.9,57.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(94,57,94.8,57.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(95,57,95.8,57.8);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(96,57,96.8,57.8);

   ci = TColor::GetColor("#006600");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(97,57,97.7,57.7);

   ci = TColor::GetColor("#33cc99");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(90,58,91,59);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(91,58,91.9,58.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(92,58,92.9,58.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(93,58,93.9,58.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(94,58,94.9,58.9);

   ci = TColor::GetColor("#ffff00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(95,58,95.9,58.9);

   ci = TColor::GetColor("#99cc33");
   box->SetFillColor(ci);
   box->Draw();
   text = new TText(12.5,1.5,"2");
   text->Draw();
   text = new TText(1.5,12.5,"2");
   text->Draw();
   text = new TText(26,7.5,"8");
   text->Draw();
   text = new TText(7.5,17,"8");
   text->Draw();
   text = new TText(41,19.5,"20");
   text->SetTextSize(0.08);
   text->Draw();
   text = new TText(18.5,32,"20");
   text->SetTextSize(0.08);
   text->Draw();
   text = new TText(56,27.5,"28");
   text->SetTextSize(0.08);
   text->Draw();
   text = new TText(26.5,36,"28");
   text->SetTextSize(0.08);
   text->Draw();
   text = new TText(96,49.5,"Z=50");
   text->SetTextSize(0.08);
   text->Draw();
   text = new TText(49.5,21.5,"50");
   text->Draw();
   text = new TText(141,81.5,"82");
   text->SetTextSize(0.08);
   text->Draw();
   text = new TText(81.5,41,"N=82");
   text->SetTextSize(0.08);
   text->Draw();
   text = new TText(123.5,96,"126");
   text->SetTextSize(0.08);
   text->Draw();
   line = new TLine(-1,2,12,2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-1,3,12,3);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(2,0,2,12);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(3,0,3,12);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0,8,25,8);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0,9,25,9);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(8,0,8,16);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(9,0,9,16);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(12,20,40,20);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(12,21,40,21);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(20,6,20,31);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(21,6,21,31);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(17,28,55,28);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(17,29,55,29);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(28,10,28,35);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(29,10,29,35);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(45,50,95,50);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(45,51,95,51);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(50,24,50,55);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(51,24,51,55);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(92,82,140,82);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(92,83,140,83);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(82,43,82,77);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(83,43,83,77);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(126,75,126,95);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(127,75,127,95);
   line->SetLineWidth(2);
   line->Draw();
   
   pl = new TPaveLabel(51.3621,53.3008,65.0948,57.5508,"^{238}U(Be,f)","br");
   pl->SetFillColor(0);
   pl->SetTextSize(0.99);
   pl->Draw();
   box = new TBox(88,43,88.8,43.8);

   ci = TColor::GetColor("#ff0000");
   box->SetFillColor(ci);
   box->Draw();
   text = new TText(89,43,"> 10 mb");
   text->SetTextSize(0.08);
   text->Draw();
   box = new TBox(88,41,88.7,41.7);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   text = new TText(89,41,"> 1 mb");
   text->SetTextSize(0.08);
   text->Draw();
   box = new TBox(88,39,88.6,39.6);

   ci = TColor::GetColor("#00ff00");
   box->SetFillColor(ci);
   box->Draw();
   TLatex *   tex = new TLatex(89,39,"> 1 #mub");
   tex->SetTextSize(0.08);
   tex->SetLineWidth(2);
   tex->Draw();
   box = new TBox(88,37,88.5,37.5);

   ci = TColor::GetColor("#00ffff");
   box->SetFillColor(ci);
   box->Draw();
   text = new TText(89,37,"> 1 nb");
   text->SetTextSize(0.08);
   text->Draw();
   C_2->Modified();
   C->cd();
   C->Modified();
   C->cd();
   C->SetSelected(C);
}

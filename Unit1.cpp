//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <math.h>
#include "Unit1.h"
#include <stdlib.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
using namespace std;

TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
 Edit1->Clear();
 Edit2->Clear();
 Edit3->Clear();
 Memo1->Clear();
 Memo1->Text = " ������������ ������ 2. ";
}
//---------------------------------------------------------------------------
 double x, z, d, c, y, f;


void __fastcall TForm1::���������Click(TObject *Sender)
{


 z = StrToFloat(Edit3->Text);
 c = StrToFloat(Edit2->Text);
 d = StrToFloat(Edit1->Text);

 if (z<1) {
   x = z*z + 1;
 }
   else
   {
	x = z -1;
   }

   switch (RadioGroup1->ItemIndex) {

   case 0:  f = 2*x;
   break;
   case 1:  f = x*x;
   break;
   case 2:  f = x/3;
   break;
   }

	y = (d * f * pow(2.74, pow(sin(x),3)) + c * log(x+1))/ pow(x,1.0/2);

	Memo1->Text = y;
	y = 0;

}
//---------------------------------------------------------------------------


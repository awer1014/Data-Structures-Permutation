//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#define SWAP(x,y,t)(t=x,x=y,y=t)
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int count;
int check_count;

void permStr(String in_string, int k, int n){
	int i;
	wchar_t tmp;
  if (k == n){
		if (Form1->CheckBox1->Checked){
			Form1->Memo2->Lines->Add("==>(k,n)=("+IntToStr(k)+","+IntToStr(n)+") k==n Print");
			Form1->Memo2->Lines->Add(in_string+"["+IntToStr(check_count++)+"]");
		}
		Form1->Memo1->Lines->Add(in_string+"  ["+IntToStr(count++)+"]");
	}
  else{
		for (i=k; i<=n; i++){
			if(Form1->CheckBox1->Checked){
				Form1->Memo2->Lines->Add("	   	>i="+IntToStr(i)+" (k,n)=("+IntToStr(k)+","+IntToStr(n)+"), SWAP["+IntToStr(k)+","+IntToStr(i)+"], list[]="+in_string);
			}
			SWAP(in_string[k], in_string[i], tmp);
			permStr(in_string, k+1, n);
			if (Form1->CheckBox1->Checked) {
				Form1->Memo2->Lines->Add("			<i="+IntToStr(i)+" (k,n)=("+IntToStr(k)+","+IntToStr(n)+"), SWAP["+IntToStr(k)+","+IntToStr(i)+"], list[]="+in_string);
			}
			SWAP(in_string[k], in_string[i], tmp);
		}
	}
}
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	count = 0;
	check_count = 0;
    String in_string = Edit1->Text;
    int k = StrToInt(Edit2->Text);
    int n = in_string.Length();
    permStr( in_string, k+1, n );
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
  Memo1->Clear();
	Memo2->Clear();
	Edit1->Clear();
	Edit2->Clear();
}
//---------------------------------------------------------------------------



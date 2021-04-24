//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Hash.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
HashTable table;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
		table.Add(LabeledEdit1->Text,StrToInt(LabeledEdit2->Text));
		LabeledEdit1->Clear();
		LabeledEdit2->Clear();

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	table.Delete(LabeledEdit1->Text);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
		Memo1->Clear();
		for(int i = 0; i < table.m; i++)
		if(table.v[i].size() != 0)
		{
		  for (int j = 0; j < table.v[i].size(); j++)
			{
				Memo1->Lines->Add(IntToStr(i) + ":" + IntToStr(table.v[i][j].second));
				Memo1->Lines->Add(table.v[i][j].first );

			  Memo1->Lines->Add(table.GetHash(table.v[i][j].first));
			  Memo1->Lines->Add(table.v[i][j].second);
			  Memo1->Lines->Add("!");
			}
		}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
		int n = 100;
		for(int i = 0; i < n; i++)
		{
			int k = rand() % 5 + 2;
			String cur;
			while(k--)
			{
				cur = cur + char('a' + rand () % 26 ) ;
			}
			table.Add(cur, rand() % 100000);
		}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button5Click(TObject *Sender)
{

   int min = 1e5 + 4;
   for(int i = 0; i < table.m; i++)
	   {
		if(table.v[i].size() > 0 )
		{
		  for (int j = 0; j < table.v[i].size(); j++)
			{
			   if (table.v[i][j].second < min)
			   {
				  min = table.v[i][j].second;
			   }
			}
		}
	   }

	 Memo1->Lines->Add("Minimal Key Has :");
	 Memo1->Lines->Add(table.GetByKey(min));

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button6Click(TObject *Sender)
{
 ShowMessage(table.Get(LabeledEdit1->Text));
}
//---------------------------------------------------------------------------


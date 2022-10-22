//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
Stuff* st;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	FileOpenDialog1->Execute();
	TFileStream*TFile = new TFileStream(FileOpenDialog1->FileName, fmOpenReadWrite);
	TStringList*ts = new TStringList();
	//st = new Stuff[ts->Count/8];
	ts->LoadFromStream(TFile); //stream
	delete TFile;
		st = new Stuff[ts->Count/8];

	st->Write(ts, ts->Count/8, st);
	Memo1->Lines = ts;
	st->AddToCombo(ComboBox1, ts->Count/8, st);


}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	FileSaveDialog1->Execute();
	Memo1->Lines->SaveToFile(FileSaveDialog1->FileName);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
	ComboBox1->AddItem(Edit2->Text, NULL);
	Memo1->Lines->Add(Edit1->Text);
	Memo1->Lines->Add(Edit2->Text);
	Memo1->Lines->Add(Edit3->Text);
	Memo1->Lines->Add(Edit4->Text);
	Memo1->Lines->Add(Edit5->Text);
	Memo1->Lines->Add(Edit6->Text);
	Memo1->Lines->Add(Edit7->Text);
	Edit1->Clear();
	Edit2->Clear();
	Edit3->Clear();
	Edit4->Clear();
	Edit5->Clear();
	Edit6->Clear();
	Edit7->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
	st->Delete(Memo1, Edit8, st, 1);

}
//---------------------------------------------------------------------------

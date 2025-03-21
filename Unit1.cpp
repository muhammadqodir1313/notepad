//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
String fn;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Open1Click(TObject *Sender)
{
	  if (OpenDialog1->Execute()) {
		  RichEdit1->Lines->LoadFromFile(OpenDialog1->FileName);
		   fn=OpenDialog1->FileName;
		   Form1->Caption=fn;
	  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Saveas1Click(TObject *Sender)
{
if(SaveTextFileDialog1->Execute()) {
    RichEdit1->Lines->SaveToFile(SaveTextFileDialog1->FileName);
    fn = SaveTextFileDialog1->FileName;
    Form1->Caption = fn;
    RichEdit1->Modified = false;
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Save1Click(TObject *Sender)

{
if(fn.IsEmpty())
{
	Saveas1->Click();
}
if(RichEdit1->Modified)
{
RichEdit1->Lines->SaveToFile(fn);
RichEdit1->Modified=false;
}

}
//---------------------------------------------------------------------------
void __fastcall TForm1::New1Click(TObject *Sender)
{
if(RichEdit1->Modified)
{
	switch (MessageDlg("o'zgarishlarni saqlaysizmi?",mtConfirmation,
	mbYesNoCancel,0)) {
			   case mrYes: Save1->Click(); break;
			   case mrNo:RichEdit1->Clear();break;
			   case mrCancel: break;
	default:
		;
	}
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::exit1Click(TObject *Sender)
{
		   if(RichEdit1->Modified)
{
	switch (MessageDlg("o'zgarishlarni saqlaysizmi?",mtConfirmation,
	mbYesNoCancel,0)) {
			   case mrYes: Saveas1->Click(); Close(); break;
			   case mrNo: RichEdit1->Modified=false; Close();break;
			   case mrCancel: Abort(); break;
	default:
		;
	}
}
else
{
	Form1->Close() ;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
		   if(RichEdit1->Modified)
{
	switch (MessageDlg("o'zgarishlarni saqlaysizmi?",mtConfirmation,
	mbYesNoCancel,0)) {
			   case mrYes: Saveas1->Click(); Close(); break;
			   case mrNo:RichEdit1->Modified=false;   Close();break;
			   case mrCancel: Abort(); break;
	default:
		;
	}
}
else
{
	Form1->Close() ;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Print1Click(TObject *Sender)
{
	 PrintDialog1->Execute();
	 RichEdit1->Print(RichEdit1->Text);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Cut1Click(TObject *Sender)
{
RichEdit1->CutToClipboard();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Paste1Click(TObject *Sender)
{
RichEdit1->PasteFromClipboard();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SelectAll1Click(TObject *Sender)
{
RichEdit1->SelectAll();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::cop1Click(TObject *Sender)
{
RichEdit1->CopyToClipboard();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Delete1Click(TObject *Sender)
{
RichEdit1->Lines->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::font1Click(TObject *Sender)
{
if(FontDialog1->Execute())
{
	RichEdit1->Font=FontDialog1->Font;
}
}
//---------------------------------------------------------------------------




void __fastcall TForm1::Aboutus1Click(TObject *Sender)
{
if(Memo1->Visible==false){
Memo1->Visible=true;
}
else
{
	Memo1->Visible=false;
}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::uzb1Click(TObject *Sender)
{
   Form1->Menu=MainMenu2;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::rus1Click(TObject *Sender)
{
Form1->Menu=MainMenu3;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::eng1Click(TObject *Sender)
{
Form1->Menu=MainMenu1;
}
//---------------------------------------------------------------------------





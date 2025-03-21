//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.ExtDlgs.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TMainMenu *MainMenu1;
	TMenuItem *File1;
	TMenuItem *New1;
	TMenuItem *Open1;
	TMenuItem *Save1;
	TMenuItem *Saveas1;
	TMenuItem *N1;
	TMenuItem *Print1;
	TMenuItem *exit1;
	TMenuItem *Edit1;
	TMenuItem *Cut1;
	TMenuItem *cop1;
	TMenuItem *Paste1;
	TMenuItem *SelectAll1;
	TMenuItem *Delete1;
	TMenuItem *Shrift1;
	TMenuItem *font1;
	TMenuItem *Lang1;
	TMenuItem *rus1;
	TMenuItem *uzb1;
	TMenuItem *eng1;
	TMenuItem *Aboutus1;
	TMenuItem *Help1;
	TOpenDialog *OpenDialog1;
	TFontDialog *FontDialog1;
	TPrintDialog *PrintDialog1;
	TImageList *ImageList1;
	TMemo *Memo1;
	TMainMenu *MainMenu2;
	TMenuItem *fayl1;
	TMenuItem *Yangi1;
	TMenuItem *Ochish1;
	TMenuItem *N3;
	TMenuItem *Saqlash1;
	TMenuItem *Yangisaqlash1;
	TMenuItem *N4;
	TMenuItem *Chopetish1;
	TMenuItem *Chiqish1;
	TMenuItem *Ozgartirish1;
	TMenuItem *Kesibolish1;
	TMenuItem *Nusxaolish1;
	TMenuItem *Qoyish1;
	TMenuItem *Hammasinibelgilash1;
	TMenuItem *Ochirish1;
	TMenuItem *Shrift2;
	TMenuItem *Bizhaqimizda1;
	TMenuItem *Yordam1;
	TMenuItem *Font2;
	TMenuItem *il1;
	TMenuItem *rus2;
	TMenuItem *uzb2;
	TMenuItem *eng2;
	TMenuItem *N2;
	TMainMenu *MainMenu3;
	TMenuItem *N5;
	TMenuItem *N6;
	TMenuItem *N7;
	TMenuItem *N8;
	TMenuItem *N9;
	TMenuItem *N10;
	TMenuItem *N11;
	TMenuItem *N12;
	TMenuItem *N13;
	TMenuItem *N14;
	TMenuItem *N15;
	TMenuItem *N16;
	TMenuItem *N17;
	TMenuItem *N18;
	TMenuItem *N19;
	TMenuItem *N20;
	TMenuItem *N21;
	TMenuItem *N22;
	TMenuItem *N23;
	TMenuItem *N24;
	TMenuItem *uzb3;
	TMenuItem *uzb4;
	TMenuItem *eng3;
	TRichEdit *RichEdit1;
	TSaveTextFileDialog *SaveTextFileDialog1;
	void __fastcall Open1Click(TObject *Sender);
	void __fastcall Saveas1Click(TObject *Sender);
	void __fastcall Save1Click(TObject *Sender);
	void __fastcall New1Click(TObject *Sender);
	void __fastcall exit1Click(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall Print1Click(TObject *Sender);
	void __fastcall Cut1Click(TObject *Sender);
	void __fastcall Paste1Click(TObject *Sender);
	void __fastcall SelectAll1Click(TObject *Sender);
	void __fastcall cop1Click(TObject *Sender);
	void __fastcall Delete1Click(TObject *Sender);
	void __fastcall font1Click(TObject *Sender);
	void __fastcall Aboutus1Click(TObject *Sender);
	void __fastcall uzb1Click(TObject *Sender);
	void __fastcall rus1Click(TObject *Sender);
	void __fastcall eng1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif

//---------------------------------------------------------------------------

#ifndef UFMainH
#define UFMainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TFMain : public TForm
{
__published:	// Composants g�r�s par l'EDI
private:	// D�clarations utilisateur
public:		// D�clarations utilisateur
	__fastcall TFMain(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFMain *FMain;
//---------------------------------------------------------------------------
#endif

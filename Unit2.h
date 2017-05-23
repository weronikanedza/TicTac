//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
//---------------------------------------------------------------------------
class TMultiplayer : public TForm
{
__published:	// IDE-managed Components
        TImage *Image1;
        TLabel *Label1;
        TEdit *Edit1;
        TButton *Button1;
private:	// User declarations
public:		// User declarations
        __fastcall TMultiplayer(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMultiplayer *Multiplayer;
//---------------------------------------------------------------------------
#endif

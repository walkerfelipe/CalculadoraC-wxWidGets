///-----------------------------------------------------------------
///
/// @file      Projeto 2Frm.h
/// @author    Walker
/// Created:   28/09/2016 17:39:56
/// @section   DESCRIPTION
///            Projeto_2Frm class declaration
///
///------------------------------------------------------------------

#ifndef __PROJETO_2FRM_H__
#define __PROJETO_2FRM_H__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
	#include <wx/frame.h>
#else
	#include <wx/wxprec.h>
#endif

//Do not add custom headers between 
//Header Include Start and Header Include End.
//wxDev-C++ designer will remove them. Add custom headers after the block.
////Header Include Start
#include <wx/bmpbuttn.h>
#include <wx/statbmp.h>
#include <wx/textctrl.h>
#include <wx/stattext.h>
#include <wx/button.h>
////Header Include End

////Dialog Style Start
#undef Projeto_2Frm_STYLE
#define Projeto_2Frm_STYLE wxCAPTION | wxSYSTEM_MENU | wxSTAY_ON_TOP | wxMINIMIZE_BOX | wxCLOSE_BOX
////Dialog Style End

class Projeto_2Frm : public wxFrame
{
	private:
		DECLARE_EVENT_TABLE();
		
	public:
		Projeto_2Frm(wxWindow *parent, wxWindowID id = 1, const wxString &title = wxT("Projeto 2"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = Projeto_2Frm_STYLE);
		virtual ~Projeto_2Frm();
		void WxButton1Click(wxCommandEvent& event);
		void WxButton1Click0(wxCommandEvent& event);
		void WxButton7Click(wxCommandEvent& event);
		void WxButton1Click1(wxCommandEvent& event);
		void WxEdit1Updated(wxCommandEvent& event);
		void WxButton7Click0(wxCommandEvent& event);
		void WxButton8Click(wxCommandEvent& event);
		void WxButton9Click(wxCommandEvent& event);
		void WxButton4Click(wxCommandEvent& event);
		void WxButton5Click(wxCommandEvent& event);
		void WxButton6Click(wxCommandEvent& event);
		void WxButton1Click2(wxCommandEvent& event);
		void WxButton2Click(wxCommandEvent& event);
		void WxButton3Click(wxCommandEvent& event);
		void WxButton10Click(wxCommandEvent& event);
		void WxButton14Click(wxCommandEvent& event);
		void WxButton12Click(wxCommandEvent& event);
		void WxButton13Click(wxCommandEvent& event);
		void WxButton16Click(wxCommandEvent& event);
		void WxButton15Click(wxCommandEvent& event);
		void WxButton18Click(wxCommandEvent& event);
		void WxButton17Click(wxCommandEvent& event);
		void WxButton11Click(wxCommandEvent& event);
		int FilterEvent(wxEvent& event);
		void calcula();
		void OnKeyDown(wxKeyEvent& event);
		void Projeto_2FrmActivate(wxActivateEvent& event);
		void Projeto_2FrmActivate0(wxActivateEvent& event);
		void processaKey(int key);
		void processaZero();
		void processaNove();
		void processaOito();
		void processaSete();
		void processaSeis();
		void processaCinco();
		void processaQuatro();
		void processaTres();
		void processaDois();
		void processaUm();
		void processaVirgula();
		void processaPonto();
		void processaEnter();
		void processaBackspace();
		void processaSinalSoma();
		void processaSinalSub();
		void processaSinalMult();
		void processaRaiz();
		void incrementa();
		void verificadisplay(char* display,int tam);
		void WxBitmapButton1Click(wxCommandEvent& event);
		void processaSinalDivisao();
		void WxButton19Click(wxCommandEvent& event);
		void WxButton17Click0(wxCommandEvent& event);
		void WxButton20Click(wxCommandEvent& event);
		void WxButton21Click(wxCommandEvent& event);
		void WxButton23Click(wxCommandEvent& event);
		void WxButton22Click(wxCommandEvent& event);
	private:
		//Do not add custom control declarations between
		//GUI Control Declaration Start and GUI Control Declaration End.
		//wxDev-C++ will remove them. Add custom code after the block.
		////GUI Control Declaration Start
		wxTextCtrl *WxEdit2;
		wxButton *WxButton23;
		wxButton *WxButton22;
		wxButton *WxButton21;
		wxButton *WxButton20;
		wxButton *WxButton17;
		wxButton *WxButton19;
		wxBitmapButton *WxBitmapButton1;
		wxStaticBitmap *WxStaticBitmap1;
		wxTextCtrl *WxEdit1;
		wxStaticText *WxStaticText1;
		wxButton *WxButton18;
		wxButton *WxButton16;
		wxButton *WxButton15;
		wxButton *WxButton14;
		wxButton *WxButton13;
		wxButton *WxButton12;
		wxButton *WxButton11;
		wxButton *WxButton10;
		wxButton *WxButton9;
		wxButton *WxButton8;
		wxButton *WxButton7;
		wxButton *WxButton6;
		wxButton *WxButton5;
		wxButton *WxButton4;
		wxButton *WxButton3;
		wxButton *WxButton2;
		wxButton *WxButton1;
		////GUI Control Declaration End
		
	private:
		//Note: if you receive any error with these enum IDs, then you need to
		//change your old form code that are based on the #define control IDs.
		//#defines may replace a numeric value for the enum names.
		//Try copy and pasting the below block in your old form header files.
		enum
		{
			////GUI Enum Control ID Start
			ID_WXEDIT2 = 1068,
			ID_WXBUTTON23 = 1067,
			ID_WXBUTTON22 = 1066,
			ID_WXBUTTON21 = 1065,
			ID_WXBUTTON20 = 1064,
			ID_WXBUTTON17 = 1063,
			ID_WXBUTTON19 = 1060,
			ID_WXBITMAPBUTTON1 = 1055,
			ID_WXSTATICBITMAP1 = 1051,
			ID_WXEDIT1 = 1039,
			ID_WXSTATICTEXT1 = 1048,
			ID_WXBUTTON18 = 1044,
			ID_WXBUTTON16 = 1041,
			ID_WXBUTTON15 = 1040,
			ID_WXBUTTON14 = 1038,
			ID_WXBUTTON13 = 1037,
			ID_WXBUTTON12 = 1036,
			ID_WXBUTTON11 = 1034,
			ID_WXBUTTON10 = 1033,
			ID_WXBUTTON9 = 1032,
			ID_WXBUTTON8 = 1031,
			ID_WXBUTTON7 = 1030,
			ID_WXBUTTON6 = 1029,
			ID_WXBUTTON5 = 1028,
			ID_WXBUTTON4 = 1027,
			ID_WXBUTTON3 = 1026,
			ID_WXBUTTON2 = 1025,
			ID_WXBUTTON1 = 1024,
			////GUI Enum Control ID End
			ID_DUMMY_VALUE_ //don't remove this value unless you have other enum values
		};
		
	private:
		void OnClose(wxCloseEvent& event);
		void CreateGUIControls();
};

#endif

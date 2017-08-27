    ///-----------------------------------------------------------------
    ///
    /// @file      Projeto 2Frm.cpp
    /// @author    Walker
    /// Created:   28/09/2016 17:39:56
    /// @section   DESCRIPTION
    ///            Projeto_2Frm class implementation
    ///
    ///------------------------------------------------------------------
    
    #include "Projeto 2Frm.h"
    
    //Do not add custom headers between
    //Header Include Start and Header Include End
    //wxDev-C++ designer will remove them
    ////Header Include Start
#include "Images/Projeto_2Frm_frmNewForm_XPM.xpm"
#include "Images/Projeto_2Frm_WxBitmapButton1_XPM.xpm"
#include "Images/Projeto_2Frm_WxStaticBitmap1_XPM.xpm"
#include "calcula.h"


char display[200]="0";

int operadortela=0;

  //de "ader Inclu
    //----------------------------------------------------------------------------
    // Projeto_2Frm
    //----------------------------------------------------------------------------
    //Add Custom Events only in the appropriate block.
    //Code added in other places will be removed by wxDev-C++
    ////Event Table Start
BEGIN_EVENT_TABLE(Projeto_2Frm,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(Projeto_2Frm::OnClose)
	EVT_KEY_DOWN(Projeto_2Frm::OnKeyDown)
	EVT_ACTIVATE(Projeto_2Frm::Projeto_2FrmActivate0)
	EVT_BUTTON(ID_WXBUTTON23,Projeto_2Frm::WxButton23Click)
	EVT_BUTTON(ID_WXBUTTON22,Projeto_2Frm::WxButton22Click)
	EVT_BUTTON(ID_WXBUTTON21,Projeto_2Frm::WxButton21Click)
	EVT_BUTTON(ID_WXBUTTON20,Projeto_2Frm::WxButton20Click)
	EVT_BUTTON(ID_WXBUTTON17,Projeto_2Frm::WxButton17Click0)
	EVT_BUTTON(ID_WXBUTTON19,Projeto_2Frm::WxButton19Click)
	EVT_BUTTON(ID_WXBITMAPBUTTON1,Projeto_2Frm::WxBitmapButton1Click)
	
	EVT_TEXT(ID_WXEDIT1,Projeto_2Frm::WxEdit1Updated)
	EVT_BUTTON(ID_WXBUTTON18,Projeto_2Frm::WxButton18Click)
	EVT_BUTTON(ID_WXBUTTON16,Projeto_2Frm::WxButton16Click)
	EVT_BUTTON(ID_WXBUTTON15,Projeto_2Frm::WxButton15Click)
	EVT_BUTTON(ID_WXBUTTON14,Projeto_2Frm::WxButton14Click)
	EVT_BUTTON(ID_WXBUTTON13,Projeto_2Frm::WxButton13Click)
	EVT_BUTTON(ID_WXBUTTON12,Projeto_2Frm::WxButton12Click)
	EVT_BUTTON(ID_WXBUTTON11,Projeto_2Frm::WxButton11Click)
	EVT_BUTTON(ID_WXBUTTON10,Projeto_2Frm::WxButton10Click)
	EVT_BUTTON(ID_WXBUTTON9,Projeto_2Frm::WxButton9Click)
	EVT_BUTTON(ID_WXBUTTON8,Projeto_2Frm::WxButton8Click)
	EVT_BUTTON(ID_WXBUTTON7,Projeto_2Frm::WxButton7Click0)
	EVT_BUTTON(ID_WXBUTTON6,Projeto_2Frm::WxButton6Click)
	EVT_BUTTON(ID_WXBUTTON5,Projeto_2Frm::WxButton5Click)
	EVT_BUTTON(ID_WXBUTTON4,Projeto_2Frm::WxButton4Click)
	EVT_BUTTON(ID_WXBUTTON3,Projeto_2Frm::WxButton3Click)
	EVT_BUTTON(ID_WXBUTTON2,Projeto_2Frm::WxButton2Click)
	EVT_BUTTON(ID_WXBUTTON1,Projeto_2Frm::WxButton1Click2)
END_EVENT_TABLE()
    ////Event Table End
    
    Projeto_2Frm::Projeto_2Frm(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
        : wxFrame(parent, id, title, position, size, style)
    {
        //parent->Bind(wxEVT_CHAR_HOOK, &Projeto_2Frm::OnKeyDown, this);
        CreateGUIControls();
        //wxPanel* mainPane = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxWANTS_CHARS);
    
        //WxButton9->bind(wxEVT_BUTTON, Projeto_2Frm::WxButton9Click
    
    
    }
    
    
    Projeto_2Frm::~Projeto_2Frm()
    {
    }
    void Projeto_2Frm::WxEdit1Updated(wxCommandEvent& event)
    {
        }
    
    void Projeto_2Frm::CreateGUIControls()
    {
    
        //Do not add custom code between
        //GUI Items Creation Start and GUI Items Creation End
        //wxDev-C++ designer will remove them.
        //Add the custom code before or after the blocks
        ////GUI Items Creation Start

	wxInitAllImageHandlers();   //Initialize graphic format handlers

	WxEdit2 = new wxTextCtrl(this, ID_WXEDIT2, _(""), wxPoint(52, 44), wxSize(335, 36), 0, wxDefaultValidator, _("WxEdit2"));
	WxEdit2->Enable(false);

	WxButton23 = new wxButton(this, ID_WXBUTTON23, _("^"), wxPoint(399, 144), wxSize(50, 43), 0, wxDefaultValidator, _("WxButton23"));
	WxButton23->SetFont(wxFont(12, wxSWISS, wxNORMAL, wxBOLD, false));

	WxButton22 = new wxButton(this, ID_WXBUTTON22, _("!"), wxPoint(331, 149), wxSize(60, 33), 0, wxDefaultValidator, _("WxButton22"));
	WxButton22->SetFont(wxFont(16, wxSWISS, wxNORMAL, wxBOLD, false, _("Wingdings 3")));

	WxButton21 = new wxButton(this, ID_WXBUTTON21, _(")"), wxPoint(338, 203), wxSize(47, 44), 0, wxDefaultValidator, _("WxButton21"));
	WxButton21->SetFont(wxFont(12, wxSWISS, wxNORMAL, wxBOLD, false));

	WxButton20 = new wxButton(this, ID_WXBUTTON20, _("("), wxPoint(269, 204), wxSize(50, 44), 0, wxDefaultValidator, _("WxButton20"));
	WxButton20->SetFont(wxFont(12, wxSWISS, wxNORMAL, wxBOLD, false));

	WxButton17 = new wxButton(this, ID_WXBUTTON17, _("++1"), wxPoint(199, 309), wxSize(56, 48), 0, wxDefaultValidator, _("WxButton17"));

	WxButton19 = new wxButton(this, ID_WXBUTTON19, _("SQRT"), wxPoint(269, 315), wxSize(50, 45), 0, wxDefaultValidator, _("WxButton19"));

	wxBitmap WxBitmapButton1_BITMAP (Projeto_2Frm_WxBitmapButton1_XPM);
	WxBitmapButton1 = new wxBitmapButton(this, ID_WXBITMAPBUTTON1, WxBitmapButton1_BITMAP, wxPoint(398, 22), wxSize(38, 38), wxBU_AUTODRAW, wxDefaultValidator, _("WxBitmapButton1"));

	wxBitmap WxStaticBitmap1_BITMAP(Projeto_2Frm_WxStaticBitmap1_XPM);
	WxStaticBitmap1 = new wxStaticBitmap(this, ID_WXSTATICBITMAP1, WxStaticBitmap1_BITMAP, wxPoint(6, 24), wxSize(40, 40));

	WxEdit1 = new wxTextCtrl(this, ID_WXEDIT1, _("0"), wxPoint(52, 80), wxSize(335, 47), wxTE_RIGHT, wxDefaultValidator, _("WxEdit1"));
	WxEdit1->Enable(false);
	WxEdit1->SetFont(wxFont(18, wxSWISS, wxNORMAL, wxBOLD, false, _("Century")));

	WxStaticText1 = new wxStaticText(this, ID_WXSTATICTEXT1, _("HP-50 + Super Kenko 82 MS ****V2*****"), wxPoint(54, 4), wxDefaultSize, 0, _("WxStaticText1"));

	WxButton18 = new wxButton(this, ID_WXBUTTON18, _("C"), wxPoint(273, 143), wxSize(48, 44), 0, wxDefaultValidator, _("WxButton18"));
	WxButton18->SetFont(wxFont(14, wxSWISS, wxNORMAL, wxBOLD, false));

	WxButton16 = new wxButton(this, ID_WXBUTTON16, _("."), wxPoint(128, 310), wxSize(58, 47), 0, wxDefaultValidator, _("WxButton16"));
	WxButton16->SetFont(wxFont(16, wxSWISS, wxNORMAL, wxBOLD, false));

	WxButton15 = new wxButton(this, ID_WXBUTTON15, _("0"), wxPoint(51, 309), wxSize(58, 47), 0, wxDefaultValidator, _("WxButton15"));
	WxButton15->SetFont(wxFont(16, wxSWISS, wxNORMAL, wxBOLD, false));

	WxButton14 = new wxButton(this, ID_WXBUTTON14, _("X"), wxPoint(398, 316), wxSize(47, 43), 0, wxDefaultValidator, _("WxButton14"));
	WxButton14->SetFont(wxFont(16, wxSWISS, wxNORMAL, wxBOLD, false));

	WxButton13 = new wxButton(this, ID_WXBUTTON13, _("/"), wxPoint(335, 317), wxSize(49, 42), 0, wxDefaultValidator, _("WxButton13"));
	WxButton13->SetFont(wxFont(16, wxSWISS, wxNORMAL, wxBOLD, false));

	WxButton12 = new wxButton(this, ID_WXBUTTON12, _("-"), wxPoint(335, 259), wxSize(48, 39), 0, wxDefaultValidator, _("WxButton12"));
	WxButton12->SetFont(wxFont(16, wxSWISS, wxNORMAL, wxBOLD, false));

	WxButton11 = new wxButton(this, ID_WXBUTTON11, _("="), wxPoint(270, 259), wxSize(53, 38), 0, wxDefaultValidator, _("WxButton11"));
	WxButton11->SetForegroundColour(wxColour(0,128,0));
	WxButton11->SetFont(wxFont(16, wxSWISS, wxNORMAL, wxBOLD, false));

	WxButton10 = new wxButton(this, ID_WXBUTTON10, _("+"), wxPoint(399, 209), wxSize(47, 99), 0, wxDefaultValidator, _("WxButton10"));
	WxButton10->SetFont(wxFont(16, wxSWISS, wxNORMAL, wxBOLD, false));

	WxButton9 = new wxButton(this, ID_WXBUTTON9, _("3"), wxPoint(197, 253), wxSize(58, 47), 0, wxDefaultValidator, _("WxButton9"));
	WxButton9->SetFont(wxFont(16, wxSWISS, wxNORMAL, wxBOLD, false));

	WxButton8 = new wxButton(this, ID_WXBUTTON8, _("2"), wxPoint(126, 254), wxSize(58, 47), 0, wxDefaultValidator, _("WxButton8"));
	WxButton8->SetFont(wxFont(16, wxSWISS, wxNORMAL, wxBOLD, false));

	WxButton7 = new wxButton(this, ID_WXBUTTON7, _("1"), wxPoint(51, 255), wxSize(58, 47), 0, wxDefaultValidator, _("WxButton7"));
	WxButton7->SetHelpText(_("test"));
	WxButton7->SetFont(wxFont(16, wxSWISS, wxNORMAL, wxBOLD, false));

	WxButton6 = new wxButton(this, ID_WXBUTTON6, _("6"), wxPoint(197, 200), wxSize(58, 47), 0, wxDefaultValidator, _("WxButton6"));
	WxButton6->SetFont(wxFont(16, wxSWISS, wxNORMAL, wxBOLD, false));

	WxButton5 = new wxButton(this, ID_WXBUTTON5, _("5"), wxPoint(126, 199), wxSize(58, 47), 0, wxDefaultValidator, _("WxButton5"));
	WxButton5->SetFont(wxFont(16, wxSWISS, wxNORMAL, wxBOLD, false));

	WxButton4 = new wxButton(this, ID_WXBUTTON4, _("4"), wxPoint(52, 202), wxSize(58, 47), 0, wxDefaultValidator, _("WxButton4"));
	WxButton4->SetFont(wxFont(16, wxSWISS, wxNORMAL, wxBOLD, false));

	WxButton3 = new wxButton(this, ID_WXBUTTON3, _("9"), wxPoint(197, 141), wxSize(58, 47), 0, wxDefaultValidator, _("WxButton3"));
	WxButton3->SetFont(wxFont(16, wxSWISS, wxNORMAL, wxBOLD, false));

	WxButton2 = new wxButton(this, ID_WXBUTTON2, _("8"), wxPoint(123, 143), wxSize(58, 47), 0, wxDefaultValidator, _("WxButton2"));
	WxButton2->SetFont(wxFont(16, wxSWISS, wxNORMAL, wxBOLD, false));

	WxButton1 = new wxButton(this, ID_WXBUTTON1, _("7"), wxPoint(53, 143), wxSize(58, 47), 0, wxDefaultValidator, _("WxButton1"));
	WxButton1->SetFont(wxFont(16, wxSWISS, wxNORMAL, wxBOLD, false));

	SetTitle(_("Calculadora"));
	SetIcon(Projeto_2Frm_frmNewForm_XPM);
	SetSize(337,158,475,412);
	Center();
	
        ////GUI Items Creation End
        //WxButton9->Append(ID_WXBUTTON9,"&Hello...\tCtrl-H");
    }
    
    void Projeto_2Frm::OnClose(wxCloseEvent& event)
    {
        Destroy();
    }
    
    /*
     * WxButton1Click
     */
     
    
    /*
     * WxButton7Click0
     */
    void Projeto_2Frm::WxButton7Click0(wxCommandEvent& event)
    {
        // insert your code he
        verificadisplay(display,strlen(display));
        processaUm();
    }
    
    /*
     * WxButton8Click
     */
     
    void Projeto_2Frm::incrementa(){
        
        float valor;
        valor=atof(display);
        valor++;
         sprintf(display , "%.f", valor);
            WxEdit1->SetLabel(display);
        
        
        }
    void Projeto_2Frm::WxButton8Click(wxCommandEvent& event)
    {
        // insert your code here
        verificadisplay(display,strlen(display));
        processaDois();
    }
    
    /*
     * WxButton9Click
     */
    void Projeto_2Frm::WxButton9Click(wxCommandEvent& event)
    {
        verificadisplay(display,strlen(display));
        processaTres();
    }
    
    /*
     * WxButton4Click
     */
    void Projeto_2Frm::WxButton4Click(wxCommandEvent& event)
    {
        // insert your code here
        verificadisplay(display,strlen(display));
        processaQuatro();
    }
    
    /*
     * WxButton5Click
     */
    void Projeto_2Frm::WxButton5Click(wxCommandEvent& event)
    {
        // insert your code here
        verificadisplay(display,strlen(display));
        processaCinco();   
        
    }
    
    /*
     * WxButton6Click
     */
    void Projeto_2Frm::WxButton6Click(wxCommandEvent& event)
    {
        // insert your code here
        verificadisplay(display,strlen(display));
        processaSeis();
        
    }
    
    /*
     * WxButton1Click2
     */
    void Projeto_2Frm::WxButton1Click2(wxCommandEvent& event)
    {
        // insert your code here
        verificadisplay(display,strlen(display));
        processaSete();
        
    }
    
    /*
     * WxButton2Click
     */
    void Projeto_2Frm::WxButton2Click(wxCommandEvent& event)
    {
        // insert your code here
        verificadisplay(display,strlen(display));
         processaOito();
    }
    
    /*
     * WxButton3Click
     */
    void Projeto_2Frm::WxButton3Click(wxCommandEvent& event)
    {
        verificadisplay(display,strlen(display));
        processaNove();
        
    
        // insert your code here
    }
    
    /*
     * WxButton10Click
     */
    void Projeto_2Frm::WxButton10Click(wxCommandEvent& event)
    {
        // insert your code here
    verificadisplay(display,strlen(display));
        processaSinalSoma();
    }
    
    /*
     * WxButton14Click
     */
    void Projeto_2Frm::WxButton14Click(wxCommandEvent& event)
    {
        // insert your code here
        verificadisplay(display,strlen(display));
        processaSinalMult();
    
    }
    
    /*
     * WxButton12Click
     */
    void Projeto_2Frm::WxButton12Click(wxCommandEvent& event)
    {
        // insert your code here
    verificadisplay(display,strlen(display));
        processaSinalSub();
    }
    
    /*
     * WxButton13Click
     */
    void Projeto_2Frm::WxButton13Click(wxCommandEvent& event)
    {
        // insert your code here
        verificadisplay(display,strlen(display));
        processaSinalDivisao();
    }
    
    /*
     * WxButton16Click
     */
    void Projeto_2Frm::WxButton16Click(wxCommandEvent& event)
    {
        // insert your code here
        verificadisplay(display,strlen(display));
        processaVirgula();
    }
    
    /*
     * WxButton15Click
     */
    void Projeto_2Frm::WxButton15Click(wxCommandEvent& event)
    {
        // insert your code here
        verificadisplay(display,strlen(display));
        processaZero();
    //	Projeto_2Frm::OnKeyDown(event);
    
    }
    
    /*
     * WxButton18Click
     */
    void Projeto_2Frm::WxButton18Click(wxCommandEvent& event)
    {
        // insert your code here
        verificadisplay(display,strlen(display));
        processaBackspace();
    
    }
    
    /*
     * WxButton17Click
     */
    void Projeto_2Frm::WxButton17Click(wxCommandEvent& event)
    {
        verificadisplay(display,strlen(display));
        incrementa();
    }
    
    /*
     * WxButton11Click
     */
    void Projeto_2Frm::WxButton11Click(wxCommandEvent& event)
    {
        // insert your code here
       
        string temp=display;
        WxEdit2->SetLabel(display);
        WxEdit1->SetLabel(ES::solve(temp));
        temp=ES::solve(temp);
        strcpy(display, temp.c_str());
    }
    
    void Projeto_2Frm::calcula()
    {
        int operador,aux,pos,max;
        char parcela[200];
        float parcela1=0,parcela2=0;
        max=strlen(display);
    
        for(pos=0,aux=0; pos<max; pos++)
        {
            
            if (pos==0 && display[pos]=='-')
                        {
                parcela[aux]='-';
                aux++;
            }
            
            
           else if ((display[pos]>='0') && (display[pos]<='9'))
            {
                parcela[aux]=display[pos];
                aux++;
            }
            else if (display[pos]==',')
            {
                parcela[aux]=',';
                aux++;
            }
    
            else if (display[pos]=='*')
            {
                operador=1;
                parcela[aux]='\0';
                aux=0;
                //if (parcela1==NULL)
                parcela1=atof(parcela);
    
                sprintf(parcela,"");
            }
            else if (display[pos]=='+')
            {
                operador=2;
    
                //if (parcela1==NULL)
                parcela1=atof(parcela);
    
                //teste[aux]='\0';
                parcela[aux]='\0';
                aux=0;
                sprintf(parcela,"");
            }
            else if (display[pos]=='-')
            {
                operador=3;
                parcela[aux]='\0';
                aux=0;
    
    
                //if (parcela1==NULL)
                parcela1=atof(parcela);
                sprintf(parcela,"");
            }
            else if (display[pos]=='/')
            {
                operador=4;
                parcela[aux]='\0';
                aux=0;
                //if (parcela1==NULL)
                parcela1=atof(parcela);
                sprintf(parcela,"");
            }
        }
        parcela[aux]='\0';
        parcela2=atof(parcela);
    
        switch(operador)
        {
        case 1:
        {
            parcela1=parcela1*parcela2;
            break;
        }
        case 2:
        {
            parcela1=parcela1+parcela2;
            break;
        }
        case 3:
        {
            parcela1=parcela1-parcela2;
            break;
        }
        case 4:
        {
            parcela1=parcela1/parcela2;
            break;
        }
        
        
        }
    
    
    
    
        int inteiro=(int)parcela1;
    
        if ( (parcela2==0) && (operador==4))
        {
            sprintf(display , "Impossivel dividir por 0");
            WxEdit1->SetLabel(display);
        }
        else
        {
            sprintf(display , "%g", parcela1);
            WxEdit1->SetLabel(display);
        }
    
    }
    
    /*
     * Projeto_2FrmActivate
     */
    void Projeto_2Frm::Projeto_2FrmActivate(wxActivateEvent& event)
    {
        // insert your code here
    }
    
    void Projeto_2Frm::processaZero()
    {
        float valor=0;
         if( display[0]=='0' && (display[1]!='.'))
            sprintf(display,"");
        sprintf(display + strlen(display), "%.f", valor);
        WxEdit1->SetLabel(display);
    }
    
    void Projeto_2Frm::processaNove()
    {
        float valor=9;
          if( display[0]=='0' && (display[1]!='.'))
            sprintf(display,"");
        sprintf(display + strlen(display), "%.f", valor);
        WxEdit1->SetLabel(display);
    }
    
    
    void Projeto_2Frm::processaOito()
    {
        float valor=8;
         if( display[0]=='0' && (display[1]!='.'))
            sprintf(display,"");
        sprintf(display + strlen(display), "%.f", valor);
        WxEdit1->SetLabel(display);
    }
    
    void Projeto_2Frm::processaSete()
    {
        float valor=7;
      if( strlen(display)==0)
            sprintf(display,"");
        sprintf(display + strlen(display), "%.f", valor);
        WxEdit1->SetLabel(display);
    }
    
    void Projeto_2Frm::processaSeis()
    {
        float valor=6;
      if( display[0]=='0' && (display[1]!='.'))
            sprintf(display,"");
        sprintf(display + strlen(display), "%.f", valor);
        WxEdit1->SetLabel(display);
    }
    
    void Projeto_2Frm::processaCinco()
    {
        float valor=5;
       if( display[0]=='0' && (display[1]!='.'))
            sprintf(display,"");
        sprintf(display + strlen(display), "%.f", valor);
        WxEdit1->SetLabel(display);
    }
    
    void Projeto_2Frm::processaQuatro()
    {
        float valor=4;
      if( display[0]=='0' && (display[1]!='.'))
            sprintf(display,"");
        sprintf(display + strlen(display), "%.f", valor);
        WxEdit1->SetLabel(display);
    }
    
    void Projeto_2Frm::processaTres()
    {
        float valor=3;
      if( display[0]=='0' && (display[1]!='.'))
            sprintf(display,"");
        sprintf(display + strlen(display), "%.f", valor);
        WxEdit1->SetLabel(display);
    }
    
    void Projeto_2Frm::processaDois()
    {
        float valor=2;
        if( display[0]=='0' && (display[1]!='.'))
            sprintf(display,"");
        sprintf(display + strlen(display), "%.f", valor);
        WxEdit1->SetLabel(display);
    }
    
    void Projeto_2Frm::processaUm()
    {
        float valor=1;
        if( display[0]=='0' && (display[1]!='.'))
            sprintf(display,"");
        sprintf(display + strlen(display), "%.f", valor);
        WxEdit1->SetLabel(display);
    }
    
    void Projeto_2Frm::processaVirgula()
    {
        //if(display[0]!='0')
       // {
            sprintf(display + strlen(display), ".");
            WxEdit1->SetLabel(display);
      //  }
    }
    
    void Projeto_2Frm::processaPonto()
    {
      //  if(display[0]!='0')
       //  {
            printf(display + strlen(display), ".");
        WxEdit1->SetLabel(display);
       // }
    }
    
    void Projeto_2Frm::processaEnter()
    {
        string temp=display;
        WxEdit1->SetLabel(ES::solve(temp));
    }
    
    void Projeto_2Frm::processaBackspace()
    {
        sprintf(display , "0" );
        WxEdit1->SetLabel(display);
    }
    
    void Projeto_2Frm::processaSinalSoma()
    {
        int max=strlen(display);
       if( display[0]=='0' && (display[1]!='.')){
            //sprintf(display,"*");
           // WxEdit1->SetLabel(display);
            
            }
      else if( display[max-1]!='*' && display[max-1]!='/' && display[max-1]!='+' && display[max-1]!='-' && display[max-1]!='^' )  

        {
            sprintf(display + strlen(display), "+");
            WxEdit1->SetLabel(display);
            
        }
    
        
    }
    
    
    
    void Projeto_2Frm::processaSinalSub()
    {
       int max=strlen(display);
       if( display[0]=='0' && (display[1]!='.')){
            sprintf(display,"-");
            WxEdit1->SetLabel(display);
            
            }
      //else if( display[max-1]!='*' && display[max-1]!='/' && display[max-1]!='+' && display[max-1]!='-')  
        else if(display[max-1]!='-')
        {
            sprintf(display + strlen(display), "-");
            WxEdit1->SetLabel(display);
            
        }
         
        
    }
    
    void Projeto_2Frm::processaSinalMult()
    {
 int max=strlen(display);
       if( display[0]=='0' && (display[1]!='.')){
            //sprintf(display,"*");
           // WxEdit1->SetLabel(display);
            
            }
      else if( display[max-1]!='*' && display[max-1]!='/' && display[max-1]!='+' && display[max-1]!='-' && display[max-1]!='^')  

        {
            sprintf(display + strlen(display), "*");
            WxEdit1->SetLabel(display);
            
        }
         
        }
           
    
    
    void Projeto_2Frm::processaSinalDivisao()
    {
 int max=strlen(display);
       if( display[0]=='0' && (display[1]!='.')){
            //sprintf(display,"*");
           // WxEdit1->SetLabel(display);
            
            }
      else if( display[max-1]!='*' && display[max-1]!='/' && display[max-1]!='+' && display[max-1]!='-' && display[max-1]!='^')  

        {
            sprintf(display + strlen(display), "/");
            WxEdit1->SetLabel(display);
            
        }
       
    }
    
    void Projeto_2Frm::OnKeyDown(wxKeyEvent& event)
    {
        
        if ((event.GetEventType() == wxEVT_KEY_DOWN))
            processaKey(((wxKeyEvent&)event).GetKeyCode());
        event.Skip();
    }
    
    /*
     * Projeto_2FrmActivate0
     */
    void Projeto_2Frm::Projeto_2FrmActivate0(wxActivateEvent& event)
    {
        // insert your code here
    }
    
    
    void Projeto_2Frm::processaKey(int key)
    {
        if (key == 48 || key == 324 )
        {
            processaZero();
        }
    
        else if (key == 57 || key == 333 )
        {
            processaNove();
        }
        
        else if (key == 56 || key == 332)
        {
            processaOito();
        }
        
        else if (key == 55 || key == 331)
        {
            processaSete();
        }
        
        else if (key == 54  || key == 330 )
        {
            processaSeis();
        }
        
        else if (key == 53 || key == 329 )
        {
            processaCinco();
        }
        else if (key == 52 || key == 328 )
        {
            processaQuatro();
        }
        else if (key == 51 || key == 327 )
        {
            processaTres();
        }
        else if (key == 50 || key == 326)
        {
            processaDois();
        }
        else if (key == 49 || key == 325)
        {
            processaUm();
        }
        
        else if (key == 391 || key == 44)
        {
            processaVirgula();
        }
    
        else if (key == 0 || key == 46)
        {
            processaPonto();
        }
    
        else if (key == 13 || key == 370)
        {
            processaEnter();
        }
        else if (key == 8 || key == 8)
        {
            processaBackspace();
        }
    
        else if (key == 388 || key == 61)
        {
            processaSinalSoma();
        }
        else if (key == 390 || key == 45)
        {
            processaSinalSub();
        }
    
    
        else if (key == 387 || key == 56)
        {
            processaSinalMult();
        }
    
        else if (key == 0 || key == 392)
        {
            processaSinalDivisao();
        }
        
        // wxMessageBox(wxString::Format("KeyDown: %i\n", key)); // Descomentar para mostrar ID das teclas
        
    }
    
    /*
     * Projeto_2FrmKillFocus
     */
    
    
    /*
     * WxBitmapButton1Click
     */
    void Projeto_2Frm::WxBitmapButton1Click(wxCommandEvent& event)
    {
        // wxMessageBox("Quit program?", "Confirm", wxOK | wxCANCEL );
    	// insert your code here
    	
    	wxMessageDialog dlg(NULL, _T("Esse programa esta bugado, apos clilcar em algum botao, ele nao reconhece mais as entradas do teclado. \n Mas por coincidencia, essa mensagem corrige isso apos ativada kkkk"), _T("Alerta"), wxYES_NO);
    
    
    dlg.SetYesNoLabels(_("  Certo ... "), _("   Nao dou a minima...")); 
    
    dlg.ShowModal();   
    
    }
    
    /*
     * WxButton19Click
     */
    void Projeto_2Frm::WxButton19Click(wxCommandEvent& event)
    {
        processaRaiz();
    	// insert your code here
    }
    
    void Projeto_2Frm::processaRaiz(){
        
             if(display[0]!='0'){

            sprintf(display + strlen(display), "^(1/2)");
            WxEdit1->SetLabel(display);
        }
    }
    
    /*
     * WxButton17Click0
     */
    void Projeto_2Frm::WxButton17Click0(wxCommandEvent& event)
    {
        incrementa();
    	// insert your code here
    }

/*
 * WxButton20Click
 */
void Projeto_2Frm::WxButton20Click(wxCommandEvent& event)
{           int max=strlen(display);
        //if(display[0]!='0'){
            int total=strlen(display);
            if(( ( (display[total-1]>='0' && display[total-1]<='9') )|| (display[total-1]<=')')) && total>=1 && display[0]!='0'&& display[max-1]!='^'){
            sprintf(display + strlen(display) , "*(");
            WxEdit1->SetLabel(display);
        }
        else if (display[0]=='0'){
            sprintf(display,"(");
             WxEdit1->SetLabel(display);
            }
            else {
                sprintf(display + strlen(display), "(");
            WxEdit1->SetLabel(display);
                }
       // }
}

/*
 * WxButton21Click
 */
void Projeto_2Frm::WxButton21Click(wxCommandEvent& event)
{
       sprintf(display + strlen(display), ")");
            WxEdit1->SetLabel(display);
	// insert your code here
}

/*
 * WxButton23Click
 */
void Projeto_2Frm::WxButton23Click(wxCommandEvent& event)
{
    
     int max=strlen(display);
       if( display[0]=='0' && (display[1]!='.')){
            //sprintf(display,"*");
           // WxEdit1->SetLabel(display);
            
            }
      else if( display[max-1]!='*' && display[max-1]!='/' && display[max-1]!='+' && display[max-1]!='-' && display[max-1]!='^')  

        {
            sprintf(display + strlen(display), "^");
            WxEdit1->SetLabel(display);
            
        }
}

/*
 * WxButton22Click
 */
void Projeto_2Frm::WxButton22Click(wxCommandEvent& event)
{
	
    string temp;
    char temp2[200];
    int total=strlen(display);
    if (total >= 1){
        temp=display;
        temp=temp.substr(0,total-1);
        strcpy(temp2,temp.c_str());
        sprintf(display,temp2);
        WxEdit1->SetLabel(display);
        }
     if(total<=1){
        sprintf(display,"0");
         WxEdit1->SetLabel(display);
        }
    // insert your code here
}

void Projeto_2Frm::verificadisplay(char* display,int tam){
    //verificadisplay(display,strlen(display));
    for(int i=0;i<tam;i++){
        if (display[i]=='i' || display[i]=='n'|| display[i]=='e'){
            sprintf(display,"0");
            i=tam;
            }
        
        }
   
    }

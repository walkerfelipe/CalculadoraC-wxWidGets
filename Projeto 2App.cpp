//---------------------------------------------------------------------------
//
// Name:        Projeto 2App.cpp
// Author:      Walker
// Created:     28/09/2016 17:39:56
// Description: 
//
//---------------------------------------------------------------------------

#include "Projeto 2App.h"
#include "Projeto 2Frm.h"

IMPLEMENT_APP(Projeto_2FrmApp)

bool Projeto_2FrmApp::OnInit()
{
    Projeto_2Frm* frame = new Projeto_2Frm(NULL);
    SetTopWindow(frame);
    frame->Show();
    return true;
}
 
int Projeto_2FrmApp::OnExit()
{
	return 0;
}



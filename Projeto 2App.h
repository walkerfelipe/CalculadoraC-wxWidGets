//---------------------------------------------------------------------------
//
// Name:        Projeto 2App.h
// Author:      Walker
// Created:     28/09/2016 17:39:56
// Description: 
//
//---------------------------------------------------------------------------

#ifndef __PROJETO_2FRMApp_h__
#define __PROJETO_2FRMApp_h__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#else
	#include <wx/wxprec.h>
#endif

class Projeto_2FrmApp : public wxApp
{
	public:
		bool OnInit();
		int OnExit();
};

#endif

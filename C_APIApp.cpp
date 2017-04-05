/***************************************************************
 * Name:      C_APIApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Murchy ()
 * Created:   2017-03-08
 * Copyright: Murchy ()
 * License:
 **************************************************************/

#include "C_APIApp.h"

//(*AppHeaders
#include "C_APIMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(C_APIApp);

bool C_APIApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	C_APIFrame* Frame = new C_APIFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}

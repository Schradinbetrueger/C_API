/***************************************************************
 * Name:      C_APIApp.h
 * Purpose:   Defines Application Class
 * Author:    Murchy ()
 * Created:   2017-03-08
 * Copyright: Murchy ()
 * License:
 **************************************************************/

#ifndef C_APIAPP_H
#define C_APIAPP_H

#include <wx/app.h>

class C_APIApp : public wxApp
{
    public:
        virtual bool OnInit();
};

#endif // C_APIAPP_H

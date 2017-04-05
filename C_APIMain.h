/***************************************************************
 * Name:      C_APIMain.h
 * Purpose:   Defines Application Frame
 * Author:    Murchy ()
 * Created:   2017-03-08
 * Copyright: Murchy ()
 * License:
 **************************************************************/

#ifndef C_APIMAIN_H
#define C_APIMAIN_H

#include <winsock2.h>
#include <mysql.h>

//(*Headers(C_APIFrame)
#include <wx/srchctrl.h>
#include <wx/stattext.h>
#include <wx/menu.h>
#include <wx/textctrl.h>
#include <wx/panel.h>
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/statusbr.h>
//*)

class C_APIFrame: public wxFrame
{
    public:

        C_APIFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~C_APIFrame();

    private:

        //(*Handlers(C_APIFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnTextCtrl1Text(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnTextCtrl1Text1(wxCommandEvent& event);
        void OnPanel1Paint(wxPaintEvent& event);
        void OnTextCtrl2Text(wxCommandEvent& event);
        void OnButton2Click(wxCommandEvent& event);
        void OnButton2Click1(wxCommandEvent& event);
        void OnInsertClick(wxCommandEvent& event);
        void OnButton3Click(wxCommandEvent& event);
        void OnUpdate_ButtonClick(wxCommandEvent& event);
        void OnSuche_buttonClick(wxCommandEvent& event);
        //*)

        //(*Identifiers(C_APIFrame)
        static const long ID_BUTTON1;
        static const long ID_TEXTCTRL3;
        static const long ID_STATICTEXT1;
        static const long ID_STATICTEXT2;
        static const long ID_STATICTEXT3;
        static const long ID_BUTTON3;
        static const long ID_TEXTCTRL2;
        static const long ID_BUTTON2;
        static const long ID_TEXTCTRL4;
        static const long ID_STATICTEXT5;
        static const long ID_TEXTCTRL5;
        static const long ID_BUTTON4;
        static const long ID_TEXTCTRL6;
        static const long ID_STATICTEXT6;
        static const long ID_STATICTEXT7;
        static const long ID_BUTTON5;
        static const long ID_STATICTEXT4;
        static const long ID_SEARCHCTRL1;
        static const long ID_TEXTCTRL1;
        static const long ID_STATICTEXT8;
        static const long ID_PANEL1;
        static const long ID_MENUITEM1;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(C_APIFrame)
        wxSearchCtrl* Suche_Value;
        wxStaticText* StaticText2;
        wxTextCtrl* Delete_value;
        wxButton* Button1;
        wxStaticText* StaticText6;
        wxStaticText* StaticText8;
        wxPanel* Panel1;
        wxStaticText* StaticText1;
        wxStaticText* StaticText3;
        wxButton* Update_Button;
        wxTextCtrl* Output_Field;
        wxTextCtrl* Update_Value;
        wxButton* Button3;
        wxStaticText* StaticText5;
        wxStaticText* StaticText7;
        wxStatusBar* StatusBar1;
        wxButton* Suche_button;
        wxTextCtrl* Vorname_text;
        wxStaticText* StaticText4;
        wxTextCtrl* Ticket_text;
        wxButton* Insert;
        wxTextCtrl* Nachname_text;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // C_APIMAIN_H

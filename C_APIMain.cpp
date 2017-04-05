/***************************************************************
 * Name:      C_APIMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Murchy ()
 * Created:   2017-03-08
 * Copyright: Murchy ()
 * License:
 **************************************************************/

#include "C_APIMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(C_APIFrame)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(C_APIFrame)
const long C_APIFrame::ID_BUTTON1 = wxNewId();
const long C_APIFrame::ID_TEXTCTRL3 = wxNewId();
const long C_APIFrame::ID_STATICTEXT1 = wxNewId();
const long C_APIFrame::ID_STATICTEXT2 = wxNewId();
const long C_APIFrame::ID_STATICTEXT3 = wxNewId();
const long C_APIFrame::ID_BUTTON3 = wxNewId();
const long C_APIFrame::ID_TEXTCTRL2 = wxNewId();
const long C_APIFrame::ID_BUTTON2 = wxNewId();
const long C_APIFrame::ID_TEXTCTRL4 = wxNewId();
const long C_APIFrame::ID_STATICTEXT5 = wxNewId();
const long C_APIFrame::ID_TEXTCTRL5 = wxNewId();
const long C_APIFrame::ID_BUTTON4 = wxNewId();
const long C_APIFrame::ID_TEXTCTRL6 = wxNewId();
const long C_APIFrame::ID_STATICTEXT6 = wxNewId();
const long C_APIFrame::ID_STATICTEXT7 = wxNewId();
const long C_APIFrame::ID_BUTTON5 = wxNewId();
const long C_APIFrame::ID_STATICTEXT4 = wxNewId();
const long C_APIFrame::ID_SEARCHCTRL1 = wxNewId();
const long C_APIFrame::ID_TEXTCTRL1 = wxNewId();
const long C_APIFrame::ID_PANEL1 = wxNewId();
const long C_APIFrame::ID_MENUITEM1 = wxNewId();
const long C_APIFrame::idMenuAbout = wxNewId();
const long C_APIFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(C_APIFrame,wxFrame)
    //(*EventTable(C_APIFrame)
    //*)
END_EVENT_TABLE()

C_APIFrame::C_APIFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(C_APIFrame)
    wxMenuItem* MenuItem2;
    wxMenuItem* MenuItem1;
    wxMenu* Menu1;
    wxMenuBar* MenuBar1;
    wxMenu* Menu2;

    Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    SetClientSize(wxSize(711,450));
    Panel1 = new wxPanel(this, ID_PANEL1, wxPoint(8,24), wxSize(432,496), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    Button1 = new wxButton(Panel1, ID_BUTTON1, _("Read"), wxPoint(24,296), wxSize(136,48), 0, wxDefaultValidator, _T("ID_BUTTON1"));
    Ticket_text = new wxTextCtrl(Panel1, ID_TEXTCTRL3, wxEmptyString, wxPoint(88,240), wxSize(96,32), 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
    StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Vorname"), wxPoint(24,120), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("Nachname"), wxPoint(24,184), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    StaticText3 = new wxStaticText(Panel1, ID_STATICTEXT3, _("Ticket"), wxPoint(24,248), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
    Button3 = new wxButton(Panel1, ID_BUTTON3, _("Delete"), wxPoint(176,296), wxSize(128,48), 0, wxDefaultValidator, _T("ID_BUTTON3"));
    Nachname_text = new wxTextCtrl(Panel1, ID_TEXTCTRL2, wxEmptyString, wxPoint(88,176), wxSize(96,32), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
    Insert = new wxButton(Panel1, ID_BUTTON2, _("Insert"), wxPoint(24,360), wxSize(136,48), 0, wxDefaultValidator, _T("ID_BUTTON2"));
    Vorname_text = new wxTextCtrl(Panel1, ID_TEXTCTRL4, wxEmptyString, wxPoint(88,112), wxSize(96,32), 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
    StaticText5 = new wxStaticText(Panel1, ID_STATICTEXT5, _("Delete"), wxPoint(216,120), wxDefaultSize, 0, _T("ID_STATICTEXT5"));
    Delete_value = new wxTextCtrl(Panel1, ID_TEXTCTRL5, wxEmptyString, wxPoint(256,112), wxSize(104,32), 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
    Update_Button = new wxButton(Panel1, ID_BUTTON4, _("Update"), wxPoint(176,360), wxSize(128,48), 0, wxDefaultValidator, _T("ID_BUTTON4"));
    Update_Value = new wxTextCtrl(Panel1, ID_TEXTCTRL6, wxEmptyString, wxPoint(256,176), wxSize(104,32), 0, wxDefaultValidator, _T("ID_TEXTCTRL6"));
    StaticText6 = new wxStaticText(Panel1, ID_STATICTEXT6, _("Update"), wxPoint(216,184), wxDefaultSize, 0, _T("ID_STATICTEXT6"));
    StaticText7 = new wxStaticText(Panel1, ID_STATICTEXT7, _("Suche"), wxPoint(216,240), wxDefaultSize, 0, _T("ID_STATICTEXT7"));
    Suche_button = new wxButton(Panel1, ID_BUTTON5, _("Suche"), wxPoint(328,296), wxSize(48,112), 0, wxDefaultValidator, _T("ID_BUTTON5"));
    StaticText4 = new wxStaticText(Panel1, ID_STATICTEXT4, _("Troubleticket"), wxPoint(72,24), wxSize(264,56), 0, _T("ID_STATICTEXT4"));
    wxFont StaticText4Font(36,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Bradley Hand ITC"),wxFONTENCODING_DEFAULT);
    StaticText4->SetFont(StaticText4Font);
    Suche_Value = new wxSearchCtrl(Panel1, ID_SEARCHCTRL1, wxEmptyString, wxPoint(256,240), wxSize(104,21), 0, wxDefaultValidator, _T("ID_SEARCHCTRL1"));
    Output_Field = new wxTextCtrl(Panel1, ID_TEXTCTRL1, wxEmptyString, wxPoint(416,48), wxSize(240,360), wxTE_MULTILINE, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, ID_MENUITEM1, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&C_APIFrame::OnButton1Click);
    Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&C_APIFrame::OnButton3Click);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&C_APIFrame::OnInsertClick);
    Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&C_APIFrame::OnUpdate_ButtonClick);
    Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&C_APIFrame::OnSuche_buttonClick);
    Connect(ID_MENUITEM1,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&C_APIFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&C_APIFrame::OnAbout);
    //*)
}

C_APIFrame::~C_APIFrame()
{
    //(*Destroy(C_APIFrame)
    //*)
}

void C_APIFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void C_APIFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}



void C_APIFrame::OnButton1Click(wxCommandEvent& event)
{
    MYSQL mysql;
    MYSQL_RES * mysql_result;
    MYSQL_ROW mysql_row;
    char tmp [64];
    wxString str;
    if (mysql_init (& mysql) == NULL)
    {
        wxMessageDialog dlg (this, _ ("unable to initialize MYSQL struct!"));
        dlg.ShowModal ();
    }
    else
    {
        if (mysql_real_connect (& mysql, "localhost", "root", "", "troubleticket", 3306, NULL, 0) == NULL)
        {
            wxMessageDialog dlg (this, _ ("unable to connect MYSQL!"));
            dlg.ShowModal ();
        }
    else
    {
    if ((mysql_query (& mysql, "select * from auftraggeber"))!= 0)
    {
        wxMessageDialog dlg (this, _ ("unable to query MYSQL!"));
        dlg.ShowModal ();
    }
    else
    { mysql_result = mysql_store_result (& mysql);
    if (mysql_result == NULL)
    {
        wxMessageDialog dlg (this, _ ("unable to query MYSQL!"));
        dlg.ShowModal ();
    }
    else
    { while (mysql_row = mysql_fetch_row (mysql_result))
    {
        sprintf (tmp, "%s\t%s\t%s\t%s", mysql_row[0],
        mysql_row[1], mysql_row[2], mysql_row[3]);
        wxString wx_string (tmp, wxConvUTF8);
        str += wx_string + "\n";
    }
        Output_Field -> SetValue(str);
        wxMessageDialog dlg (this, str);
    dlg.ShowModal ();
    }
    }
    }
    }
}




void C_APIFrame::OnInsertClick(wxCommandEvent& event)
{
    MYSQL mysql;
    wxString string1 = Vorname_text -> GetValue();
    wxString string2 = Nachname_text -> GetValue();
    wxString string3 = Ticket_text -> GetValue();
    Vorname_text -> SetValue("");
    Nachname_text -> SetValue("");
    Ticket_text -> SetValue("");
    if (mysql_init (& mysql) == NULL)
    {
        wxMessageDialog dlg (this, _ ("unable to initialize MYSQL struct!"));
        dlg.ShowModal ();
    }
    else
          if (mysql_real_connect (& mysql, "localhost", "root", "", "troubleticket", 3306, NULL, 0) == NULL)
        {
            wxMessageDialog dlg (this, _ ("unable to connect MYSQL!"));
            dlg.ShowModal ();
        }
    else
    {
    if((mysql_query (& mysql, "INSERT INTO auftraggeber (vorname, nachname, ticket) VALUES ('"+string1+"', '"+string2+"', "+string3+");"))!=0)
    {
        wxMessageDialog dlg (this, _ ("unable to query MYSQL!"));
        dlg.ShowModal ();
    }
    else
    {
        wxMessageDialog dlg (this, _ ("Erfolgreich eingefügt"));
        dlg.ShowModal ();
    }
    }
}

void C_APIFrame::OnButton3Click(wxCommandEvent& event)
{
    MYSQL mysql;
    wxString string4 = Delete_value -> GetValue();
    Delete_value -> SetValue("");
    if (mysql_init (& mysql) == NULL)
    {
        wxMessageDialog dlg (this, _ ("unable to initialize MYSQL struct!"));
        dlg.ShowModal ();
    }
    else
          if (mysql_real_connect (& mysql, "localhost", "root", "", "troubleticket", 3306, NULL, 0) == NULL)
        {
            wxMessageDialog dlg (this, _ ("unable to connect MYSQL!"));
            dlg.ShowModal ();
        }
    else
    {
    if((mysql_query (& mysql, "DELETE FROM auftraggeber WHERE auftraggeberID = "+string4+";"))!=0)
    {
        wxMessageDialog dlg (this, _ ("unable to query MYSQL!"));
        dlg.ShowModal ();
    }
    else
    {
        wxMessageDialog dlg (this, _ ("Zeile "+string4+" erfolgreich gelöscht"));
        dlg.ShowModal ();
    }
    }
}



void C_APIFrame::OnUpdate_ButtonClick(wxCommandEvent& event)
{
    MYSQL mysql;
    wxString string6 = Vorname_text -> GetValue();
    wxString string7 = Nachname_text -> GetValue();
    wxString string8 = Ticket_text -> GetValue();
    wxString string5 = Update_Value -> GetValue();
    Vorname_text -> SetValue("");
    Nachname_text -> SetValue("");
    Ticket_text -> SetValue("");
    Update_Value -> SetValue("");

    if (mysql_init (& mysql) == NULL)
    {
        wxMessageDialog dlg (this, _ ("unable to initialize MYSQL struct!"));
        dlg.ShowModal ();
    }
    else
          if (mysql_real_connect (& mysql, "localhost", "root", "", "troubleticket", 3306, NULL, 0) == NULL)
        {
            wxMessageDialog dlg (this, _ ("unable to connect MYSQL!"));
            dlg.ShowModal ();
        }
    else
    {
    if((mysql_query (& mysql, "UPDATE auftraggeber SET vorname = '"+string6+"', nachname = '"+string7+"', ticket = "+string8+" WHERE auftraggeberID = "+string5+";"))!=0)
    {
        wxMessageDialog dlg (this, _ ("unable to query MYSQL!"));
        dlg.ShowModal ();
    }
    else
    {
        wxMessageDialog dlg (this, _ ("Zeile "+string5+" erfolgreich geupdated"));
        dlg.ShowModal ();
    }
    }
}

void C_APIFrame::OnSuche_buttonClick(wxCommandEvent& event)
{
    MYSQL mysql;
    MYSQL_RES * mysql_result;
    MYSQL_ROW mysql_row;
    char tmp [64];
    wxString str;
    wxString string9 = Suche_Value -> GetValue();
    Suche_Value -> SetValue("");
    if (mysql_init (& mysql) == NULL)
    {
        wxMessageDialog dlg (this, _ ("unable to initialize MYSQL struct!"));
        dlg.ShowModal ();
    }
    else
    {
    if (mysql_real_connect (& mysql, "localhost", "root", "", "troubleticket", 3306, NULL, 0) == NULL)
    {
        wxMessageDialog dlg (this, _ ("unable to connect MYSQL!"));
        dlg.ShowModal ();
    }
    else
    {
    if((mysql_query (& mysql, "SELECT * FROM auftraggeber WHERE auftraggeberID = '"+string9+"' OR vorname = '"+string9+"' OR nachname = '"+string9+"' OR ticket = '"+string9+"';"))!=0)
    {
        wxMessageDialog dlg (this, _ ("unable to query MYSQL!"));
        dlg.ShowModal ();
    }
   else
    { mysql_result = mysql_store_result (& mysql);
    if (mysql_result == NULL)
    {
        wxMessageDialog dlg (this, _ ("unable to query MYSQL!"));
        dlg.ShowModal ();
    }
    else
    { while (mysql_row = mysql_fetch_row (mysql_result))
    {
        sprintf (tmp, "%s\t%s\t%s\t%s", mysql_row[0],
        mysql_row[1], mysql_row[2], mysql_row[3]);
        wxString wx_string (tmp, wxConvUTF8);
        str += wx_string + "\n";
    }
        wxMessageDialog dlg (this, str);
    dlg.ShowModal ();
    }
    }
    }
    }
}

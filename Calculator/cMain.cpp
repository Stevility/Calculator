#include "cMain.h"

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Calculator!", wxPoint(500, 200), wxSize(400, 500))
{
	m_Txt1 = new wxTextCtrl(this, wxID_ANY, "0", wxPoint(10, 15), wxSize(350, 30),wxTE_RIGHT);
	m_Txt1->Disable();
	num1 = new wxButton(this, wxID_ANY, "1", wxPoint(10, 100), wxSize(60,60));
	num2 = new wxButton(this, wxID_ANY, "1", wxPoint(10, 100), wxSize(60,60));
	num3 = new wxButton(this, wxID_ANY, "1", wxPoint(10, 100), wxSize(60,60));
	num4 = new wxButton(this, wxID_ANY, "1", wxPoint(10, 100), wxSize(60,60));
	num5 = new wxButton(this, wxID_ANY, "1", wxPoint(10, 100), wxSize(60,60));
	num6 = new wxButton(this, wxID_ANY, "1", wxPoint(10, 100), wxSize(60,60));
	num7 = new wxButton(this, wxID_ANY, "1", wxPoint(10, 100), wxSize(60,60));
	num8 = new wxButton(this, wxID_ANY, "1", wxPoint(10, 100), wxSize(60,60));
	num9 = new wxButton(this, wxID_ANY, "1", wxPoint(10, 100), wxSize(60,60));
	num0 = new wxButton(this, wxID_ANY, "1", wxPoint(10, 100), wxSize(60,60));
}

cMain::~cMain()
{
}

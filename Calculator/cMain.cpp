#include "cMain.h"

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Calculator!", wxPoint(500, 200), wxSize(400, 500))
{
	m_Txt1 = new wxTextCtrl(this, wxID_ANY, "0", wxPoint(10, 15), wxSize(365, 70),wxTE_RIGHT);
	m_Txt1->Disable();
	num1 = new wxButton(this, wxID_ANY, "1", wxPoint(20,300), wxSize(80,80));
	num2 = new wxButton(this, wxID_ANY, "2", wxPoint(100,300), wxSize(80,80));
	num3 = new wxButton(this, wxID_ANY, "3", wxPoint(180,300), wxSize(80, 80));
	num4 = new wxButton(this, wxID_ANY, "4", wxPoint(20,220), wxSize(80, 80));
	num5 = new wxButton(this, wxID_ANY, "5", wxPoint(100,220), wxSize(80, 80));
	num6 = new wxButton(this, wxID_ANY, "6", wxPoint(180,220), wxSize(80, 80));
	num7 = new wxButton(this, wxID_ANY, "7", wxPoint(20,140), wxSize(80, 80));
	num8 = new wxButton(this, wxID_ANY, "8", wxPoint(100,140), wxSize(80, 80));
	num9 = new wxButton(this, wxID_ANY, "9", wxPoint(180,140), wxSize(80, 80));
	num0 = new wxButton(this, wxID_ANY, "0", wxPoint(20,380), wxSize(160, 65));


}

cMain::~cMain()
{
}

#include "cMain.h"

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Calculator!", wxPoint(500, 200), wxSize(355, 500))
{
	m_Txt1 = new wxTextCtrl(this, wxID_ANY, "0", wxPoint(10, 15), wxSize(320, 70),wxTE_RIGHT);
	m_Txt1->Disable();
	num1 = new wxButton(this, wxID_ANY, "1", wxPoint(10,300), wxSize(80,80));
	num2 = new wxButton(this, wxID_ANY, "2", wxPoint(90,300), wxSize(80,80));
	num3 = new wxButton(this, wxID_ANY, "3", wxPoint(170,300), wxSize(80, 80));
	num4 = new wxButton(this, wxID_ANY, "4", wxPoint(10,220), wxSize(80, 80));
	num5 = new wxButton(this, wxID_ANY, "5", wxPoint(90,220), wxSize(80, 80));
	num6 = new wxButton(this, wxID_ANY, "6", wxPoint(170,220), wxSize(80, 80));
	num7 = new wxButton(this, wxID_ANY, "7", wxPoint(10,140), wxSize(80, 80));
	num8 = new wxButton(this, wxID_ANY, "8", wxPoint(90,140), wxSize(80, 80));
	num9 = new wxButton(this, wxID_ANY, "9", wxPoint(170,140), wxSize(80, 80));
	num0 = new wxButton(this, wxID_ANY, "0", wxPoint(10,380), wxSize(160, 65));

	clearButton = new wxButton(this, wxID_ANY, "Clear", wxPoint(10, 90), wxSize(80, 50));
	negativeButton = new wxButton(this, wxID_ANY, "+/-", wxPoint(90, 90), wxSize(80, 50));
	decButton = new wxButton(this, wxID_ANY, "0.01", wxPoint(170, 90), wxSize(80, 50));
	equButton = new wxButton(this, wxID_ANY, "=", wxPoint(170, 380), wxSize(80, 65));
	modButton = new wxButton(this, wxID_ANY, "Mod", wxPoint(250, 350), wxSize(80, 30));
	hexButton = new wxButton(this, wxID_ANY, "Hex", wxPoint(250, 380), wxSize(80, 33));
	binButton = new wxButton(this, wxID_ANY, "Binary", wxPoint(250, 412), wxSize(80, 33));

	addButton = new wxButton(this, wxID_ANY, "+", wxPoint(250, 90), wxSize(80, 65));
	subButton = new wxButton(this, wxID_ANY, "-", wxPoint(250, 155), wxSize(80, 65));
	divButton = new wxButton(this, wxID_ANY, "/", wxPoint(250, 220), wxSize(80, 65));
	multButton = new wxButton(this, wxID_ANY, "X", wxPoint(250, 285), wxSize(80, 65));
}

cMain::~cMain()
{
}

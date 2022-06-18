#include "cMain.h"
#include "ButtonFactory.h"

wxBEGIN_EVENT_TABLE(cMain, wxFrame)
EVT_BUTTON(1, ButtonClick1)
EVT_BUTTON(2, ButtonClick2)
EVT_BUTTON(3, ButtonClick3)
EVT_BUTTON(4, ButtonClick4)
EVT_BUTTON(5, ButtonClick5)
EVT_BUTTON(6, ButtonClick6)
EVT_BUTTON(7, ButtonClick7)
EVT_BUTTON(8, ButtonClick8)
EVT_BUTTON(9, ButtonClick9)
EVT_BUTTON(0, ButtonClick0)


EVT_BUTTON(100, ButtonClickAdd)
EVT_BUTTON(200, ButtonClickSub)
EVT_BUTTON(300, ButtonClickMult)
EVT_BUTTON(400, ButtonClickDiv)


EVT_BUTTON(1000, ButtonClickClear)
wxEND_EVENT_TABLE()

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Calculator!", wxPoint(500, 200), wxSize(355, 500))
{
	m_Txt1 = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 15), wxSize(320, 70),wxTE_RIGHT);
	m_Txt1->Disable();
	num1 = new wxButton(this, 1, "1", wxPoint(10,300), wxSize(80,80));
	num2 = new wxButton(this, 2, "2", wxPoint(90,300), wxSize(80,80));
	num3 = new wxButton(this, 3, "3", wxPoint(170,300), wxSize(80, 80));
	num4 = new wxButton(this, 4, "4", wxPoint(10,220), wxSize(80, 80));
	num5 = new wxButton(this, 5, "5", wxPoint(90,220), wxSize(80, 80));
	num6 = new wxButton(this, 6, "6", wxPoint(170,220), wxSize(80, 80));
	num7 = new wxButton(this, 7, "7", wxPoint(10,140), wxSize(80, 80));
	num8 = new wxButton(this, 8, "8", wxPoint(90,140), wxSize(80, 80));
	num9 = new wxButton(this, 9, "9", wxPoint(170,140), wxSize(80, 80));
	num0 = new wxButton(this, 0, "0", wxPoint(10,380), wxSize(160, 65));

	clearButton = new wxButton(this, 1000, "Clear", wxPoint(10, 90), wxSize(80, 50));
	negativeButton = new wxButton(this, wxID_ANY, "+/-", wxPoint(90, 90), wxSize(80, 50));
	decButton = new wxButton(this, wxID_ANY, "0.01", wxPoint(170, 90), wxSize(80, 50));
	equButton = new wxButton(this, wxID_ANY, "=", wxPoint(170, 380), wxSize(80, 65));
	modButton = new wxButton(this, wxID_ANY, "Mod", wxPoint(250, 350), wxSize(80, 30));
	hexButton = new wxButton(this, wxID_ANY, "Hex", wxPoint(250, 380), wxSize(80, 33));
	binButton = new wxButton(this, wxID_ANY, "Binary", wxPoint(250, 412), wxSize(80, 33));

	addButton = new wxButton(this, 100, "+", wxPoint(250, 90), wxSize(80, 65));
	subButton = new wxButton(this, 200, "-", wxPoint(250, 155), wxSize(80, 65));
	divButton = new wxButton(this, 300, "/", wxPoint(250, 220), wxSize(80, 65));
	multButton = new wxButton(this, 400, "X", wxPoint(250, 285), wxSize(80, 65));
}

cMain::~cMain()
{
}

void cMain::ButtonClick1(wxCommandEvent& evt)
{
	m_Txt1->AppendText("1");
}

void cMain::ButtonClick2(wxCommandEvent& evt)
{
	m_Txt1->AppendText("2");
}

void cMain::ButtonClick3(wxCommandEvent& evt)
{
	m_Txt1->AppendText("3");
}

void cMain::ButtonClick4(wxCommandEvent& evt)
{
	m_Txt1->AppendText("4");
}

void cMain::ButtonClick5(wxCommandEvent& evt)
{
	m_Txt1->AppendText("5");
}

void cMain::ButtonClick6(wxCommandEvent& evt)
{
	m_Txt1->AppendText("6");
}

void cMain::ButtonClick7(wxCommandEvent& evt)
{
	m_Txt1->AppendText("7");
}

void cMain::ButtonClick8(wxCommandEvent& evt)
{
	m_Txt1->AppendText("8");
}

void cMain::ButtonClick9(wxCommandEvent& evt)
{
	m_Txt1->AppendText("9");
}

void cMain::ButtonClick0(wxCommandEvent& evt)
{
	m_Txt1->AppendText("0");
}

void cMain::ButtonClickAdd(wxCommandEvent& evt)
{
	m_Txt1->AppendText("+");
}

void cMain::ButtonClickSub(wxCommandEvent& evt)
{
	m_Txt1->AppendText("-");
}

void cMain::ButtonClickDiv(wxCommandEvent& evt)
{
	m_Txt1->AppendText("X");
}

void cMain::ButtonClickMult(wxCommandEvent& evt)
{
	m_Txt1->AppendText("/");
}

void cMain::ButtonClickEqual(wxCommandEvent& evt)
{
}

void cMain::ButtonClickClear(wxCommandEvent& evt)
{
	m_Txt1->Clear();
}

void cMain::ButtonClickMod(wxCommandEvent& evt)
{
}

void cMain::ButtonClickBin(wxCommandEvent& evt)
{
}

void cMain::ButtonClickHex(wxCommandEvent& evt)
{
}

void cMain::ButtonClickDec(wxCommandEvent& evt)
{
}

void cMain::ButtonClickNegative(wxCommandEvent& evt)
{
}

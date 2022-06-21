#pragma once
#include "wx/wx.h"
#include "CalculatorProcessor.h"

class cMain : public wxFrame
{
public:
	cMain();
	~cMain();

public:
	//buttons for numbers
	wxButton* num1 = nullptr;
	wxButton* num2 = nullptr;
	wxButton* num3 = nullptr;
	wxButton* num4 = nullptr;
	wxButton* num5 = nullptr;
	wxButton* num6 = nullptr;
	wxButton* num7 = nullptr;
	wxButton* num8 = nullptr;
	wxButton* num9 = nullptr;
	wxButton* num0 = nullptr;

	//Clicked number Event
	void ButtonClick1(wxCommandEvent& evt);
	void ButtonClick2(wxCommandEvent& evt);
	void ButtonClick3(wxCommandEvent& evt);
	void ButtonClick4(wxCommandEvent& evt);
	void ButtonClick5(wxCommandEvent& evt);
	void ButtonClick6(wxCommandEvent& evt);
	void ButtonClick7(wxCommandEvent& evt);
	void ButtonClick8(wxCommandEvent& evt);
	void ButtonClick9(wxCommandEvent& evt);
	void ButtonClick0(wxCommandEvent& evt);

	//Text Box
	wxTextCtrl* m_Txt1 = nullptr;

	//Buttons for other
	wxButton* addButton = nullptr;
	wxButton* subButton = nullptr;
	wxButton* multButton = nullptr;
	wxButton* divButton = nullptr;
	wxButton* equButton = nullptr;
	wxButton* clearButton = nullptr;
	wxButton* modButton = nullptr;
	wxButton* binButton = nullptr;
	wxButton* hexButton = nullptr;
	wxButton* decButton = nullptr;
	wxButton* negativeButton = nullptr;

	//Clicked other Event
	void ButtonClickAdd(wxCommandEvent& evt);
	void ButtonClickSub(wxCommandEvent& evt);
	void ButtonClickDiv(wxCommandEvent& evt);
	void ButtonClickMult(wxCommandEvent& evt);
	void ButtonClickEqual(wxCommandEvent& evt);
	void ButtonClickClear(wxCommandEvent& evt);
	void ButtonClickMod(wxCommandEvent& evt);
	void ButtonClickBin(wxCommandEvent& evt);
	void ButtonClickHex(wxCommandEvent& evt);
	void ButtonClickDec(wxCommandEvent& evt);
	void ButtonClickNegative(wxCommandEvent& evt);

	void CalcPros();
	void ShowTotal();

	double Total;
	double Last;
	int op;

	wxDECLARE_EVENT_TABLE();
};


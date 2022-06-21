#pragma once
#include "wx/wx.h"
#include "CalculatorProcessor.h"


class ButtonFactory;
class CalculatorProcessor;
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

	//Text Box
	wxTextCtrl* m_Txt1 = nullptr;

	bool Buttons = true;
	ButtonFactory* ActivateButtons;
	CalculatorProcessor* processor;
	std::vector<wxButton*> allButtons;
	void ButtonClicked(wxCommandEvent& evt);

	void CreateButtons();

	wxDECLARE_EVENT_TABLE();
};


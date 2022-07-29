#pragma once
#include "wx/wx.h"
#include "cMain.h"


class ButtonFactory
{

public:
	enum IDs
	{
		One,
		Two,
		Three,
		Four,
		Five,
		Six,
		Seven,
		Eight,
		Nine,
		Zero,

		Add,
		Sub,
		Mult,
		Div,

		Hex,
		Dec,
		Mod,
		Negative,
		Equal,
		Bin,
		Clear,

		Sin,
		Cos,
		Tan
	};

	std::vector<wxButton*> createAllButtons(wxWindow* Window);
	wxButton* createOneButton(wxWindow* Window);
	wxButton* createTwoButton(wxWindow* Window);
	wxButton* createThreeButton(wxWindow* Window);
	wxButton* createFourButton(wxWindow* Window);
	wxButton* createFiveButton(wxWindow* Window);
	wxButton* createSixButton(wxWindow* Window);
	wxButton* createSevenButton(wxWindow* Window);
	wxButton* createEightButton(wxWindow* Window);
	wxButton* createNineButton(wxWindow* Window);
	wxButton* createZeroButton(wxWindow* Window);

	wxButton* createAddButton(wxWindow* Window);
	wxButton* createSubButton(wxWindow* Window);
	wxButton* createMultButton(wxWindow* Window);
	wxButton* createDivButton(wxWindow* Window);

	wxButton* createHexButton(wxWindow* Window);
	wxButton* createDecButton(wxWindow* Window);
	wxButton* createModButton(wxWindow* Window);
	wxButton* createNegativeButton(wxWindow* Window);
	wxButton* createEqualButton(wxWindow* Window);
	wxButton* createBinButton(wxWindow* Window);
	wxButton* createClearButton(wxWindow* Window);
	wxButton* createSinButton(wxWindow* Window);
	wxButton* createCosButton(wxWindow* Window);
	wxButton* createTanButton(wxWindow* Window);

};
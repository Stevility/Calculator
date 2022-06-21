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
		Dec,
		Mod,
		Hex,
		Negative,
		Equal,
		Bin,
		Clear
	};

	std::vector<wxButton*> createAllButtons(wxWindow* Window){

		std::vector<wxButton*> Buttons;
		Buttons.push_back(createOneButton(Window));
		Buttons.push_back(createTwoButton(Window));
		Buttons.push_back(createThreeButton(Window));
		Buttons.push_back(createFourButton(Window));
		Buttons.push_back(createFiveButton(Window));
		Buttons.push_back(createSixButton(Window));
		Buttons.push_back(createSevenButton(Window));
		Buttons.push_back(createEightButton(Window));
		Buttons.push_back(createNineButton(Window));
		Buttons.push_back(createZeroButton(Window));
		Buttons.push_back(createAddButton(Window));
		Buttons.push_back(createSubButton(Window));
		Buttons.push_back(createMultButton(Window));
		Buttons.push_back(createDivButton(Window));
		Buttons.push_back(createHexButton(Window));
		Buttons.push_back(createDecButton(Window));
		Buttons.push_back(createNegativeButton(Window));
		Buttons.push_back(createModButton(Window));
		Buttons.push_back(createEqualButton(Window));
		Buttons.push_back(createBinButton(Window));
		return Buttons;
	}

	wxButton* createOneButton(wxWindow* Window)
	{
		wxButton* oneButton = new wxButton(Window, IDs::One, "1", wxPoint(10, 300), wxSize(80, 80));
		return oneButton;
	}

	wxButton* createTwoButton(wxWindow* Window)
	{
		wxButton* twoButton = new wxButton(Window, IDs::Two, "2", wxPoint(90, 300), wxSize(80, 80));
		return twoButton;
	}

	wxButton* createThreeButton(wxWindow* Window)
	{
		wxButton* threeButton = new wxButton(Window, IDs::Three, "3", wxPoint(170, 300), wxSize(80, 80));
		return threeButton;
	}

	wxButton* createFourButton(wxWindow* Window)
	{
		wxButton* fourButton = new wxButton(Window, IDs::Four, "4", wxPoint(10, 220), wxSize(80, 80));
		return fourButton;
	}

	wxButton* createFiveButton(wxWindow* Window)
	{
		wxButton* fiveButton = new wxButton(Window, IDs::Five, "5", wxPoint(90, 220), wxSize(80, 80));
		return fiveButton;
	}

	wxButton* createSixButton(wxWindow* Window)
	{
		wxButton* sixButton = new wxButton(Window, IDs::Six, "6", wxPoint(170, 220), wxSize(80, 80));
		return sixButton;
	}

	wxButton* createSevenButton(wxWindow* Window)
	{
		wxButton* sevenButton = new wxButton(Window, IDs::Seven, "7", wxPoint(10, 140), wxSize(80, 80));
		return sevenButton;
	}

	wxButton* createEightButton(wxWindow* Window)
	{
		wxButton* eightButton = new wxButton(Window, IDs::Eight, "8", wxPoint(90, 140), wxSize(80, 80));
		return eightButton;
	}

	wxButton* createNineButton(wxWindow* Window)
	{
		wxButton* nineButton = new wxButton(Window, IDs::Nine, "9", wxPoint(170, 140), wxSize(80, 80));
		return nineButton;
	}

	wxButton* createZeroButton(wxWindow* Window)
	{
		wxButton* zeroButton = new wxButton(Window, IDs::Zero, "0", wxPoint(10, 380), wxSize(160, 65));
		return zeroButton;
	}

	wxButton* createAddButton(wxWindow* Window)
	{
		wxButton* AddButton = new wxButton(Window, IDs::Add, " + ", wxPoint(250, 90), wxSize(80, 65));
		return AddButton;
	}

	wxButton* createSubButton(wxWindow* Window)
	{
		wxButton* SubButton = new wxButton(Window, IDs::Sub, " - ", wxPoint(250, 155), wxSize(80, 65));
		return SubButton;
	}

	wxButton* createMultButton(wxWindow* Window)
	{
		wxButton* MultButton = new wxButton(Window, IDs::Mult, " * ", wxPoint(250, 220), wxSize(80, 65));
		return MultButton;
	}

	wxButton* createDivButton(wxWindow* Window)
	{
		wxButton* DivButton = new wxButton(Window, IDs::Div, " / ", wxPoint(250, 285), wxSize(80, 65));
		return DivButton;
	}

	wxButton* createClearButton(wxWindow* Window)
	{
		wxButton* clearButton = new wxButton(Window, IDs::Clear, "Clear", wxPoint(10, 90), wxSize(80, 50));
		return clearButton;
	}

	wxButton* createEqualButton(wxWindow* Window)
	{
		wxButton* equalButton = new wxButton(Window, IDs::Equal, "=", wxPoint(170, 380), wxSize(80, 65));
		return equalButton;
	}

	wxButton* createModButton(wxWindow* Window)
	{
		wxButton* modButton = new wxButton(Window, IDs::Mod, " % ", wxPoint(250, 350), wxSize(80, 30));
		return modButton;
	}

	wxButton* createBinButton(wxWindow* Window)
	{
		wxButton* binButton = new wxButton(Window, IDs::Bin, "Binary", wxPoint(250, 412), wxSize(80, 33));
		return binButton;
	}

	wxButton* createHexButton(wxWindow* Window)
	{
		wxButton* hexButton = new wxButton(Window, IDs::Hex, "Hex", wxPoint(250, 380), wxSize(80, 33));
		return hexButton;
	}

	wxButton* createDecButton(wxWindow* Window)
	{
		wxButton* decButton = new wxButton(Window, IDs::Dec, "0.01", wxPoint(170, 90), wxSize(80, 50));
		return decButton;
	}

	wxButton* createNegativeButton(wxWindow* Window)
	{
		wxButton* negativeButton = new wxButton(Window, IDs::Negative, "+/-", wxPoint(90, 90), wxSize(80, 50));
		return negativeButton;
	}

};
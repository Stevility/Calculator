#include "ButtonFactory.h"

wxBEGIN_EVENT_TABLE(cMain, wxFrame)
EVT_BUTTON(ButtonFactory::IDs::One, ButtonClicked)
EVT_BUTTON(ButtonFactory::IDs::Two, ButtonClicked)
EVT_BUTTON(ButtonFactory::IDs::Three, ButtonClicked)
EVT_BUTTON(ButtonFactory::IDs::Four, ButtonClicked)
EVT_BUTTON(ButtonFactory::IDs::Five, ButtonClicked)
EVT_BUTTON(ButtonFactory::IDs::Six, ButtonClicked)
EVT_BUTTON(ButtonFactory::IDs::Seven, ButtonClicked)
EVT_BUTTON(ButtonFactory::IDs::Eight, ButtonClicked)
EVT_BUTTON(ButtonFactory::IDs::Nine, ButtonClicked)
EVT_BUTTON(ButtonFactory::IDs::Zero, ButtonClicked)


EVT_BUTTON(ButtonFactory::IDs::Add, ButtonClicked)
EVT_BUTTON(ButtonFactory::IDs::Sub, ButtonClicked)
EVT_BUTTON(ButtonFactory::IDs::Mult, ButtonClicked)
EVT_BUTTON(ButtonFactory::IDs::Div, ButtonClicked)

EVT_BUTTON(ButtonFactory::IDs::Hex, ButtonClicked)
EVT_BUTTON(ButtonFactory::IDs::Dec, ButtonClicked)
EVT_BUTTON(ButtonFactory::IDs::Mod, ButtonClicked)
EVT_BUTTON(ButtonFactory::IDs::Negative, ButtonClicked)
EVT_BUTTON(ButtonFactory::IDs::Equal, ButtonClicked)
EVT_BUTTON(ButtonFactory::IDs::Bin, ButtonClicked)
EVT_BUTTON(ButtonFactory::IDs::Clear, ButtonClicked)

EVT_BUTTON(ButtonFactory::IDs::Sin, ButtonClicked)
EVT_BUTTON(ButtonFactory::IDs::Cos, ButtonClicked)
EVT_BUTTON(ButtonFactory::IDs::Tan, ButtonClicked)
wxEND_EVENT_TABLE()

std::vector<wxButton*> ButtonFactory::createAllButtons(wxWindow* Window)
{
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
	Buttons.push_back(createClearButton(Window));
	Buttons.push_back(createSinButton(Window));
	Buttons.push_back(createCosButton(Window));
	Buttons.push_back(createTanButton(Window));
	return Buttons;
}


wxButton* ButtonFactory::createOneButton(wxWindow* Window)
{
	wxButton* oneButton = new wxButton(Window, IDs::One, "1", wxPoint(10, 300), wxSize(80, 80));
	return oneButton;
}

wxButton* ButtonFactory::createTwoButton(wxWindow* Window)
{
	wxButton* twoButton = new wxButton(Window, IDs::Two, "2", wxPoint(90, 300), wxSize(80, 80));
	return twoButton;
}

wxButton* ButtonFactory::createThreeButton(wxWindow* Window)
{
	wxButton* threeButton = new wxButton(Window, IDs::Three, "3", wxPoint(170, 300), wxSize(80, 80));
	return threeButton;
}

wxButton* ButtonFactory::createFourButton(wxWindow* Window)
{
	wxButton* fourButton = new wxButton(Window, IDs::Four, "4", wxPoint(10, 220), wxSize(80, 80));
	return fourButton;
}

wxButton* ButtonFactory::createFiveButton(wxWindow* Window)
{
	wxButton* fiveButton = new wxButton(Window, IDs::Five, "5", wxPoint(90, 220), wxSize(80, 80));
	return fiveButton;
}

wxButton* ButtonFactory::createSixButton(wxWindow* Window)
{
	wxButton* sixButton = new wxButton(Window, IDs::Six, "6", wxPoint(170, 220), wxSize(80, 80));
	return sixButton;
}

wxButton* ButtonFactory::createSevenButton(wxWindow* Window)
{
	wxButton* sevenButton = new wxButton(Window, IDs::Seven, "7", wxPoint(10, 140), wxSize(80, 80));
	return sevenButton;
}

wxButton* ButtonFactory::createEightButton(wxWindow* Window)
{
	wxButton* eightButton = new wxButton(Window, IDs::Eight, "8", wxPoint(90, 140), wxSize(80, 80));
	return eightButton;
}

wxButton* ButtonFactory::createNineButton(wxWindow* Window)
{
	wxButton* nineButton = new wxButton(Window, IDs::Nine, "9", wxPoint(170, 140), wxSize(80, 80));
	return nineButton;
}

wxButton* ButtonFactory::createZeroButton(wxWindow* Window)
{
	wxButton* zeroButton = new wxButton(Window, IDs::Zero, "0", wxPoint(10, 380), wxSize(160, 65));
	return zeroButton;
}

wxButton* ButtonFactory::createAddButton(wxWindow* Window)
{
	wxButton* AddButton = new wxButton(Window, IDs::Add, " + ", wxPoint(250, 90), wxSize(80, 65));
	AddButton->SetLabel(" + ");
	return AddButton;
}

wxButton* ButtonFactory::createSubButton(wxWindow* Window)
{
	wxButton* SubButton = new wxButton(Window, IDs::Sub, " - ", wxPoint(250, 155), wxSize(80, 65));
	SubButton->SetLabel(" - ");
	return SubButton;
}

wxButton* ButtonFactory::createMultButton(wxWindow* Window)
{
	wxButton* MultButton = new wxButton(Window, IDs::Mult, " * ", wxPoint(250, 220), wxSize(80, 65));
	MultButton->SetLabel(" * ");
	return MultButton;
}

wxButton* ButtonFactory::createDivButton(wxWindow* Window)
{
	wxButton* DivButton = new wxButton(Window, IDs::Div, " / ", wxPoint(250, 285), wxSize(80, 65));
	DivButton->SetLabel("/");
	return DivButton;
}

wxButton* ButtonFactory::createClearButton(wxWindow* Window)
{
	wxButton* clearButton = new wxButton(Window, IDs::Clear, "Clear", wxPoint(10, 90), wxSize(80, 50));
	clearButton->SetLabel("Clear");
	return clearButton;
}

wxButton* ButtonFactory::createEqualButton(wxWindow* Window)
{
	wxButton* equalButton = new wxButton(Window, IDs::Equal, "=", wxPoint(170, 380), wxSize(80, 65));
	equalButton->SetLabel("=");
	return equalButton;
}

wxButton* ButtonFactory::createModButton(wxWindow* Window)
{
	wxButton* modButton = new wxButton(Window, IDs::Mod, "%", wxPoint(250, 350), wxSize(80, 30));
	modButton->SetLabel(" % ");
	return modButton;
}

wxButton* ButtonFactory::createBinButton(wxWindow* Window)
{
	wxButton* binButton = new wxButton(Window, IDs::Bin, "Binary", wxPoint(250, 412), wxSize(80, 33));
	binButton->SetLabel("Binary");
	return binButton;
}

wxButton* ButtonFactory::createHexButton(wxWindow* Window)
{
	wxButton* hexButton = new wxButton(Window, IDs::Hex, "Hex", wxPoint(250, 380), wxSize(80, 33));
	hexButton->SetLabel("Hex");
	return hexButton;
}


wxButton* ButtonFactory::createDecButton(wxWindow* Window)
{
	wxButton* decButton = new wxButton(Window, IDs::Dec, "0.01", wxPoint(170, 90), wxSize(80, 50));
	decButton->SetLabel("0.01");
	return decButton;
}


wxButton* ButtonFactory::createNegativeButton(wxWindow* Window)
{
	wxButton* negativeButton = new wxButton(Window, IDs::Negative, " +/- ", wxPoint(90, 90), wxSize(80, 50));
	negativeButton->SetLabel(" +/- ");
	return negativeButton;
}

wxButton* ButtonFactory::createSinButton(wxWindow* Window)
{
	wxButton* SinButton = new wxButton(Window, IDs::Sin, "Sine", wxPoint(10, 445), wxSize(80, 60));
	SinButton->SetLabel("Sine");
	return SinButton;
}

wxButton* ButtonFactory::createCosButton(wxWindow* Window)
{
	wxButton* CosButton = new wxButton(Window, IDs::Cos, "Cosine", wxPoint(90, 445), wxSize(80, 60));
	CosButton->SetLabel("Cosine");
	return CosButton;
}

wxButton* ButtonFactory::createTanButton(wxWindow* Window)
{
	wxButton* TanButton = new wxButton(Window, IDs::Tan, "Tan", wxPoint(170, 445), wxSize(80, 60));
	TanButton->SetLabel("Tan");
	return TanButton;
}
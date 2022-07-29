#include "cMain.h"
#include "ButtonFactory.h"
#include "CalculatorProcessor.h"

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Calculator!", wxPoint(500, 200), wxSize(355, 550))
{
	processor = CalculatorProcessor::GetInstance();
	m_Txt1 = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 15), wxSize(320, 70), wxTE_RIGHT);
	m_Txt1->Disable();
	ActivateButtons = new ButtonFactory();
	wxButton* clearButton = ActivateButtons->createClearButton(this);

	allButtons = ActivateButtons->createAllButtons(this);
}

cMain::~cMain()
{
	delete processor;
	delete ActivateButtons;
}


void cMain::CreateButtons()
{
	if (Buttons)
	{
		allButtons[ButtonFactory::IDs::Add]->Enable();
		allButtons[ButtonFactory::IDs::Sub]->Enable();
		allButtons[ButtonFactory::IDs::Mult]->Enable();
		allButtons[ButtonFactory::IDs::Div]->Enable();
		allButtons[ButtonFactory::IDs::Mod]->Enable();
	}
}

void cMain::ButtonClicked(wxCommandEvent& evt)
{
	int id = evt.GetId();
	if (processor->answer == "Can't divide by zero")
	{
		m_Txt1->Clear();
		Buttons = true;
		CreateButtons();
		processor->answer = "";
	}
	if (id == ButtonFactory::IDs::Clear)
	{
		m_Txt1->Clear();
		Buttons = true;
		CreateButtons();
		processor->answer = "";
	}

	else if (id == ButtonFactory::IDs::Equal)
	{
		*m_Txt1 << processor->Equal(this);
		Buttons = true;
		CreateButtons();

	}
	else if (id != ButtonFactory::IDs::Hex && id != ButtonFactory::IDs::Bin && id != ButtonFactory::IDs::Dec && id != ButtonFactory::IDs::Negative && id != ButtonFactory::IDs::Sin && id != ButtonFactory::IDs::Cos && id != ButtonFactory::IDs::Tan)
	{
		*m_Txt1 << allButtons[id]->GetLabel();
		if (id == ButtonFactory::IDs::Add || id == ButtonFactory::IDs::Sub || id == ButtonFactory::IDs::Mult || id == ButtonFactory::IDs::Div || id == ButtonFactory::IDs::Mod)
		{
			Buttons = false;
			CreateButtons();
		}
	}
	else if (id == ButtonFactory::IDs::Hex)
	{
		processor->GetHexadecimal(this);
	}
	else if (id == ButtonFactory::IDs::Bin)
	{
		processor->GetBinary(this);
	}
	else if (id == ButtonFactory::IDs::Dec)
	{
		processor->GetDecimal(this);
	}
	else if (id == ButtonFactory::IDs::Negative)
	{
		*m_Txt1 << allButtons[id]->GetLabel();
		processor->Negative(this);
	}
	else if (id == ButtonFactory::IDs::Sin)
	{
		processor->GetSin(this);
	}
	else if (id == ButtonFactory::IDs::Cos)
	{
		processor->GetCos(this);
	}
	else if (id == ButtonFactory::IDs::Tan)
	{
		processor->GetTan(this);
	}
}
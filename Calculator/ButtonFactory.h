#pragma once
#include "wx/wx.h"
#include "cMain.h"

class ButtonFactory : public cMain
{

public:

	wxButton* CreateAddButton()
	{
		addButton = new wxButton(this, 100, "+", wxPoint(250, 90), wxSize(80, 65));
		return addButton;
	}

	void CreateSubButton()
	{
		subButton = new wxButton(this, 200, "-", wxPoint(250, 155), wxSize(80, 65));
	}

	void CreateMultButton()
	{
		multButton = new wxButton(this, 400, "X", wxPoint(250, 285), wxSize(80, 65));
	}

	void CreateDivButton()
	{
		divButton = new wxButton(this, 300, "/", wxPoint(250, 220), wxSize(80, 65));
	}

	void CreateEqualButton()
	{
		equButton = new wxButton(this, wxID_ANY, "=", wxPoint(170, 380), wxSize(80, 65));
	}
	void CreateClearButton()
	{
		clearButton = new wxButton(this, 1000, "Clear", wxPoint(10, 90), wxSize(80, 50));
	}
	void CreateModButton()
	{
		modButton = new wxButton(this, wxID_ANY, "Mod", wxPoint(250, 350), wxSize(80, 30));
	}
	void CreateBin()
	{
		binButton = new wxButton(this, wxID_ANY, "Binary", wxPoint(250, 412), wxSize(80, 33));
	}
	void CreateHexButton()
	{
		hexButton = new wxButton(this, wxID_ANY, "Hex", wxPoint(250, 380), wxSize(80, 33));

	}
	void CreateDec()
	{
		decButton = new wxButton(this, wxID_ANY, "0.01", wxPoint(170, 90), wxSize(80, 50));

	}
	void CreateNegativeButton()
	{
		negativeButton = new wxButton(this, wxID_ANY, "+/-", wxPoint(90, 90), wxSize(80, 50));
	}

};
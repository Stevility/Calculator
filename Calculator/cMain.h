#pragma once
#include "wx/wx.h"

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
	
};


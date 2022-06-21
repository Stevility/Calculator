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

EVT_BUTTON(ButtonFactory::IDs::Mod, ButtonClicked)
EVT_BUTTON(ButtonFactory::IDs::Clear, ButtonClicked)
EVT_BUTTON(ButtonFactory::IDs::Equal, ButtonClicked)
EVT_BUTTON(ButtonFactory::IDs::Hex, ButtonClicked)
EVT_BUTTON(ButtonFactory::IDs::Bin, ButtonClicked)
EVT_BUTTON(ButtonFactory::IDs::Dec, ButtonClicked)
EVT_BUTTON(ButtonFactory::IDs::Negative, ButtonClicked)
wxEND_EVENT_TABLE()

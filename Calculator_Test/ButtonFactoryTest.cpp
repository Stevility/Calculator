#include "CppUnitTest.h"
#include "../Calculator/ButtonFactory.h"
#include "wx/wx.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalculatorTest
{
	TEST_CLASS(ButtonFactoryTest)
	{
	public:

		wxFrame* frame = new wxFrame();
		ButtonFactory* Buttons = new ButtonFactory();

		TEST_METHOD(BinaryButtonisBinary)
		{
			wxButton* binaryButton = Buttons->createBinButton(frame);
			Assert::AreEqual("Binary", binaryButton->GetLabel());
		}
		TEST_METHOD(HexButtonisHex)
		{
			wxButton* HexButton = Buttons->createHexButton(frame);
			Assert::AreEqual("Hex", HexButton->GetLabel());
		}
		TEST_METHOD(DecimalButtonisDec)
		{
			wxButton* DecButton = Buttons->createDecButton(frame);
			Assert::AreEqual("0.01", DecButton->GetLabel());
		}
		TEST_METHOD(NegativeButtonisplusandmimus)
		{
			wxButton* NegButton = Buttons->createNegativeButton(frame);
			Assert::AreEqual("+/-", NegButton->GetLabel());
		}
		TEST_METHOD(ModulusButonisMod)
		{
			wxButton* ModButton = Buttons->createModButton(frame);
			Assert::AreEqual("%", ModButton->GetLabel());
		}
		TEST_METHOD(AddButtonisPlussymbol)
		{
			wxButton* PlusButton = Buttons->createAddButton(frame);
			Assert::AreEqual(" + ", PlusButton->GetLabel());
		}
		TEST_METHOD(SubButtonisSubsymbol)
		{
			wxButton* SubButton = Buttons->createSubButton(frame);
			Assert::AreEqual(" - ", SubButton->GetLabel());
		}
		TEST_METHOD(MultButtonisMultsymbol)
		{
			wxButton* multButton = Buttons->createMultButton(frame);
			Assert::AreEqual(" * ", multButton->GetLabel());
		}
		TEST_METHOD(DivButtonisDivsymbol)
		{
			wxButton* divButton = Buttons->createDivButton(frame);
			Assert::AreEqual(" / ", divButton->GetLabel());
		}
		TEST_METHOD(ClearButtonisClear)
		{
			wxButton* clearButton = Buttons->createClearButton(frame);
			Assert::AreEqual("Clear", clearButton->GetLabel());
		}
	};
}

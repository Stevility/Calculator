#include "CppUnitTest.h"
#include "../Calculator/CalculatorProcessor.h"
#include "wx/wx.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalculatorTest
{
	TEST_CLASS(CalculatorProcessorTests)
	{
	public:
		CalculatorProcessor* processor = CalculatorProcessor::GetInstance();
		cMain* Main = new cMain();

		TEST_METHOD(nineplusnineequals18)
		{
			Main->m_Txt1->SetValue("9 + 9");
			processor->Equal(Main);
			Assert::AreEqual(processor->answer, std::string("18"));
		}
		TEST_METHOD(zerotimeszerowillalwaysbezero)
		{
			Main->m_Txt1->SetValue("0 * 0");
			processor->Equal(Main);
			Assert::AreEqual(processor->answer, std::string("0"));
		}
		TEST_METHOD(negative5timesnegative5is25)
		{
			Main->m_Txt1->SetValue("5 * 5");
			processor->Equal(Main);
			Assert::AreEqual(processor->answer, std::string("25"));
		}
		TEST_METHOD(sevendividedbysevenwillbeone)
		{
			Main->m_Txt1->SetValue("7 + 7");
			processor->Equal(Main);
			Assert::AreEqual(processor->answer, std::string("1"));
		}
		TEST_METHOD(ninehexwillbe0x9)
		{
			processor->answer = "0x9";
			processor->GetHexadecimal(Main);
			Assert::AreEqual(Main->m_Txt1->GetValue(), "0x9");
		}
		TEST_METHOD(number89inbinaryis1011001)
		{
			Main->m_Txt1->SetValue("89");
			processor->Equal(Main);
			Assert::AreEqual(processor->answer, std::string("1011001"));
		}
		TEST_METHOD(eighttimes8willbe64)
		{
			Main->m_Txt1->SetValue("8 * 8");
			processor->Equal(Main);
			Assert::AreEqual(processor->answer, std::string("64"));
		}
		TEST_METHOD(oneminusonewillbenegative1)
		{
			Main->m_Txt1->SetValue("1 - 1");
			processor->Equal(Main);
			Assert::AreEqual(processor->answer, std::string("-1"));
		}
		TEST_METHOD(ninedividedby3willbe3)
		{
			Main->m_Txt1->SetValue("9 / 3");
			processor->Equal(Main);
			Assert::AreEqual(processor->answer, std::string("3"));
		}
		TEST_METHOD(sixtimessixwillbe36)
		{
			Main->m_Txt1->SetValue("6 * 6");
			processor->Equal(Main);
			Assert::AreEqual(processor->answer, std::string("36"));
		}
	};
}

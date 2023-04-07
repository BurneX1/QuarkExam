#include <iostream>
#include <string>
#include <cmath>

using namespace std;


	class MyOutput {
		char sep = '-';
		int sepLng = 20;

	public:
		MyOutput();
		void Separator();
		void SystemMessage(string);
		void SetSeparatorSymbol(char symb);

	};

	inline MyOutput::MyOutput()
	{
		//cout << "[System Message: " << "]\n";
	}
	inline void MyOutput::Separator()
	{

		cout << " \n";
		for (int i = 0; i < abs(sepLng); i++)
		{
			cout << sep;
		}
		cout << " \n";


	}

	inline void MyOutput::SetSeparatorSymbol(char symb)
	{
		
	}

	inline void MyOutput::SystemMessage(string msg)
	{
		//Separator();
		cout << "\n" << "[System Message: " << msg << "]" << "\n";
		//Separator();
	}
	



	/*int main()
	{
		Output otp;
		otp.SystemMessage("This a test emessage");
		otp.SystemMessage("This a test emessage 2");
		otp.SystemMessage("This a test emessage 3");
	}*/


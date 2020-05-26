#include <iostream>
#include "MyBigNumber.h"
using namespace std;

int main()
{
	BigNumber big1 = "153";
	BigNumber big2 = "124";
	BigNumber big3 = "1554612";
	BigNumber big4 = "-115456";
	cout << "Testing Assignment:" << endl;
	big2 = big1;
	cout << big2 << endl;
	cout << "Testing Subtraction:" << endl;
	cout << big3 - big4 << endl;
	cout << "Testing ++ and -- " << endl;
	cout << big3-- << endl;
	cout << big3 << endl;
	cout << ++big4 << endl;
	MyBigNumber big5 = "999";
	cout << "Testing multByOneDigit" << endl;
	cout << big5.multByOneDigit(9) << endl;
	cout << " Testing <<" << endl;
	cout << (big5 << 6) << endl;
}

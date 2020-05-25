#include <iostream>
#include "BigNumber.h"

using namespace std;

int main()
{
	cout << boolalpha;
	BigNumber x = 99;
	string str = "100";
	BigNumber y(str);
	cout << (x < y);
}

#include <iostream>
#include "BigNumber.h"

using namespace std;

int main()
{
	cout << boolalpha;
	BigNumber x = -80;
	string str = "2228234";
	BigNumber y(str);
	cout << (y>>5);
}

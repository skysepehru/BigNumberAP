#include <iostream>
#include "BigNumber.h"

using namespace std;

int main()
{
	cout << boolalpha;
	BigNumber x = -80;
	string str = "80";
	BigNumber y(str);
	cout << BigNumber::unsignedAdd(x,y);
}

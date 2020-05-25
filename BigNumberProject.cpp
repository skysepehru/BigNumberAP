#include <iostream>
#include "BigNumber.h"

using namespace std;

int main()
{
	BigNumber x = -200;
	string str = "-00000000004753984795874";
	BigNumber y(str);
	cout << x << endl;
}

#include <iostream>
#include "BigNumber.h"

using namespace std;

int main()
{
	BigNumber x = -200;
	string str = "-000000004753984795874";
	BigNumber y(str);
	cout << y << endl;
	//x = y;
	//cout << x<<endl;
}

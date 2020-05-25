#include <iostream>
#include "BigNumber.h"

using namespace std;

int main()
{
	cout << boolalpha;
	BigNumber x = 200;
	string str = "-100";
	BigNumber y(str);
	cout <<( y!=x) << endl;
	BigNumber c = -y;
	cout << c<<endl;
	cout << BigNumber::unsignedMin(x, y);
}

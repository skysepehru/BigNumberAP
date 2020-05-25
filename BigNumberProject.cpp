#include <iostream>
#include "BigNumber.h"

using namespace std;

int main()
{
	cout << boolalpha;
	BigNumber x = -200;
	string str = "-00000000";
	BigNumber y(str);
	cout << y << endl;
	cin >> x;
	//x = y;
	cout << x<<endl;
}

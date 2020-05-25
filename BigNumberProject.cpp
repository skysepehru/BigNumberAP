#include <iostream>
#include "BigNumber.h"

using namespace std;

int main()
{
	cout << boolalpha;
	BigNumber x = 200;
	string str = "200";
	BigNumber y(str);
	cout <<( y!=x) << endl;
	
	cout << y<<endl;
}

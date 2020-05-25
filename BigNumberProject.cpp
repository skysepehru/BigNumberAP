#include <iostream>
#include "MyBigNumber.h"
using namespace std;

int main()
{
	MyBigNumber big1{ 1253 };
	MyBigNumber big2{ 5534 };
	cout << big1.toString() << endl;
	cout << endl << big2.toString(3);
}

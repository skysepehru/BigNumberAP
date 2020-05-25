#pragma once
#include "BigNumber.h"

class MyBigNumber : public BigNumber
{
private:
	MyBigNumber();
public:
	MyBigNumber(const std::string& str);
	MyBigNumber(const char* myCharArray);
	MyBigNumber(const long& intNum);
	MyBigNumber& operator=(const MyBigNumber& myBigNumber);
	//copyconstructor
	//moveconstructor
	//moveassignment operator overloading
	std::string toString() const;
	std::string toString(int numOfHello) const;
};


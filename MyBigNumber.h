#pragma once
#include "BigNumber.h"

class MyBigNumber : public BigNumber
{
private:
	MyBigNumber() {}
public:

	MyBigNumber multByOneDigit(const int8_t& multiplier) const;


	MyBigNumber(const std::string& str);
	MyBigNumber(const char* myCharArray);
	MyBigNumber(const long& intNum);
	MyBigNumber(const MyBigNumber& myBig);
	MyBigNumber(MyBigNumber&& myBig) noexcept;
	MyBigNumber& operator=(const MyBigNumber& myBigNumber);
	BigNumber& operator=(MyBigNumber&& rightNum) noexcept;
	std::string toString() const;
	std::string toString(int numOfHello) const;
};


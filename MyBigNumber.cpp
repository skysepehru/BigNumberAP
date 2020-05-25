#include "MyBigNumber.h"
#include <sstream>

MyBigNumber::MyBigNumber(const std::string& str) :BigNumber(str){}
MyBigNumber::MyBigNumber(const char* myCharArray) :BigNumber(myCharArray){}
MyBigNumber::MyBigNumber(const long& intNum):BigNumber(intNum){}

MyBigNumber& MyBigNumber::operator=(const MyBigNumber& myBigNumber)
{
	if (&myBigNumber != this) {
		sign = myBigNumber.sign;
		numOfDigits = myBigNumber.numOfDigits;
		delete[] numArray;
		numArray = new int8_t(numOfDigits);
		for (size_t i = 0; i < numOfDigits; i++)
		{
			(*this)[i] = myBigNumber[i];
		}
	}
	return *this;
}

std::string MyBigNumber::toString() const
{
	std::ostringstream output;
	output << "i am different"<<std::endl;
	output << BigNumber::toString();
	return output.str();
}

std::string MyBigNumber::toString(int numOfHello) const
{
	std::ostringstream output;
	for (size_t i = 0; i < numOfHello; i++)
	{
		output << "Hello" << std::endl;
	}
	output << BigNumber::toString();
	return output.str();
}


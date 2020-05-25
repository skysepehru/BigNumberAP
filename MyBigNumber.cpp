#include "MyBigNumber.h"
#include <sstream>

MyBigNumber MyBigNumber::multByOneDigit(const int8_t& multiplier) const
{
	int8_t carry = 0;
	MyBigNumber sum;
	sum.sign = true;
	if (multiplier == 0)
	{
		sum.numOfDigits = 1;
		sum.numArray = new int8_t[1]{ 0 };
		return sum;
	}
	sum.numOfDigits = numOfDigits + 1;
	sum.numArray = new int8_t[numOfDigits + 1];
	int8_t temp;
	for (size_t i = 0; i < numOfDigits; i++)
	{
		temp = multiplier * (*this)[i];
		sum[i] = (temp + carry) % 10;
		carry = temp / 10;
	}
	if (carry != 0)
		sum[sum.numOfDigits - 1] = carry;
	else
		sum.numOfDigits--;
	return sum;
}

MyBigNumber::MyBigNumber(const std::string & str) :BigNumber(str) {}
MyBigNumber::MyBigNumber(const char* myCharArray) : BigNumber(myCharArray) {}
MyBigNumber::MyBigNumber(const long& intNum) : BigNumber(intNum) {}
MyBigNumber::MyBigNumber(const MyBigNumber & myBig) : BigNumber(myBig) {}
MyBigNumber::MyBigNumber(MyBigNumber && myBig) noexcept :BigNumber(myBig) {}

MyBigNumber& MyBigNumber::operator=(const MyBigNumber & myBigNumber)
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

MyBigNumber& MyBigNumber::operator=(MyBigNumber && myBigNumber) noexcept
{
	if (&myBigNumber != this)
	{
		sign = myBigNumber.sign;
		numOfDigits = myBigNumber.numOfDigits;
		delete[] numArray;
		numArray = myBigNumber.numArray;
		myBigNumber.numArray = nullptr;
	}
	return *this;
}


std::string MyBigNumber::toString() const
{
	std::ostringstream output;
	output << "i am different" << std::endl;
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

MyBigNumber MyBigNumber::operator<<(unsigned shift) const
{
	MyBigNumber myBig;
	myBig.sign = sign;
	myBig.numOfDigits = numOfDigits + shift;
	myBig.numArray = new int8_t[numOfDigits + shift];
	for (int i = numOfDigits + shift - 1; i > shift - 1; i--)
	{
		myBig[i] = (*this)[i - shift];
	}
	for (size_t i = 0; i < shift; i++)
	{
		myBig[i] = 0;
	}
	return myBig;
}


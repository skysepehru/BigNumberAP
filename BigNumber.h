#pragma once
#include <cstdint>
#include <string>
#include <regex>

class BigNumber
{
	friend std::ostream& operator<<(std::ostream& output, const BigNumber& myBig);
	friend std::istream& operator>>(std::istream& input, BigNumber& myBig);
private:
	bool sign;
	int8_t* numArray = nullptr;
	unsigned numOfDigits;
	BigNumber() {}
	bool validate(const std::string& str, const std::string& pattern);
	unsigned numOfTrimCharsOnLeft(const std::string& str);
	int8_t& operator[](size_t index);
	

public:

	static BigNumber unsignedMax(const BigNumber& num1, const BigNumber& num2);
	static BigNumber unsignedMin(const BigNumber& num1, const BigNumber& num2);
	static bool unsignedGreaterOrEqual(const BigNumber& num1, const BigNumber& num2);
	static bool unsignedLessrOrEqual(const BigNumber& num1, const BigNumber& num2);
	static BigNumber unsignedAdd(const BigNumber& num1, const BigNumber& num2);
	static BigNumber unsignedSubtract(const BigNumber& num1, const BigNumber& num2);

	BigNumber(const std::string& str);
	BigNumber(const char* myCharArray): BigNumber((std::string)myCharArray){}
	BigNumber(const long& intNum);
	BigNumber(const BigNumber& myBig);
	BigNumber(BigNumber&& myBig) noexcept;
	~BigNumber();
	void setValues(const std::string& str);
	unsigned int getNumOfDigits() const;
	bool getSign()const;
	BigNumber& operator=(const BigNumber& rightNum);
	BigNumber& operator=(BigNumber&& rightNum) noexcept;
	BigNumber operator-() const;
	int operator[](size_t index) const;
	bool operator==(const BigNumber&) const;
	bool operator!=(const BigNumber&) const;
	bool operator>=(const BigNumber&) const;
	bool operator<=(const BigNumber&) const;
	bool operator>(const BigNumber&) const;
	bool operator<(const BigNumber&) const;
	BigNumber absolouteValue() const;
};


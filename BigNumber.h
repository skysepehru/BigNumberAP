#pragma once
#include <cstdint>
#include <string>
#include <regex>

class BigNumber
{
	friend std::ostream& operator<<(std::ostream& output, const BigNumber& myBig);
private:
	bool sign;
	int8_t* numArray = nullptr;
	unsigned numOfDigits;

	bool validate(const std::string& str, const std::string& pattern);
	unsigned numOfTrimCharsOnLeft(const std::string& str);

public:
	BigNumber(const std::string& str);
	BigNumber(const long& intNum);
	BigNumber(BigNumber& myBig);
	~BigNumber();
	void setValues(const std::string& str);
	unsigned int getNumOfDigits() const;
	bool getSign()const;
};


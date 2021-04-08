#include "Convert.hpp"

Convert::Convert(void)
{
}

Convert::Convert(const std::string& str)
	: mType(0)
{
	setType(str);
}

Convert::Convert(const Convert& other)
{
	*this = other;
}

Convert::~Convert(void)
{
}

Convert&		Convert::operator=(const Convert& other)
{
	mType = other.mType;
	return (*this);
}

const int&		Convert::GetType(void) const
{
	return (mType);
}

void			Convert::setType(const std::string& str)
{
	std::string		pseudoLiterals[8] = {"inff", "-inff", "+inff", "nanf", "inf", "-inf", "+inf", "nan"};

	for (int i = 0; i < 4; i++)
	{
		if (str.compare(pseudoLiterals[i]) == 0)
		{
			mType = FLOAT;
			return ;
		}
	}
	for (int i = 4; i < 8; i++)
	{
		if (str.compare(pseudoLiterals[i] == 0))
		{
			mType = DOUBLE;
			return ;
		}
	}
	if (str.length() == 1)
	{
		mType = CHAR;
		return ;
	}
	else
	{
		std::size_t found = str.find_first_not_of("+-0123456789.f");

		if ()
	}
}
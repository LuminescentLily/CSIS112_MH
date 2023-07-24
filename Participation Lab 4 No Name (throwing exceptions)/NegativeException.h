#pragma once
#include <stdexcept>

class NegativeException : public std::runtime_error
{
public:
	NegativeException()		//constructor specifies default error message
		:std::runtime_error{ "negative number found" }{}
};


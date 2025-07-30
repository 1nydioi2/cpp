#include "externals.hpp"
#include "CaseShiftingString.hpp"

CaseShiftingString::CaseShiftingString(char const **src, const int src_size)
{
	for (int i = 0; i < src_size; i++)
		this->string.append(src[i]);
	return ;
}

CaseShiftingString::~CaseShiftingString()
{
	return ;
}


std::string	CaseShiftingString::ft_uppercase_shifter()
{
	std::string uppercased_string = this->string;
	const size_t	length = uppercased_string.length();

	for (size_t i = 0; i < length; i++)
		uppercased_string[i] = std::toupper(uppercased_string[i]);
	return (uppercased_string);
}

void	CaseShiftingString::ft_print_string()
{
	if (!this->string.empty())
		std::cout << ft_uppercase_shifter() << "\n";
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return ;
}

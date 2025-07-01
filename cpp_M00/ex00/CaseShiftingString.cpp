#include "externals.hpp"
#include "CaseShiftingString.hpp"

CaseShiftingString::CaseShiftingString(const char **src, const int src_size)
{
	for (int i = 0; i < src_size; i++)
		this->string.append(src[i]);
	return ;
}

CaseShiftingString::~CaseShiftingString(void)
{
	return ;
}


std::string	CaseShiftingString::ft_uppercase_shifter(void)
{
	std::string uppercased_string = this->string;
	const size_t	length = uppercased_string.length();

	for (size_t i = 0; i < length; i++)
		if (uppercased_string[i] >= 'a' && uppercased_string[i] <= 'z')
			uppercased_string[i] -= ' ';
	return (uppercased_string);
}

void	CaseShiftingString::ft_print_string(void)
{
	if (!this->string.empty())
		std::cout << ft_uppercase_shifter() << "\n";
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	return ;
}

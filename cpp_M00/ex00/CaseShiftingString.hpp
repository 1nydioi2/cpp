#ifndef CASE_SHIFTING_STRING_HPP
# define CASE_SHIFTING_STRING_HPP


class	CaseShiftingString
{
	public	:
		CaseShiftingString(const char **src, const int src_size);
		~CaseShiftingString(void);

		void	ft_print_string(void);


	private	:
		std::string ft_uppercase_shifter(void);

		std::string string;
};


#endif


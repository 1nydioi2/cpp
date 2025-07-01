#include "externals.hpp"
#include "CaseShiftingString.hpp"

int	main(int argc, char **argv)
{
	CaseShiftingString css((const char **)&argv[1], argc - 1);

	css.ft_print_string();
	return (1);
}

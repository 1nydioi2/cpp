#include "externals.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "error: Number of argument not respected.\ncommand usage : \"./sifl <filename> <string to replace> <string replacing>\"." << std::endl;
		return (1);
	}
	std::ifstream		file(argv[1]);
	std::ostringstream	content_cp;
	content_cp << file.rdbuf();
	if (!file.good())
	{
		std::cout << "error: Could not open the file, make sure it exists." << std::endl;
		return (1);
	}
	std::string 		search = argv[2];
	std::string 		str = content_cp.str();
	std::string			replace = argv[3];
	std::string			replaced_file = argv[1]; replaced_file += ".replace";
	file.close();

	size_t				index = 0;
	while (index != std::string::npos)
	{
		index = str.find(search, index);
		if (index != std::string::npos)
		{
			str.erase(index, search.length());
			str.insert(index, replace);
		}	
	}
	std::ofstream file_replace(replaced_file.c_str());
	file_replace << str;
	file_replace.close();
	return (0);
}

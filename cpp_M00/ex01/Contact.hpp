#ifndef CONTACT_HPP
# define CONTACT_HPP


class	Contact
{
	public	:
		Contact();
		~Contact();

		void	copy(Contact source);
		void	get_info(char info);
		bool	is_conform();

	private	:
		char		index;	//0
		std::string	f_name; //1
		std::string	l_name; //2
		std::string	n_name; //3
		std::string	ph_num; //4
		std::string	secret; //5
};


#endif

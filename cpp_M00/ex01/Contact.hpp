#ifndef CONTACT_HPP
# define CONTACT_HPP


class	Contact
{
	public:
		Contact();
		~Contact();

		void		copy(Contact source);
		void		add_info(char info, const std::string &src);
		std::string	get_info(char info, char type) const;
		bool		is_conform();
	
	private:
		std::string	f_name; //f
		std::string	l_name; //l
		std::string	n_name; //n
		std::string	ph_num; //p
		std::string	secret; //s
};


#endif

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP


class	Zombie
{
	public:
		Zombie();
		~Zombie();

		void	announce( void );
		void	set_name( std::string );

	private:
		std::string name;
};


#endif

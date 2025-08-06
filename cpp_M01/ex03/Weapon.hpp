#ifndef WEAPON_HPP
# define WEAPON_HPP


class	Weapon
{
	public:
		Weapon(std::string type);
		~Weapon();

		std::string	&getType();
		void 		setType(std::string type);

	private:
		std::string type;
};


#endif

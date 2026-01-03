#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"




int main()
{
	int	i = 10;
	Animal	*happy_house[i];
	Animal	*cp_happy_house[i];
	
	for ( int j = 0; j < i; j++ )
	{
		if ( j % 2 )
		{
			happy_house[j] = new Cat();
			cp_happy_house[j] = new Cat( (*(static_cast<Cat*>(happy_house[j]))) );
		}
		else
		{
			happy_house[j] = new Dog();
			cp_happy_house[j] = new Dog( (*(static_cast<Dog*>(happy_house[j]))) );
		}
	}

	std::cout << std::endl;
	
	for ( int j = 0; j < i; j++ )
	{
		std::cout << happy_house[j]->getType() << "\t";
		happy_house[j]->makeSound();
		std::cout << "Idea = " << static_cast<Cat*>(happy_house[j])->getIdea( j ) << std::endl;
		
		std::cout << cp_happy_house[j]->getType() << "\t";
		cp_happy_house[j]->makeSound();
		
		delete happy_house[j];
		
		std::cout << "cp Idea = " << static_cast<Cat*>(happy_house[j])->getIdea( j ) << std::endl;
		
		delete cp_happy_house[j];
	}
	
	std::cout << std::endl;
	
	return 0;
}

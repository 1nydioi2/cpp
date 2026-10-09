#include <iostream>
#include <bits/stdc++.h>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
	Array<char> str1( 5 );
	str1[0] = 'N';
	str1[1] = 'I';
	str1[2] = 'N';
	str1[3] = 'J';
	str1[4] = 'A';
	Array<char> str2 = str1;
    std::cout << str1.size() << '\t' <<  str2.size() << std::endl;
	for (unsigned int i = 0; i < str1.size(); i++)
		std::cout << str1[i] << '\t' <<  str2[i] << std::endl;

    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }

    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    	std::cout << tmp.size() << '\t' <<  test.size() << std::endl;
       	/*for (int i = 0; i < MAX_VAL; i++)
			std::cout << tmp[i] << '\t' <<  test[i] << std::endl;*/
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
    
	return ( 0 );
}

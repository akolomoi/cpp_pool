//
// Created by Andrii KOLOMOIETS on 2019-12-17.
//

#include <fstream>
#include <sstream>
#include <iostream>

int main()
{
	std::ifstream file;
	std::stringstream s;

	file.open("idk");
	char c;

	while (file.get(c))
	{
		char l;
		file.get(l);
		std::cout << c << ' ' << l << std::endl;
	}
	return 0;
}
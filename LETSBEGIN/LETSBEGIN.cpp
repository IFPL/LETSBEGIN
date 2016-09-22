#include "stdafx.h"
#include <iostream>
#include <string>

int main() {

	std::cout << "Introduceti numele programului:";

	std::string nume;
	std::cin >> nume;
	std::string vario(nume.size(), '~');
	std::string vario2(nume.size(), ' ');


	//std::cout << "\n\n\thello " << nume << "!" << "\n\n int main() {" << "\n\n std::cout << \"Hello " << nume << "!\";" << "\n\n int pause = 0;" << "\n std::cin >> pause;" << "\n\n return 0;" << "}";

	std::cout << "\n\n|" << "~~~~~~~~~~~~~~~~~~~~~~~~~~~" << vario << "|" << std::endl;
	std::cout << "|" << "                           " << vario2 << "|" << std::endl;
	std::cout << "|" << "        " << "Hello " << nume << "!" << "            " << "|" << std::endl;
	std::cout << "|" << " " << "int main() {" << "              " << vario2 << "|" << std::endl;
	std::cout << "|" << "                           " << vario2 << "|" << std::endl;
	std::cout << "|" << " " << "std::cout << \"Hello " << nume << "!\";" << "   " << "|" << std::endl;
	std::cout << "|" << "                           " << vario2 << "|" << std::endl;
	std::cout << "|" << " int pause = 0;" << "            " << vario2 << "|" << std::endl;
	std::cout << "|" << " std::cin >> pause;" << "        " << vario2 << "|" << std::endl;
	std::cout << "|" << "                           " << vario2 << "|" << std::endl;
	std::cout << "|" << " return 0;" << "                 " << vario2 << "|" << std::endl;
	std::cout << "|" << "                           " << vario2 << "|" << std::endl;
	std::cout << "|" << "~~~~~~~~~~~~~~~~~~~~~~~~~~~" << vario << "|" << std::endl;
	
	
	
	
	
		int pause = 0;
		std::cin >> pause;
		return 0;
	

}











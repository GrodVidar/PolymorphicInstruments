#include "pch.h"
#include "Ukulele.h"


Ukulele::Ukulele(int strings, std::string brand, int year, std::string color): Instrument(strings, brand, year), color(color) {}

/*Empty deconstructor.*/
Ukulele::~Ukulele() {}

/*An empty method, since we don't use it int this class*/
void Ukulele::set_strings(Instrument *p_Array[], int ar, int strangs) {}

/*The output method is mostly to be able to output the various attributes for every different class,
since all of the classes have at least one unique attribute in this project.*/
void Ukulele::output()
{
	std::cout << "Ukulele by: " << brand << std::endl;
	std::cout << "Strings: " << strings << std::endl;
	std::cout << "Manufactured: " << year << std::endl;
	std::cout << "color: " << color << std::endl;
	UNDERLINE;
}


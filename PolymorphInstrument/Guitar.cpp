#include "pch.h"
#include "Guitar.h"


Guitar::Guitar(int strings, std::string brand, int year, bool whammy, bool acoustic): Instrument(strings, brand, year), whammy(whammy), acoustic(acoustic){}

/*Empty deconstructor.*/
Guitar::~Guitar() {}

/*since the whammy and acoustic attributes where booleans, I didnt want the output to result as "true" or even
"1" so we use an if-else statement to set the output-values to "Yes/No", "Acoustic/Electric".*/
std::string answerWhammy(bool whammy)
{
	if (whammy == true)
	{
		return "Yes";
	}
	else
	{
		return "No";
	}
}

std::string answerAcoustic(bool acoustic)
{
	if (acoustic == true)
	{
		return "Acoustic";
	}
	else
	{
		return "Electric";
	}
}

/*An empty method, since we don't use it int this class*/
void Guitar::set_strings(Instrument *p_Array[], int ar, int strangs) {}

/*The output method is mostly to be able to output the various attributes for every different class,
since all of the classes have at least one unique attribute in this project.*/
void Guitar::output()
{
	std::cout << "Guitar by: " << brand << std::endl;
	std::cout << "Amount of strings: " << strings << std::endl;
	std::cout << "Manufactured: " << year << std::endl;
	std::cout << "Whammy-bar compatible: " << answerWhammy(whammy) << std::endl;
	std::cout << "Acoustic/Electric: " << answerAcoustic(acoustic) << std::endl;
	UNDERLINE;
}

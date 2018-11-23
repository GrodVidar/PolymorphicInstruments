#include "pch.h"
#include "Bass.h"



Bass::Bass(int strings, std::string brand, int year, bool EQ, bool fretless): Instrument(strings, brand, year), EQ(EQ), fretless(fretless) {}

/*Empty deconstructor.*/
Bass::~Bass() {}

/*Since the EQ and fretless attributes where both booleans, I didn't want the output to result as "true" or
"1", so I used an if-else statement to set the output-values to "Yes/No".*/
std::string answerEQ(bool EQ)
{
	if (EQ == true)
	{
		return "Yes";
	}
	else
	{
		return "No";
	}
}

std::string answerFretless(bool fretless)
{
	if (fretless == true)
	{
		return "Yes";
	}
	else
	{
		return "No";
	}
}


/*Here is the method for setting the strings for the Harley Bendon in main,
we create a local pointer of the Instrument type so that it first points to the instrument we want to make
the change on, then change the value of the attribute.*/
void Bass::set_strings(Instrument *p_Array[], int ar, int strangs)
{
	Instrument * p_local;
	p_local = findInstrument(p_Array, ar);
	p_local->changeStrings(strangs);
}

/*Here we use a do-while-loop to find which index of our pointer array that matches the year we used in
"set_strings"-call in main, we searched for 2010, luckily no other instrument was manufactured that year,
if another instrument would've been manufactured that year, we wouldn't be searching for year but for
another attribute.*/
Instrument * Bass::findInstrument(Instrument * p_Array[], int ar)
{
	int i = 0;
	bool flag=false;
	do
	{
		if (p_Array[i]->getYear() == ar)
		{
			flag = true;
		}
		if (!flag)i++;
	} while (!flag);
	//returns the index of our pointer array that matches with the "year" 2010
	return p_Array[i];
}

/*The output method is mostly to be able to output the various attributes for every different class,
since all of the classes have at least one unique attribute in this project.*/
void Bass::output()
{
	std::cout << "Bass by: " << brand << std::endl;
	std::cout << "Amount of strings: " << strings << std::endl;
	std::cout << "manufactured: " << year << std::endl;
	std::cout << "built-in EQ: " << answerEQ(EQ) << std::endl;
	std::cout << "Fretless: " << answerFretless(fretless) << std::endl;
	UNDERLINE;
}
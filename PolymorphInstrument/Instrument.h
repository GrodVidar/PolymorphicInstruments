#pragma once

class Instrument
{
protected:
	int strings;
	std::string brand;
	int year;
	
public:
	Instrument(int, std::string, int);

	~Instrument();

	virtual void output() = 0;
	virtual void set_strings(Instrument * p_Array[], int ar, int strangs) = 0;
	int getYear()
	{
		return year;
	}
	int changeStrings(int a)
	{
		return this->strings = a;

	}
};


#pragma once
#include "Instrument.h"

class Ukulele: public Instrument
{
protected:
	std::string color;
public:
	Ukulele(int, std::string, int, std::string);
	~Ukulele();

	void output();

	void set_strings(Instrument *p_Array[], int ar, int strangs);

};


#pragma once
#include "Instrument.h"

class Guitar: public Instrument
{
protected:
	bool whammy;
	bool acoustic;
public:
	Guitar(int, std::string, int, bool, bool);

	~Guitar();

	void output();

	void set_strings(Instrument *p_Array[], int ar, int strangs);
};


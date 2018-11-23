#pragma once
#include "Instrument.h"

class Bass : public Instrument
{
protected:
	bool EQ;
	bool fretless;
public:
	Bass(int, std::string, int, bool, bool);

	~Bass();

	void output();

	void set_strings(Instrument *p_Array[], int ar, int strangs);
	Instrument * findInstrument(Instrument *p_Array[], int ar);
};


#include "pch.h"
#include "Instrument.h"


Instrument::Instrument(int strings, std::string brand, int year): strings(strings), brand(brand), year(year) {}

/*Empty deconstructor.*/
Instrument::~Instrument() {}

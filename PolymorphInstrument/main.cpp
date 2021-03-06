/*PolymorphicInstruments by GrodVidar :)*/
#include "pch.h"
#include "Instrument.h"
#include "Bass.h"
#include "Guitar.h"
#include "Ukulele.h"
#include <iostream>


int main()
{
	/*Declare a pointer array of the type Instrument.*/
	Instrument * p_inst[4];

	 p_inst[0] = new Guitar(6, "Fender", 1978, true, false);
	 p_inst[1] = new Bass(5, "Yamaha", 2008, true, false);
	 p_inst[2] = new Ukulele(4, "Gear4Music", 2018, "blue");
	 p_inst[3] = new Bass(4, "Harley Benton", 2010, true, true);

	 /*for-loops the output method from the various classes, since we chose the amount 4 in the pointer array
	 (p_inst[4]) the for-loops will only be executed 4 times.*/
	 for (int i = 0; i < 4; i++)
	 {
		 p_inst[i]->output();
	 }
	 /*Here we decide to make a change to the "Harley Benton"-bass because we want a fretless bass, but not with
	 4 strings, we want one with 5.
	 We have decided, that the bass should be the class that decides how many strings the instruments should have,
	 therefore we use "p_inst[1]" which is an object of the Bass-type to change the amount of strings on the other
	 instrument, in this case we change it for the Harley Benton.*/
	 p_inst[1]->set_strings(p_inst, 2010, 5);
	 /*uses output only one time this time to output the changes that has been made to the bass.*/
	 p_inst[3]->output();
	 /*Use another for-loop to delete the object we created with our pointer.*/
	 for (int i = 0; i < 4; i++)
	 {
		 delete p_inst[i];
	 }
	 return 0; 
}

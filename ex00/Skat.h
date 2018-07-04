#ifndef _SKAT_
#define _SKAT_

#include <iostream>

class Skat
{
    public:
	Skat(std::string const& name = "bob", int stimPaks = 15);
	~Skat();
    public:
	int& stimPaks();
	const std::string& name();
    public:
	void shareStimPaks(int number, int& stock);
	void addStimPaks(unsigned int number);
	void useStimPaks();
    public:
	void status();
    private:
	std::string _name;
	int _stimPaks;
};


#endif /* _SKAT_ */



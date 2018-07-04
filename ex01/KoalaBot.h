#ifndef _KOALABOT_
#define _KOALABOT_
#include <iostream>
#include "Parts.h"

class KoalaBot
{
    private:
	Arms _arms;
	Legs _legs;
	Head _head;
	std::string _serial;
    public:
	KoalaBot(std::string const& serial = "Bob-01");
	~KoalaBot();
	void setParts(Legs const& legs);
	void setParts(Arms const& arms);
	void setParts(Head const& head);
	void swapParts(Legs& legs);
	void swapParts(Arms& arms);
	void swapParts(Head& head);

	void informations() const;
	bool status() const;

};

#endif

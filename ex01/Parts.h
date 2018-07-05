#ifndef _PARTS_
#define _PARTS_
#include <iostream>

class Arms
{
    public:
	Arms(std::string serial = "A-01", bool functionnal = true);
	~Arms();
	bool isFunctionnal() const;
	std::string serial() const;
	void informations() const;
    private:
	std::string _serial;
	bool _functionnal;
};

class Legs
{
    public:
	Legs(std::string serial = "L-01", bool functionnal = true);
	~Legs();
	bool isFunctionnal() const;
	std::string serial() const;
	void informations() const;
    private:
	std::string _serial;
	bool _functionnal;
};

class Head
{
    public:
	Head(std::string serial = "H-01", bool functionnal = true);
	~Head();
	bool isFunctionnal() const;
	std::string serial() const;
	void informations() const;
    private:
	std::string _serial;
	bool _functionnal;
};


#endif

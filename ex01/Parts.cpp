#include "Parts.h"

// Arms
Arms::Arms(std::string serial, bool functionnal)
{
    this->_serial = serial;
    this->_functionnal = functionnal;
}

Arms::~Arms(){}

bool Arms::isFunctionnal() const
{
    return this->_functionnal;
}

std::string Arms::serial() const
{
    return this->_serial;
}

void Arms::informations() const
{
    std::cout<<"[Parts] Arms "<<this->_serial<<" status : "<<(this->isFunctionnal() ? "OK" : "KO")<<std::endl;
}

// Legs
Legs::Legs(std::string serial, bool functionnal)
{
    this->_serial = serial;
    this->_functionnal = functionnal;
}

Legs::~Legs(){}

bool Legs::isFunctionnal() const
{
    return this->_functionnal;
}

std::string Legs::serial() const
{
    return this->_serial;
}

void Legs::informations() const
{
    std::cout<<"[Parts] Legs "<<this->_serial<<" status : "<<(this->isFunctionnal() ? "OK" : "KO")<<std::endl;
}

// Head
Head::Head(std::string serial, bool functionnal)
{
    this->_serial = serial;
    this->_functionnal = functionnal;
}

Head::~Head(){}

bool Head::isFunctionnal() const
{
    return this->_functionnal;
}

std::string Head::serial() const
{
    return this->_serial;
}

void Head::informations() const
{
    std::cout<<"[Parts] Head "<<this->_serial<<" status : "<<(this->isFunctionnal() ? "OK" : "KO")<<std::endl;
}



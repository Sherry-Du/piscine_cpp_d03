#include "KreogCom.h"

KreogCom::KreogCom(int x, int y, int serial)
{
    this->_x = x;
    this->_y = y;
    this->m_serial = serial;
    this->_link = 0;
    std::cout<<"KreogCom "<<serial<<" initialised"<<std::endl;
}

KreogCom::~KreogCom()
{
    std::cout<<"KreogCom "<<this->m_serial<<" shutting down"<<std::endl;
}

void KreogCom::addCom(int x, int y, int serial)
{
    KreogCom *newCom = new KreogCom(x, y, serial);
    if(this->_link == 0)
    {
	this->_link = newCom;
	newCom->_link = 0;
    }
    else
    {
	newCom->_link = this->_link;
	this->_link = newCom;
    }
}

KreogCom *KreogCom::getCom()
{
    return this->_link;
}

void KreogCom::removeCom()
{
    if(this->_link == 0)
    {
	return ;
    }
    else
    {
	KreogCom *tmp = this->_link;
	this->_link = tmp->_link;
	delete tmp;
    }
}

void KreogCom::ping() const
{
    std::cout<<"KreogCom "<<this->m_serial<<" currently at "<<this->_x<<" "<<this->_y<<std::endl;
}

void KreogCom::locateSquad() const
{
    if(this->_link != 0)
	this->_link->locateSquad();
    ping();
}
/*
int main()
{
KreogCom k(42, 42, 101010);
//k.ping();
k.addCom(56, 25, 65);
//k.ping();
k.addCom(73, 34, 51);
//k.ping();
k.locateSquad();
k.removeCom();
k.removeCom();

return 0;
}*/



#include "KreogCom.h"

KreogCom::KreogCom(int x, int y, int serial):m_serial(serial)
{
    this->_x = x;
    this->_y = y;
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
	//delete tmp;
    }
}

void KreogCom::ping() const
{
    std::cout<<"KreogCom "<<this->m_serial<<" currently at "<<this->_x<<" "<<this->_y<<std::endl;
}

void KreogCom::locateSquad() const
{
    KreogCom *tmp = this->_link;
    while(tmp != 0)
    {
	std::cout<<"KreogCom "<<tmp->m_serial<<" currently at "<<tmp->_x<<" "<<tmp->_y<<std::endl;
	tmp = tmp->_link;
    }
    std::cout<<"KreogCom "<<this->m_serial<<" currently at "<<this->_x<<" "<<this->_y<<std::endl;
}




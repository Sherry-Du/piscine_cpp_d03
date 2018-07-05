#include "KreogCom.h"

KreogCom::KreogCom(int x, int y, int serial):m_serial(serial)
{
    this->_x = x;
    this->_y = y;
    this->_link = NULL;
    std::cout<<"KreogCom "<<serial<<" initialised"<<std::endl;
}

KreogCom::~KreogCom()
{
    std::cout<<"KreogCom "<<this->m_serial<<" shutting down"<<std::endl;
}

void KreogCom::addCom(int x, int y, int serial)
{
    KreogCom *newCom = new KreogCom(x, y, serial);
    if(this->_link == NULL)
    {
	this->_link = newCom;
	newCom->_link = NULL;
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
    if (!_link)
        return;
    if (_link->_link)
    {
        KreogCom* tmp = _link;
        _link = _link->_link;
        delete tmp;
    }
    else
    {
        delete _link;
        _link = NULL;
    }
}

void KreogCom::ping() const
{
    std::cout<<"KreogCom "<<this->m_serial<<" currently at "<<this->_x<<" "<<this->_y<<std::endl;
}

void KreogCom::locateSquad() const
{
    KreogCom *tmp = this->_link;
    while(tmp != NULL)
    {
	std::cout<<"KreogCom "<<tmp->m_serial<<" currently at "<<tmp->_x<<" "<<tmp->_y<<std::endl;
	tmp = tmp->_link;
    }
    std::cout<<"KreogCom "<<this->m_serial<<" currently at "<<this->_x<<" "<<this->_y<<std::endl;
}




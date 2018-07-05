#include "KoalaBot.h"

KoalaBot::KoalaBot(std::string const& serial){
    this->_serial = serial;
}

KoalaBot::~KoalaBot(){}

void KoalaBot::setParts(Legs const& legs)
{
    this->_legs = legs;
}

void KoalaBot::setParts(Arms const& arms)
{
    this->_arms = arms;
}

void KoalaBot::setParts(Head const& head)
{
    this->_head = head;
}

void KoalaBot::swapParts(Legs& legs)
{
    Legs swap = this->_legs;
    this->_legs = legs;
    legs = swap;
}

void KoalaBot::swapParts(Arms& arms)
{
    Arms swap = this->_arms;
    this->_arms = arms;
    arms = swap;
}

void KoalaBot::swapParts(Head& head)
{
    Head swap = this->_head;
    this->_head = head;
    head = swap;
}

void KoalaBot::informations() const
{
    std::cout<<"[KoalaBot] "<< this->_serial<<std::endl;
    this->_arms.informations();
    this->_legs.informations();
    this->_head.informations();
}

bool KoalaBot::status() const
{
    bool status = (this->_arms.isFunctionnal() && this->_legs.isFunctionnal() && this->_head.isFunctionnal());
    return status;
}




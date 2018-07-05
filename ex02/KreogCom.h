#ifndef _KREOGCOM_
#define _KREOGCOM_
#include <iostream>

class KreogCom
{
    public:
	KreogCom(int x, int y, int serial);
	~KreogCom();
    
	void addCom(int x, int y, int serial);
	KreogCom *getCom();
	void removeCom();
    
	void ping() const;
	void locateSquad() const;
    private:
	int _x;
	int _y;
	KreogCom* _link;
	const int m_serial;
};


#endif

#pragma once
#include "hinh.h"
class tomau:public hinh
{
public:
	void maunut(CClientDC *pDC);
	virtual void chonmau(int m1, int m2, int m3, int m4, int m5, int m6,CClientDC *pDC);
	virtual void chonmaupen(int m1, int m2, int m3, int m4, int m5, int m6, CClientDC *pDC);
	tomau();
	~tomau();
};


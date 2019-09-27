#pragma once
#include "hinh.h"
#include "tomau.h"
class hcn:public hinh
{
private:
	
public:
	int x1, x2, y1, y2;
	hcn(CPoint p1, CPoint p2);
	int chonhinh(CPoint p);
	void xuatlai(CClientDC *pDC);
	void thietlap(int mx1, int my1, int mx2, int my2);
	void vehinh(CClientDC *pDC);
	int dientich();
	int chuvi();
	hcn();
	~hcn();
	
	
};


#pragma once
#include "hinh.h"
class elipse:public hinh
{
private:
	
public:
	elipse(CPoint p1, CPoint p2);
	int x1, x2, y1, y2;
	void vehinh(CClientDC *pDC);
	void thietlap(int mx1, int my1, int mx2, int my2);
	int dientich();
	int chuvi();
	int chonhinh(CPoint p);
	void xuatlai(CClientDC *pDC);
	elipse();
	~elipse();
};


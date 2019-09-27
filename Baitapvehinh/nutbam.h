#pragma once
#include "hinh.h"
#include "hcn.h"
#include "hinhvuong.h"
#include "hinhtron.h"
#include "elipse.h"
#include "tamgiac.h"
class nutbam:public hinh
{
public:
	int x1, x2, y1, y2;
	hcn hcn1;
	hinhvuong hv1;
	hinhtron htron1;
	elipse elip1;
	tamgiac tg1;
	void thietlap(int mx1, int my1, int mx2, int my2);
	void hv(CClientDC *pDC);
	void hcn(CClientDC *pDC);
	void htron(CClientDC *pDC);
	void elipse(CClientDC *pDC);
	void tg(CClientDC *pDC);
	int chonhinh(CPoint p);
	void omau(CClientDC *pDC);
	nutbam();
	~nutbam();
};


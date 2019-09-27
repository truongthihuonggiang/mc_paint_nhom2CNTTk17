#include "stdafx.h"
#include "hcn.h"

hcn::hcn()
{

}

hcn::hcn(CPoint p1, CPoint p2)
{
	x1 = p1.x;
	y1 = p1.y;
	x2 = p2.x;
	y2 = p2.y;
}

void hcn::thietlap(int mx1, int my1, int mx2, int my2)
{
	x1 = mx1;
	y1 = my1;
	x2 = mx2;
	y2 = my2;
}
int hcn::dientich()
{
	// TODO: Add your implementation code here.
	int kq=0;
	kq =(x2-x1)*(y2-y1);
	return kq;
}

int hcn::chuvi()
{
	// TODO: Add your implementation code here.
	int kq = 0;
	kq = ((x2 - x1) + (y2 - y1)) * 2;
	return kq;
}
void hcn::vehinh(CClientDC *pDC)
{

	pDC->Rectangle(x1, y1, x2, y2); 
	
	CString dt, a, cv, b;
	a = "Dien tich: ";
	dt.Format(_T("%d"), dientich());
	pDC->SetTextColor(RGB(0, 150, 150));
	pDC->TextOutW(12, 92, a);
	pDC->TextOutW(82, 92, dt);
	b = "Chu vi: ";
	cv.Format(_T("%d"), chuvi());
	pDC->TextOutW(12, 112, b);
	pDC->TextOutW(82, 112, cv);
}

int hcn::chonhinh(CPoint p)
{
	int kq = 0;
	if (p.x > x1 && p.y > y1 && p.x < x2 && p.y < y2)
	{
		kq = 1;
	}
	return kq;
}
void hcn::xuatlai(CClientDC *pDC)
{
	CPen *pen2, *penn;			//khai bao but mau
	penn = new CPen(PS_SOLID, 2, RGB(255, 255, 255));
	pen2 = new CPen(PS_SOLID, 2, RGB(236, 236, 236));

	CBrush *B1, *B2;						//khai bao mau to
	B1 = new CBrush(RGB(90, 90, 90));
	B2 = new CBrush(RGB(236, 236, 236));
	CBrush *olderbrush;
	CPen *older;
	olderbrush = pDC->SelectObject(B2);
	older = pDC->SelectObject(penn);
	pDC->Rectangle(0, 67, 129, 90);
	older = pDC->SelectObject(pen2);
	pDC->Rectangle(0, 91, 129, 200);
	CString t;
	t = "Hinh chu nhat";				//Xuat chu khi chon vao bieu tuong
	pDC->SetTextColor(RGB(0, 150, 150));
	pDC->TextOutW(10, 70, t);
	CString dt, a, cv, b;
	a = "Dien tich: ";
	dt.Format(_T("%d"), dientich());
	pDC->SetTextColor(RGB(0, 150, 150));
	pDC->TextOutW(12, 92, a);
	pDC->TextOutW(82, 92, dt);
	b = "Chu vi: ";
	cv.Format(_T("%d"), chuvi());
	pDC->TextOutW(12, 112, b);
	pDC->TextOutW(82, 112, cv);
}
hcn::~hcn()
{
}


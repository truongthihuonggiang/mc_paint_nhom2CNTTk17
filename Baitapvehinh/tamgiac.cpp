#include "stdafx.h"
#include "tamgiac.h"


tamgiac::tamgiac()
{
}
tamgiac::tamgiac(CPoint p1, CPoint p2)
{
	x1 = p1.x;
	y1 = p1.y;
	x2 = p2.x;
	y2 = p2.y;
}
void tamgiac::thietlap(int mx1, int my1, int mx2, int my2)
{
	x1 = mx1;
	y1 = my1;
	x2 = mx2;
	y2 = my2;
}
void tamgiac::vehinh(CClientDC *pDC)
{
	int x3, y3;
	x3 = x1 + (x2 - x1) / 2;
	y3 = y1;
	pDC->MoveTo(x1,y2); pDC->LineTo(x2,y2);
	pDC->MoveTo(x1, y2); pDC->LineTo(x3,y3);
	pDC->MoveTo(x3, y3); pDC->LineTo(x2, y2);
	CString dt, t, cv, k;
	t = "Dien tich: ";
	dt.Format(_T("%d"), dientich());
	pDC->SetTextColor(RGB(0, 150, 150));
	pDC->TextOutW(12, 92, t);
	pDC->TextOutW(82, 92, dt);
	k = "Chu vi: ";
	cv.Format(_T("%d"), chuvi());
	pDC->TextOutW(12, 112, k);
	pDC->TextOutW(82, 112, cv);
}
int tamgiac::dientich()
{
	int d1, d2, d3, p, S, P;
	int x3, y3;
	x3 = x1 + (x2 - x1) / 2;
	y3 = y1;
	d1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y2, 2));
	d2 = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
	d3 = sqrt(pow(x3 - x1, 2) + pow(y3 - y2, 2));
	P = d1 + d2 + d3;
	double t = P / 2;
	S = sqrt(t*(t - d1)*(t - d2)*(t - d3));
	return S;
}
int tamgiac::chuvi()
{
	int d1, d2, d3, P;
	int x3, y3;
	x3 = x1 + (x2 - x1) / 2;
	y3 = y1;
	d1 = sqrt(pow(x1 - x2, 2) + pow(y2 - y2, 2));
	d2 = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
	d3 = sqrt(pow(x3 - x1, 2) + pow(y3 - y2, 2));
	P = d1 + d2 + d3;
	return P;
}
int tamgiac::chonhinh(CPoint p)
{
	int kq = 0;
	if (p.x > x1 && p.y > y1 && p.x < x2 && p.y < y2)
	{
		kq = 1;
	}
	return kq;
}
void tamgiac::xuatlai(CClientDC *pDC)
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
	t = "Hinh tam giac";				//Xuat chu khi chon vao bieu tuong
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
tamgiac::~tamgiac()
{
}

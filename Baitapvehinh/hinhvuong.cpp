#include "stdafx.h"
#include "hinhvuong.h"


hinhvuong::hinhvuong()
{

}
hinhvuong::hinhvuong(CPoint p1, CPoint p2)
{
	x1 = p1.x;
	y1 = p1.y;
	x2 = p2.x;
	y2 = p2.y;

}
void hinhvuong::thietlap(int mx1, int my1, int mx2, int my2)
{
	x1 = mx1;
	y1 = my1;
	x2 = mx2;
	y2 = my2;
}
void hinhvuong::vehinh(CClientDC *pDC)
{
	int a, b, c, d;
	a = x2 - x1;
	b = y2 - y1;

	c = x1 - x2;
	d = y1 - y2;
	if (y1 < y2 && x1 < x2)
	{
		if (a > b)
		{
			pDC->Rectangle(x1, y1, x1 + b, y2);
		}
		else
		{
			pDC->Rectangle(x1, y1, x2, y1 + a);
		}
	}
	else
	{
		if (y1 < y2 && x1 > x2)
		{
			if (c > b)
			{
				pDC->Rectangle(x1, y1, x1 - b, y2);
			}
			else
			{
				pDC->Rectangle(x1, y1, x2, y1 + c);
			}
		}
		else
		{
			if (y1 > y2 && x1 > x2)
			{
				if (c > d)
				{
					pDC->Rectangle(x2, y2, x2 + d, y1);
				}
				else
				{
					pDC->Rectangle(x2, y2, x1, y2 + c);
				}
			}
			else
			{
				if (a > d)
				{
					pDC->Rectangle(x2, y2, x2 - d, y1);
				}
				else
				{
					pDC->Rectangle(x2, y2, x1, y2 + a);
				}
			}
		}
	}
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
int hinhvuong::dientich()
{
	// TODO: Add your implementation code here.
	int kq;
	kq = (x2 - x1)*(y2 - y1);
	return kq;
}

int hinhvuong::chuvi()
{
	// TODO: Add your implementation code here.
	int kq = 0;
	kq = ((x2 - x1) + (y2 - y1)) * 2;
	return kq;
}
int hinhvuong::chonhinh(CPoint p)
{
	int kq = 0;
	if (p.x > x1 && p.y > y1 && p.x < x2 && p.y < y2)
	{
		kq = 1;
	}
	return kq;
}
void hinhvuong::xuatlai(CClientDC *pDC)
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
	t = "Hinh vuong";				//Xuat chu khi chon vao bieu tuong
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
hinhvuong::~hinhvuong()
{
}

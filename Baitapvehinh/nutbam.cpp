#include "stdafx.h"
#include "nutbam.h"


nutbam::nutbam()
{
}
void nutbam::thietlap(int mx1, int my1, int mx2, int my2)
{
	x1 = mx1;
	y1 = my1;
	x2 = mx2;
	y2 = my2;
}
void nutbam::hcn(CClientDC *pDC)
{
	hcn1.thietlap(x1, y1, x2, y2);
	hcn1.vehinh(pDC);
}
void nutbam::hv(CClientDC *pDC)
{
	hv1.thietlap(x1, y1, x2, y2);
	hv1.vehinh(pDC);
}
void nutbam::htron(CClientDC *pDC)
{
	htron1.thietlap(x1, y1, x2, y2);
	htron1.vehinh(pDC);
}
void nutbam::tg(CClientDC *pDC)
{
	tg1.thietlap(x1, y1, x2, y2);
	tg1.vehinh(pDC);
}
void nutbam::elipse(CClientDC *pDC)
{
	elip1.thietlap(x1, y1, x2, y2);
	elip1.vehinh(pDC);
}
int nutbam::chonhinh(CPoint p)
{
	int kt = 0;
	if (p.x > x1&&p.x<x2&&p.y>y1&&p.y < y2)
		kt = 1;
	return kt;
}
void nutbam::omau(CClientDC *pDC)
{
	CPen *pen, *pen1, *older;
	pen = new CPen(PS_SOLID, 1, RGB(60, 60, 60));
	pen1 = new CPen(PS_SOLID, 1, RGB(255, 255, 255));
	CBrush *B0, *B1, *B2, *B3, *B4, *B5, *olderB;
	B1 = new CBrush(RGB(223, 0, 41));
	B2 = new CBrush(RGB(249, 244, 0));
	B3 = new CBrush(RGB(93, 12, 123));
	B4 = new CBrush(RGB(91, 189, 43));
	B5 = new CBrush(RGB(0, 0, 0));
	B0 = new CBrush(RGB(250, 250, 250));

	older = pDC->SelectObject(pen);
	pDC->MoveTo(460, 15); pDC->LineTo(460, 45);
	older = pDC->SelectObject(pen1);
	olderB = pDC->SelectObject(B1);
	pDC->Rectangle(470, 15, 481, 26); //ve hinh mau do
	olderB = pDC->SelectObject(B2);
	pDC->Rectangle(470, 34, 481, 45); //ve hinh mau vang

	olderB = pDC->SelectObject(B3);
	pDC->Rectangle(489, 15, 500, 26); //ve hinh mau tim
	olderB = pDC->SelectObject(B4);
	pDC->Rectangle(489, 34, 500, 45); //ve hinh mau xanh

	olderB = pDC->SelectObject(B0);
	pDC->Rectangle(508, 15, 519, 26); //ve hinh mau trang
	olderB = pDC->SelectObject(B5);
	pDC->Rectangle(508, 34, 519, 45); //ve hinh mau den
}
nutbam::~nutbam()
{
}

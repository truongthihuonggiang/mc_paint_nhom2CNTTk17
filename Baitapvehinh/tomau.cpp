#include "stdafx.h"
#include "tomau.h"


tomau::tomau()
{
}
void tomau::maunut(CClientDC *pDC)
{
	CPen *pen, *pen1, *pen2, *older;
	pen = new CPen(PS_SOLID, 2, RGB(255, 255, 255));
	pen1 = new CPen(PS_SOLID, 1, RGB(255, 255, 255));
	pen2 = new CPen(PS_SOLID, 2, RGB(90, 90, 90));
	CBrush *B1, *B2, *B3, *B4, *B0, *B5, *B6, *olderB;
	B1 = new CBrush(RGB(223, 0, 41));
	B2 = new CBrush(RGB(249, 244, 0));
	B3 = new CBrush(RGB(93, 12, 123));
	B4 = new CBrush(RGB(91, 189, 43));
	B0 = new CBrush(RGB(90, 90, 90));
	B6 = new CBrush(RGB(0, 0, 0));
	B5 = new CBrush(RGB(250, 250, 250));
	older = pDC->SelectObject(pen1);
	olderB = pDC->SelectObject(B1);
	pDC->Rectangle(470, 15, 481, 26);
	olderB = pDC->SelectObject(B2);
	pDC->Rectangle(470, 34, 481, 45);
	olderB = pDC->SelectObject(B3);
	pDC->Rectangle(489, 15, 500, 26);
	olderB = pDC->SelectObject(B4);
	pDC->Rectangle(489, 34, 500, 45);
	olderB = pDC->SelectObject(B5);
	pDC->Rectangle(508, 15, 519, 26); //ve hinh mau trang
	olderB = pDC->SelectObject(B6);
	pDC->Rectangle(508, 34, 519, 45);
}
void tomau::chonmau(int m1, int m2, int m3, int m4, int m5, int m6,CClientDC *pDC)
{
	CPen *pen, *pen1;
	pen = new CPen(PS_SOLID, 1, RGB(0, 0, 0));
	CPen *older;
	pen1 = new CPen(PS_SOLID, 0, RGB(255, 255, 255));
	CBrush *B1, *B2, *B3, *B4, *B0, *B5, *olderB;
	B1 = new CBrush(RGB(223, 0, 41));
	B2 = new CBrush(RGB(249, 244, 0));
	B3 = new CBrush(RGB(93, 12, 123));
	B4 = new CBrush(RGB(91, 189, 43));
	B5 = new CBrush(RGB(0, 0, 0));
	B0 = new CBrush(RGB(255, 255, 255));
	if (m1 == 1)
	{
		older = pDC->SelectObject(pen1);
		olderB = pDC->SelectObject(B1);

	}
	else
	{
		if (m2 == 1)
		{
			older = pDC->SelectObject(pen1);
			olderB = pDC->SelectObject(B2);
		}
		else
		{
			if (m3 == 1)
			{
				older = pDC->SelectObject(pen1);
				olderB = pDC->SelectObject(B3);
			}
			else
			{
				if (m4 == 1)
				{
					older = pDC->SelectObject(pen1);
					olderB = pDC->SelectObject(B4);
				}
				else
				{
					if (m5 == 1)
					{
						older = pDC->SelectObject(pen1);
						olderB = pDC->SelectObject(B0);
					}
					else
					{
						if (m6 == 1)
						{
							older = pDC->SelectObject(pen);
							olderB = pDC->SelectObject(B5);
						}
						else
						{
							older = pDC->SelectObject(pen);
							olderB = pDC->SelectObject(B0);
						}
					}
				}
			}
		}
	}
}

void tomau::chonmaupen(int m1, int m2, int m3, int m4, int m5, int m6, CClientDC *pDC)
{
	CPen *pen, *pen1, *pen2, *pen3, *pen4, *pen5, *pen6;
	pen = new CPen(PS_SOLID, 1, RGB(0, 0, 0));
	CPen *older;
	pen1 = new CPen(PS_SOLID, 1, RGB(223, 0, 41));
	pen2 = new CPen(PS_SOLID, 1, RGB(249, 244, 0));
	pen3 = new CPen(PS_SOLID, 1, RGB(93, 12, 123));
	pen4 = new CPen(PS_SOLID, 1, RGB(91, 189, 43));
	pen5 = new CPen(PS_SOLID, 1, RGB(255, 255, 255));
	pen6 = new CPen(PS_SOLID, 1, RGB(0, 0, 0));
	if (m1 == 1)
	{
		older = pDC->SelectObject(pen1);
	}
	else
	{
		if (m2 == 1)
		{
			older = pDC->SelectObject(pen2);
		}
		else
		{
			if (m3 == 1)
			{
				older = pDC->SelectObject(pen3);
			}
			else
			{
				if (m4 == 1)
				{
					older = pDC->SelectObject(pen4);
				}
				else
				{
					if (m5 == 1)
					{
						older = pDC->SelectObject(pen5);
					}
					else
					{
						if (m6 == 1)
						{
							older = pDC->SelectObject(pen6);
						}
						else
						{
							older = pDC->SelectObject(pen);
						}
					}

				}
			}
		}
	}
}
tomau::~tomau()
{
}

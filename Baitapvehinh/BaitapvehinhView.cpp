
// BaitapvehinhView.cpp : implementation of the CBaitapvehinhView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "Baitapvehinh.h"
#endif

#include "BaitapvehinhDoc.h"
#include "BaitapvehinhView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CBaitapvehinhView

IMPLEMENT_DYNCREATE(CBaitapvehinhView, CView)

BEGIN_MESSAGE_MAP(CBaitapvehinhView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CBaitapvehinhView construction/destruction

CBaitapvehinhView::CBaitapvehinhView() noexcept
{// thiet lap toa cac doi tuong de click chuot
	b1.thietlap(160, 20, 190, 40); 
	b2.thietlap(215, 15, 235, 45);
	b3.thietlap(260, 15, 290, 45);
	b4.thietlap(310, 15, 340, 45);
	b5.thietlap(360,15,390,45);

	// cac dieu kien ban dau
	n = 0;
	dkchon = 0;
	dkv = 0;
	m1 = 0; m2 = 0; m3 = 0; m4 = 0; m5 = 0; m6 = 0;
	o1 = 0; o2 = 0; o3 = 0; o4 = 0; o5 = 0;
}

CBaitapvehinhView::~CBaitapvehinhView()
{
}

BOOL CBaitapvehinhView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CBaitapvehinhView drawing

void CBaitapvehinhView::OnDraw(CDC* /*pDC*/)
{
	CBaitapvehinhDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CClientDC pDC(this);
	CBrush *B1, *B2;							//khai bao mau but
	B1 = new CBrush(RGB(90, 90, 90));
	B2 = new CBrush(RGB(236, 236, 236));
	CBrush *olderbrush;						//khai bao mau to
	CPen *pen1, *pen2, *pen3;
	pen1 = new CPen(PS_SOLID, 2, RGB(255, 255, 255));
	pen2 = new CPen(PS_SOLID, 1, RGB(236, 236, 236));

	// 
	menu1.thanhmenu(&pDC);
	menu1.sideba(&pDC);
	bm.omau(&pDC);
	olderbrush = pDC.SelectObject(B1);
	CPen *olderpen;
	olderpen = pDC.SelectObject(pen1);
	b1.hcn(&pDC);
	b2.elipse(&pDC);
	b3.hv(&pDC);
	b4.htron(&pDC);
	b5.tg(&pDC);

	olderbrush = pDC.SelectObject(B2);
	olderpen = pDC.SelectObject(pen2);
	pDC.Rectangle(0, 90, 130, 200);
	// TODO: add draw code for native data here
}


// CBaitapvehinhView printing

BOOL CBaitapvehinhView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CBaitapvehinhView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CBaitapvehinhView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CBaitapvehinhView diagnostics

#ifdef _DEBUG
void CBaitapvehinhView::AssertValid() const
{
	CView::AssertValid();
}

void CBaitapvehinhView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CBaitapvehinhDoc* CBaitapvehinhView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CBaitapvehinhDoc)));
	return (CBaitapvehinhDoc*)m_pDocument;
}
#endif //_DEBUG


// CBaitapvehinhView message handlers

// 
void CBaitapvehinhView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	p1.x = point.x;
	p1.y = point.y; 
	CClientDC pDC(this);

	CPen *pen, *pennn, *penn, *p,*pen1,*pen2,*pen3;				//khai bao but mau
	pen = new CPen(PS_SOLID, 2, RGB(162, 0, 124));
	penn = new CPen(PS_SOLID, 2, RGB(255, 255, 255));
	pennn = new CPen(PS_SOLID, 2, RGB(236, 236, 236));
	pen3 = new CPen(PS_SOLID, 2, RGB(255, 255, 255));
	pen1 = new CPen(PS_SOLID, 1, RGB(255, 255, 255));
	pen2 = new CPen(PS_SOLID, 2, RGB(90, 90, 90));
	CBrush *B11, *B22, *B1, *B2, *B3, *B4, *B0, *B5, *B6;		//khai bao mau to
	B11 = new CBrush(RGB(90, 90, 90));
	B22 = new CBrush(RGB(236, 236, 236));
	B1 = new CBrush(RGB(223, 0, 41));
	B2 = new CBrush(RGB(249, 244, 0));
	B3 = new CBrush(RGB(93, 12, 123));
	B4 = new CBrush(RGB(91, 189, 43));
	B0 = new CBrush(RGB(90, 90, 90));
	B6 = new CBrush(RGB(0, 0, 0));
	B5 = new CBrush(RGB(250, 250, 250));
	CBrush *olderB;
	CPen *older;


	//
	//ve lai cac bieu tuong tren thanh menu
	//------- ve doi tuong hinh chu nhat ----------
	if (b1.chonhinh(p1) == 1)
		{
			dkv = 1;
			o2 = 0; o3 = 0; o4 = 0; o5 = 0;
			if (o1 == 0)
			{

			
			o1 = 1;
			older = pDC.SelectObject(pen);
			olderB = pDC.SelectObject(B11);
			b1.hcn(&pDC);

			older = pDC.SelectObject(penn);
			olderB = pDC.SelectObject(B11);
			b2.elipse(&pDC);
			b3.hv(&pDC);
			b4.htron(&pDC);
			b5.tg(&pDC);

			//Xuat chu tren side
			olderB = pDC.SelectObject(B22);
			older = pDC.SelectObject(penn);
			pDC.Rectangle(0, 67, 129, 90);
			older = pDC.SelectObject(pennn);
			pDC.Rectangle(0, 91, 129, 200);
			CString a;
			a = "Hinh chu nhat";				//Xuat chu khi chon vao bieu tuong
			pDC.SetTextColor(RGB(0, 150, 150));
			pDC.TextOutW(10, 70, a);
			}
			else
			{
				//neu bam lai to lai mau
				o1 = 0;
				older = pDC.SelectObject(penn);
				olderB = pDC.SelectObject(B11);
				b1.hcn(&pDC);
				b2.elipse(&pDC);
				b3.hv(&pDC);
				b4.htron(&pDC);
				b5.tg(&pDC);

				olderB = pDC.SelectObject(B22);
				older = pDC.SelectObject(pennn);
				pDC.Rectangle(0, 90, 130, 200);
			}
		}
	//------- ve doi tuong hinh elipse ------------
	
	if (b2.chonhinh(p1) == 1)
	{
		o1 = 0; o3 = 0; o4 = 0; o5 = 0;
		if (o2 == 0)
		{
			o2 = 1;
			older = pDC.SelectObject(pen);
			olderB = pDC.SelectObject(B11);
			b2.elipse(&pDC);


			older = pDC.SelectObject(penn);
			olderB = pDC.SelectObject(B11);
			b1.hcn(&pDC);
			b3.hv(&pDC);
			b4.htron(&pDC);
			b5.tg(&pDC);

			//Xuat chu tren side
			olderB = pDC.SelectObject(B22);
			older = pDC.SelectObject(penn);
			pDC.Rectangle(0, 67, 129, 90);
			older = pDC.SelectObject(pennn);
			pDC.Rectangle(0, 91, 129, 200);
			CString a;
			a = "Hinh Elipse";				//Xuat chu khi chon vao bieu tuong
			pDC.SetTextColor(RGB(0, 150, 150));
			pDC.TextOutW(10, 70, a);
		}
		else
		{
			//neu bam lai to lai mau
			o2 = 0;
			older = pDC.SelectObject(penn);
			olderB = pDC.SelectObject(B11);
			b1.hcn(&pDC);
			b2.elipse(&pDC);
			b3.hv(&pDC);
			b4.htron(&pDC);
			b5.tg(&pDC);

			olderB = pDC.SelectObject(B22);
			older = pDC.SelectObject(pennn);
			pDC.Rectangle(0, 90, 130, 200);
		}
			
	}
	//------- ve doi tuong hinh vuong -------------
	if (b3.chonhinh(p1) == 1)
	{
		o1 = 0; o2 = 0; o4 = 0; o5 = 0;
		if (o3 == 0)
		{
			o3 = 1;
			older = pDC.SelectObject(pen);
			olderB = pDC.SelectObject(B11);
			b3.hv(&pDC);

			older = pDC.SelectObject(penn);
			olderB = pDC.SelectObject(B11);
			b1.hcn(&pDC);
			b2.elipse(&pDC);
			b4.htron(&pDC);
			b5.tg(&pDC);

			//Xuat chu tren side
			olderB = pDC.SelectObject(B22);
			older = pDC.SelectObject(penn);
			pDC.Rectangle(0, 67, 129, 90);
			older = pDC.SelectObject(pennn);
			pDC.Rectangle(0, 91, 129, 200);
			CString a;
			a = "Hinh Vuong";				//Xuat chu khi chon vao bieu tuong
			pDC.SetTextColor(RGB(0, 150, 150));
			pDC.TextOutW(10, 70, a);
		}
		else
		{
			//neu bam lai to lai mau
			o3 = 0;
			older = pDC.SelectObject(penn);
			olderB = pDC.SelectObject(B11);
			b1.hcn(&pDC);
			b2.elipse(&pDC);
			b3.hv(&pDC);
			b4.htron(&pDC);
			b5.tg(&pDC);

			olderB = pDC.SelectObject(B22);
			older = pDC.SelectObject(pennn);
			pDC.Rectangle(0, 90, 130, 200);
		}
				
	}
	//------- ve doi tuong hinh tron --------------
	if (b4.chonhinh(p1) == 1)
	{
		o1 = 0; o2 = 0; o3 = 0; o5 = 0;
		if (o4 == 0)
		{
			o4 = 1;
			older = pDC.SelectObject(pen);
			olderB = pDC.SelectObject(B11);
			b4.htron(&pDC);

			older = pDC.SelectObject(penn);
			olderB = pDC.SelectObject(B11);
			b1.hcn(&pDC);
			b2.elipse(&pDC);
			b3.hv(&pDC);
			b5.tg(&pDC);

			//Xuat chu tren side
			olderB = pDC.SelectObject(B22);
			older = pDC.SelectObject(penn);
			pDC.Rectangle(0, 67, 129, 90);
			older = pDC.SelectObject(pennn);
			pDC.Rectangle(0, 91, 129, 200);
			CString a;
			a = "Hinh tron";				//Xuat chu khi chon vao bieu tuong
			pDC.SetTextColor(RGB(0, 150, 150));
			pDC.TextOutW(10, 70, a);
		}
		else
		{
			//neu bam lai to lai mau
			o4 = 0;
			older = pDC.SelectObject(penn);
			olderB = pDC.SelectObject(B11);
			b1.hcn(&pDC);
			b2.elipse(&pDC);
			b3.hv(&pDC);
			b4.htron(&pDC);
			b5.tg(&pDC);

			olderB = pDC.SelectObject(B22);
			older = pDC.SelectObject(pennn);
			pDC.Rectangle(0, 90, 130, 200);
		}
					
	}
	//------- ve doi tuong hinh tam giac ----------
	if (b5.chonhinh(p1) == 1)
	{
		o1 = 0; o2 = 0; o3 = 0; o4 = 0;
		if (o5 == 0)
		{
			o5 = 1;
			older = pDC.SelectObject(pen);
			olderB = pDC.SelectObject(B11);
			b5.tg(&pDC);

			older = pDC.SelectObject(penn);
			olderB = pDC.SelectObject(B11);
			b1.hcn(&pDC);
			b2.elipse(&pDC);
			b3.hv(&pDC);
			b4.htron(&pDC);

			//Xuat chu tren side
			olderB = pDC.SelectObject(B22);
			older = pDC.SelectObject(penn);
			pDC.Rectangle(0, 67, 129, 90);
			older = pDC.SelectObject(pennn);
			pDC.Rectangle(0, 91, 129, 200);
			CString a;
			a = "Hinh tam giac";				//Xuat chu khi chon vao bieu tuong
			pDC.SetTextColor(RGB(0, 150, 150));
			pDC.TextOutW(10, 70, a);
		}
		else
		{
			//neu bam lai to lai mau
			o5 = 0;
			older = pDC.SelectObject(penn);
			olderB = pDC.SelectObject(B11);
			b1.hcn(&pDC);
			b2.elipse(&pDC);
			b3.hv(&pDC);
			b4.htron(&pDC);
			b5.tg(&pDC);

			olderB = pDC.SelectObject(B22);
			older = pDC.SelectObject(pennn);
			pDC.Rectangle(0, 90, 130, 200);
		}
						
	}
	//------------------Mauto-----------------------------------------
	//Mau 1
	//6 o mau nho 
	if (point.x > 470 && point.x < 481 && point.y>15 && point.y < 26)
	{
		m2 = 0; m3 = 0; m4 = 0; m5 = 0; m6 = 0;
		older = pDC.SelectObject(pen2);
		olderB = pDC.SelectObject(B0);
		pDC.Rectangle(469, 14, 520, 46);
		if (m1 == 0)
		{
			m1 = 1;
			//doi va to mau 
			older = pDC.SelectObject(pen3);
			olderB = pDC.SelectObject(B1);
			pDC.Rectangle(470, 15, 481, 26);
			//giu lai mau
			older = pDC.SelectObject(pen1);
			olderB = pDC.SelectObject(B2);
			pDC.Rectangle(470, 34, 481, 45);
			olderB = pDC.SelectObject(B3);
			pDC.Rectangle(489, 15, 500, 26);
			olderB = pDC.SelectObject(B4);
			pDC.Rectangle(489, 34, 500, 45);
			olderB = pDC.SelectObject(B5);
			pDC.Rectangle(508, 15, 519, 26); //ve hinh mau trang
			olderB = pDC.SelectObject(B6);
			pDC.Rectangle(508, 34, 519, 45); //ve hinh mau den

		}
		else
		{
			m1 = 0;
			//to lai mau
			mau.maunut(&pDC);
			
		}
	}
	//Mau 2
	if (point.x > 470 && point.x < 481 && point.y>34 && point.y < 45)
	{
		m1 = 0; m3 = 0; m4 = 0; m5 = 0; m6 = 0;
		older = pDC.SelectObject(pen2);
		olderB = pDC.SelectObject(B0);
		pDC.Rectangle(469, 14, 520, 46);
		if (m2 == 0)
		{
			m2 = 1;
			//doi va to mau 
			older = pDC.SelectObject(pen3);
			olderB = pDC.SelectObject(B2);
			pDC.Rectangle(470, 34, 481, 45);

			//giu lai mau
			older = pDC.SelectObject(pen1);
			olderB = pDC.SelectObject(B1);
			pDC.Rectangle(470, 15, 481, 26);
			olderB = pDC.SelectObject(B3);
			pDC.Rectangle(489, 15, 500, 26);
			olderB = pDC.SelectObject(B4);
			pDC.Rectangle(489, 34, 500, 45);
			olderB = pDC.SelectObject(B5);
			pDC.Rectangle(508, 15, 519, 26); //ve hinh mau trang
			olderB = pDC.SelectObject(B6);
			pDC.Rectangle(508, 34, 519, 45); //ve hinh mau den
		}
		else
		{
			m2 = 0;
			//to lai mau
			mau.maunut(&pDC);
			
		}
	}
	//Mau 3
	if (point.x > 489 && point.x < 500 && point.y>15 && point.y < 26)
	{
		m1 = 0; m2 = 0; m4 = 0; m5 = 0; m6 = 0;
		older = pDC.SelectObject(pen2);
		olderB = pDC.SelectObject(B0);
		pDC.Rectangle(469, 14, 520, 46);
		if (m3 == 0)
		{
			m3 = 1;
			//doi va to mau 
			older = pDC.SelectObject(pen3);
			olderB = pDC.SelectObject(B3);
			pDC.Rectangle(489, 15, 500, 26);


			//giu lai mau
			older = pDC.SelectObject(pen1);


			olderB = pDC.SelectObject(B1);
			pDC.Rectangle(470, 15, 481, 26);
			olderB = pDC.SelectObject(B2);
			pDC.Rectangle(470, 34, 481, 45);
			olderB = pDC.SelectObject(B4);
			pDC.Rectangle(489, 34, 500, 45);
			olderB = pDC.SelectObject(B5);
			pDC.Rectangle(508, 15, 519, 26); //ve hinh mau trang
			olderB = pDC.SelectObject(B6);
			pDC.Rectangle(508, 34, 519, 45); //ve hinh mau den

		}
		else
		{
			m3 = 0;
			//to lai mau
			mau.maunut(&pDC);
			
		}
	}
	//Mau 4
	if (point.x > 489 && point.x < 500 && point.y>34 && point.y < 45)
	{
		m1 = 0; m2 = 0; m3 = 0; m5 = 0; m6 = 0;
		older = pDC.SelectObject(pen2);
		olderB = pDC.SelectObject(B0);
		pDC.Rectangle(469, 14, 520, 46);
		if (m4 == 0)
		{
			m4 = 1;
			//doi va to mau 
			older = pDC.SelectObject(pen3);
			olderB = pDC.SelectObject(B4);
			pDC.Rectangle(489, 34, 500, 45);



			//giu lai mau
			older = pDC.SelectObject(pen1);


			olderB = pDC.SelectObject(B1);
			pDC.Rectangle(470, 15, 481, 26);
			olderB = pDC.SelectObject(B2);
			pDC.Rectangle(470, 34, 481, 45);
			olderB = pDC.SelectObject(B3);
			pDC.Rectangle(489, 15, 500, 26);
			olderB = pDC.SelectObject(B5);
			pDC.Rectangle(508, 15, 519, 26); //ve hinh mau trang
			olderB = pDC.SelectObject(B6);
			pDC.Rectangle(508, 34, 519, 45); //ve hinh mau den
		}
		else
		{
			m4 = 0;
			//to lai mau
			mau.maunut(&pDC);
		}
	}
	//Mau 5
	if (point.x > 508 && point.x < 519 && point.y>15 && point.y < 26)
	{
		m1 = 0; m2 = 0; m3 = 0; m4 = 0; m6 = 0;
		older = pDC.SelectObject(pen2);
		olderB = pDC.SelectObject(B0);
		pDC.Rectangle(469, 14, 520, 46);
		if (m5 == 0)
		{
			m5 = 1;
			//doi va to mau 
			older = pDC.SelectObject(pen3);
			olderB = pDC.SelectObject(B5);
			pDC.Rectangle(508, 15, 519, 26); //ve hinh mau trang
			//giu lai mau
			older = pDC.SelectObject(pen1);
			olderB = pDC.SelectObject(B1);
			pDC.Rectangle(470, 15, 481, 26);
			olderB = pDC.SelectObject(B2);
			pDC.Rectangle(470, 34, 481, 45);
			olderB = pDC.SelectObject(B3);
			pDC.Rectangle(489, 15, 500, 26);
			olderB = pDC.SelectObject(B4);
			pDC.Rectangle(489, 34, 500, 45);
			olderB = pDC.SelectObject(B6);
			pDC.Rectangle(508, 34, 519, 45); //ve hinh mau den
		}
		else
		{
			m5 = 0;
			//to lai mau
			mau.maunut(&pDC);
		}
	}
	//Mau 6
	if (point.x > 508 && point.x < 519 && point.y>34 && point.y < 45)
	{
		m1 = 0; m2 = 0; m3 = 0; m4 = 0; m5 = 0;
		older = pDC.SelectObject(pen2);
		olderB = pDC.SelectObject(B0);
		pDC.Rectangle(469, 14, 520, 46);
		if (m6 == 0)
		{
			m6 = 1;
			//doi va to mau 
			older = pDC.SelectObject(pen3);
			olderB = pDC.SelectObject(B6);
			pDC.Rectangle(508, 34, 519, 45); //ve hinh mau den





			//giu lai mau
			older = pDC.SelectObject(pen1);


			olderB = pDC.SelectObject(B1);
			pDC.Rectangle(470, 15, 481, 26);
			olderB = pDC.SelectObject(B2);
			pDC.Rectangle(470, 34, 481, 45);
			olderB = pDC.SelectObject(B3);
			pDC.Rectangle(489, 15, 500, 26);
			olderB = pDC.SelectObject(B4);
			pDC.Rectangle(489, 34, 500, 45);
			olderB = pDC.SelectObject(B5);
			pDC.Rectangle(508, 15, 519, 26); //ve hinh mau trang
		}
		else
		{
			m6 = 0;
			//to lai mau
			mau.maunut(&pDC);
		}
	}
	CView::OnLButtonDown(nFlags, point);
}


void CBaitapvehinhView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	CClientDC pDC(this);
	p2.x = point.x;
	p2.y = point.y;
	 
		
	//----------ve hinh---------------
	if (o1==1)
	{
		//ve hinh chu nhat
								
		if (p1.x > 134 && p1.y > 60 && p2.x > 134 && p2.y > 60) 
		{
			mau.chonmau(m1, m2, m3, m4, m5, m6, &pDC);
			A[n] = new hcn(p1, p2);
			A[n]->vehinh(&pDC); 
			n++;
		}
	}
							
	if (o2==1)
	{
		if (p1.x > 134 && p1.y > 60 && p2.x > 134 && p2.y > 60)
		{
			//ve hinh elipse
			mau.chonmau(m1, m2, m3, m4, m5, m6, &pDC);
			A[n] = new elipse(p1, p2);
			A[n]->vehinh(&pDC);
			n++;
										
		}
	}
								
	if (o3 == 1)
	{
		if (p1.x > 134 && p1.y > 60 && p2.x > 134 && p2.y > 60)
		{
			//ve hinh vuong
			mau.chonmau(m1, m2, m3, m4, m5, m6, &pDC);
			A[n] = new hinhvuong(p1, p2);
			A[n]->vehinh(&pDC);
			n++;
		}
	}
									
	if (o4 == 1)
	{
		if (p1.x > 134 && p1.y > 60 && p2.x > 134 && p2.y > 60)
		{
			//ve hinh tron
			mau.chonmau(m1, m2, m3, m4, m5, m6, &pDC);
			A[n] = new hinhtron(p1, p2);
			A[n]->vehinh(&pDC);
			n++;
		}
	}
										
	if (o5 == 1)
	{
		if (p1.x > 134 && p1.y > 60 && p2.x > 134 && p2.y > 60)
		{
			//ve tam giac
			mau.chonmaupen(m1, m2, m3, m4, m5, m6, &pDC);
			A[n] = new tamgiac(p1, p2);
			A[n]->vehinh(&pDC);
			n++;
		}
	}
	//---------xem lai hinh ve----------
	if (o1==0&&o2==0&&o3==0&&o4==0&&o5==0)
	{
		for (int i = 0; i < n; i++)
			if (A[i]->chonhinh(p1) == 1)
			{
				A[i]->xuatlai(&pDC);
					//mau.chonmau(m1, m2, m3, m4, m5, m6, &pDC);
					//mau.chonmaupen(m1, m2, m3, m4, m5, m6, &pDC);
				//A[i]->vehinh(&pDC);
			}
	}

	
	CView::OnLButtonUp(nFlags, point);
}


void CBaitapvehinhView::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default

	CView::OnMouseMove(nFlags, point);
}

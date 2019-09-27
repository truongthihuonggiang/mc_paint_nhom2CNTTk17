
// BaitapvehinhView.h : interface of the CBaitapvehinhView class
//

#pragma once
#include "hinh.h"
#include "hcn.h"
#include "hinhtron.h"
#include "hinhvuong.h"
#include "tamgiac.h"
#include "elipse.h"
#include "nutbam.h"
#include "menu.h"
#include "tomau.h"

class CBaitapvehinhView : public CView
{
protected: // create from serialization only
	CBaitapvehinhView() noexcept;
	DECLARE_DYNCREATE(CBaitapvehinhView)

// Attributes
public:
	CBaitapvehinhDoc* GetDocument() const;

// Operations
public:
	CPoint p1, p2;
	nutbam b1,b2,b3,b4,b5,bm;
	tomau mau;
	int m1, m2, m3, m4, m5, m6;
	int o1, o2, o3, o4, o5;//dk bam lai chon hinh
	int dkchon,dkv;
	menu menu1;
	hinh *A[500];
	int n;
// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CBaitapvehinhView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // debug version in BaitapvehinhView.cpp
inline CBaitapvehinhDoc* CBaitapvehinhView::GetDocument() const
   { return reinterpret_cast<CBaitapvehinhDoc*>(m_pDocument); }
#endif


#pragma once
class hinh
{
public:
	virtual int dientich();
	virtual int chuvi();
	virtual void vehinh(CClientDC *pDC);
	virtual void xuatlai(CClientDC *pDC);
	virtual int chonhinh(CPoint p);
	virtual void chonmau(int m1, int m2, int m3, int m4, int m5, int m6, CClientDC *pDC);
	virtual void chonmaupen(int m1, int m2, int m3, int m4, int m5, int m6, CClientDC *pDC);
	hinh();
	~hinh();
};


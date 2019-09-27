
// Baitapvehinh.h : main header file for the Baitapvehinh application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CBaitapvehinhApp:
// See Baitapvehinh.cpp for the implementation of this class
//

class CBaitapvehinhApp : public CWinApp
{
public:
	CBaitapvehinhApp() noexcept;


// Overrides
public:

	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CBaitapvehinhApp theApp;

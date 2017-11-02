// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//      are changed infrequently
//

#if !defined(AFX_STDAFX_H__638268A0_DCCB_498E_AEE3_80E7321A7297__INCLUDED_)
#define AFX_STDAFX_H__638268A0_DCCB_498E_AEE3_80E7321A7297__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define VC_EXTRALEAN		// Exclude rarely-used stuff from Windows headers

#include <afxwin.h>         // MFC core and standard components
#include <afxext.h>         // MFC extensions
#include <afxdisp.h>        // MFC Automation classes
#include <afxdtctl.h>		// MFC support for Internet Explorer 4 Common Controls
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>			// MFC support for Windows Common Controls
#include <afxtempl.h>
#endif // _AFX_NO_AFXCMN_SUPPORT
//Project framework headers


#include "ProjectFrameworkCommon.h"


#define _ATL_APARTMENT_THREADED
#include <atlbase.h>
#include <Afxctl.h>

static const GUID CATID_PROJECT_FRAMEWORK_ADDINS =
{ 0x66ebc8d5, 0xa4d0, 0x48c4, { 0x97, 0x8a, 0x56, 0xd1, 0xb3, 0x5e,0x15, 0x7b } };

//You may derive a class from CComModule and use it if you want to override
//something, but do not change the name of _Module


class CProjectFrameworkModule : public CComModule
{
public:
	LONG Unlock();
	LONG Lock();
	LPCTSTR FindOneOf(LPCTSTR p1, LPCTSTR p2);
	DWORD dwThreadID;
	
};
extern CProjectFrameworkModule _Module;
#include <atlcom.h>
#include <atlctl.h>
#include"AddinManager.h"

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__638268A0_DCCB_498E_AEE3_80E7321A7297__INCLUDED_)

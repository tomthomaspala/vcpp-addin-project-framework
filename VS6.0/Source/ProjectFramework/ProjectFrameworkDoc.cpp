// ProjectFrameworkDoc.cpp : implementation of the CProjectFrameworkDoc class
//

#include "stdafx.h"
#include "ProjectFramework.h"

#include "ProjectFrameworkDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CProjectFrameworkDoc

IMPLEMENT_DYNCREATE(CProjectFrameworkDoc, CDocument)

BEGIN_MESSAGE_MAP(CProjectFrameworkDoc, CDocument)
	//{{AFX_MSG_MAP(CProjectFrameworkDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CProjectFrameworkDoc construction/destruction

CProjectFrameworkDoc::CProjectFrameworkDoc()
{
	// TODO: add one-time construction code here

}

CProjectFrameworkDoc::~CProjectFrameworkDoc()
{
}

BOOL CProjectFrameworkDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CProjectFrameworkDoc serialization

void CProjectFrameworkDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CProjectFrameworkDoc diagnostics

#ifdef _DEBUG
void CProjectFrameworkDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CProjectFrameworkDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CProjectFrameworkDoc commands

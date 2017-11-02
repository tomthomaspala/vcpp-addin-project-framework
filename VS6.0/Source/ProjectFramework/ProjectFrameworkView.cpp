// ProjectFrameworkView.cpp : implementation of the CProjectFrameworkView class
//

#include "stdafx.h"
#include "ProjectFramework.h"

#include "ProjectFrameworkDoc.h"
#include "ProjectFrameworkView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CProjectFrameworkView

IMPLEMENT_DYNCREATE(CProjectFrameworkView, CView)

BEGIN_MESSAGE_MAP(CProjectFrameworkView, CView)
	//{{AFX_MSG_MAP(CProjectFrameworkView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CProjectFrameworkView construction/destruction

CProjectFrameworkView::CProjectFrameworkView()
{
	m_strAddinProjectHeading1="ATL COM based Addin / Plugin Framework";
	m_strAddinProjectHeading2="With Dynamic Toolbars and Menus ";
	m_strAddinProjectHeading3="Based on VC++ Addin Architecture";
}

CProjectFrameworkView::~CProjectFrameworkView()
{
}

BOOL CProjectFrameworkView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CProjectFrameworkView drawing

void CProjectFrameworkView::OnDraw(CDC* pDC)
{
	CProjectFrameworkDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	pDC->SetTextColor(RGB(0,0,255)); 
	CFont font;
	VERIFY(font.CreateFont(
	   30,                        // nHeight
	   0,                         // nWidth
	   0,                         // nEscapement
	   0,                         // nOrientation
	   FW_BOLD ,                 // nWeight
	   FALSE,                     // bItalic
	   FALSE,                     // bUnderline
	   0,                         // cStrikeOut
	   ANSI_CHARSET,              // nCharSet
	   OUT_DEFAULT_PRECIS,        // nOutPrecision
	   CLIP_DEFAULT_PRECIS,       // nClipPrecision
	   DEFAULT_QUALITY,           // nQuality
	   DEFAULT_PITCH | FF_SWISS,  // nPitchAndFamily
	   "Arial"));                 // lpszFacename

	// Do something with the font just created...
	CFont* def_font = pDC->SelectObject(&font);
	pDC->TextOut(50,100,m_strAddinProjectHeading1 ,m_strAddinProjectHeading1.GetLength());
	pDC->SetTextColor(RGB(255,0,0)); 
	pDC->TextOut(100,150,m_strAddinProjectHeading2 ,m_strAddinProjectHeading2.GetLength());
	pDC->SetTextColor(RGB(0,0,255));
	pDC->TextOut(100,200,m_strAddinProjectHeading3 ,m_strAddinProjectHeading3.GetLength());
	pDC->SelectObject(def_font);

	// Done with the font.  Delete the font object.
	font.DeleteObject(); 

}

/////////////////////////////////////////////////////////////////////////////
// CProjectFrameworkView printing

BOOL CProjectFrameworkView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CProjectFrameworkView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CProjectFrameworkView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CProjectFrameworkView diagnostics

#ifdef _DEBUG
void CProjectFrameworkView::AssertValid() const
{
	CView::AssertValid();
}

void CProjectFrameworkView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CProjectFrameworkDoc* CProjectFrameworkView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CProjectFrameworkDoc)));
	return (CProjectFrameworkDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CProjectFrameworkView message handlers

void CProjectFrameworkView::OnInitialUpdate() 
{
	CView::OnInitialUpdate();
	
	CProjectFrameworkApp::m_pView=this;
	
}

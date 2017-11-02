// ProjectFrameworkDoc.h : interface of the CProjectFrameworkDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_PROJECTFRAMEWORKDOC_H__BDE6AF21_C97D_4A1B_A60A_3E514C69E980__INCLUDED_)
#define AFX_PROJECTFRAMEWORKDOC_H__BDE6AF21_C97D_4A1B_A60A_3E514C69E980__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CProjectFrameworkDoc : public CDocument
{
protected: // create from serialization only
	CProjectFrameworkDoc();
	DECLARE_DYNCREATE(CProjectFrameworkDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CProjectFrameworkDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CProjectFrameworkDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CProjectFrameworkDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PROJECTFRAMEWORKDOC_H__BDE6AF21_C97D_4A1B_A60A_3E514C69E980__INCLUDED_)

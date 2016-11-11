#pragma once

/////////////////////////////////////////////////////////////////////////////

#include "..\shared\InputListCtrl.h"

/////////////////////////////////////////////////////////////////////////////

class CTransDictionary;
struct DICTITEM;

/////////////////////////////////////////////////////////////////////////////

enum { ENG_COL = 0, TRANS_COL, HINT_COL };

/////////////////////////////////////////////////////////////////////////////
// CTDLTransEditListCtrl

class CTDLTransEditListCtrl : public CInputListCtrl
{
	DECLARE_DYNAMIC(CTDLTransEditListCtrl)

public:
	CTDLTransEditListCtrl();
	virtual ~CTDLTransEditListCtrl();

	void Initialise();
	BOOL RebuildList(const CTransDictionary& dict, BOOL bShowAlternatives = TRUE, const CString& sFilter = _T(""));

protected:
	int OnToolHitTest(CPoint point, TOOLINFO* pTI) const;

protected:
	afx_msg void OnShowTooltip(NMHDR* pNMHDR, LRESULT* pResult);
	DECLARE_MESSAGE_MAP()

protected:
	// Virtual overrides
	int CompareItems(DWORD dwItemData1, DWORD dwItemData2, int nSortColumn);
	COLORREF GetItemBackColor(int nItem, int nCol, BOOL bSelected, BOOL bDropHighlighted, BOOL bWndFocus) const;
	COLORREF GetItemTextColor(int nItem, int nCol, BOOL bSelected, BOOL bDropHighlighted, BOOL bWndFocus) const;

	CString FormatInfoTip(int nItem) const;

	static BOOL MatchesFilter(const DICTITEM* pDI, const CString& sFilter);
};



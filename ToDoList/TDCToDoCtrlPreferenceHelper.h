#if !defined(AFX_TDCTODOCTRLPREFERENCEHELPER_H__F9A9753D_D022_4FC7_B781_DB11A4B4A6E4__INCLUDED_)
#define AFX_TDCTODOCTRLPREFERENCEHELPER_H__F9A9753D_D022_4FC7_B781_DB11A4B4A6E4__INCLUDED_

#pragma once

class CFilteredToDoCtrl;
class CPreferencesDlg;

class CTDCToDoCtrlPreferenceHelper
{
public:
	static void UpdateToDoCtrl(CFilteredToDoCtrl& tdc, const CPreferencesDlg& prefs, const TODOITEM& tdiDefault, 
								BOOL bShowProjectName, BOOL bShowTreeListBar, 
								const CFont& fontMain, CFont& fontTree, CFont& fontComments, BOOL bFirst);
	static void UpdateToDoCtrl(CFilteredToDoCtrl& tdc, const CPreferencesDlg& prefs, 
								BOOL bShowProjectName, BOOL bShowTreeListBar, BOOL bFirst);
	static void UpdateToDoCtrl(CFilteredToDoCtrl& tdc, const CPreferencesDlg& prefs, 
								const CFont& fontMain, CFont& fontTree, CFont& fontComments);

protected:
	static void UpdateToDoCtrlPrefs(CFilteredToDoCtrl& tdc, const CPreferencesDlg& prefs, 
									BOOL bShowProjectName, BOOL bShowTreeListBar, BOOL bFirst);
};

#endif // AFX_TDCTODOCTRLPREFERENCEHELPER_H__F9A9753D_D022_4FC7_B781_DB11A4B4A6E4__INCLUDED_
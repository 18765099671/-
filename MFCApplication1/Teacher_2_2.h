#pragma once


// Teacher_2_2 对话框

class Teacher_2_2 : public CDialog
{
	DECLARE_DYNAMIC(Teacher_2_2)

public:
	Teacher_2_2(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Teacher_2_2();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG11 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};

#pragma once


// Teacher_2_1_1 对话框

class Teacher_2_1_1 : public CDialog
{
	DECLARE_DYNAMIC(Teacher_2_1_1)

public:
	Teacher_2_1_1(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Teacher_2_1_1();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG12 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
};

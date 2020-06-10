#pragma once


// Student_2 对话框

class Student_2 : public CDialog
{
	DECLARE_DYNAMIC(Student_2)

public:
	Student_2(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Student_2();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedCancel();
};

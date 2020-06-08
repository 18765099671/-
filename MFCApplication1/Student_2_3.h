#pragma once


// Student_2_3 对话框

class Student_2_3 : public CDialog
{
	DECLARE_DYNAMIC(Student_2_3)

public:
	Student_2_3(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Student_2_3();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG8 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};

#pragma once


// Student_1 对话框

class Student_1 : public CDialog
{
	DECLARE_DYNAMIC(Student_1)

public:
	Student_1(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Student_1();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
};

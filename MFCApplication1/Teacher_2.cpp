// Teacher_2.cpp: 实现文件
//

#include "pch.h"
#include "MFCApplication1.h"
#include "Teacher_2.h"
#include "afxdialogex.h"
#include "Teacher_2_1.h"
#include "Teacher_2_2.h"
// Teacher_2 对话框

IMPLEMENT_DYNAMIC(Teacher_2, CDialog)

Teacher_2::Teacher_2(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG4, pParent)
{

}

Teacher_2::~Teacher_2()
{
}

void Teacher_2::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Teacher_2, CDialog)
	ON_BN_CLICKED(IDC_BUTTON2, &Teacher_2::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON1, &Teacher_2::OnBnClickedButton1)
END_MESSAGE_MAP()


// Teacher_2 消息处理程序


void Teacher_2::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	//CDialog::OnOK();
	this->ShowWindow(SW_HIDE);
	Teacher_2_1 Dlg3;           // 模态构造对话框类CTipDlg的实例   
	Dlg3.DoModal();
	this->ShowWindow(SW_SHOW);
}


void Teacher_2::OnBnClickedButton1()
{
	//CDialog::OnOK();
	this->ShowWindow(SW_HIDE);
	Teacher_2_2 Dlg3;        // 模态构造对话框类CTipDlg的实例   
	Dlg3.DoModal();
	this->ShowWindow(SW_SHOW);
}

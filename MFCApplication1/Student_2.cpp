// Student_2.cpp: 实现文件
//

#include "pch.h"
#include "MFCApplication1.h"
#include "Student_2.h"
#include "afxdialogex.h"
#include"Student_2_1.h"
#include"Student_2_2.h"
#include"Student_2_3.h"
#include"Student_2_4.h"
// Student_2 对话框

IMPLEMENT_DYNAMIC(Student_2, CDialog)

Student_2::Student_2(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG3, pParent)
{

}

Student_2::~Student_2()
{
}

void Student_2::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Student_2, CDialog)
	ON_BN_CLICKED(IDC_BUTTON1, &Student_2::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON4, &Student_2::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON2, &Student_2::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &Student_2::OnBnClickedButton3)
	ON_BN_CLICKED(IDCANCEL, &Student_2::OnBnClickedCancel)
END_MESSAGE_MAP()


// Student_2 消息处理程序


void Student_2::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	//Dialog::OnOK();
	this->ShowWindow(SW_HIDE);
	Student_2_1 Dlg3;           // 模态构造对话框类CTipDlg的实例   
	Dlg3.DoModal();
	this->ShowWindow(SW_SHOW);
}


void Student_2::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	//CDialog::OnOK();
	this->ShowWindow(SW_HIDE);
	Student_2_2 Dlg3;           // 模态构造对话框类CTipDlg的实例   
	Dlg3.DoModal();
	this->ShowWindow(SW_SHOW);
}


void Student_2::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	//CDialog::OnOK();
	this->ShowWindow(SW_HIDE);
	Student_2_4 Dlg3;           // 模态构造对话框类CTipDlg的实例   
	Dlg3.DoModal();
	this->ShowWindow(SW_SHOW);
}


void Student_2::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	//CDialog::OnOK();
	this->ShowWindow(SW_HIDE);
	Student_2_3 Dlg3;           // 模态构造对话框类CTipDlg的实例   
	Dlg3.DoModal();
	this->ShowWindow(SW_SHOW);
}

extern SOCKET sock;
void Student_2::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	char n = 'q';
	int a1 = send(sock, &n, sizeof(n), 0);
	cout << "返回" << endl;
	CDialog::OnCancel();
	//CDialog::OnCancel();
}

// Student_1.cpp: 实现文件
//

#include "pch.h"
#include "MFCApplication1.h"
#include "Student_1.h"
#include "afxdialogex.h"
#include"Student_2.h"

// Student_1 对话框

IMPLEMENT_DYNAMIC(Student_1, CDialog)

Student_1::Student_1(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG1, pParent)
{

}

Student_1::~Student_1()
{
}

void Student_1::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Student_1, CDialog)
	ON_BN_CLICKED(IDOK, &Student_1::OnBnClickedOk)
END_MESSAGE_MAP()


// Student_1 消息处理程序

#include<iostream>

#include <WinSock2.h>
#include <windows.h>
SOCKET sock;
using namespace std;
void Student_1::OnBnClickedOk()
{
	CString strEDIT1, strEDIT2, strEDIT3;
	sock=Socket_create();
	SetDlgItemText(IDC_STATIC, strEDIT3);
	GetDlgItem(ACCOUNT)->GetWindowText(strEDIT1);
	GetDlgItem(PASSWORD)->GetWindowText(strEDIT2);
	
	char *num = (LPSTR)(LPCTSTR)strEDIT1;
	char *password = (LPSTR)(LPCTSTR)strEDIT2;
	char n[5] ;
	/*long long tnum;
	int tpassword;*/
	/*ifstream in("account_s.txt");
	in >> tnum;
	in >> tpassword;*/
	n[0] = 1;
	if (send(sock, n, strlen(n), 0) == -1) exit(0);
	if (send(sock, num, strlen(num), 0) == -1) exit(0);
	if(send(sock, password, strlen(password), 0)==-1) exit(0);
	char resbuf[5] = {};

	if (recv(sock, resbuf, 5, 0)==-1) exit(0);
	int res;
	 res = (int)resbuf;
	

	if (res!=-1) {
		//页面跳转
		strEDIT3 = "登录成功！";
		SetDlgItemText(IDC_STATIC, strEDIT3);

		CDialog::OnOK();
		//CDialogEx::OnOK();hgg
		Student_2 Dlg3;           // 模态构造对话框类CTipDlg的实例   
		Dlg3.DoModal();
	}
	else {

		//重新输入
		strEDIT3 = "登陆失败，请重试！";
		SetDlgItemText(IDC_STATIC, strEDIT3);
		exit(0);

	}
	// TODO: 在此添加控件通知处理程序代码
	
}

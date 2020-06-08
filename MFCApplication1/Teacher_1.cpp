// Teacher_1.cpp: 实现文件
//

#include "pch.h"
#include "MFCApplication1.h"
#include "Teacher_1.h"
#include "Teacher_2.h"
#include "afxdialogex.h"


// Teacher_1 对话框

IMPLEMENT_DYNAMIC(Teacher_1, CDialog)

Teacher_1::Teacher_1(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG2, pParent)
{

}

Teacher_1::~Teacher_1()
{
}

void Teacher_1::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Teacher_1, CDialog)
	ON_BN_CLICKED(IDOK, &Teacher_1::OnBnClickedOk)
END_MESSAGE_MAP()


// Teacher_1 消息处理程序

#include<iostream>
#include<fstream>
#include <WinSock2.h>
#include <windows.h>
extern SOCKET sock;
extern CString strEDIT3;
using namespace std;
void Teacher_1::OnBnClickedOk()
{
	CString strEDIT1, strEDIT2, strEDIT3;
	Socket_create();
	SetDlgItemText(IDC_STATIC, strEDIT3);
	GetDlgItem(ACCOUNT)->GetWindowText(strEDIT1);
	GetDlgItem(PASSWORD)->GetWindowText(strEDIT2);
	//char num[10], char password[10];
	char* num = (LPSTR)(LPCTSTR)strEDIT1;
	char* password = (LPSTR)(LPCTSTR)strEDIT2;

	//long long tnum;
	//int tpassword;
	/*ifstream in("account_s.txt");
	in >> tnum;
	in >> tpassword;*/
	char n = 'a';
	int a1 = send(sock, &n, strlen(&n), 0);
	int a2 = send(sock, num, strlen(num), 0);
	int a3 = send(sock, password, strlen(password), 0);
	char resbuf[2] = {};
	int a4 = recv(sock, resbuf, 2, 0);
	cout << a1 << "  " << a2 << "  " << a3 << "  " << a4;
	int res;
	res = (int)resbuf;
	/*int iRet;
	send(sock, num, strlen(num), 0);
	send(sock, password, strlen(password), 0);*/

	/*char resbuf[5] = {};
	iRet = recv(sock, resbuf, 5, 0);*/

	if (res != -1) {
		//页面跳转
		strEDIT3 = "登录成功！";
		SetDlgItemText(IDC_STATIC, strEDIT3);

		CDialog::OnOK();
		//CDialogEx::OnOK();
		Teacher_2 Dlg3;           // 模态构造对话框类CTipDlg的实例   
		Dlg3.DoModal();
	}
	else {

		//重新输入
		strEDIT3 = "登陆失败，请重试！";
		SetDlgItemText(IDC_STATIC, strEDIT3);

	}
	// TODO: 在此添加控件通知处理程序代码

}

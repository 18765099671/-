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
	sock = Socket_create();
	//SetDlgItemText(IDC_STATIC, strEDIT3);
	GetDlgItem(ACCOUNT)->GetWindowText(strEDIT1);
	GetDlgItem(PASSWORD)->GetWindowText(strEDIT2);
	string numm = _UnicodeToUtf8(strEDIT1);
	string passs = _UnicodeToUtf8(strEDIT2);
	char first = numm.length();
	char second = passs.length();
	const char* num = numm.c_str();
	const char* password = passs.c_str();
	cout << numm << passs << endl;
	//del(num, nu,2);
	//del(password, pass,6);
	/*for (int i = 0; i < 2; i++) { cout << num[i]; }
	cout << endl;
	for (int i = 0; i < 6; i++) { cout << password[i]; }*/
	char n = 'a';


	int fir=0, seco=0;
	fir = (int)first;
	seco = (int)seco;
	int a1 = send(sock, &n, sizeof(n), 0);
	send(sock, &first, sizeof(first), 0);
	int a2 = send(sock, num, fir, 0);
	send(sock, &second, sizeof(second), 0);
	int a3 = send(sock, password, seco, 0);

	//cout << a1 << "  " << a2 << "  " << a3 << endl;
	char resbuf = { };
	int a4 = recv(sock, &resbuf, 1, 0);
	//cout << a4<<endl;

	if (resbuf != 'n') {
		//页面跳转
		strEDIT3 = "登录成功！";
		SetDlgItemText(IDC_STATIC, strEDIT3);

		CDialog::OnOK();
		Teacher_2 Dlg3;           // 模态构造对话框类CTipDlg的实例   
		Dlg3.DoModal();
	}
	else {

		//重新输入
		strEDIT3 = "登陆失败，请重试！";
		SetDlgItemText(IDC_STATIC, strEDIT3);
		exit(0);

	}
}



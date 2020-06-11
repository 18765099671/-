// Teacher_2_1_1.cpp: 实现文件
//

#include "pch.h"
#include "MFCApplication1.h"
#include "Teacher_2_1_1.h"
#include "afxdialogex.h"


// Teacher_2_1_1 对话框

IMPLEMENT_DYNAMIC(Teacher_2_1_1, CDialog)

Teacher_2_1_1::Teacher_2_1_1(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG12, pParent)
{

}

Teacher_2_1_1::~Teacher_2_1_1()
{
}

void Teacher_2_1_1::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Teacher_2_1_1, CDialog)
	ON_BN_CLICKED(IDC_BUTTON6, &Teacher_2_1_1::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON5, &Teacher_2_1_1::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON4, &Teacher_2_1_1::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON1, &Teacher_2_1_1::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &Teacher_2_1_1::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &Teacher_2_1_1::OnBnClickedButton3)
END_MESSAGE_MAP()


// Teacher_2_1_1 消息处理程序

#include <WinSock2.h>
#include <windows.h>
#include<string>
using namespace std;
extern SOCKET sock;
void Teacher_2_1_1::OnBnClickedButton6()
{
	// TODO: 在此添加控件通知处理程序代码
	char n = 'n';
	int a1 = send(sock, &n, sizeof(n), 0);

	////char n2 = user_type;
	//int a2 = send(sock, &n, sizeof(n), 0);

}


void Teacher_2_1_1::OnBnClickedButton5()
{
	// TODO: 在此添加控件通知处理程序代码
	//CString strEDIT1, strEDIT2, strEDIT3;
	////GetDlgItem(Name)->GetWindowText(strEDIT1);
	////char* name = (LPSTR)(LPCTSTR)strEDIT1;
	////send(sock, name, strlen(name), 0);
	//char number[10] = {};
	//char nam[10] = {};
	//recv(sock, number, 10, 0);
	//recv(sock, nam, 10, 0);
	//string num;
	//string na;
	//string line;
	//CString str ;

	//
	//	line= " " + num + " " + na +"\n";
	//	str = line.c_str();
	//
	//SetDlgItemText(IDC_STATIC1, str);
}


void Teacher_2_1_1::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	//CString strEDIT1, strEDIT2, strEDIT3;
	////GetDlgItem(Name)->GetWindowText(strEDIT1);
	////char* name = (LPSTR)(LPCTSTR)strEDIT1;
	////send(sock, name, strlen(name), 0);
	//char request[10] = {};
	//
	//recv(sock, request, 10, 0);
	//
	//string reques;
	//reques = request;
	//CString str;
	//str = reques.c_str();

	//SetDlgItemText(IDC_STATIC1, str);
}
extern int user_type;

void Teacher_2_1_1::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	

	char n = user_type;
	int a1 = send(sock, &n, sizeof(n), 0);

	char resbuf = { };
	int a4 = recv(sock, &resbuf, 1, 0);
	cout << "a4=" << a4 << endl << "chioce=" << resbuf << endl;
	if (resbuf != 'n')
	{
		CString str;
		str = "审批成功！";
		SetDlgItemText(IDC_STATIC1, str);
	}
	else {
		CString str2;
		str2 = "审批失败！";
		SetDlgItemText(IDC_STATIC1, str2);
	}
}


void Teacher_2_1_1::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	

	char n = 0;
	int a1 = send(sock, &n, sizeof(n), 0);

	char resbuf = { };
	int a4 = recv(sock, &resbuf, 1, 0);
	cout << "a4=" << a4 << endl << "chioce=" << resbuf << endl;
	if (resbuf != 'n')
	{
		CString str;
		str = "审批成功！";
		SetDlgItemText(IDC_STATIC1, str);
	}
	else {
		CString str2;
		str2 = "审批失败！";
		SetDlgItemText(IDC_STATIC1, str2);
	}
}


void Teacher_2_1_1::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	

	char n1 = 4;
	int a2 = send(sock, &n1, sizeof(n1), 0);

	char resbuf = { };
	int a4 = recv(sock, &resbuf, 1, 0);
	cout << "a4=" << a4 << endl << "chioce=" << resbuf << endl;

	if (resbuf != 'n')
	{
		CString str;
		str = "审批成功！";
		SetDlgItemText(IDC_STATIC1, str);
	}
	else {
		CString str2;
		str2 = "审批失败！";
		SetDlgItemText(IDC_STATIC1, str2);
	}
}

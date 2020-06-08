// Student_2_2.cpp: 实现文件
//

#include "pch.h"
#include "MFCApplication1.h"
#include "Student_2_2.h"
#include "afxdialogex.h"


// Student_2_2 对话框

IMPLEMENT_DYNAMIC(Student_2_2, CDialog)

Student_2_2::Student_2_2(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG7, pParent)
{

}

Student_2_2::~Student_2_2()
{
}

void Student_2_2::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Student_2_2, CDialog)
	//ON_BN_CLICKED(IDOK, &Student_2_2::OnBnClickedOk)
	ON_BN_CLICKED(IDC_BUTTON1, &Student_2_2::OnBnClickedButton1)
END_MESSAGE_MAP()


// Student_2_2 消息处理程序

#include <WinSock2.h>
#include <windows.h>
#include<string>
using namespace std;
extern SOCKET sock;
//void Student_2_2::OnBnClickedOk()
//{
//	// TODO: 在此添加控件通知处理程序代码
//	//::OnOK();
//	CString strEDIT1, strEDIT2, strEDIT3;
//	GetDlgItem(Name)->GetWindowText(strEDIT1);
//	char* name = (LPSTR)(LPCTSTR)strEDIT1;
//	send(sock, name, strlen(name), 0);
//	char number[10] = {};
//	char nam[10] = {};
//	char type[10] = {};
//	char start_time[10] = {};
//	char end_time[10] = {};
//	char creater[10] = {};
//	recv(sock, number, 10, 0);
//	recv(sock, nam, 10, 0);
//	recv(sock, type, 10, 0);
//	recv(sock, start_time, 10, 0);
//	recv(sock, end_time, 10, 0);
//	recv(sock, creater, 10, 0);
//	string line = line;
//	string num = number;
//	string na = nam;
//	string ty = type;
//	string start_ti = start_time;
//	string end_ti = end_time;
//	string creat = creater;
//	CString* strEDIT = new CString[100];
//
//
//	line = " " + num + " " + na + " " + ty + " " + start_ti + " " + end_ti + "  " + creat + "\n";
//
//
//
//
//	CString str;
//
//	str += line.c_str();
//	SetDlgItemText(IDC_STATIC1, str);
//}


void Student_2_2::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	CString strEDIT1, strEDIT2, strEDIT3;
	/*GetDlgItem(Name)->GetWindowText(strEDIT1);
	char* name = (LPSTR)(LPCTSTR)strEDIT1;
	send(sock, name, strlen(name), 0);*/
	//char number[10] = {};
	char nam[10] = {};
	/*char type[10] = {};
	char start_time[10] = {};
	char end_time[10] = {};*/
	char state[10] = {};
	//recv(sock, number, 10, 0);
	recv(sock, nam, 10, 0);
	//recv(sock, type, 10, 0);
	//recv(sock, start_time, 10, 0);
	//recv(sock, end_time, 10, 0);
	recv(sock, state, 10, 0);
	string line = line;
	//string num = number;
	string na = nam;
	/*string ty = type;
	string start_ti = start_time;
	string end_ti = end_time;*/
	string stat = state;
	CString* strEDIT = new CString[100];
	line = " " + na + " " + stat + "\n";
	CString str;
	str += line.c_str();;
	SetDlgItemText(IDC_STATIC1, str);
}

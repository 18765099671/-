// Student_2_1.cpp: 实现文件
//

#include "pch.h"
#include "MFCApplication1.h"
#include "Student_2_1.h"
#include "afxdialogex.h"
#include "Student_2_1_1.h"

// Student_2_1 对话框

IMPLEMENT_DYNAMIC(Student_2_1, CDialog)

Student_2_1::Student_2_1(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG5, pParent)
{

}

Student_2_1::~Student_2_1()
{
}

void Student_2_1::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Student_2_1, CDialog)
	ON_BN_CLICKED(IDC_BUTTON1, &Student_2_1::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &Student_2_1::OnBnClickedButton2)
END_MESSAGE_MAP()


// Student_2_1 消息处理程序


void Student_2_1::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialog::OnOK();

	Student_2_1_1 Dlg3;           // 模态构造对话框类CTipDlg的实例   
	Dlg3.DoModal();
}

#include <WinSock2.h>
#include <windows.h>
#include<string>
using namespace std;
extern SOCKET sock;
void Student_2_1::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码

	CString strEDIT1, strEDIT2, strEDIT3;
	GetDlgItem(Name)->GetWindowText(strEDIT1);
	char* name = (LPSTR)(LPCTSTR)strEDIT1;
	char n = b;
	int a1 = send(sock, &n, strlen(&n), 0);
	send(sock, name, strlen(name), 0);
	char number[10] = {};
	char nam[10] = {};
	char type[10] = {};
	char start_time[10] = {};
	char end_time[10] = {};
	char creater[10] = {};
	recv(sock, number, 10, 0);
	recv(sock, nam, 10, 0);
	recv(sock, type, 10, 0);
	recv(sock, start_time, 10, 0);
	recv(sock, end_time, 10, 0);
	recv(sock, creater, 10, 0);
	string line=line ;
	string num=number;
	string na=nam;
	string ty=type ;
	string start_ti =start_time;
	string end_ti =end_time;
	string creat =creater;
	CString* strEDIT = new CString[100];
	

		line = " " + num + " " + na + " " +ty + " " + start_ti + " " + end_ti + "  "+ creat+"\n";


	

	CString str;
	
		str += line.c_str();;
	

	SetDlgItemText(IDC_STATIC1, str);

}

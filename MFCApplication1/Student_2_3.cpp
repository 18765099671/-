// Student_2_3.cpp: 实现文件
//

#include "pch.h"
#include "MFCApplication1.h"
#include "Student_2_3.h"
#include "afxdialogex.h"


// Student_2_3 对话框

IMPLEMENT_DYNAMIC(Student_2_3, CDialog)

Student_2_3::Student_2_3(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG8, pParent)
{

}

Student_2_3::~Student_2_3()
{
}

void Student_2_3::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Student_2_3, CDialog)
	ON_BN_CLICKED(IDC_BUTTON1, &Student_2_3::OnBnClickedButton1)
END_MESSAGE_MAP()


// Student_2_3 消息处理程序

#include <WinSock2.h>
#include <windows.h>
#include<string>
using namespace std;
extern SOCKET sock;
void Student_2_3::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	CString strEDIT1, strEDIT2, strEDIT3;
	/*GetDlgItem(Name)->GetWindowText(strEDIT1);
	char* name = (LPSTR)(LPCTSTR)strEDIT1;
	send(sock, name, strlen(name), 0);*/
	//char number[10] = {};
	char nam[10] = {};
	/*char type[10] = {};
	char start_time[10] = {};*/
	char reason[10] = {};
	char state[10] = {};
	//recv(sock, number, 10, 0);
	recv(sock, nam, 10, 0);
	//recv(sock, type, 10, 0);
	//recv(sock, start_time, 10, 0);
	recv(sock, reason, 10, 0);
	recv(sock, state, 10, 0);
	string line = line;
	//string num = number;
	string na = nam;
	/*string ty = type;
	string start_ti = start_time;*/
	string reaso = reason;
	string stat = state;
	CString* strEDIT = new CString[100];


	line = " " + na + " " + stat + " " + reason + "\n";




	CString str;

	str += line.c_str();;
	SetDlgItemText(IDC_STATIC1, str);
}

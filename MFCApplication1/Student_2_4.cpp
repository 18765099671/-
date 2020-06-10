// Student_2_4.cpp: 实现文件
//

#include "pch.h"
#include "MFCApplication1.h"
#include "Student_2_4.h"
#include "afxdialogex.h"


// Student_2_4 对话框

IMPLEMENT_DYNAMIC(Student_2_4, CDialog)

Student_2_4::Student_2_4(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG9, pParent)
{

}

Student_2_4::~Student_2_4()
{
}

void Student_2_4::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Student_2_4, CDialog)
	//ON_BN_CLICKED(IDC_BUTTON1, &Student_2_4::OnBnClickedButton1)
	ON_BN_CLICKED(IDOK, &Student_2_4::OnBnClickedOk)
END_MESSAGE_MAP()


// Student_2_4 消息处理程序

#include <WinSock2.h>
#include <windows.h>
#include<string>
using namespace std;
extern SOCKET sock;
//void Student_2_4::OnBnClickedButton1()
//{
//	// TODO: 在此添加控件通知处理程序代码
//	// TODO: 在此添加控件通知处理程序代码
//	CString strEDIT1, strEDIT2, strEDIT3;
//	/*GetDlgItem(Name)->GetWindowText(strEDIT1);
//	char* name = (LPSTR)(LPCTSTR)strEDIT1;
//	send(sock, name, strlen(name), 0);*/
//	//char number[10] = {};
//	char nam[10] = {};
//	/*char type[10] = {};
//	char start_time[10] = {};*/
//	char reason[10] = {};
//	char state[10] = {};
//	//recv(sock, number, 10, 0);
//	recv(sock, nam, 10, 0);
//	//recv(sock, type, 10, 0);
//	//recv(sock, start_time, 10, 0);
//	recv(sock, reason, 10, 0);
//	recv(sock, state, 10, 0);
//	string line = line;
//	//string num = number;
//	string na = nam;
//	/*string ty = type;
//	string start_ti = start_time;*/
//	string reaso = reason;
//	string stat = state;
//	CString* strEDIT = new CString[100];
//
//
//	line = " " + na + " " + stat + " " + reason + "\n";
//
//
//
//
//	CString str;
//
//	str += line.c_str();;
//	SetDlgItemText(IDC_STATIC1, str);
//}


void Student_2_4::OnBnClickedOk()
{
	CString strEDIT1, strEDIT2, strEDIT3, strEDIT4, strEDIT5, strEDIT6;
	GetDlgItem(a)->GetWindowText(strEDIT1);
	GetDlgItem(b)->GetWindowText(strEDIT2);
	GetDlgItem(c)->GetWindowText(strEDIT3);
	GetDlgItem(d)->GetWindowText(strEDIT4);
	GetDlgItem(e)->GetWindowText(strEDIT5);
	GetDlgItem(f)->GetWindowText(strEDIT6);
	string aa = _UnicodeToUtf8(strEDIT1);
	string bb = _UnicodeToUtf8(strEDIT2);
	string cc = _UnicodeToUtf8(strEDIT3);
	string dd = _UnicodeToUtf8(strEDIT4);
	string ee = _UnicodeToUtf8(strEDIT5);
	string ff = _UnicodeToUtf8(strEDIT5);

	char al = aa.length();
	char bl = atoi(bb.c_str());
	char cl = cc.length();
	char dl = dd.length();
	char el = ee.length();
	char fl = atoi(ff.c_str());

	const char* name = aa.c_str();
	//const char* type = bb.c_str();
	const char* s_time = cc.c_str();
	const char* e_time = dd.c_str();
	const char* reason = ee.c_str();

	char n = 'h';//要改
	int a1 = send(sock, &n, sizeof(n), 0);
	cout << endl << "a1=" << a1 << endl;
	//projectData* newproject;
	////newproject.
	//int tty = (int)type;
	//newproject->name=name;
	// newproject->startTime= s_time;
	//newproject->endTime=e_time;
	// newproject->creator= reason;
	/*char n = 7;
	int a1 = send(sock, &n, strlen(&n), 0);*/
	send(sock, &fl, sizeof(fl), 0);
	/*string chioce= Receive();
	if (chioce != 'n') {*/
	send(sock, &al, sizeof(al), 0);
	send(sock, name, (int)al, 0);

	send(sock, &bl, sizeof(bl), 0);

	send(sock, &cl, sizeof(cl), 0);
	send(sock, s_time, (int)cl, 0);

	send(sock, &dl, sizeof(dl), 0);
	send(sock, e_time, (int)dl, 0);

	send(sock, &el, sizeof(el), 0);
	send(sock, reason, (int)el, 0);
	CString str;
	str = "项目修改成功！";
	SetDlgItemText(IDC_STATIC1, str);
}

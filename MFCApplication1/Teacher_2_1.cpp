// Teacher_2_1.cpp: 实现文件
//

#include "pch.h"
#include "MFCApplication1.h"
#include "Teacher_2_1.h"
#include "afxdialogex.h"
#include"Teacher_2_1_1.h"


// Teacher_2_1 对话框

IMPLEMENT_DYNAMIC(Teacher_2_1, CDialog)

Teacher_2_1::Teacher_2_1(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG10, pParent)
{

}

Teacher_2_1::~Teacher_2_1()
{
}

void Teacher_2_1::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Teacher_2_1, CDialog)
	ON_BN_CLICKED(IDOK, &Teacher_2_1::OnBnClickedOk)
	ON_BN_CLICKED(IDC_BUTTON1, &Teacher_2_1::OnBnClickedButton1)
END_MESSAGE_MAP()


// Teacher_2_1 消息处理程序

#include <WinSock2.h>
#include <windows.h>
#include<string>
using namespace std;
extern SOCKET sock;
void Teacher_2_1::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	CString strEDIT1, strEDIT2, strEDIT3;
	GetDlgItem(Num)->GetWindowText(strEDIT1);
	char* num = (LPSTR)(LPCTSTR)strEDIT1;
	send(sock, num, strlen(num), 0);
	CDialog::OnOK();
	Teacher_2_1_1 Dlg3;
	Dlg3.DoModal();
}

//#include <WinSock2.h>
//#include <windows.h>
//#include<string>
//using namespace std;
//extern SOCKET sock;
void Teacher_2_1::OnBnClickedButton1()
{
	CString strEDIT1, strEDIT2, strEDIT3;
	//GetDlgItem(Name)->GetWindowText(strEDIT1);
	//char* name = (LPSTR)(LPCTSTR)strEDIT1;
	//send(sock, name, strlen(name), 0);
	char number[10] = {};
	char nam[10] = {};
	char type[10] = {};
	char p_name[10] = {};
	/*char end_time[10] = {};
	char creater[10] = {};*/
	string line[50] ;
	string num[50];
	string na[50];
	string ty[50];
	string p_nam[50];
	int n = 0;
	while (1) {
		recv(sock, number, 10, 0);
		recv(sock, nam, 10, 0);
		recv(sock, type, 10, 0);
		recv(sock, p_name, 10, 0);
		
		
		 num[n] = number;
		 na[n] = nam;
		 ty[n] = type;
		 p_nam[n] = p_name;
		 n++;
	}
	/*recv(sock, end_time, 10, 0);
	recv(sock, creater, 10, 0);*/

	
	/*string end_ti = end_time;
	string creat = creater;*/
	CString* strEDIT = new CString[100];

	for (int i = 0; i < n; i++) {
	line[i] = " " + num[i] + " " + na[i] + " " + p_nam[i] + " " + ty[i] + "\n";
}




	CString str;
	for (int i = 0; i < n; i++) {
		str += line[i].c_str();
	}


	SetDlgItemText(IDC_STATIC1, str);
	// TODO: 在此添加控件通知处理程序代码
}

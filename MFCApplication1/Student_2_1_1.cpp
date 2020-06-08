// Student_2_1_1.cpp: 实现文件
//

#include "pch.h"
#include "MFCApplication1.h"
#include "Student_2_1_1.h"
#include "afxdialogex.h"


// Student_2_1_1 对话框

IMPLEMENT_DYNAMIC(Student_2_1_1, CDialog)

Student_2_1_1::Student_2_1_1(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG6, pParent)
{

}

Student_2_1_1::~Student_2_1_1()
{
}

void Student_2_1_1::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Student_2_1_1, CDialog)
	ON_BN_CLICKED(IDOK, &Student_2_1_1::OnBnClickedOk)
END_MESSAGE_MAP()


// Student_2_1_1 消息处理程序

#include <WinSock2.h>
#include <windows.h>
#include<string>
using namespace std;
extern SOCKET sock;
void Student_2_1_1::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	//CDialog::OnOK();
	CString strEDIT1, strEDIT2, strEDIT3, strEDIT4, strEDIT5;
	GetDlgItem(a)->GetWindowText(strEDIT1);
	GetDlgItem(b)->GetWindowText(strEDIT1);
	GetDlgItem(c)->GetWindowText(strEDIT1);
	GetDlgItem(d)->GetWindowText(strEDIT1);
	GetDlgItem(e)->GetWindowText(strEDIT1);
	char* name = (LPSTR)(LPCTSTR)strEDIT1;
	char* number = (LPSTR)(LPCTSTR)strEDIT1;
	char* classroom = (LPSTR)(LPCTSTR)strEDIT1;
	char* depart = (LPSTR)(LPCTSTR)strEDIT1;
		char* reason = (LPSTR)(LPCTSTR)strEDIT1;
	send(sock, name, strlen(name), 0);
	send(sock, number, strlen(name), 0);
	send(sock, classroom, strlen(name), 0);
	send(sock, depart, strlen(name), 0);
	
	send(sock, reason, strlen(name), 0);
	
}

// Teacher_2_2.cpp: 实现文件
//

#include "pch.h"
#include "MFCApplication1.h"
#include "Teacher_2_2.h"
#include "afxdialogex.h"


// Teacher_2_2 对话框

IMPLEMENT_DYNAMIC(Teacher_2_2, CDialog)

Teacher_2_2::Teacher_2_2(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG11, pParent)
{

}

Teacher_2_2::~Teacher_2_2()
{
}

void Teacher_2_2::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Teacher_2_2, CDialog)
	ON_BN_CLICKED(IDOK, &Teacher_2_2::OnBnClickedOk)
END_MESSAGE_MAP()


// Teacher_2_2 消息处理程序

#include <WinSock2.h>
#include <windows.h>
#include<string>
using namespace std;
extern SOCKET sock;
void Teacher_2_2::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	//CDialog::OnOK();、
	CString strEDIT1, strEDIT2, strEDIT3, strEDIT4, strEDIT5;
	GetDlgItem(a)->GetWindowText(strEDIT1);
	GetDlgItem(b)->GetWindowText(strEDIT1);
	GetDlgItem(c)->GetWindowText(strEDIT1);
	GetDlgItem(d)->GetWindowText(strEDIT1);
	GetDlgItem(e)->GetWindowText(strEDIT1);
	char* name = (LPSTR)(LPCTSTR)strEDIT1;
	char* type = (LPSTR)(LPCTSTR)strEDIT1;
	char* s_time = (LPSTR)(LPCTSTR)strEDIT1;
	char* e_time = (LPSTR)(LPCTSTR)strEDIT1;
	char* reason = (LPSTR)(LPCTSTR)strEDIT1;
	char n = 7;
	int a1 = send(sock, &n, strlen(&n), 0);
	send(sock, name, strlen(name), 0);
	send(sock, type, strlen(name), 0);
	send(sock, s_time, strlen(name), 0);
	send(sock, e_time, strlen(name), 0);
	send(sock, reason, strlen(name), 0);
}

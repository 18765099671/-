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
END_MESSAGE_MAP()


// Teacher_2_1_1 消息处理程序


void Teacher_2_1_1::OnBnClickedButton6()
{
	// TODO: 在此添加控件通知处理程序代码
}

#include <WinSock2.h>
#include <windows.h>
#include<string>
using namespace std;
extern SOCKET sock;
void Teacher_2_1_1::OnBnClickedButton5()
{
	// TODO: 在此添加控件通知处理程序代码
	CString strEDIT1, strEDIT2, strEDIT3;
	//GetDlgItem(Name)->GetWindowText(strEDIT1);
	//char* name = (LPSTR)(LPCTSTR)strEDIT1;
	//send(sock, name, strlen(name), 0);
	char number[10] = {};
	char nam[10] = {};
	recv(sock, number, 10, 0);
	recv(sock, nam, 10, 0);
	string num;
	string na;
	string line;
	CString str ;

	
		line= " " + num + " " + na +"\n";
		str = line.c_str();
	
	SetDlgItemText(IDC_STATIC1, str);
}


void Teacher_2_1_1::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	CString strEDIT1, strEDIT2, strEDIT3;
	//GetDlgItem(Name)->GetWindowText(strEDIT1);
	//char* name = (LPSTR)(LPCTSTR)strEDIT1;
	//send(sock, name, strlen(name), 0);
	char request[10] = {};
	
	recv(sock, request, 10, 0);
	
	string reques;
	reques = request;
	CString str;
	str = reques.c_str();

	SetDlgItemText(IDC_STATIC1, str);
}

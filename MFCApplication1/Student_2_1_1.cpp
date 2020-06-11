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
	ON_BN_CLICKED(IDC_BUTTON1, &Student_2_1_1::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &Student_2_1_1::OnBnClickedButton2)
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
	/*CString strEDIT1, strEDIT2, strEDIT3, strEDIT4, strEDIT5;
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
	
	send(sock, reason, strlen(name), 0);*/
	
}


void Student_2_1_1::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	CString strEDIT1, strEDIT2, strEDIT3;
	GetDlgItem(c)->GetWindowText(strEDIT1);
	GetDlgItem(d)->GetWindowText(strEDIT2);
	string cc = _UnicodeToUtf8(strEDIT1);
	string dd = _UnicodeToUtf8(strEDIT2);
	char cl = cc.length();
	char dl = atoi(dd.c_str());
	const char* f_len = dd.c_str();
	char n = 'n';
	int a1 = send(sock, &n, sizeof(n), 0);
	send(sock, &cl, sizeof(cl), 0);
	send(sock, f_len, (int)f_len, 0);
	send(sock, &dl, sizeof(dl), 0);

	char resbuf = { };
	int a4 = recv(sock, &resbuf, 1, 0);
	cout << "a4=" << a4 << endl << "chioce=" << resbuf << endl;
	if (resbuf != 'n')
	{
		CString str;
		str = "文件上传成功！";
		SetDlgItemText(IDC_STATIC1, str);
	}
	else {
		CString str2;
		str2 = "文件上传失败！";
		SetDlgItemText(IDC_STATIC1, str2);
	}

}


void Student_2_1_1::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	CString strEDIT1, strEDIT2, strEDIT3;
	GetDlgItem(a)->GetWindowText(strEDIT1);
	GetDlgItem(b)->GetWindowText(strEDIT2);
	string aa = _UnicodeToUtf8(strEDIT1);
	string bb = _UnicodeToUtf8(strEDIT2);
	char al = atoi(aa.c_str());
	char bl = atoi(bb.c_str());
	char n = 'k';
	int a1 = send(sock, &n, sizeof(n), 0);
	int a2 = send(sock, &al, sizeof(al), 0);
	//cout << "a2=" << a2 << "num1=" << l << "num2=" << (int)fl << "size=" << sizeof(fl) << endl;
	int a3 = send(sock, &bl, sizeof(bl), 0);
	//cout << "a2=" << a2 << "num1=" << fl << "num2=" << (int)fl << "size=" << sizeof(fl) << endl;
	char resbuf = { };
	int a4 = recv(sock, &resbuf, 1, 0);
	cout << "a4=" << a4 << endl << "chioce=" << resbuf << endl;

	if (resbuf != 'n')
	{
		CString str;
		str = "项目申请成功！";
		SetDlgItemText(IDC_STATIC1, str);
	}
	else {
		CString str2;
		str2 = "项目申请失败！";
		SetDlgItemText(IDC_STATIC1, str2);
	}


}

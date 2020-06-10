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
#include<iostream>
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
	string nam = _UnicodeToUtf8(strEDIT1);
	char first = nam.length();
	const char* name = nam.c_str();
	//char* name = (LPSTR)(LPCTSTR)strEDIT1;

	char n = 'b';
	int a1 = send(sock, &n, sizeof(n), 0);
	//cout <<endl<<"a1=" <<a1<<endl;

	int fir = 0;
	fir = (int)first;
	//cout << "number=" << fir << endl;
	int a2 = send(sock, &first, 1, 0);
	int a3=send(sock, name, fir, 0);
	//cout << endl << "a2=" << a2 << endl << "a3=" << a3 << endl;
	
	char resbuf = { };
	int a4 = recv(sock, &resbuf, 1, 0);
	//cout << "a4=" << a4 << endl <<"chioce="<<resbuf<< endl;
	if (resbuf != 'n') 
	{
		
		//int sec = 0;
		//char second;
		///*int a5=*/recv(sock, &second, sizeof(second), 0);
		////cout << "a5=" << a5 << endl;
		//sec = (int)second;
		///cout << "sec:"<<sec << endl;
		//char* result=new char [1] ;
		//cout << "strlen(result):" <<strlen(result) << endl;
		///*int a6=*/recv(sock, result, sec, 0);
		//cout << "sec1:" << sec << endl;
		//cout << "a6=" << a6 << endl;
		//cout <<"result:"<< result<<endl;
		//cout << "strlen(result):" << strlen(result)<<endl;
		//Receive();
		string number = to_string(Receive_number());
		//Receive();
		string name = Receive();
		//Receive();
		string type = to_string(Receive_number());
		//Receive();
		string startTime = Receive();
		//Receive();
		string endTime = Receive();
		//Receive();
		string description = Receive();
		//Receive();
		string  creator = Receive();
		string line = "        " + number + "               " + name + "              " + type + "             " + startTime + "             " + endTime + "           " + description;
		CString str;
		str = line.c_str();
		SetDlgItemText(IDC_STATIC1, str);
		//int a8 = recv(sock, &second, sizeof(second), 0);
		////cout << "a8=" << a8 << endl;
		//sec = (int)second;
		////cout << "sec2:" << sec << endl;
		//char* result1 = new char[sec];
		////cout << "strlen(result1):" << strlen(result1) << endl;
		//int a7 = recv(sock, result1, sec, 0);
		//cout << "a7=" << a7 << endl;
		//cout << result1 << endl;
		//projectData* newproject;
		//projectData* newprojectd
		//newproject = (projectData*)result;


		///*recv(sock, number, 10, 0);
		//recv(sock, na, 10, 0);
		//recv(sock, type, 10, 0);
		//recv(sock, start_time, 10, 0);
		//recv(sock, end_time, 10, 0);
		//recv(sock, creater, 10, 0);*/
		//string line;
		//int nn = newproject->number;
		//int tty = newproject->type;
		//string num = to_string(nn);//newproject->number;
		////string na = newproject->name;
		//string ty = to_string(tty);//newproject->type;
		//string start_ti = newproject->startTime;
		//string end_ti = newproject->endTime;
		//string creat = newproject->creator;
		//string des = newproject->description;
		///*CString* strEDIT = new CString[100];*/
		//line = " " + num /*+ " " + na*/ + " " + ty + " " + start_ti + " " + end_ti + "  " + creat  +" " + des + " " + "\n";
		//cout << line;
		//string line = result;
		//line = line + "\0";
		//string line2 = result1;
		//
		//cout << line;
		
	}

}

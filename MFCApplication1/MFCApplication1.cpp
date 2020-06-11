
// MFCApplication1.cpp: 定义应用程序的类行为。
//

#include "pch.h"
#include "framework.h"
#include "MFCApplication1.h"
#include "MFCApplication1Dlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication1App

BEGIN_MESSAGE_MAP(CMFCApplication1App, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// CMFCApplication1App 构造

CMFCApplication1App::CMFCApplication1App()
{
	// 支持重新启动管理器
	m_dwRestartManagerSupportFlags = AFX_RESTART_MANAGER_SUPPORT_RESTART;

	// TODO: 在此处添加构造代码，
	// 将所有重要的初始化放置在 InitInstance 中
}


// 唯一的 CMFCApplication1App 对象

CMFCApplication1App theApp;


// CMFCApplication1App 初始化
#include <WinSock2.h>
#include <windows.h>
#include <iostream>
using namespace std;
#pragma comment(lib,"ws2_32.lib")
#pragma warning(disable:4996)
SOCKET Socket_create() {
	int iRet;
	CString strEDIT3;

	WORD sockVersion = MAKEWORD(2, 2);
	WSADATA wsaData;
	if (WSAStartup(sockVersion, &wsaData) != 0)
	{
		exit(0);
	}

	SOCKET sock = socket(AF_INET, SOCK_STREAM, 0); //不用声明tcp
		//2、连接服务器，绑定网络端口
	sockaddr_in sin = {};
	sin.sin_family = AF_INET;								//ipv4
	sin.sin_port = htons(12345);								//host to net  unsigned short   服务器端口号
	sin.sin_addr.S_un.S_addr = inet_addr("106.13.89.47");		//服务器地址;
	iRet = connect(sock, (sockaddr*)&sin, sizeof(sockaddr_in));
	if (iRet == SOCKET_ERROR)
	{
		exit(0);//strEDIT3 = " Fail";
	}
	else
	{
		strEDIT3 = "Success" ;
	}
	return sock;
	
	
}
string _UnicodeToUtf8(CString Unicodestr)
{
	wchar_t* unicode = Unicodestr.AllocSysString();
	int len;
	len = WideCharToMultiByte(CP_UTF8, 0, unicode, -1, NULL, 0, NULL, NULL);
	char* szUtf8 = (char*)malloc(len + 1);
	memset(szUtf8, 0, len + 1);
	WideCharToMultiByte(CP_UTF8, 0, unicode, -1, szUtf8, len, NULL, NULL);
	string result = szUtf8;
	free(szUtf8);
	return result;
}
BOOL CMFCApplication1App::InitInstance()
{
	
	// 如果一个运行在 Windows XP 上的应用程序清单指定要
	// 使用 ComCtl32.dll 版本 6 或更高版本来启用可视化方式，
	//则需要 InitCommonControlsEx()。  否则，将无法创建窗口。
	INITCOMMONCONTROLSEX InitCtrls;
	InitCtrls.dwSize = sizeof(InitCtrls);
	// 将它设置为包括所有要在应用程序中使用的
	// 公共控件类。
	InitCtrls.dwICC = ICC_WIN95_CLASSES;
	InitCommonControlsEx(&InitCtrls);

	CWinApp::InitInstance();


	AfxEnableControlContainer();

	// 创建 shell 管理器，以防对话框包含
	// 任何 shell 树视图控件或 shell 列表视图控件。
	CShellManager *pShellManager = new CShellManager;

	// 激活“Windows Native”视觉管理器，以便在 MFC 控件中启用主题
	CMFCVisualManager::SetDefaultManager(RUNTIME_CLASS(CMFCVisualManagerWindows));

	// 标准初始化
	// 如果未使用这些功能并希望减小
	// 最终可执行文件的大小，则应移除下列
	// 不需要的特定初始化例程
	// 更改用于存储设置的注册表项
	// TODO: 应适当修改该字符串，
	// 例如修改为公司或组织名
	SetRegistryKey(_T("应用程序向导生成的本地应用程序"));

	CMFCApplication1Dlg dlg;
	m_pMainWnd = &dlg;
	INT_PTR nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
		// TODO: 在此放置处理何时用
		//  “确定”来关闭对话框的代码
	}
	else if (nResponse == IDCANCEL)
	{
		// TODO: 在此放置处理何时用
		//  “取消”来关闭对话框的代码
	}
	else if (nResponse == -1)
	{
		TRACE(traceAppMsg, 0, "警告: 对话框创建失败，应用程序将意外终止。\n");
		TRACE(traceAppMsg, 0, "警告: 如果您在对话框上使用 MFC 控件，则无法 #define _AFX_NO_MFC_CONTROLS_IN_DIALOGS。\n");
	}

	// 删除上面创建的 shell 管理器。
	if (pShellManager != nullptr)
	{
		delete pShellManager;
	}

#if !defined(_AFXDLL) && !defined(_AFX_NO_MFC_CONTROLS_IN_DIALOGS)
	ControlBarCleanUp();
#endif

	// 由于对话框已关闭，所以将返回 FALSE 以便退出应用程序，
	//  而不是启动应用程序的消息泵。
	return FALSE;
}
extern SOCKET sock;
#include<stdio.h>
string Receive()
{
	int sec = 0;
	char second;
	int a1 = recv(sock, &second, sizeof(second), 0);
	sec = (int)second;
	cout << "数字返回值：" << a1 << "   数字：" << sec << endl;
	char* result = new char [sec];
	memset(result,0, strlen(result));
	cout << strlen(result)<<endl;
	int a2 = recv(sock, result, sec, 0);
	string re = result;
	delete[]result;
	re.substr(0, sec-1);
	
	cout << "解后大小" <<re.length()<< endl;
	//const char*  resul = re.c_str();
	fflush(stdout);
	cout << "数据返回值：" << a2 << "   数据：" <<re<< endl;
	return re;

};
int Receive_number()
{
	int sec = 0;
	char second;
	int a1 = recv(sock, &second, sizeof(second), 0);
	sec = (int)second;
	cout << "数字返回值：" << a1 << "   数字：" << sec << endl;
	/*char* result = new char[sec];
	int a2 = recv(sock, result, sec, 0);
	cout << "数据返回值：" << a2 << "数据：" << result << endl;*/
	return sec;

};
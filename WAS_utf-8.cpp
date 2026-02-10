#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int selactive,sellan,sele;
int main()
{
    cout<<"Windows Activate Tool V0.1"<<endl;
    cout<<"Please select your language:"<<endl;
    cout<<"1.简体中文 2.English 3.繁體中文(台灣)"<<endl;
    cin>>sellan;
    if(sellan==1)
    {
        cout<<"欢迎使用Windows!您想使用何种方式激活Windows?"<<endl;
        cout<<"1:使用产品密钥激活Windows 2:使用MAS激活Windows(可能违法) 3:购买Windows"<<endl;
        cout<<"请输入对应选项的数字:";
        cin>>selactive;
        if(selactive==1)
        {
            cout<<"请在稍后弹出的界面中选择“更改产品密钥”或“更改”,并输入密钥。"<<endl;
            cout<<"本程序将打开一个页面,请按任意键继续。"<<endl;
            system("pause");
            system("slui 3");
        }
        else if(selactive==2)
        {
            cout<<"正在下载MAS,程序将自动打开"<<endl;
            string scriptUrl = "https://get.activated.win";
            string command = "powershell -Command \"irm '" + scriptUrl + "' | Invoke-Expression\""; 
            system(command.c_str()); 
            system("pause");
        }
        else if(selactive==3) {
            cout<<"本应用将打开一个网页,请按任意键继续。"<<endl;
            system("pause");
            ShellExecuteA(
            NULL,
            "open",
            "https://www.microsoftstore.com.cn/windows/windows-11-home?Icid=ZHCN_windowscategory_button_windows11home_202204",
            NULL,
            NULL,
            SW_SHOWNORMAL
            );
        }
        else
        {
            cout<<"对不起,您选择的选项无效。请重新打开程序输入"<<endl;
            system("pause");
            return 0;
        }
    }
    else if(sellan==2)
    {
        cout << "Welcome to Windows! How would you like to activate Windows?" << endl;
        cout << "1: Activate Windows using a product key 2: Activate Windows using MAS(Potentially illegal) 3: Purchase Windows" << endl;
        cout << "Please enter the corresponding option number:";
        cin >> selactive;
        if(selactive == 1)
        {
            cout << "In the upcoming interface, select 'Change Product Key' or 'Change', then enter the key." << endl;
            cout << "This program will open a page. Press any key to continue." << endl;
            system("pause");
            system("slui 3");
        }
        else if(selactive == 2)
        {
            cout << "Downloading MAS, program will open automatically." << endl;
            string scriptUrl = "https://get.activated.win ";
            string command = "powershell -Command \"irm '" + scriptUrl + "' | Invoke-Expression\"";
            system(command.c_str());
            system("pause");
        }
        else if(selactive==3) 
        {
            cout<<"Please select a edition.1.Pro 2.Home"<<endl<<"Your selection:";
            cin>>sele;
            cout<<"This application will open a webpage.Press any key to continue."<<endl;
            system("pause");
            if(sele==1)
            {
                ShellExecuteA(
                NULL,
                "open",
                "https://www.microsoft.com/en-us/d/windows-11-pro/dg7gmgf0d8h4",
                NULL,
                NULL,
                SW_SHOWNORMAL
                );
            }
            else if(sele==2)
            {

                ShellExecuteA(
                NULL,
                "open",
                "https://www.microsoft.com/en-us/d/windows-11-home/dg7gmgf0krt0",
                NULL,
                NULL,
                SW_SHOWNORMAL
                );
            }
        }
        else
        {
            cout << "Sorry, the option you selected is invalid. Please restart the program and re-enter your selection.”"<<endl;
            system("pause");
            return 0;
        }
    }
    else if(sellan==3)
    {
        cout << "歡迎使用 Windows!您想使用何種方式啟用 Windows?" << endl;
        cout << "1:使用產品金鑰啟用 Windows 2:使用 MAS 啟用 Windows(可能違法) 3:購買 Windows" << endl;
        cout << "請輸入對應選項的數字：";
        cin >> selactive;
        if(selactive == 1)
        {
            cout << "請在稍後彈出的介面中選擇「變更產品金鑰」或「變更」，並輸入金鑰。" << endl;
            cout << "本程式將開啟一個頁面。請按任意鍵繼續。" << endl;
            system("pause");
            system("slui 3");
        }
        else if(selactive == 2)
        {
            cout << "正在下載 MAS,程式將自動開啟" << endl;
            string scriptUrl = "https://get.activated.win ";
            string command = "powershell -Command \"irm '" + scriptUrl + "' | Invoke-Expression\"";
            system(command.c_str());
            system("pause");
        }
        else if(selactive == 3)
        {
            cout<<"請選擇版本。1.專業版 2.家用版"<<endl<<"您的選擇：";
            cin>>sele;
            cout<<"此應用程式將開啟一個網頁。請按任意鍵繼續。"<<endl;
            system("pause");
            if(sele==1)
            {
                ShellExecuteA(
                NULL,
                "open",
                "https://www.microsoft.com/zh-tw/d/windows-11-pro/dg7gmgf0d8h4 ",
                NULL,
                NULL,
                SW_SHOWNORMAL
                );
            }
            else if(sele==2)
            {

                ShellExecuteA(
                NULL,
                "open",
                "https://www.microsoft.com/zh-tw/d/windows-11-home/dg7gmgf0krt0 ",
                NULL,
                NULL,
                SW_SHOWNORMAL
                );
            }
        }
        else
        {
            cout << "對不起，您選擇的選項無效。請重新啟動程式並重新輸入您的選擇。"<<endl;
            system("pause");
            return 0;
        }
    }
    else
    {
        cout << "Sorry, the option you selected is invalid. Please restart the program and re-enter your selection.”"<<endl;
        system("pause");
        return 0;
    }
    return 0;
}
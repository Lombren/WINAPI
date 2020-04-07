#include<Windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInst, LPSTR lpCmdLine, int nCmdShow)
{
	MessageBox(NULL, "Hello WinAPI!", "Privet", MB_OK | MB_ICONINFORMATION);
		//ANSI- ASCII
		//UNICODE =>prioritet
	return 0;
}
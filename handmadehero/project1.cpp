#include <Windows.h>

void foo(void)
{
	Foo = "This is the first thing we have actually printed.\n";
	OutputDebugStringA(
		"Line 0\\Line 1\n");
}
int CALLBACK WinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR lpCmdLine,
	int nCmdShow)
{
	foo();
}
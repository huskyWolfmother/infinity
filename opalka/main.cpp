#include <iostream>
#include <windows.h>

int main()
{
	int n = 0;
	while (true)
	{
		std::cout << n++ << ' ';
		Sleep(1000);
	}
}
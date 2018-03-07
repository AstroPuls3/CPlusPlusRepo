#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "Red text" << endl;
	SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	int b = 0;
	int max = 0;
	cout << "Enter max value: ";
	cin >> max;
	for (int i = 0; i < max; i += 2)
	{
		int input; 
		cin >> input;
		b += input;
	}
	SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	cout << b << endl;

	system("pause");
	return 0;
}
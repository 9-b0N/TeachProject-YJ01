#include "KeyInput.h"
#include <iostream>
#include <conio.h>
using namespace std;

int KeyInput::inputAnswerWait(int s, int d)
{
	int answer;
	while (1)
	{
		cin >> answer;
		if (s <= answer && answer <= d)
			break;
		else
			cout << "�߸��� �Է��Դϴ�." << endl;
	}
	return answer;
}

int KeyInput::inputKey()
{
	if (_kbhit())
	{
		return _getch();
	}
	return -1;
}


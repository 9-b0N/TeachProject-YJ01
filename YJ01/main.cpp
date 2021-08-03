#include <iostream>
#include <windows.h>
#include "KeyInput.h"
#include "GameStart.h"
using namespace std;

KeyInput ki;
GameStart gs;

void title();

void tutorial()
{
	system("cls");
	cout << "======================================================" << endl;
	cout << "O" << endl;
	cout << "I" << "<=�÷��̾�" << endl;
	cout << "------------------------------------------------------" << endl;
	cout << "A" << endl;
	cout << "x" << "<=��ֹ�" << endl;
	cout << "------------------------------------------------------" << endl;
	cout << "Ű���� ����Ű�� �̵��մϴ�." << endl;
	cout << "Ű���� aŰ�� ��ֹ��� �μ� �� �ֽ��ϴ�." << endl;
	cout << "------------------------------------------------------" << endl;
	cout << "�ƹ� Ű�� ������ Ʃ�丮�� ����" << endl;
	cout << "======================================================" << endl;
	while (1)
		if (ki.inputKey() != -1) break;
	title();
}

void title()
{
	system("cls");
	int answer;
	cout << "   _____            __  __  ______ \n  / ____|    /\\    |  \\/  ||  ____|\n | |  __    /  \\   | \\  / || |__   \n | | |_ |  / /\\ \\  | |\\/| ||  __|  \n | |__| | / ____ \\ | |  | || |____ \n  \\_____|/_/    \\_\\|_|  |_||______|" << endl;
	cout << "���� : ������, ������" << endl;
	cout << "1. ����" << endl;
	cout << "2. Ʃ�丮��" << endl;
	cout << "3. ����" << endl;
	answer = ki.inputAnswerWait(1, 3);
	if (answer == 1)
		gs.run();
	else if (answer == 2)
		tutorial();
	else if (answer == 3)
		return;
}

void start()
{
	title();
}



int main()
{
	start();
	return 0;
}
#include <iostream>
#include <conio.h>

using namespace std;

void elevator(int floor)
{
	if (floor == 0)return;
	
	cout << floor /*<< endl*/;
	elevator(floor - 1);
	cout << floor /*<< endl*/;
}

void main()
{
	setlocale(LC_ALL, "Rus");
	system("COLOR 0A");
	int n = 2000; // ����� �����
	/*cout << "�� ����� �� �����?"; cin >> n;*/
	elevator(n);
	





	//cout << "Hello World" << endl;
	//cout << "��� ������ ������� Esc, ��� ����������� ������� ����� �������. " << endl;
	//if(_getch()!= 27) main();

}

//if (floor == 0)return;
//
//cout << floor << endl;
//elevator(floor - 1);
//cout << floor << endl;
//}
//
//void main()
//{
//	setlocale(LC_ALL, "Rus");
//	system("COLOR 0A");
//	int n; // ����� �����
//	cout << "�� ����� �� �����?"; cin >> n;
//	elevator(n);
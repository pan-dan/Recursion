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
	int n = 2000; // номер этажа
	/*cout << "На каком вы этаже?"; cin >> n;*/
	elevator(n);
	





	//cout << "Hello World" << endl;
	//cout << "Для выхожа нажмите Esc, для продолжения нажмите любую клавишу. " << endl;
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
//	int n; // номер этажа
//	cout << "На каком вы этаже?"; cin >> n;
//	elevator(n);
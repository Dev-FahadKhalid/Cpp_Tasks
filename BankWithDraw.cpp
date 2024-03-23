#include<iostream>
using namespace std;
void main()
{
	int Tray_1, Tray_2, Tray_3, With_draw;

	cout << "Enter your amount withdrawn:" << endl;
	cin >> With_draw;
	cout << "\n Your amount witdrawed:" << With_draw << endl;

	Tray_1 = With_draw / 5000;
	With_draw = With_draw % 5000;

	Tray_2 = With_draw / 1000;
	With_draw = With_draw % 1000;

	Tray_3 = With_draw / 500;

	cout << Tray_1 << "Notes of Tray 1" << endl;
	cout << Tray_2 << "Notes of Tray 2" << endl;
	cout << Tray_3 << "Notes of Tray 3" << endl;

	system("pause");
}
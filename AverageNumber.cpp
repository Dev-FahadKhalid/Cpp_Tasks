#include<iostream>
using namespace std;
void main()
{
	int Innings, TotalRuns;
	float Average;

	cout << "Enter the Numbers of Innings played by cricketer:" << endl;
	cin >> Innings;

	cout << "\n Enter the value of Total runs scored in an Innings:" << endl;
	cin >> TotalRuns;

	Average = TotalRuns / Innings;

	cout << "\n Average Runs scored by the cricketer:";
	cout << "\n Average = TotalRuns / Innings  " << endl << Average;

	system("pause");
}
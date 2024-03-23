#include<iostream>
using namespace std;
void main()
{
	int Age;
	cout << "Enter your Age:";
	cin >> Age;
	if (Age >= 18)
	{
		cout << "\n Congratulations! You are Eligible for NIC idcard.";
	}
	if (Age < 18)
	{
		cout << "\n Sorry! You are NotEligible for NIC idcard.\n Minimum age required is 18.";
	}
	system("pause");
}
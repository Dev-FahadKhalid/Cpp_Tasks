#include<iostream>
using namespace std;
void main()
{
	double num1, num2, num3;
	cout << "Enter Three Numbers:" << endl;
	cin >> num1 >> num2 >> num3;
	cout << "\n Ascending order is:" << endl;
	if (num1 < num2 && num1 < num3)
	{
		cout << num1 << ",";

		if (num2 > num1 && num2 < num3)
		{
			cout << num2 << ",";
		}
		else if (num3 > num1 && num3 < num2)
		{
			cout << num3 << ",";
		}

		if (num2 > num1 && num2 > num3)
		{
			cout << num2 << ",";
		}
		else if (num3 > num1 && num3 > num2)
		{

			cout << num3;
		}
	}
	else if (num2 < num1 && num2 < num3)
	{
		cout << num2 << ",";

		if (num1 > num2 && num1 < num3)
		{
			cout << num1 << ",";
		}
		else if (num3 > num2 && num3 < num1)
		{
			cout << num3 << ",";
		}
		if (num1 > num2 && num1 > num3)
		{
			cout << num1 << ",";
		}
		else if (num3 > num2 && num3 > num1)
		{

			cout << num3 << ",";
		}
	}
	else if (num3 < num1 && num3 < num2)
	{
		cout << num3 << ",";

		if (num1 > num3 && num1 < num2)
		{
			cout << num1 << ",";
		}
		else if (num2 > num3 && num2 < num1)
		{
			cout << num2 << ",";
		}
		if (num1 > num3 && num1 > num2)
		{

			cout << num1 << ",";
		}
		else if (num2 > num3 && num2 > num1)
		{
			cout << num2 << ",";
		}
	}
	cout << "\n Descending order is:" << endl;
	if (num1 > num2 && num1 > num3)
	{
		cout << num1 << ",";

		if (num2 < num1 && num2 > num3)
		{
			cout << num2 << ",";
		}
		else if (num3 < num1 && num3 > num2)
		{
			cout << num3 << ",";
		}
		if (num2 < num1 && num2 < num3)
		{
			cout << num2 << ",";
		}
		else if (num3 < num1 && num3 < num2)
		{

			cout << num3;
		}
	}
	else if (num2 > num1 && num2 > num3)
	{
		cout << num2 << ",";

		if (num1 < num2 && num1 > num3)
		{
			cout << num1 << ",";
		}
		else if (num3 < num2 && num3 > num1)
		{
			cout << num3 << ",";
		}
		if (num1 < num2 && num1 < num3)
		{
			cout << num1 << ",";
		}
		else if (num3 < num2 && num3 < num1)
		{

			cout << num3;
		}
	}
	else if (num3 > num1 && num3 > num2)
	{
		cout << num3 << ",";

		if (num1 < num3 && num1 > num2)
		{
			cout << num1 << ",";
		}
		else if (num2 < num3 && num2 > num1)
		{
			cout << num2 << ",";
		}
		if (num1 < num3 && num1 < num2)
		{
			cout << num1 << ",";
		}
		else if (num2 < num3 && num2 < num1)
		{

			cout << num2;
		}
	}
	system("pause");
}
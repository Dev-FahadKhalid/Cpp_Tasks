#include<iostream>
using namespace std;
void main()
{
	int num, num1, num2;
	int add, sub, mul, div;
	cout << "Enter the two numbers:" << endl;
	cin >> num1 >> num2;
	cout << "\n Enter the number For Following:" << endl;
	cout << "Press 1 For Addition." << endl;
	cout << "Press 2 For Subraction." << endl;
	cout << "Press 3 For Multiplication." << endl;
	cout << "Press 4 For Division." << endl;
	cin >> num;
	cout << endl;
	if (num == 1)
	{
		add = num1 + num2;
		cout << "\n Addition of two numbers is:" << add << endl;
		cout << "add = num1 + num2=" << num1 << "+" << num2 << "=" << add << endl;
	}
	else if (num == 2)
	{
		sub = num1 - num2;
		cout << "\n Subtraction of two numbers is:" << sub << endl;
		cout << "sub = num1 - num2=" << num1 << "-" << num2 << "=" << sub << endl;
	}
	else if (num == 3)
	{
		mul = num1 * num2;
		cout << "\n Multiplication of two numbers is:" << mul << endl;
		cout << "mul = num1 * num2=" << num1 << "*" << num2 << "=" << mul << endl;
	}
	else if (num == 4)
	{
		if (num2 != 0) {

			div = num1 / num2;
			cout << "\n Division of two numbers is:" << div << endl;
			cout << "div = num1 / num2=" << num1 << "/" << num2 << "=" << div << endl;
		}
		else
		{
			cout << "\n invalid Input.Number 2 is 0.";
		}
	}
	else
	{
		cout << "\n Invalid Input!Please select a number between 1 and 4.";
	}

	system("pause");
}
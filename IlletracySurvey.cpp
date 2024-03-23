#include<iostream>
using namespace std;
void main()
{
	double rate_2021, rate_2022, rate_2023;
	cout << "Enter the Illetracy Rate in 2021, 2022 and 2023:" << endl;
	cin >> rate_2021 >> rate_2022 >> rate_2023;

	if (rate_2021 > rate_2022 && rate_2021 > rate_2023)
	{
		cout << "\n Year 2021 has max Illetracy Rate:" << rate_2021 << "%.";
		cout << "\n Illetracy Rate  is decreasing.";
	}
	else if (rate_2022 > rate_2021 && rate_2022 > rate_2023)
	{
		cout << "\n Year 2022 has max Illetracy Rate:" << rate_2022 << "%.";
		cout << "\n Illetracy Rate  is not predicted.";
	}
	else if (rate_2023 > rate_2021 && rate_2023 > rate_2022)
	{
		cout << "\n Year 2023 has max Illetracy Rate:" << rate_2023 << "%.";
		cout << "\n Illetracy Rate  is increasing.";
	}
	else
	{
		cout << "\n Illetracy rate remains same throughout these years." << rate_2021 << "%.";
	}
	system("pause");
}
#include<iostream>
using namespace std;
void main()
{
	int PF, DS, AICT;
	int Pf_pass = 0, Ds_pass = 0, Aict_pass = 0;
	int Pf_fail = 0, Ds_fail = 0, Aict_fail = 0;
	int pass, fail;

	cout << "\n Enter the mark obtained in PF:";
	cin >> PF;
	cout << "\n Enter the mark obtained in DS:";
	cin >> DS;
	cout << "\n Enter the mark obtained in AICT:";
	cin >> AICT;

	if (PF > 50)
	{
		Pf_pass = Pf_pass + 1;
		cout << "\n You are passed in PF .";
	}
	if (DS > 50)
	{
		Ds_pass = Ds_pass + 1;
		cout << "\n You are passed in DS .";
	}
	if (AICT > 50)
	{
		Aict_pass = Aict_pass + 1;
		cout << "\n You are passed in AICT .";
	}
	if (PF < 50)
	{
		Pf_fail = Pf_fail + 1;
		cout << "\n You are failed in PF .";
	}
	if (DS < 50)
	{
		Ds_fail = Ds_fail + 1;
		cout << "\n You are failed in DS .";
	}
	if (AICT < 50)
	{
		Aict_fail = Aict_fail + 1;
		cout << "\n You are failed in AICT .";
	}

	pass = Pf_pass + Ds_pass + Aict_pass;
	cout << "\n Pass subjects are:" << pass;
	fail = Pf_fail + Ds_fail + Aict_fail;
	cout << "\n Fail subjects are:" << fail;

	system("pause");
}
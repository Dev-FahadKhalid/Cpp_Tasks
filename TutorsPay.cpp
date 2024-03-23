#include<iostream>
using namespace std;
void main()
{
	int t_course, no_classes, rate_teaching, t_weeks = 16, pay;
	float  duration;

	cout << "Enter the Total courses being taught: " << endl;
	cin >> t_course;

	cout << "\n Enter the Number of classes of one course in a week: " << endl;
	cin >> no_classes;

	cout << "\n Enter the Duration of each class in hour: " << endl;
	cin >> duration;

	cout << "\n Enter the Per hour rate of teaching: " << endl;
	cin >> rate_teaching;
	cout << "\n Total weeks in semster:" << endl << t_weeks;

	pay = rate_teaching * no_classes * t_course * duration * t_weeks;
	cout << "\n Pay = rate_teaching * no_classes * t_course * duration * t_weeks :";
	cout << "\n His total pay will be:" << endl << pay;

	system("pause");
}
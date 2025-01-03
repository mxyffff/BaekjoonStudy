#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main()
{
	string subject;
	double credit;
	string grade;
	map<string, double> grade_m = {
		{"A+", 4.5},
		{"A0", 4.0},
		{"B+", 3.5},
		{"B0", 3.0},
		{"C+", 2.5},
		{"C0", 2.0},
		{"D+", 1.5},
		{"D0", 1.0},
		{"F", 0.0}
	};
	double grades = 0;

	double sum = 0;
	for (int i = 0; i < 20; i++)
	{
		cin >> subject >> credit >> grade;

		if (grade != "P")
		{
			grades += credit * grade_m[grade];
			sum += credit;
		}	
	}

	grades = grades / sum;
	cout << grades;
}
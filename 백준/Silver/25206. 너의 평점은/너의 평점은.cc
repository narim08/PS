#include <iostream>
using namespace std;

int main()
{
	string major, grade;
	double time, res = 0, timeSum = 0;

	for (int i = 0; i < 20; i++) {
		cin >> major >> time >> grade;
		if (grade == "P") continue;

		timeSum += time;

		switch (grade[0])
		{
		case 'A':
			if (grade[1] == '+') res += time * 4.5; 
			else res += time * 4.0;
			break;
		case 'B':
			if (grade[1] == '+') res += time * 3.5;
			else res += time * 3.0;
			break;
		case 'C':
			if (grade[1] == '+') res += time * 2.5;
			else res += time * 2.0;
			break;
		case 'D':
			if (grade[1] == '+') res += time * 1.5;
			else res += time * 1.0;
			break;
		default:
			break;
		}
	}

	printf("%.5lf", res/timeSum);
	return 0;
}
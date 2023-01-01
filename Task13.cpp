#include<iostream>
using namespace std;

int main()
{
	cout << endl;
	int holidays;
	int workingDays;
	int time;
	float hrs;
	int difference;

	cout << "Holidays No. : ";
	cin >> holidays;

	workingDays = 365 - holidays;
	time = workingDays * 63 + holidays * 127;
	difference = 30000 - time;
	hrs = difference / 60;

	if (difference > 0)
	{
		cout << "Tom Sleeps Well" << endl;
		cout << hrs << " hours less for play" << endl;
	}
	if (difference < 0)
	{
            hrs = -hrs;
		cout << "Tom will Run Away" << endl;
		cout << hrs << " hours for play" << endl;
	}

	cout << endl;
	return 0;
}
#include<iostream>

using namespace std;

void speedLimit();

int main()
{
	speedLimit();
}

void speedLimit()
{
	float speed;
	float speed_limit;
	cout << "Enter the speed Limit: ";
	cin >> speed_limit;
	cout << "Enter the speed of the vehicle: ";
	cin >> speed;

	if (speed == speed_limit)
	{
		cout << "Great! You're doing good." << endl;
	}
	if (speed < speed_limit)
	{
		cout << "Speed up! You're way behind the Speed Limit." << endl;
	}
	if (speed > speed_limit)
	{
		cout << "Halt.....YOU WILL BE CHALLENGED!!!" << endl;
	}
}


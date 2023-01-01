#include<iostream>
#include<windows.h>

using namespace std;

void IsEqual();

int main()
{
	IsEqual();
	return 0;
}

void IsEqual()
{
	int num1;
	int num2;
	cout << "Enter the first Number: ";
	cin >> num1;
	cout << "Enter the first Number: ";
	cin >> num2;

	if (num1 == num2)
	{
		cout << "True" << endl;
	}
	if (num1 != num2)
	{
		cout << "False" << endl;
	}
}
#include<iostream>

using namespace std;

void IsTrue();

int main()
{
	IsTrue();
	return 0;
}

void IsTrue()
{
	string a;
	string check;
	cout << "What is the voice of Dog: ";
	cin >> a;
	check = a;
	if (check == "bark")
	{
		cout << "False" << endl;
	}
	if (check!="bark")
	{
		cout << "True" << endl;
	}
}
#include<iostream>
#include<Windows.h>

using namespace std;

void printMenu();
float calculateAggregate(string, float, float, float);
float compareMarks(float, float);
void gotoxy(int, int);

int main()
{
	system("cls");

	string nameStd1;
	float matricMarksStd1;
	float interMarksStd1;
	float ecatMarksStd1;
	float aggregateStd1;

	string nameStd2;
	float matricMarksStd2;
	float interMarksStd2;
	float ecatMarksStd2;
	float aggregateStd2;

	float highestMarks;
	float firstRoll;

	cout << "Enter First Student's Name: ";
	cin >> nameStd1;
	cout << "Enter Matric Marks of First Student: ";
	cin >> matricMarksStd1;
	cout << "Enter Intermediate Marks of First Student: ";
	cin >> interMarksStd1;
	cout << "Enter ECAT Marks of First Student: ";
	cin >> ecatMarksStd1;

	cout << "Enter Second Student's Name: ";
	cin >> nameStd2;
	cout << "Enter Matric Marks of Second Student: ";
	cin >> matricMarksStd2;
	cout << "Enter Intermediate Marks of Second Student: ";
	cin >> interMarksStd2;
	cout << "Enter ECAT Marks of Second Student: ";
	cin >> ecatMarksStd2;

	aggregateStd1 = calculateAggregate(nameStd1, matricMarksStd1, interMarksStd1, ecatMarksStd1);
	aggregateStd2 = calculateAggregate(nameStd2, matricMarksStd2, interMarksStd2, ecatMarksStd2);
	highestMarks = compareMarks(ecatMarksStd1, ecatMarksStd2);

	system("cls");
	printMenu();

	if (highestMarks == ecatMarksStd1)
	{
		gotoxy(4, 5);
		cout << "001";
		gotoxy(10, 5);
		cout << nameStd1;
		gotoxy(25, 5);
		cout << matricMarksStd1;
		gotoxy(40, 5);
		cout << interMarksStd1;
		gotoxy(53, 5);
		cout << ecatMarksStd1;
		gotoxy(63, 5);
		cout << aggregateStd1 << "%";

		gotoxy(4, 6);
		cout << "002";
		gotoxy(10, 6);
		cout << nameStd2;
		gotoxy(25, 6);
		cout << matricMarksStd2;
		gotoxy(40, 6);
		cout << interMarksStd2;
		gotoxy(53, 6);
		cout << ecatMarksStd2;
		gotoxy(63, 6);
		cout << aggregateStd2 << "%";
	}

	if (highestMarks == ecatMarksStd2)
	{
		gotoxy(4, 5);
		cout << "001";
		gotoxy(10, 5);
		cout << nameStd2;
		gotoxy(25, 5);
		cout << matricMarksStd2;
		gotoxy(40, 5);
		cout << interMarksStd2;
		gotoxy(53, 5);
		cout << ecatMarksStd2;
		gotoxy(63, 5);
		cout << aggregateStd2 << "%";

		gotoxy(4, 6);
		cout << "002";
		gotoxy(10, 6);
		cout << nameStd1;
		gotoxy(25, 6);
		cout << matricMarksStd1;
		gotoxy(40, 6);
		cout << interMarksStd1;
		gotoxy(53, 6);
		cout << ecatMarksStd1;
		gotoxy(63, 6);
		cout << aggregateStd1 << "%";
	}


	cout << endl;
	return 0;
}

void printMenu()
{
	cout << "==========================================================================" << endl;
	cout << "|| University of Engineering and Technology Admission Management System ||" << endl;
	cout << "==========================================================================" << endl;
	cout << "||Roll#||     Name    ||Matric Marks||Inter Marks||ECAT Marks||Aggregate||" << endl;
	cout << "||=====||=============||============||===========||==========||=========||" << endl;
	cout << "||     ||             ||            ||           ||          ||         ||" << endl;
	cout << "||     ||             ||            ||           ||          ||         ||" << endl;
	cout << "||     ||             ||            ||           ||          ||         ||" << endl;
	cout << "||     ||             ||            ||           ||          ||         ||" << endl;
	cout << "||     ||             ||            ||           ||          ||         ||" << endl;
	cout << "||     ||             ||            ||           ||          ||         ||" << endl;
	cout << "||     ||             ||            ||           ||          ||         ||" << endl;
	cout << "||     ||             ||            ||           ||          ||         ||" << endl;
	cout << "||     ||             ||            ||           ||          ||         ||" << endl;
	cout << "||     ||             ||            ||           ||          ||         ||" << endl;
	cout << "||     ||             ||            ||           ||          ||         ||" << endl;
	cout << "||     ||             ||            ||           ||          ||         ||" << endl;
	cout << "||     ||             ||            ||           ||          ||         ||" << endl;
	cout << "==========================================================================" << endl;
}

float calculateAggregate(string name, float matricMarks, float interMarks, float ecatMarks)
{
	float matricPercent;
	float interPercent;
	float ecatPercent;
	float aggregate;

	matricPercent = (matricMarks / 1100) * 30.0;
	interPercent = (interMarks / 1100) * 30.0;
	ecatPercent = (ecatMarks / 400) * 40.0;

	aggregate = matricPercent + interPercent + ecatPercent;

	return aggregate;
}

float compareMarks(float ecatMarksStd1, float ecatMarksStd2)
{
	int x = 1;
	float firstRoll;

	while (x != 2)
	{
		firstRoll = ecatMarksStd1;
		if (firstRoll < ecatMarksStd2)
		{
			firstRoll = ecatMarksStd2;
		}
		x = x + 1;
	}
	return firstRoll;
}

void gotoxy(int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
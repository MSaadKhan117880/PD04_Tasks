#include<iostream>

using namespace std;

void display();

int main()
{
	display();
}

void display()
{
	string country;
	float price;
	float discount;
	float finalPrice;
	while (true)
	{

		cout << "Enter the name of the Country (Pakistan, Ireland, India, England, Canada) : ";
		cin >> country;

		cout << "Enter the ticket price: ";
		cin >> price;

		if (country == "Pakistan")
		{
			discount = (5.0 / 100.0) * price;
			finalPrice = price - discount;
		}
		if (country == "Ireland")
		{
			discount = (10.0 / 100.0) * price;
			finalPrice = price - discount;
		}
		if (country == "India")
		{
			discount = (20.0 / 100.0) * price;
			finalPrice = price - discount;
		}
		if (country == "England")
		{
			discount = (30.0 / 100.0) * price;
			finalPrice = price - discount;
		}
		if (country == "Canada")
		{
			discount = (450. / 100.0) * price;
			finalPrice = price - discount;
		}

		cout << "The final price after discount is " << finalPrice << endl;
	}

}


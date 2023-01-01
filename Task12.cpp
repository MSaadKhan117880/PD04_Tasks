#include<iostream>

using namespace std;

void flowerShop();

int main()
{
	flowerShop();
}

void flowerShop()
{
	int num1;
	int num2;
	int num3;

	float price1;
	float price2;
	float price3;
	float totalPrice;
	float finalPrice;

	float discount;

	cout << "Enter the number of Red Roses Bought: ";
	cin >> num1;
	cout << "Enter the number of White Roses Bought: ";
	cin >> num2;
	cout << "Enter the number of Tulips Bought: ";
	cin >> num3;

	price1 = num1 * 2.00;
	price2 = num2 * 4.10;
	price3 = num3 * 2.50;

	totalPrice = price1 + price2 + price3;
	if (totalPrice > 200)
	{
		discount = (20.0 / 100.0) * totalPrice;
		finalPrice = totalPrice - discount;
	}

	cout << "Original Price: " << totalPrice << endl;
	if (totalPrice > 200)
	{
		cout << "Discount: 200$" << endl;
	}
	cout << "Price after Discount: " << finalPrice << endl;

}


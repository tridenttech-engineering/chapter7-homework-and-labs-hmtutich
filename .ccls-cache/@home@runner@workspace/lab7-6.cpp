//Lab7-6.cpp - calculates and displays the average price
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int numPrices = 0;
	double price = 0.0;
	double total = 0.0;
	double average = 0.0;
	cout << "Price(negative number to end): ";
	cin >> price;
	while (price >= 0.0)
		{
			numPrices +=1; 
			total += price;
			cout << "Next price(negative number to end): ";
			cin >> price;
		}
	if (numPrices > 0)
		average = total / numPrices;
	else
		average = 0.0;
	cout << fixed << setprecision(2) << endl;
	cout << "Average price: $" << average << endl;

	return 0;
}	//end of main function
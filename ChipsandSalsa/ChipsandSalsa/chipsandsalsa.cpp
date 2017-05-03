//chips and salsa program
//Programmer: Zach Murphy on 5-3-2017
#include <iostream>
#include <iomanip>
#include <string>
#include <conio.h>
using namespace std;

//function prototypes
void getSales(string[], int[], int);
int getTotal(int[], int);
int largestElement(int[], int);
int smallestElement(int[], int);

int main() {
	//constant for the number of salsa types
	const int SALSA_TYPES = 5;

	//array of salsa types
	string names[SALSA_TYPES] = { "mild", "medium", "sweet", "hot", "zesty" };

	//aray of sales of each salsa type
	int sales[SALSA_TYPES];

	//total number of jars sold
	int totalJarsSold;


	//subscript of the salsa that sold the most
	int highSalesProduct;

	//subscript of the salsa that sold the least
	int lowSalesProduct;

	//get the number of jars sold of each type of salsa.
	getSales(names, sales, SALSA_TYPES);

	//get total sales and high and low selling products
	totalJarsSold = getTotal(sales, SALSA_TYPES);
	highSalesProduct = largestElement(sales, SALSA_TYPES);
	lowSalesProduct = smallestElement(sales, SALSA_TYPES);

	//display the sales report header
	cout << endl << endl;
	cout << "      Salsa Sales Report \n\n";
	cout << "Name              Jars Sold \n";
	cout << "_______________________________\n";

	//display the name and jars solde of each type
	for (int salsaType = 0; salsaType < SALSA_TYPES; salsaType++) {
		cout << setw(6) << names[salsaType] << setw(21) << sales[salsaType] << endl;
	}

	//display the total sales, highest sales, and lowest sales
	cout << "\nTotal Sales: " << setw(15) << totalJarsSold << endl;
	cout << "High Seller: " << names[highSalesProduct] << endl;
	cout << "Low Seller: " << names[lowSalesProduct] << endl;

	cout << endl << endl;
	cout << "Press any key to exit...";
	_getch();

	return 0;

}

//get sales
//gets the number of jars from each salsa type and determines the total
void getSales(string names[], int sales[], int size) {
	for (int type = 0; type < size; type++) {
		//get the number of jars sold
		cout << "How many jars of " << names[type] << " salsa did we sell last month? ";
		cin >> sales[type];

		//validate the input
		while (sales[type] < 0) {
			cout << "Jars must be more than 0. Please re-enter:";
			cin >> sales[type];
		}

	}
}

//gets the total for each salsa type
int getTotal(int array[], int size) {
	int total = 0;

	for (int pos = 0; pos < size; pos++) {
		total += array[pos];
	}
	return total;
}

//largest element
int largestElement(int array[], int size) {
	int indexOfLargest = 0;
	
	for (int pos = 1; pos < size; pos++) {
		if (array[pos] > array[indexOfLargest]) {
			indexOfLargest = pos;
		}
		
	}
	return indexOfLargest;
}

//smallest element
int smallestElement(int array[], int size) {
	int indexOfSmallest = 0;
	for (int pos = 1; pos < size; pos++) {
		if (array[pos] < array[indexOfSmallest]) {
			indexOfSmallest = pos;
		}
	}
	return indexOfSmallest;
}
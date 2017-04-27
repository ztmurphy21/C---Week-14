//This program lists the months of the year along with the days of each month
//CPT-180
//Programmer: Zach Murphy on 4-26-2017

//include statements
#include <iostream> //always needed
#include <conio.h> //needed for _getch
#include<string> // needed for strings

using namespace std;

int main() {
	//array implicit initializations
	string months[] = { "January", "February", "March", "April", "May", "June", "July",
					"August", "September", "October", "November", "December" };
	int days[] = { 31, 28, 31, 30, 31, 30, 31,
				31, 30, 31, 30, 31 };


	//declarations for easy output
	string outputOne = " has ", outputTwo = " days. ", leapYr = "except on leap year 29 days.";

	//counter needed to check if month is february for leap year
	int counter = 0;

	//introduction output to user
	cout << "*****************************************************************\n";
	cout << "\t\t Months and Days\n";
	cout << "Here is the list of months with number of days:\n\n";

	//range based for loop
	for (int daysValue : days){
		//check if month is february
		if (counter == 1) {
			cout << months[counter] << outputOne << daysValue << outputTwo << leapYr << endl;
			counter++;
		}
		//if not february
		else {
			cout << months[counter] << outputOne << daysValue << outputTwo << endl;
			counter++;
		}
	}
	cout << "*****************************************************************\n";

	//allow user to exit the program
	cout << "Press any key to exit...";
	_getch();	

	return 0;
}
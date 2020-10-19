#include <iostream>
#include "timeclass.h"
#define STUDY_TIME 40
#define BREAK_TIME 10
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int newHour, newMin;
	char colon;

	cout << "Type time as hour:minute ";
	cin >> newHour >> colon >> newMin;

	// User has to type the colon symbol
	if(colon != ':')
	{
		exit(1);
	}

	TimeClass startTime(newHour, newMin);

	TimeClass breakTime = startTime;
	breakTime.addMinutes(STUDY_TIME);

	// Starting time after break
	startTime = breakTime;
	startTime.addMinutes(BREAK_TIME);

	// Printing the output
	cout << "Your break time is: ";
	breakTime.print();
	cout << endl;

	cout << "You will start to study again at: ";
	startTime.print();
	cout << endl;
}
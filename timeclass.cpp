#include <iostream>
#include "timeclass.h"
using std::exit;
using std::cout;

TimeClass::TimeClass() : hour(0), min(0){}

TimeClass::TimeClass(int newHour, int newMin) : hour(newHour), min(newMin)
{
	if(newHour < 0 || newMin < 0 || newHour >= 24 || newMin >= 60)
	{
		exit(1);
	}	
}

void TimeClass::addMinutes(int minutes)
{
	int newMin = min + minutes;
	if(newMin > 60)
	{
		hour += newMin / 60;
		min = newMin % 60;
	}
	else
		min = newMin;
}

void TimeClass::print()
{
	// Print the hour part
	if(hour < 10)
		cout << "0" << hour << ':';
	else
		cout << hour << ':';

	// Print the minutes part
	if(min < 10)
		cout << "0" << min;
	else
		cout << min;
}
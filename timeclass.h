#ifndef TIME_CLASS
#define TIME_CLASS

class TimeClass
{
public:
	TimeClass(); // Initializes the time as 00:00
	TimeClass(int newHour, int newMin);

	void setHour(int newHour){hour = newHour;}
	int getHour() const{return hour;}

	void setMinute(int newMin){min = newMin;}
	int getMin() const{return min;}

	void addMinutes(int minutes); // Advances the time to minutes later
	void print(); // Prints the time as HOUR:MINUTES
private:
	int hour;
	int min;
};

#endif //TIME_CLASS
#include "clock.h"

using namespace std;

// execution function
int main()
{
	setTime(hours, minutes, seconds);

	while (1)
	{
		system("cls");

		displayTime(hours, minutes, seconds);

		if (seconds > 59)
		{
			minutes++;
			seconds = 0;
		}

		if (minutes > 59)
		{
			hours++;
			minutes = 0;
		}

		if (hours > MAX_HOURS)
		{
			hours = 0;
		}
	}

	return 0;
}

// function to set time according to user input
void setTime(int& hours, int& minutes, int& seconds)
{
	cout << "Welcome! Please set initial time for the clock\n" << endl;

	cout << "Enter the hours : ";
	cin >> hours;

	cout << "Enter the minutes : ";
	cin >> minutes;

	cout << "Enter the seconds : ";
	cin >> seconds;
}

// function to display the clock
void displayTime(int& hours, int& minutes, int& seconds)
{
	cout << "Clock Format = HH:MM:SS\n" << endl;
	cout << "++++++++++++++++++" << endl;
	cout << "Time is : " << hours << ":" << minutes << ":" << seconds << endl;
	cout << "++++++++++++++++++" << endl;
	seconds++;

	Sleep(1000);
}
#include<iostream>
#include<Windows.h>

// should be equal to 11 or 23 to set clock in the desired format
#define MAX_HOURS 23

// variables to store the user input for hours, minutes and seconds respectively
int hours, minutes, seconds;

// function to set time according to user input
void setTime(int& hours, int& minutes, int& seconds);

// function to display the clock
void displayTime(int& hours, int& minutes, int& seconds);

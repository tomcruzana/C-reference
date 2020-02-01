#include <time.h>
	#include <stdio.h>

	int main(void)
	{
		time_t mytime;
		mytime = time(NULL);
		printf(ctime(&mytime));

		return 0;
	}
	
	/*
	Www Mmm dd hh:mm:ss yyyy

	Www = which day of the week.
	Mmm = month in letters.
	dd = the day of the month.
	hh:mm:ss = the time in hour, minutes, seconds.
	yyyy = the year.

	Output example:
		Tue Feb 26 09:01:47 2009
	
	Readable Current Local Time using ctime

The Unix EPOCH time is not readable for humans. To get a human-readable version of the current local time you can use the ctime() function. The function returns a C string containing the date and time information.

This string is followed by a new-line character (‘\n’) and it will convert the time_t object pointed by the timer to a C string containing a human-readable version of the corresponding local time and date.

Please note: that the functions ctime() and asctime() share the array which holds the time string.
If either one of these functions is called, the content of the array is overwritten.

For more info about the time.h library visit:
	
http://www.codingunit.com/c-tutorial-how-to-use-time-and-date-in-c	
	*/

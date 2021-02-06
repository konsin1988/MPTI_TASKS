#include <stdio.h>

void help_print()
{
	printf("\nSyntax:\n\t--clock : print current time\n"
		"\n\t--date : print current date\n"
		"\n\t--clock_dif : print time after (or before, add '-')\n\t"
	        " hours and minutes entered in args \n\t"
		"(two required: hours minutes; format: 12 45)\n"
		"\n\t--date_dif : print date difference (in days) \n\t"
		"betweem current date and date from args\n\t"
		"(three required: day, monthm, year; format - 12 5 2002)\n\n");
}

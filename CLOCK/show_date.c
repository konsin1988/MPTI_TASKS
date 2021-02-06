#include <stdio.h>
#include <time.h>
#include <string.h>

void show_date()
{
	struct tm *u;
	char s[40];
	time_t c_time = time(NULL);
	u = localtime(&c_time);
	strftime(s, 40, "%d.%m.%Y, %A", u);
	printf("\n\t*** %s ***\n", s);
}

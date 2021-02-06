#include <time.h>
#include <stdio.h>

void clock_dif(int h, int min, char* s)
{
	struct tm* u;
	char g[40];
	time_t c_time = time(NULL);
	c_time = c_time + (h*60 + min) * 60;
	u = localtime(&c_time);
	strftime(s, 40, "%H:%M:%S", u);
	strftime(g, 40, "%H:%M:%S", u);
	printf("%s", g);
}

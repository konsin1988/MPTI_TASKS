#include <time.h>

int date_dif(int d, int m, int Y)
{
	struct tm* dif;	
	time_t c_time = time(NULL);
	dif = localtime(&c_time);
	dif->tm_mday = d;
	dif->tm_mon = m-1;
	dif->tm_year = Y - 1900;
	time_t t_dif = mktime(dif);
	int result = (c_time - t_dif) / 60 / 60 / 24;
	return result;

}

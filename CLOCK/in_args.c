#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "struct_ctime.h"
#include "date_time.h"
#include "in_args.h"

int in_args(int argc, char** argv)
{
	if(argc<=1)
	{
		printf("\nSyntax:\n\t--help : for help information\n");
		return 0;
	}
	else if(!strcmp(argv[1], "--help"))
	{
		if(argc != 2) {
			printf("\t '--help' requires no args.\n");
			return 0;
		}
		help_print();
		return 0;
	}
	else if(!strcmp(argv[1], "--clock"))
	{
		if(argc != 2)
		{
			printf("\t '--clock' requires no args.\n\n");
			return 0;
		}
		show_clock();
		return 1;
	}
	
	else if(!strcmp(argv[1], "--date"))
	{
		if(argc != 2)
		{
			printf("\t '--date' requires no args.\n\n");
			return 0;
		}
		show_date();
		return 1;
	}
	
	else if(!strcmp(argv[1], "--clock_dif"))
	{
		if(argc != 4)
		{
			printf("\t '--clock_dif' requires two parameters.\n");
			return 0;
		}
		else
		{
			int h, min;
			if(sscanf(argv[2], "%d", &h) != 1 
			|| sscanf(argv[3], "%d", &min) != 1)
			{
				printf("'--clock_dif' operation" 
				"requires two integer parameters.\n");
				return 0;
			}
			else
			{
				char* s = (char*)malloc(40 * sizeof(char));
				clock_dif(h, min, s);
				printf("\nTime after %d hours %d minutes: "
				"%s\n\n", h, min, s);
				return 1;
			}
		}
	}
	
	else if(!strcmp(argv[1], "--date_dif"))
	{
		if(argc != 5)
		{
			printf("\t '--date_dif' requires "
					"three parameters.\n");
			return 0;
		}
		else
		{
			int d, m, Y;
			if(sscanf(argv[2], "%d", &d) != 1 
			|| sscanf(argv[3], "%d", &m) != 1
			|| sscanf(argv[4], "%d", &Y) != 1)
			{
				printf("'--date_dif' operation" 
				"requires two integer parameters.\n");
				return 0;
			}
			else
			{
				
				printf("\nDifference between current "
					"date and date entered "
				"is: %d days.\n\n", date_dif(d, m, Y));
				return 1;
			}
		}
	}
	else
	{
		printf("Unknown parameter: '%s'."
		"\nType %s --help for help.\n", argv[1], argv[0]);
		return 0;
	}
}

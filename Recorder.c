#include <stdio.h>
#include "general.h"

FILE *pfile;

void Recorder(void)
{
	pfile = fopen("Recorder.txt","a+");
	if (pfile != NULL)
	{
		fprintf(pfile, "Step%d:\t%c%d\n", iStep-1, y+'A', 15-x);
		fclose(pfile);
	}
}
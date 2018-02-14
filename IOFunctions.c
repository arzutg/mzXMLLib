#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "IOFunctions.h"


/* Updates the contents of a buffer by copying the bufpos residu to the beginning, and adding the rest from file */
int update_mzxml_buffer(char* buffer, char* bufpos, FILE* file_handle, int buffersize)
{
	int residu, read;

	residu = strlen(bufpos);
	if (residu < 0 || feof(file_handle))
		return 0;

	memmove(buffer, bufpos, residu);
	read = fread(buffer+residu, sizeof(char), buffersize-(residu+1), file_handle);
	buffer[residu+read+1] = '\0';
	bufpos = buffer;

	return read;

}/* void update_buffer(char* buffer, char* bufpos, FILE* file_handle, int buffersize) */

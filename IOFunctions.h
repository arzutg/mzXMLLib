#ifndef __IO_FUNCTIONS_H__
#define __IO_FUNCTIONS_H__

#ifdef __cplusplus
extern "C"
{
#endif

/* Updates the contents of a buffer by copying the bufpos residu to the beginning, and adding the rest from file */
int update_mzxml_buffer(char* buffer, char* bufpos, FILE* file_handle, int buffersize);

#ifdef __cplusplus
}
#endif

#endif

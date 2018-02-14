#ifndef MZXMLWRITER_H
#define	MZXMLWRITER_H

#ifdef	__cplusplus
extern "C" {
#endif

#include "mzXMLStructures.h"

/* Writes an mzXML file from a loaded / modified file */
void write_mzxml_file(pmzxml_file mzxml_file_hndl, char* output_file);

/* Function that updates scan data, and updates all scan attributes relevant to the data */
void update_scan_peaks(pmzxml_file mzxml_file_hndl, int scan_num, int peak_num, int precision, double* mzs, double* intensities);

/* Function that empties a scan, resetting all data except scan number, retentiontime, polarity, ms level and peakscont set to 0 */
void empty_scan(pmzxml_file mzxml_file_hndl, int scan_num);


#ifdef	__cplusplus
}
#endif

#endif	/* MZXMLWRITER_H */


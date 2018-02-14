#ifndef __MZXML_READER_DEFS_H__
#define __MZXML_READER_DEFS_H__

/* Configuration flags for pre-loading scans */
typedef unsigned char scan_config_flags;
#define scan_origin_flag	1
#define scan_precursor_flag	2
#define scan_maldi_flag		4
#define scan_all_flag		7

/* Configuration flags for pre-loading file */
typedef unsigned char file_flags;
#define parentfile_flag		1
#define instrument_flag		2
#define dataprocessing_flag	4
#define separation_flag		8
#define spotting_flag		16
#define all_flag			31

#endif

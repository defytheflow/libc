#ifndef IO_IN_H
#define IO_IN_H

#include <stddef.h>

/*
 * Reads in at most one less than 'size' characters from stdin
 * and stores them into the 'dest'.
 *
 * Reading stops after an EOF or a newline. If a newline is
 * read, it is stored into the 'dest'. A terminating null byte
 * ('\0') is stored after the last character in the 'dest'.
 *
 * RETURN VALUE:
 *     FAILURE - 0 if end of file was reached.
 *     SUCCESS - number of characters read into 'dest' (including '\n').
 */
size_t get_line(const char* prompt, char* dest, size_t size);

/*
 * Reads in a sequence of non-white space characters of
 * max size ('size' - 1) from stdin and stores it into the 'dest'.
 *
 * A terminating null byte ('\0') is stored after the last character
 * in the 'dest'.
 *
 * RETURN VALUE:
 *     FAILURE - 0 if end of file was reached.
 *     SUCCESS - number of non-whitespace characters read into 'dest'.
 */
size_t get_string(const char* prompt, char* dest, size_t size);

/*
 * Reads in a sequence of non-white space characters of max size 255
 * from stdin and tries to convert it to a SIGNED INTEGER.
 *
 * RETURN VALUE:
 *     FAILURE - EOF if end of file was reached,
 *               0   if input is non-numeric or not in SIGNED INTEGER range.
 *     SUCCESS - 1.
 */
int get_int(const char* prompt, int* dest);

/*
 * Reads in a sequence of non-white space characters of max size 255
 * from stdin and tries to convert it to a FLOAT.
 *
 * RETURN VALUE:
 *     FAILURE - EOF if end of file was reached,
 *               0   if input is non-numeric or not in FLOAT range.
 *     SUCCESS - 1.
 */
int get_float(const char* prompt, float* dest);

#endif  /* IO_IN_H */

#ifndef MAIN_H
#define MAIN.H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNESED(x) (void)(x)
#define BUFF_SIZE 1024


/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 18


/* SIZE */
#define S_LONG 2
#define S_SHORT 1

/**
 * struct fmt - Struct op
 *
 * @fmt: The format.
 * @fn: The fuctions associated.
 */
struct fmt
{
	char fmt:
		int (*fn)(va_list, char[],int, int, int, int);
};


/**
 * typedef strcut fmt fmt_t - Struct op

/*
 * util.h
 *  
 * helper function header file
 * 
 * a Net::DNS like library for C
 * 
 * (c) NLnet Labs, 2004
 * 
 * See the file LICENSE for the license
 */

#ifndef _UTIL_H
#define _UTIL_H

#include <ldns/rr.h>

/**
 * Memory management macro's
 */
#define MALLOC(ptr, type) \
        XMALLOC((ptr), type, 1)

#define XMALLOC(ptr, type, count) \
	do { (ptr) = (type *) malloc((count) * sizeof(type)); } while (0)

#define REALLOC(ptr, type) \
        XREALLOC((ptr), type, 1)

#define XREALLOC(ptr, type, count) \
	do { (ptr) = (type *) realloc((ptr), (count) * sizeof(type)); } while (0)

#define FREE(ptr) \
	do { free((ptr)); (ptr) = NULL; } while (0)

#define DEP     printf("DEPRICATED FUNCTION!\n");

/* prototypes */
void    xprintf_rd_field(t_rdata_field *);
void    xprintf_rr(t_rr *);

#endif /* !_UTIL_H */

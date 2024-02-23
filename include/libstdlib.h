/*
** File description:
** libstdlib
*/

#ifndef LIBSTDLIB_H_
#define LIBSTDLIB_H_

#include <stddef.h>

void *my_calloc(size_t nmemb, size_t size);
void *my_realloc(void *ptr, size_t size);

#endif /* !LIBSTDLIB_H_ */

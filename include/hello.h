#ifndef HELLO_H
#define HELLO_H

#include <stddef.h>

/**
 * Writes a message in the format "Hello, [name]!" into \c s.
 *
 * It is your responsibility to ensure \c s is large enough to fit the
 * message and to \c free() it when you are done.
 *
 * \param s An allocated buffer to place the message into.
 *
 * \param n The size of the buffer.
 *
 * \param name The name to use in the greeting.
 *
 * \return On success, a non-negative number. On failure, \c errno will
 * be set and a negative number will be returned.
 */
int hello(char *restrict s, size_t n, const char *restrict name);

#endif /* HELLO_H */
#include <stdio.h>
#include <stdlib.h>

/** Generates a random string of characters of size n
 * 
 * @param s    - pointer to word to generate
 * @param size - int - size of word
 */
char *rand_string(char *s, int size)
{
    char *sptr = s;
    while (size > 0) {
        *sptr = rand() % (122 - 97) + 97;
        sptr++;
        size--;

    }
    *sptr = '\0';

    return s;

}
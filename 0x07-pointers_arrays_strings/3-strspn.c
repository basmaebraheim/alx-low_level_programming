#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: string
 *
 * @accept: character of prefix
 *
 * Return: number of bytes in the initial segment of 
 * s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
    unsigned i = 0;
    while(*s && *accept)
    {
        if (*s != *accept) break;

        i++;
        *s++;
        *accept++;
    }

    return (i);
}
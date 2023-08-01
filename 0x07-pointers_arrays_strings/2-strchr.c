#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: string
 *
 * @c: character
 *
 * Return: a pointer to the first occurrence of the character 
 * c in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
    int i = 0;
    while(*s)
    {
        if (*s == c) return (s);
        else s++;
    }

    return (NULL);
}
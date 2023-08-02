
#include <stdio.h>
#include <stdlib.h>
/**
 * wildcmp - check identical strings
 * @s1: string
 * @s2: string
 * Return: 1 if the strings can be considered identical, otherwise return 0
 */
int wildcmp(char *s1, char *s2)
{

if (*s2 == '*')
{
if (*(s1 + 1) == *(s2 + 1)) return wildcmp(s1 + 1, s2 + 1);
if (*s1 == *(s2 + 1)) return wildcmp(s1, s2 + 1);
if (*(s2 + 1) == '*') return wildcmp(s1, s2 + 1);
if (*(s1 + 1) != *(s2 + 1)) return wildcmp(s1 + 1, s2);
}

if (!*s1 && !*s2) return 1;
if (!*s1 || !*s2) return 0;


if (*s1 != *s2) return 0;

return wildcmp(s1+1, s2+1);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int r;

r = wildcmp("main.c", "*.c");
printf("%d\n", r);
r = wildcmp("main.c", "m*a*i*n*.*c*");
printf("%d\n", r);
r = wildcmp("main.c", "main.c");
printf("%d\n", r);
r = wildcmp("main.c", "m*c");
printf("%d\n", r);
r = wildcmp("main.c", "ma********************************c");
printf("%d\n", r);
r = wildcmp("main.c", "*");
printf("%d\n", r);
r = wildcmp("main.c", "***");
printf("%d\n", r);
r = wildcmp("main.c", "m.*c");
printf("%d\n", r);
r = wildcmp("main.c", "**.*c");
printf("%d\n", r);
r = wildcmp("main-main.c", "ma*in.c");
printf("%d\n", r);
r = wildcmp("main", "main*d");
printf("%d\n", r);
r = wildcmp("abc", "*b");
printf("%d\n", r);

return (0);
}

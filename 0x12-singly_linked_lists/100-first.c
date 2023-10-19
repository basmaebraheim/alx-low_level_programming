#include<stdio.h>

/**
 * beforeMain - Apply the constructor attribute so that it
 *   is executed before main()
 */
void beforeMain(void) __attribute__ ((constructor));

/**
 * beforeMain - implements beforeMain
 */
void beforeMain(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");}

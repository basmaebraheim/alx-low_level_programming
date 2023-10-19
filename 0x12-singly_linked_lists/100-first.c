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
printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

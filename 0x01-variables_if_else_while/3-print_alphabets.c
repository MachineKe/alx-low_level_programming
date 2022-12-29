#include <stdio.h>
/**
 * Main - Entry point
 *
 * Return (0) : Always success
 *
 */
int main()	 
{ 
char abc;
for (abc = 'a';abc <='z';abc++)
{
putchar(abc);
}
for (abc = 'A';abc<= 'Z';abc++)
{
putchar(abc);
}
putchar('\n');
return (0);
}


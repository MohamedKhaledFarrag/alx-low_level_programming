#include "main.h"
#include <stdlib.h>
/**
*malloc_checked-function that allocate memory using malloc
*@b:byte numbers for allocation
*Return:ptr to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
void *str;
str = malloc(b);
if (str == NULL)
{
exit(98);
}
return (str);
}

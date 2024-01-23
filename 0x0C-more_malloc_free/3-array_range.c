#include <stdlib.h>
#include "main.h"
/**
*array_range- function that creates an array of integers
*@min:min number as same as start value
*@max:max number
*Return:the ptr to the new created array
*/
int *array_range(int min, int max)
{
int *str;
int i = 0;
if (min > max)
{
return (NULL);
}
str = malloc((sizeof(int) * (max - min)) + sizeof(int));
if (str == NULL)
{
return (NULL);
}
while (min <= max)
{
str[i] = min;
i++;
min++;
}
return (str);
}

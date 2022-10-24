#include "main.h"
#include <stdio.h>
/**
<<<<<<< HEAD
  * print_array - main func
  * @a: input 1
  * @n: input 2
  * Return: void
  */
=======
 * print_array - main func
 * @a: input 1
 * @n: input 2
 * Return: void
 */
>>>>>>> 8338887a887f3d5ae97ccc3c77da3144a874da39
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != n - 1)
printf(", ");
}
printf("\n");
}

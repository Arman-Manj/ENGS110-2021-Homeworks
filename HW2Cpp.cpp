#include <stdio.h>

int main()
{
	int array[100] = {0};
	int a, x, location, n = 10;
	for (a = 0; a < 10; a++)
		array[a] = a + 1;

	for (a = 0; a < n; a++)
		printf("%d", array[a]);
	printf("\n");

	x = 50;

        location = 5;

	n++;

        //insert in array
	for (a = n-1; a >= location; a--)
		array[a] = array[a - 1];
	array[location - 1] = x;

	for (a = 0; a < n; a++)
		printf("%d", array[a]);
	printf("\n");

	return 0;
}

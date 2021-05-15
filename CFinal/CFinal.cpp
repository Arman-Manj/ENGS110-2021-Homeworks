#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *N;
	int *pt;
	int SUM = 0;

	pt = (int*) malloc(1000 * sizeof(int));
        N = fopen("DATA.txt", "r");

	if(N == NULL)
	{
		printf("Warning!!! There is an ERROR !!! ");
		exit (true);
	}

	while (fscanf(N, "%d" ,pt) !=EOF)
	{
		printf("%d \n", *pt);
		SUM = SUM + *pt;
	}
	printf("%d\n",SUM);

	fclose(N);
	free(pt);

	N= fopen("RESULT.txt","w+");
	fprintf(N , "%d \n", SUM);
	fclose(N);
}

#include <stdio.h>

int valid_age(int age){
	if(age == 0){
		printf("Insert a valid number \n");
	}		
	return 0;
}

void Binary(int sum){
	int Binary=0;
	printf("the binary representation of the sum %d is:",sum);
	for(int bit=31;bit>=0;bit--){
		Binary = sum>>bit;
		if (Binary & 1)
			printf("1");
		else
			printf("0");
	}
	printf("\n");
}

int main(){
	int age;
	printf(" Please insert your age: ");
	scanf("%d",&age);
                int temp,sum = 0, fib1=0,fib2 = 1;
		while(fib2 < age){
			temp = fib1;
			fib1 = fib2;
		      	fib2 =fib2 +temp;
			sum =sum + fib1;
		}
		printf("The sum of the Fibo numbers which are less than your age %d is : %d \n",age, sum);		
	valid_age(age);
	Binary(sum);
	return 0;
}


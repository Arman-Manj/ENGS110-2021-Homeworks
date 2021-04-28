#include <stdio.h>
#include <iostream>
using namespace std;


int valid_age(int age) 
{
	if(age == 0)
	{
		printf("Insert a valid number \n");
	}		

	return 0;
}

void Binary(int sum)
{
	int Binary=0;
   	printf("The binary representation of the sum %d is :", sum);
	printf("\n");
	while(sum>0)
	{
		Binary = sum%2;
		sum =sum/2;
		printf("%d\n",Binary);
		
	}

}

int main()
{
	int age;
	cout<<" Please insert your age: ";
	cin>>age;
                int temp,sum = 0;
		int fib1=0;
		int fib2 = 1;
	
		while(fib2 < age)
	
		{
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


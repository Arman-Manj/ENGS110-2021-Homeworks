#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int degree;
	float a;
	float b;
	float c;
	float X1;
	float X2;
	float D;

while(true)
{	
	cout<<"please entre the degree of the equation if it is first degree input (1) if it is second degree input (2)"<<endl;
   cin>>degree;
  
   if(degree == 1)
   {
	  
        cout<<"please entre a=";
	cin>> a;
	cout<<"please entre b=";
	cin>>b;
        X1= -b/a;
	cout<<"X1="<<X1<<endl;
	break;
   }
   else if (degree == 2)
   {
	   
	cout<<"Please entre a=";
	cin>> a;
	cout<<"please enter b=";
	cin>> b;
	cout<<"please entre c=";
	cin>> c;

//Discriminant equation is:
	
	D=b*b-4*a*c;

	if(D>0)
	   {
		X1=(-b-sqrt(D))/2*a;
		X2=(-b+sqrt(D))/2*a;
		cout<<"First solution is X1="<<X1<<endl;
		cout<<"Second solution is X2="<<X2<<endl;
		break;

	   } 
	else if (D==0)
	   {
		X1=(-b+sqrt(D))/(2*a);
		cout<<"X1=X2="<<X1<<endl;
		break;
	   }
	else
	  {
		cout<<"There are no solutions for this equation since X1 & X2 dont have real roots"<<endl;
		break;
	  }
   }
   else
   {
	   cout<<"Please select the degree 1 or 2"<<endl;
 
   }
}
}

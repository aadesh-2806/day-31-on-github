#include<stdio.h>

void main()
{
	
	int i,j;
	float s;
	
	printf("hello\nenter dist=");
	scanf("%d",&j);

	s=1000*j;
	printf(" dist in m= %f/n",s);
	
	s=100*s;
	printf(" dist in cm= %f/n",s);
	
	s=s/2.53;
	printf(" dist in inches= %f/n",s);
	
	s=12*s;
	printf(" dist in feet= %f/n",s);
	
	getch();
	
}	

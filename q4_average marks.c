#include<stdio.h>

void main()
{
	
	int i,j1,j2,j3,j4,j5;
	float s;
	
	printf("hello\nenter marks of sub =");
	scanf("%d%d%d%d%d",&j1,&j2,&j3,&j4,&j5);
	
	
	s=(j1+j2+j3+j4+j5)/5.0;
	printf(" average marks= %f",s);
	
	s=s/5.0;
	printf(" percentage= %f",s);
	
	
	getch();
	
}	

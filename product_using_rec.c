#include<stdio.h>

int rec(int,int);
void main()
{
	int i,m,n,j,s,a[20][20],b[20][20],c;
	
	printf("hello aadesh agrawal(2019uec1660)\nenter values=");
	scanf("%d%d",&n,&m);
	
	printf("%d",rec(n,m));
	getch();
}

int rec(int x,int y)
{
	if(x<y)
	{
		return rec(y,x);
	}
	else
	{
		if(y!=0)
		{
			return (x+rec(x,y-1));
		}
		else
		{
			return 0;
		}
	}
}

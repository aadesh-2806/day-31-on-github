#include<stdio.h>

void main()
{
	
	int i,a[40][50],j,m,n;
	
	printf("hello\nenter number of values=");
	scanf("%d%d",&n,&m);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("enter %d,%d=",i+1,j+1);
			scanf("%d",&a[i][j]);
		}					
	}
	j=0;
	while(1)
	{
		for(i=0;i<n;i++)
		{
			printf("%d ",a[i][j]);
		}
		j++;
		if(j==m)
		{
			break;
		}
		for(i--;i>=0;i--)
		{
			printf("%d ",a[i][j]);
		}
		j++;
		if(j==m)
		{
			break;
		}
	}
	getch();
	
}	 		

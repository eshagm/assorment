#include<stdio.h>

main()
{
	int a[100][100],transpose[100][100],r,c,i,j;
	printf("enter row array =");
	scanf("%d",&r);
	printf("enter column array =");
	scanf("%d",&c);
	
	printf("enter matrix element\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter element a[%d][%d]",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("entered matrix =\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",a[i][j]);
			if(j==c-1);
		}
		printf("\n");
	}		
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			transpose[j][i]=a[i][j];
		}
	}
	printf("transpose of the matrix =\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d",transpose[i][j]);
			if(j==r-1);
		}
		printf("\n");
	}
}

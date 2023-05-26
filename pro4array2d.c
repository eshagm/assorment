#include<stdio.h>

main()
{
	int a[100][100],b[100][100],sum[100][100];
	int i,j,r,c;

	printf("enter number of row =\n");
	scanf("%d",&r);
	printf("enter number of column =\n");
	scanf("%d",&c);

	printf("enter array elemant of a =\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("the array elemant of b =\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum[i][j]= a[i][j]+b[i][j];
		}
	}
	printf("\nsum array =");
	for(i=0;i<r;i++)
	{
			for(j=0;j<c;j++)
		    printf("\nsum =%d",sum[i][j]);
    }
		printf("\n");

}

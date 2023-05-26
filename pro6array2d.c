#include<stdio.h>

main()
{
	int i,j;
	int m=4,n=4,sum=0;
	int mx[4][4]={{11,12,13,14},{15,16,17,18},{19,20,21,22},{23,24,25,26}};
	
	if(m==n)
	{
		printf("the matrix is\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d ",mx[i][j]);
			}
			printf("\n");
		}
		for(i=0;i<m;i++)
		{
			sum=sum+mx[i][i];
		}
		printf("diagonal element =%d\n",sum);
	}
	else
	{
		printf("not square matrix\n");
	}
}

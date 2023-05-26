#include<stdio.h>

main()
{
	int arr[]={4,3,5,2,8,9};
	int i,j,t=3,l;
	int length=sizeof(arr)/sizeof(arr[0]);
	
	printf("original array =\n");
	for(i=0;i<length;i++)
	{
		printf("%d ",arr[i]);
	}
	for(i=0;i<t;i++)
	{ 
		l=arr[length-1];
		for(j=length;j>0;j--)
		{
			arr[j]=arr[j-1];
		}
		arr[0]=l;
	}
	printf("\n");
	printf("right rotate an array =");
	for(i=0;i<length;i++)
	{
		printf("%d ",arr[i]);
	}
}

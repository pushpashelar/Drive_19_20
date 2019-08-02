#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *a,i,j,n,max=0,t=0,min=0;
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(max<a[i])
		{ 
			max=a[i];
			if(t<max)
				min=t;
		}
		t=max;
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		   printf("%d\t",a[i]);
	}
}

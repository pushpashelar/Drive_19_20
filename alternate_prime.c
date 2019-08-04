#include<stdio.h>
#include<stdlib.h>
void alternet_prime()
{
	int *array,counter=-1,flag=0,n;
	scanf("%d",&n);
	array=(int*)malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
		for(int j=2;j<array[i];j++)
		{
			if((array[i]%j==0)&&(array[i]!=2))
			{	
				flag = 0;
				break;
			}
			else
			{
				flag = 1;
			}
		}
		if(flag==1)
		{
			counter=counter+1;
			if(counter%2==0)
				printf("%d ",array[i]);
		}
	}

}
int main()
{
	alternet_prime();
	return 0;
}

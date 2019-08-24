/*#include<stdio.h>
#include<string.h>
void main()
{
 char s[100],a
 //char s[100]
 //char name[50];
printf("Enter your full name: ");
scanf("%[^\n][]s",s);
printf("%s",s);
while(s!='\0')

}*/#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void rev(char s[])
{
 char s1[100];
 int l=strlen(s)-1;
 for(int i=0;s[i]!='\0';i++)
{
  s1[l]=s[i];
   l--;
}
printf("%s ",s1);
for(int j=0;j<100;j++)
{
 s1[j]='\0';
}
}

void separate_words(char *str,int n)
{
	char **new_arr=(char **)malloc(sizeof(char *)*n);
	int i,cc=0,j=0,l,k;
        printf("enrter k values");
        scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(str[i]==' ' || str[i]=='\n')
		{
			new_arr[cc][j]='\0';
			cc++;
			j=0;
			
		}
		else
		{
			if (j==0)
				new_arr[cc]=(char *)malloc(sizeof(char)*n);
			new_arr[cc][j]=str[i];
			j++;
			
		}
	}
        //printf("seperate string");	
	for(i=cc;i>=0;i--)
                //printf("%s ",new_arr[i]);
                for(int l=0;l<k;l++)
                 {
		    rev(new_arr[i]);
                 }
         /* for(i=cc;i>=0;i--)
              rev(new_arr[i]);*/

}
int main()
{
	char str[100];
	int n;
	printf("\nEnter the string:");
	scanf("%[^\n]s",str);
	n=strlen(str);
	separate_words(str,n);
}

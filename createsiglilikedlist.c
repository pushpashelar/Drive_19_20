#include<stdio.h>
#include<stdlib.h>
struct list
{
	int data;
	struct list *next;
};

int main()
{
	struct list *head,*newnode,*temp,*c,*nextnode,*t,*t1;
	int n,i,p;
	printf("enter number of node\n");
	scanf("%d",&n);
	head=NULL;
	for(i=0;i<n;i++)
	{
		newnode=(struct list*)malloc(sizeof(struct list));
		scanf("%d",&newnode->data);
		if(head==NULL)
		{
			head=newnode;
			temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
	}
	printf("linklist is created succesfull\n");
	c=head;
	while(c!=NULL)
	{
		printf("%d\n",c->data);
		c=c->next;
	}
        printf("insert node in begining linkedlist");
        printf("enter the element to insert in begining\n");
        newnode=(struct list*)malloc(sizeof(struct list));
        scanf("%d",&newnode->data);
        
	nextnode=head;
        head=newnode;
        head->next=nextnode;
        nextnode=head;
        while(nextnode!=NULL)
        {
                printf("%d\t",nextnode->data);
                nextnode=nextnode->next;
        }

        printf("insert at end\n");
         printf("enter the element to insert end\n");
        newnode=(struct list*)malloc(sizeof(struct list));
        scanf("%d\n",&newnode->data);
        c=head;
        while(c!=NULL)
        {
               // printf("%d\n",c->data);
                t=c;
                c=c->next;
        }
       t->next=newnode;
       newnode->next=c;
        t1=head;
        while(t1!=NULL)
        {
                printf("%d\n",t1->data);
                t1=t1->next;
        }



}

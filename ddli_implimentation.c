#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
void disply(struct node *head)
{
    struct node *current;
     current=head;
        while(current!=NULL)
        {
                printf("%d ",current->data);
                current=current->next;
        }

 
}

void insertnode(struct node *head,int da)
{
  struct node *p,*newnode;
  p=head;
  newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=da;
  newnode->next=p;
  p->prev=newnode;
  head=newnode;
  printf("inserted element is\n");
  disply(head);
}
void main()
{
	int numofNode,iterator,d,l=0,c=0,sum,num;
	struct node *newnode,*head,*temp,*current;
	printf("enter the how manny element is needed");

	scanf("%d",&numofNode);
	head=NULL;
	for(iterator=0;iterator<numofNode;iterator++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&newnode->data);
                l++;
		if( head==NULL)
		{
			head=newnode;
			temp=newnode;
		}
		else
		{
			temp->next=newnode;
			newnode->prev=temp;
			temp=newnode;
		}

	}
        disply(head);
        //printf("insert sucesfully");
        printf("enter the num to add");
        scanf("%d",&d);
        sum=d;

        current=head;
        while(current!=NULL)
        { 
          c++;
          if(c==l)
            {
                 sum=sum+(current->data);
                 num=sum%10;
                 current->data=num;
                 sum=sum/10;
                 
            }
          current=current->next;
        }
        //insertnode(head,d);
}

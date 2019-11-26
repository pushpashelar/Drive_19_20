#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void disply(struct node *head)
{
	struct node *current=head;
	while(current!=NULL)
	{
		printf("%d ",current->data);
		current=current->next;
	}
}
void print_end_node(struct node * head)
{
  if(!head)
     return;
  print_end_node(head->next->next);
  printf("%d",head->next->data);
}
struct node* insert_node(struct node *head,int da,int pos)
{
  int k=1;
  struct node *p,*q,*newnode;
  newnode=(struct node*)malloc(sizeof(struct node));
  p=head;
  if(pos==1) 
  {
  newnode->data=da;
  newnode->next=head;
  head=newnode;
  }
  else
  {
    while((p!=NULL)&&(k<pos))
      {
         q=p;
         p=p->next;
         k++;
      }
      newnode->data=da;
      q->next=newnode;
      newnode->next=p;
 }
   disply(head);
}
struct node *delet(struct node *head,int pos)
{
 int k=1;
 struct node *p,*q;
 p=head;
 if(pos==1)
 {
   head=head->next;
   free(p);
   disply(head);
 }
 else
  {
    while((p!=NULL)&&(k<pos))
      {
         q=p;
         p=p->next;
         k++;
      }
      q->next=p->next;
      free(p);
 }
   disply(head);

}
struct node *revers(struct node *head)
{
  struct node *next,*prev,*current;
  next=NULL;
  prev=NULL;
  while(current!=NULL)
 {
  next=current->next;
  current->next=prev;
  prev=current;
  current=prev;
 }
 head=prev;
 printf("revrs is\n");
disply(head);
}

struct node *end_node(struct node *head,int n)
{
  struct node *temp,*t;
  int c=0,k=0;
  temp=head;
  t=head;
  while(temp!=NULL)
  {
    c=c+1;
    temp=temp->next;
  }
  c=c-n;
 while(t!=NULL)
  {
    k=k+1;
    if(k==c)
    {
      printf("%d",t->data);
      break;
    }
    t=t->next;
  }

}

void main()
{
	int numofNode,a,iterator,d,posi;
	struct node *head,*temp,*newnode;
	printf("enter the number of node");
	scanf("%d",&numofNode);
	head=NULL;
	for(iterator=0;iterator<numofNode;iterator++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
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
        printf("linked list element is element is\n");
	disply(head);
        printf("ending list\n");
        print_end_node(head);
        //printf("enter the nth node to display");
        //scanf("%d",&a);
        //end_node(head,a);
        //printf("enter the element to insert and which position::\n");
        //scanf("%d%d",&d,&posi);
        //insert_node(head,d,posi);
        //printf("element insert succesfully\n");
        //printf("deleted elment is\n");
        //printf("enter to the pos");
        //scanf("%d",&posi);
        //delet(head,posi);
        //revers(head);
        //disply(head);
}

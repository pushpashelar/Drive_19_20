#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
 int RollNo;
 char name[100];
 char stream[100];
 struct node *next;
};
void disply(struct node *head)
{
 struct node *current=head;
 while(current!=NULL)
 {
   printf("\n%d",current->RollNo);
   printf("\t%s",current->name);
   printf("\t%s",current->stream);
   
   current=current->next;
 }
}
void serch(struct node *head)
{
   char str[100];
   struct node *current=head;
   printf("enter the stream");
   scanf("%s",str);

  while(current!=NULL)
 {
   if(strcmp(current->stream,str)==0)
   {
   printf("\n%d",current->RollNo);
   printf("\t%s",current->name);
   printf("\t%s",current->stream);
   current=current->next;
   }
   else
   current=current->next;
 }

   
}

void main()
{
  int num,run;
  struct node *temp,*head,*newnode;
  //newnode=(struct node*)malloc(sizeof(struct node));
  printf("enter the numer of node");
  scanf("%d",&num);
  head=NULL;
  for(run=0;run<num;run++)
 {
    newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->RollNo);
    scanf("%s",newnode->name);
    scanf("%s",newnode->stream);
    newnode->next=NULL;
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
disply(head);
serch(head);
}


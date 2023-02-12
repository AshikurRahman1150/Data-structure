#include<stdio.h>
#include<stdlib.h.>
struct node{
int data;
struct node *next;
}*head;
void createlist(int n);
void AddLastNode(int x);
void displaylist();
int main()
{
   int n, data;
   printf("Enter the total node:");
   scanf("%d",&n);
   createlist(n);
   printf("\n Data in the list\n");
   displaylist();
   printf("\n Enter data to insert at the last of the list:");
   scanf("%d", &data);
   AddLastNode(data);
   displaylist();
   return 0;
}
void createlist (int n)
{
   int data,i;
   struct node *newNode,*temp;
   head=(struct node*)malloc(sizeof(struct node));
   printf("Enter the data of node 1":);
   scanf("%d",&data);
   head->data=NULL;
   temp=head;
   for(i=2; i<=n; i++)
{
   newNode=(struct node*)malloc(sizeof(struct node));
   printf("Enter the data of node %d:",i);
   scanf(%d,&data);
   newNode->data=data;
   newNode->next=NILL;
   temp->next=newNode;
   temp=temp->next;
   }
}
void AddLastNode(int data)
{
   struct node *newNode,*temp;

newNode=(struct node*)malloc(sizeof(struct node))
newNode->data=data;
newNode->next=NULL;
temp=head;
while(temp->next!=NULL){
   temp=temp->next;
}
temp->next=newNode;
}
void displaylist()
{
   struct node *temp;
   temp=head;
   while(temp!=NULL)
{
   printf("%d->",temp->data);
   temp=temp->next;
}
printf("NULL\n");
}

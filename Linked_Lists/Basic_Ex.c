#include<stdio.h>
#include<stdlib.h>
struct node // self referential structure
{
 int data;
 struct node *link; 
};
struct node *head = NULL; // Initially the linked list is empty. 
void display();
void create();
int main ()
{
 create();
 display();
}
void display()
{
 struct node *temp;
 temp = head;
 while(temp != NULL)
 {
  printf("%d ", temp->data);
  temp = temp->link;
 }
}
void create()
{
 struct node *t, *temp;
 int x, choice;
 do
 {
  t = (struct node *)malloc(sizeof(struct node)); 
  t->link = NULL;
  printf("Enter data part for new node ");
  scanf("%d", &x);
  t->data = x;
  if(head == NULL)
  {
   head = t;
   temp = head;
  }
  else
  {
   temp->link = t;
   temp = temp->link;
  }
  printf("Do you want to create another node? \nPress 1 to continue; press 0 to stop");
  scanf("%d", &choice);
 }
 while(choice != 0);
}
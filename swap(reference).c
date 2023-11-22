#include<stdio.h>
void swap(int *p,int *q)
{
  int r;
  r=*p;
  *p=*q;
  *q=r;
}
int main()
{
  int a,b;
  printf("Enter 2 numbers");
  scanf("%d%d",&a,&b);
  printf("\nBefore swap a is %d b is %d",a,b);
  swap(&a,&b);
  printf("\nAfter swap a is %d b is %d",a,b);
}
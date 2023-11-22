#include<stdio.h>
struct rational
{
  int n;
  int d;
};
void accept(struct rational *);
void display(struct rational *);
void sum(struct rational *p,struct rational *q,struct rational *r);
void product(struct rational *p,struct rational *q,struct rational *r);
int main()
{
  struct rational r1,r2,r3,r4;
  int a;
  printf("Enter r1 num and deno: ");
  accept(&r1);
  printf("Enter r2 num and deno: ");
  accept(&r2);
  printf("\nr1 is");
  display(&r1);
  printf("\nr2 is");
  display(&r2);
  sum(&r1,&r2,&r3);
  product(&r1,&r2,&r4);
  printf("\n sum is");
  display(&r3);
  printf("\nproduct is");
  display(&r4);
        
}
void accept(struct rational *r)
{
  int a;
  printf("\nEnter num and deno: ");
  scanf("%d%d",&r->n,&r->d);
}
void display(struct rational *r)
{
  printf("\nNum is %d Deno is %d",r->n,r->d);
}
void sum(struct rational *p,struct rational *q,struct rational *r)
{
  r->n = p->n*q->d + q->n*p->d;
  r->d = p->d * q->d;
}
void product(struct rational *p,struct rational *q,struct rational *r)
{
  r->n = p->n*q->n;
  r->d = p->d*q->d;
}
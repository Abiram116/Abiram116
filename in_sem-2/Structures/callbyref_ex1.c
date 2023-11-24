#include<stdio.h>

struct time
{
  int h;
  int m;
  int s;
};

void accept(struct time *p);
void display(struct time *p);
int duration(struct time *p,struct time *q);

int main()
{
  struct time st,et;
  int dur;
  printf("Enter start time:");
  accept(&st);
  printf("\nEnter end time:");
  accept(&et);
  printf("\nStart time is:");
  display(&st);
  printf("\nend  time is:");
  display(&et);
  dur = duration(&st,&et);
  printf("\n duration is: %dsec",dur);
}

void accept(struct time *p)
{
  printf("\nEnter hour,minutes and seconds: ");
  scanf("%d%d%d",&p->h,&p->m,&p->s);
}

void display(struct time *p)
{
  printf("\n%d : %d : %d ",p->h,p->m,p->s);
}

int duration(struct time *p,struct time *q)
{
  int st_sec,et_sec,d;
  st_sec = p->h*3600 + p->m*60 +p->s;
  et_sec = q->h*3600 + q->m*60 +q->s;
  d = et_sec - st_sec;
  return d;
}
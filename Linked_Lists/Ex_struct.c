#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

struct student
{
    int id;
    char name[10];
};
struct node//Self referencial structure
{
    struct student data;
    struct node *link;
};



int main(){
    
    return 0;
}
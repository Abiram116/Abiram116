#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
struct height
{
    int feet;
    float inch;
};

int main(){
    struct height h1;
    struct height h2;
    printf("Enter the first person's height:\n");
    scanf("%d%f",&h1.feet, &h1.inch);
    printf("Enter the second person's height:\n");
    scanf("%d%f",&h2.feet, &h2.inch);
    if(h1.feet == h2.feet && h1.inch==h2.inch){
        printf("both have equal height");
    }
    else if(h1.feet > h2.feet){
        printf("\nThe taller one is %d feet and %.2f inches.\n\n", h1.feet, h1.inch);
        }else{
            printf("\nThe taller one is %d feet and %.2f inches.\n\n", h2.feet, h2.inch);
        }
    return 0;
}
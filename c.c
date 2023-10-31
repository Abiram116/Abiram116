#include<stdio.h>
int factorial(int );
int main(){
    int n=5,r=4,nf,rf,x,xf,ncr;
    nf=factorial(n);
    rf=factorial(r);
    x=n-r;
    xf=factorial(x);
    ncr=nf/(rf*xf);
    printf("NCR = %d",ncr);
}
int factorial(int a){
    int i,f;
    for(i=a,f=1;i>0;i--){
        f*=i;
    }
    return f;
}

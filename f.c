#include<stdio.h>
void main(){
    short a=10,b=20;
    printf("orignal value of a=%d,b=%d\n",a,b);
    short c=a;
    a=b;
    b=c;
    printf("changed value of a=%d,b=%d ",a,b);
    
}
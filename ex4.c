#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int a,b,total=0;
    char name[20];
    
    printf("Rolling dice...\n");
    srand(time(NULL));
    a=1+rand()%6;
    b=1+rand()%6;
    printf("Die 1: %d\n",a);
    printf("Die 2: %d\n",b);
    printf("Total value: %d",a+b);
    
    return 0;
}

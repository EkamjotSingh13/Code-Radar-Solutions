#include<stdio.h>
int main(){
    int a,b,c;
    scamf("%d 5d %d",&a, &b,&c);
    int r=a+b;
    if(r>c){
        printf("Valid");

    }
    else{
        printf("Invalid");
        
    }
}
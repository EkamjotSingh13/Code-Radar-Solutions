// Your code here...
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    int c=0;
    for(int i=0;i<n;i++){
        int temp;
        if(arr[i]!=0){
            temp=arr[i];
            arr[i]=arr[c];
            arr[c]=temp;
            c++;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
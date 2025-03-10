// Your code here...
int main(){
    int a;
    scanf("%d",&a);
    if(a%4==0){
        if(a%400 || a%100!=0){
            printf("Leap Year");
        }
        else{
            printf("Not a Leap Year");
        }
    }
    else{
        printf("Not a Leap Year");
    }
    return 0;
}
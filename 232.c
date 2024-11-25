#include<stdio.h>
int main(){
    int month;
    int a[1000];
    scanf("%d",&month);
    a[0]=1;
    a[1]=1;
    if(month<3){
        printf("1");
    }else{
    for(int i = 2;i<=month-1;i++){
        a[i]=a[i-1]+a[i-2];
    }

    printf("%d",a[month-1]);
    }
}
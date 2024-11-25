#include<stdio.h>
int main(){
    int A,B,count,sum;
    sum=0;
    scanf("%d %d",&A,&B);
    for(int i = A;i<=B;i++){
        printf("%-5d",i);
        count++;
        sum+=i;
        if(count%5==0){
            printf("\n");
        }
    }
    if(count%5!=0){
        printf("\n");
    }
    printf("Sum = %d",sum);
    
}
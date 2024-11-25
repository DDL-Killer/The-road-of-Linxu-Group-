#include<stdio.h>
#include<stdlib.h>
int leijia(int arr[],int a){
    if(a==0){
        return 0;
    }
    else{
        return arr[a-1]+leijia(arr,a-1);
    }
}
int main(){
    int input;
    int count = 0;
    int yuxian = 10;
    int *arr=NULL;
    arr=(int*)malloc(yuxian*sizeof(int));
    while(1){
        scanf("%d",&input);
        if(input<0){
            break;
        }
        if(count==yuxian){
            yuxian*=2;
            arr=(int*)realloc(arr,yuxian*sizeof(int));
        }
        arr[count++]=input;
    }
    if(count>0){
        int sum=leijia(arr,count);
        double daan=(double)sum/count;
        printf("%2f",daan);

    }
}
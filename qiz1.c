#include<stdio.h>
int wanshu(int a){
    int sum=1;//设置计量非自身其他因数的总数，直接把1包进去，不再研究1
    for(int i=2;i<=a/2;i++){//除以2，排除自身成为因数情况
        if(a%i==0){//如果模运算为0，则能整除，为因数之一
            sum+=i;//有一个加一个
        }
    }
    if(sum==a){//相同则代表是完数
        printf("%d = 1",a);//先把非特殊项输出
    for(int i=2;i<=a/2;i++){//从2之后开始，有一个因数，打印一个因数
        if(a%i==0){
        printf(" + %d",i);
        }
    }
        printf("\n");//这个数打印结束之后换行
        return 1;//表示这个数是完数
    }
    return 0;//表示这个数不是完数
}
int main(){
    int m,n,found;//found用来看看到底有没有完数
    found=0;
    scanf("%d %d",&m,&n);
    for(int i=m;i<=n;i++){//在mn范围之内，穷举找完数，可以优化的是把奇数直接排除
        if(wanshu(i)){//要判断，先调用，当这些数当中，有一个是完数，那么这个函数的返回值是1，found为真
            found=1;
        }
    }
    if(!found){//如果一个都没有，found为0为假，输出none
        printf("None\n");
    }
}
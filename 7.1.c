#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int panduan(long long a){
    if(a<2){
        return 0;
    }
    if(a==2){
        return 1;
    }
    if(a>2&&a%2==0){
        return 0;
    }
    for(long long i = 3;i<=sqrt(a);i+=2){
        if(a%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    long long b;
    scanf("%ld",&b);
    if(b<=2||b%2!=0){
        return 1;
    }
    for(long long i=2;i<=b/2;i++){
        if(panduan(i)&&panduan(b-i)){
            printf("%lld=%lld+%lld",b,i,b-i);
            break;
        }
    }

}
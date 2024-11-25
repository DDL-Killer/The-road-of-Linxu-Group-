#include<stdio.h>
int main()
{
    int age,price;
    printf("请输入你的年龄：");
    scanf("%d",&age);
    price = 50;
    //规定正常票价是50r
if(age<=12)
    printf("你的门票价格是:10元");
if(age>=60)
    printf("你的门票价格是:%d",price*0.3);
if(12<age<60)
    printf("你的身份是?学生请回答1,非学生回答0");
    char 身份;
    scanf("%d",&身份);
    if(身份=1)
    printf("你的门票价格是:%d",price*0.5);
    if(身份=0)
    printf("你的门票价格是:%d",price);
}
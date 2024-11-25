#include<stdio.h>
int main()
{
    int age,price;
    printf("请输入你的年龄:");
    scanf("%d",&age);
    price = 50;
    //规定正常票价是50r
if(age<=12)
{
    printf("你的门票价格是:10元");
}
else if(age>=60)
{    
    printf("你的门票价格是:%.2f",price * 0.3);
}
else if(age>12 && age<60)   
    {
    printf("你的身份是?学生请回答1,非学生请回答0:");
    int ID;
    scanf("%d",&ID);
    if(ID==1)
        {
        printf("你的门票价格是:%.2f元",price * 0.5);
        }
    else if(ID==0)
        {
        printf("你的门票价格是:%d元",price);
        }
    }
return 0;
}
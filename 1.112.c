#include<stdio.h>
int main()
{
    int age,price;
    printf("�������������:");
    scanf("%d",&age);
    price = 50;
    //�涨����Ʊ����50r
if(age<=12)
{
    printf("�����Ʊ�۸���:10Ԫ");
}
else if(age>=60)
{    
    printf("�����Ʊ�۸���:%.2f",price * 0.3);
}
else if(age>12 && age<60)   
    {
    printf("��������?ѧ����ش�1,��ѧ����ش�0:");
    int ID;
    scanf("%d",&ID);
    if(ID==1)
        {
        printf("�����Ʊ�۸���:%.2fԪ",price * 0.5);
        }
    else if(ID==0)
        {
        printf("�����Ʊ�۸���:%dԪ",price);
        }
    }
return 0;
}
#include<stdio.h>
int main()
{
    int age,price;
    printf("������������䣺");
    scanf("%d",&age);
    price = 50;
    //�涨����Ʊ����50r
if(age<=12)
    printf("�����Ʊ�۸���:10Ԫ");
if(age>=60)
    printf("�����Ʊ�۸���:%d",price*0.3);
if(12<age<60)
    printf("��������?ѧ����ش�1,��ѧ���ش�0");
    char ���;
    scanf("%d",&���);
    if(���=1)
    printf("�����Ʊ�۸���:%d",price*0.5);
    if(���=0)
    printf("�����Ʊ�۸���:%d",price);
}
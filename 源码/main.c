#include<stdio.h>
#include<stdlib.h>
#include"����.h"
int d,a,b,c;
double aj,bj,cj;
int moshi;
int main()
{
    printf("                  \n");
    printf("  ��ӭʹ�ñ��������  \n");
    printf("                   \n");
    system("pause");
    do
    {
    system("cls");
    printf("1.�ӷ�\n");
    printf("2.����\n");
    printf("3.�˷�\n");
    printf("4.����\n");
    printf("5.�������\n");
    printf("6.��С������\n");
    scanf("%d",&moshi);
    if( moshi == 5 )
    {
        printf("��һ������");
        scanf("%d",&a);
        printf("�ڶ�������");
        scanf("%d",&b);
    }
    else if(moshi==6)
    {
        printf("��һ������");
        scanf("%d",&a);
        printf("�ڶ�������");
        scanf("%d",&b);
    }
    else
    {  
        printf("��һ������");
        scanf("%lf",&aj);
        printf("�ڶ�������");
        scanf("%lf",&bj);
    }
    switch(moshi)
    {
        case 1:
            cj = aj + bj;
            break;
        case 2:
            cj = aj - bj;
            break;
        case 3:
            cj = aj * bj;
            break;
        case 4:
            cj = aj / bj;
            break;
        case 5:
            c = da(a,b);
            break;
        case 6:
            c = xiao(a,b);
            break;
    }
    if(moshi==5)
    {
        printf("�����%d\n",c);
    }
    else if(moshi==6)
    {
        printf("�����%d\n",c);
    }
    else
    {
        printf("�����%lf\n",cj);
    }
    printf("���������밴1�����������˳���");
    scanf("%d",&d);
    getchar();
    }while(d == 1);
    return 0;
}
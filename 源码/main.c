#include<stdio.h>
#include<stdlib.h>
#include"声明.h"
int d,a,b,c;
double aj,bj,cj;
int moshi;
int main()
{
    printf("                  \n");
    printf("  欢迎使用本计算机。  \n");
    printf("                   \n");
    system("pause");
    do
    {
    system("cls");
    printf("1.加法\n");
    printf("2.减法\n");
    printf("3.乘法\n");
    printf("4.除法\n");
    printf("5.最大公因数\n");
    printf("6.最小公倍数\n");
    scanf("%d",&moshi);
    if( moshi == 5 )
    {
        printf("第一个数：");
        scanf("%d",&a);
        printf("第二个数：");
        scanf("%d",&b);
    }
    else if(moshi==6)
    {
        printf("第一个数：");
        scanf("%d",&a);
        printf("第二个数：");
        scanf("%d",&b);
    }
    else
    {  
        printf("第一个数：");
        scanf("%lf",&aj);
        printf("第二个数：");
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
        printf("结果是%d\n",c);
    }
    else if(moshi==6)
    {
        printf("结果是%d\n",c);
    }
    else
    {
        printf("结果是%lf\n",cj);
    }
    printf("继续计算请按1，按其他键退出。");
    scanf("%d",&d);
    getchar();
    }while(d == 1);
    return 0;
}
#include<stdio.h>
#include<windows.h>
#include"声明.h"
int main()
{
    int zhi;
    int moshi;
    int a=1;
    int b=1;
    int c=1;
    int d=1;
    open:
    printf("选择模式：公因数(1),公倍数(2)？");
    scanf("%d",&moshi);
    if( moshi > 2 )
    {
        MessageBox(0,"请选择1或2","注意",MB_ICONASTERISK|MB_OK);
        goto open;
    }
    if( moshi == 1)
    {
        one:
        printf("请输入要求的第一个数：");
        scanf("%d",&a);
        c=a;
        if(a == 0)
        {
            MessageBox(0,"0不支持哦","错误",MB_ICONWARNING|MB_OK);
            goto one;
        }
        two:
        printf("请输入要求的第二个数：");
        scanf("%d",&b);
        d=b;
        if(b == 0)
        {
            MessageBox(0,"0不支持哦","错误",MB_ICONWARNING|MB_OK);
            goto two;
        }
        printf("请稍等.......\n");
        b =da(a,b);
        printf("(%d,%d)=%d\n",c,d,b);
    }
    else
    {
        yhree:
        printf("请输入要求的第一个数：");
        scanf("%d",&a);
        c=a;
        if(a == 0)
        {
            MessageBox(0,"0不支持哦","错误",MB_ICONWARNING|MB_OK);
            goto yhree;
        }
        four:
        printf("请输入要求的第二个数：");
        scanf("%d",&b); 
        d=b;
        if(a == 0)
        {
            MessageBox(0,"0不支持哦","错误",MB_ICONWARNING|MB_OK);
            goto four;
        }
        printf("请稍等.......\n"); 
        b = xiao(a,b);
        printf("[%d,%d]=%d\n",c,d,b);
    }
    printf("继续计算请按1，按其他键退出。");
    scanf("%d",&zhi);
    if( zhi == 1 )
    {
        goto open;
    }
    else
    {
        goto end;
    }
    end:
    return 0;
}
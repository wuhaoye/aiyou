#include<stdio.h>
#include<windows.h>
#include"����.h"
int main()
{
    int zhi;
    int moshi;
    int a=1;
    int b=1;
    int c=1;
    int d=1;
    open:
    printf("ѡ��ģʽ��������(1),������(2)��");
    scanf("%d",&moshi);
    if( moshi > 2 )
    {
        MessageBox(0,"��ѡ��1��2","ע��",MB_ICONASTERISK|MB_OK);
        goto open;
    }
    if( moshi == 1)
    {
        one:
        printf("������Ҫ��ĵ�һ������");
        scanf("%d",&a);
        c=a;
        if(a == 0)
        {
            MessageBox(0,"0��֧��Ŷ","����",MB_ICONWARNING|MB_OK);
            goto one;
        }
        two:
        printf("������Ҫ��ĵڶ�������");
        scanf("%d",&b);
        d=b;
        if(b == 0)
        {
            MessageBox(0,"0��֧��Ŷ","����",MB_ICONWARNING|MB_OK);
            goto two;
        }
        printf("���Ե�.......\n");
        b =da(a,b);
        printf("(%d,%d)=%d\n",c,d,b);
    }
    else
    {
        yhree:
        printf("������Ҫ��ĵ�һ������");
        scanf("%d",&a);
        c=a;
        if(a == 0)
        {
            MessageBox(0,"0��֧��Ŷ","����",MB_ICONWARNING|MB_OK);
            goto yhree;
        }
        four:
        printf("������Ҫ��ĵڶ�������");
        scanf("%d",&b); 
        d=b;
        if(a == 0)
        {
            MessageBox(0,"0��֧��Ŷ","����",MB_ICONWARNING|MB_OK);
            goto four;
        }
        printf("���Ե�.......\n"); 
        b = xiao(a,b);
        printf("[%d,%d]=%d\n",c,d,b);
    }
    printf("���������밴1�����������˳���");
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
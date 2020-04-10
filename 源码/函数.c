int da(int num1,int num2)
{
    int num3;
    if(num1<num2)
    {
        num3=num1;
        num1=num2;
        num2=num3;
    }
    num3 = num1 % num2;
    while(num3 != 0)
    {
        num1=num2;
        num2=num3;
        num3=num1%num2;
    }
    return num2;
}
int xiao(int num1,int num2)
{
    int num3;
    int rere;
    if(num1<num2)
    {
        num3=num1;
        num1=num2;
        num2=num3;
    }
    rere=num1*num2;
    num3 = num1 % num2;
    while(num3 != 0)
    {
        num1=num2;
        num2=num3;
        num3=num1%num2;
    }
    rere = rere/num2;
    return rere;
}
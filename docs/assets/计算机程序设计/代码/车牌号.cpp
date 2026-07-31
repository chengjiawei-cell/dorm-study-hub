#include<iostream>
int main()
{
    int i,k;
    int number;
    int n1,n2 ,n3 ,n4;
    int flag;
    int count=0;
    for(i=1;i<=9;i++)
    {
        k=i*11;
        number=k*k;
        n1=(number/1000);
        n2=(number/100)%10;
        n3=(number/10)%10;
        n4=number%10;
    flag=(n1=n2)&&(n3=n4)&&(n1!=n3);
    if(flag)
    {
        printf("The plate No.is %d.\n",number);

    }
    count++;
    }
    printf("count:%d.\n",count);
    return 0;
}
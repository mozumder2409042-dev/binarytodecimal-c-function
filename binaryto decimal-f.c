#include<stdio.h>
int binarytodecimal(long long binary);
int main()
{
    long long binary;
    printf("enter the binary number:");
    scanf("%lld",&binary);
    int result=binarytodecimal(binary);
    printf("equivalent decimal number %d",result);
    return 0;
}
int binarytodecimal(long long binary)
{
    if(binary==0)
    {
        return 0;
    }
    int reminder=binary%10;
    return reminder+2*binarytodecimal(binary/10);

}

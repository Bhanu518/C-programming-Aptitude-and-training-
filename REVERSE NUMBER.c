#include <stdio.h>
int main()
{

int a=518;
int res=0;
while(a>0)
{
    int rem=a%10;
    res=res*10+rem;
    a=a/10;
}
printf("Reverse number:%d",res);


}
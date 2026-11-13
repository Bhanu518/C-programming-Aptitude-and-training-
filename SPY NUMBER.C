#include <stdio.h>
int main()
{
    int a;
    printf("Enter your Number:");
    scanf("%d",&a);
    int res=1;
    int sum=0;
    while(a>0)
        {
            int rem=a%10;
            res=res*rem;
            sum=sum+rem;
            a/=10;
        
        }
    printf("\nThe Multiplication number is:%d",res);
        printf("\nThe sum is:%d",sum);
if(res==sum)
{
    printf("\nIt is a Spy Number");
}
    printf("\nIt is not a Spy Number");
}

#include <stdio.h>
int main()
{
 int cp;
 int sp;
 printf("Enter the cost of the item:\n");
 scanf("%d",&cp);
 printf("Enter the selling price of the item:\n");
 scanf("%d",&sp);
 if(sp<cp)
 {
    printf("Profit:%d",sp-cp);
    }
    else if(cp>sp)
    {
        printf("loss:%d",cp-sp);
    }
    else if(sp=cp)
    {
        printf("NO LOSS NO PROFIT");
    }
return 0;
}
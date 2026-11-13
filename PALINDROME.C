#include <stdio.h>
int main()
{
  int n;
  int res=0;
  int original=n;
  scanf("%d",&n);
  while(n>0)
  {
      int rem=n%10; 
      res=res*10+rem;
      n=n/10;

  }
      printf("%d",res);
      if(res==original)
      {
printf("This is a PALINDROME:");
      }
else
{
printf("IT IS NOT A PALINDROME");
}
      }

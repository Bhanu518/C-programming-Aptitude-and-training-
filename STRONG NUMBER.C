#include<stdio.h>
int main()
{
  int a;
  scanf("%d",&a);
  int temp=a;
  int res=0;
  while(a>0){
    int fact=1;
    int d=a%10;
  for(int i=1;i<=d;i++)
    {
      fact=fact*i;
    }
  res=res+fact;
  a=a/10;
  
}
printf("%d\n",res);
  if(res==temp)
  {
    printf("IT IS A STRONG NUMBER");
  }
  else{
    printf("NOT A STRONG NUMBER");
  }
}
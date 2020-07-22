#include<stdio.h>
int lcm(int,int)
int main()
{
  int a,b,result;
  printf("Enter any two numbers:\n");
  scanf("%d %d",&a,&b);
  result=lcm(a,b)
  printf("\nThe LCM of %d and %d is %d",a,b, result);
  return 0;
}

int lcm(int a,int b)
{
  static int temp=1;
  if(a%temp==0 && b%temp==0)
  {
    return temp;
  }
temp++;
lcm(a,b);
return temp;
}

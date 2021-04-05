#include <stdio.h>
int main()
{
  int i=0, a=1, b=1, sum=0;
  while (i<4000000)
  {
    i=a+b;
    if(i%2==0)
    {
      sum=sum+i;
    }
    a=b;
    b=i;
  }
  printf("Sum: %d", sum);
  return 0;
}

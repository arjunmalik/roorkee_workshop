#include<stdio.h>

int fibonacci(int num)
{
 if(num == 0)
   return 0;
 else if(num == 1)
   return 1;
  int n = fibonacci(num - 1)
           +
          fibonacci(num - 2);
  return n;
}

// Driver code
int main()
{
    int n = 4;
    int answer = fibonacci(n-1);
    printf("%d", answer);
}

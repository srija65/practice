#include <stdio.h>
int reverse(int n);
int main()
{
    int n;
    printf("Enter the no\n");
    scanf("%d",&n);
    printf("the reverse is:\n");
    reverse(n);
    //printf("the reverse is %d",reverse(n));

    return 0;
}

int reverse(int n) {
   int r;
   
   if (n == 0)
      return 0;
   
  else
    {
        r = n % 10; // get the rightmost digit
        printf("%d", r);
        reverse(n/10);  // recursive call
    }
}

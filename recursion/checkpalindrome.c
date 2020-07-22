#include <stdio.h>
int reverse(int n);
int main()
{
    int n;
    printf("Enter the no\n");
    scanf("%d",&n);
    //printf("the reverse is:\n");
    //printf("%d",reverse(n));
    if(n==reverse(n)){
         printf("\nTHe no is palindrome");
    }
   
    else{
        printf("\nthe no is not palindrome.");
    }
    
    //printf("the reverse is %d",reverse(n));

    return 0;
}

int reverse(int n) {
   static int r;
   
   if (n == 0){
      return 0;
   }
   else{
   r = r * 10;
   r = r + n % 10;
   reverse(n/10);
   return r;
   }
}

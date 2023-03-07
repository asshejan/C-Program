

#include <stdio.h>
int reverse(int n){
    int reverse = 0, remainder;

      while (n != 0) {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
      }
    return reverse;
}

int main(int argc, const char * argv[]) {
    int n;
    printf("Enter to check palindrome:");
    scanf("%d", &n);
    
    if(reverse(n)==n){
        printf("The number is palindrome\n");
    }
    else{
        printf("The number is not palindrome\n");
    }
    return 0;
}



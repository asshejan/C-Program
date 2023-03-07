
#include <stdio.h>
int evenOdd(int n){
    if(n%2==0){
        printf("%d is a Even number\n", n);
    }
    else{
        printf("%d is a Odd number\n", n);
    }
    return 0;
}
char grading(int n){
    if(n<60){
        printf("F\n");
    }
    else if (n>=60 && n<70){
        printf("C\n");
    }
    else if (n>=70 && n<80){
        printf("B\n");
    }
    else if (n>=80 && n<=100){
        printf("A\n");
    }
    else{
        printf("Invalid\n");
    }
             return 0;
}
int main(int argc, const char * argv[]) {
    int a;
    printf("Enter num:");
    scanf("%d", &a);
    grading(a);
    return 0;
}

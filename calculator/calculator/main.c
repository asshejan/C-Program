
#include <stdio.h>
float addition(float x, float y){
    return x+y;
}
float substraction(float x, float y){
    if(x>y){
        return x-y;
    }
    else{
        return y-x;
    }
}
float multiplication(float x, float y){
    return x*y;
}
float divided(float x, float y){
    return x/y;
}


int main(int argc, const char * argv[]) {
    
    int z;
    printf("What do you want to do?\n");
    printf("1.Addition.\n");
    printf("2.Substraction.\n");
    printf("3.Multiplication.\n");
    printf("4.Divided\n");
    scanf("%d", &z);
    
    float x,y,m,n,o,p;
    printf("Enter the value of x:");
    scanf("%f", &x);
    printf("Enter the value of y:");
    scanf("%f", &y);
   
    switch(z)
        {
        case 1:
            printf("%.2f\n", addition(x, y));
            break;
                
        case 2:
            printf("%.2f\n", substraction(x, y));
            break;
            
        case 3:
            printf("%.2f\n", multiplication(x, y));
            break;
            
        case 4:
            printf("%.2f\n", divided(x,y));
            break;
        }
    return 0;
}



//1+2+3+4+..N<
//1^2+2^2+3^2+4^2+..N^2
//1/1! + 2/2! + 3/3! + 4/4! + ... N/N!
//1+ 1/2 + 1/3 + 1/4 + 1/5 + .. 1/N
//1 + 3^2/3^3 + 5^2/5^3 + 7^2/7^3 + ... till N terms


#include <stdio.h>
#include <math.h>
float fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

int main()
{
    int i,N,x;
    float sum1=0,sum2=0;
    
    /*read value of N*/
    printf("Enter the value of N: ");
    scanf("%d",&N);
    printf("Enter the value of X: ");
    scanf("%d",&x);
        for(i=1;i<=N*2;i++){
            if(i%2==0){
                sum1=sum1+(float)pow(x, i)/(float)fact(i);
            }
            else{
                sum2=sum2+(float)pow(x, i)/(float)fact(i);
            }
            
        }
        

    printf("Sum of the series is: %f\n",(sum2-sum1));
    
    return 0;
}

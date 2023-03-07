
//1/3-1/5+1/7-1/9

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float n=0, sum1=0, sum2=0;
    while(n<=50){
        for(int i=1; ;i++){
            if(i%2!=0){
                sum1 = sum1 + 1/i+2;
                break;
                
            }
            else{
                sum2 = sum2+ 1/i+2;
                break;
            }
            
        }
        n++;
    }
    printf("%f", (sum1-sum2));
    
    return 0;
}

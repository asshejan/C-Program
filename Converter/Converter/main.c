
#include <stdio.h>
float celciusToFarenheit(float c){
    return (c*1.8)+32;
}
float kgToPound(float w){
    return w*2.20462;
}
float meterToFeet(float m){
    return m*3.28084;
}
float BMI(float w, float m){
    return w/(m*m);
}


int main(int argc, const char * argv[]) {
    
    int n;
    float c, w, m, w1, m1;
    printf("1.CELCIUS TO FARENHEIT \n");
    printf("2.KG TO POUND \n");
    printf("3.METER TO FEET \n");
    printf("4.BMI \n");
    int z = -1;
    
    while (z<0) {
        printf("Enter num for conversion: ");
        scanf("%d", &n);
        
        switch(n){
            case 1:{
                printf("Enter the celcius value: ");
                scanf("%f", &c);
                printf("The farenheit value is:  %f\n", celciusToFarenheit(c));
                break;
            }
            case 2:{
                printf("Enter the KG value: ");
                scanf("%f", &w);
                printf("The POUND value is:  %f\n", kgToPound(w));
                break;
            }
            case 3:{
                printf("Enter the METER value: ");
                scanf("%f", &m);
                printf("The FEET value is:  %f\n", meterToFeet(m));
                break;
            }
            case 4:{
                printf("Enter your weight in KG: ");
                scanf("%f", &w1);
                printf("Enter your height in Meter: ");
                scanf("%f", &m1);
                printf("Your BMI is:  %f\n", BMI(w1, m1));
                break;
            }
                
        }
        printf("=========================================\n");
        
    }
   
    return 0;
}

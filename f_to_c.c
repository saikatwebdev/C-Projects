#include<stdio.h>

int main(){
    int fahr;
    printf("Fahrenhite to Celcius Converter\n");
    for(fahr = 0; fahr<=300; fahr = fahr + 20){
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
    return 0 ;
}

// Key points to noticed:
/*
%3d -- it prints the max value of integer 3 
%6.1 -- it prints the max length of the float is 6 and next 1 after the decimal point
*/
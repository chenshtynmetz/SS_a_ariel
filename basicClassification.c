#include <stdio.h>
#include <math.h>
#include "NumClass.h"

int factorial(int a){
    int factor=1;
    while(a>0){
        factor= factor*a;
        a--;
    }
    return factor;
}
int isStrong(int a){
    int x=a;
    int sumOfDigit=0;
    int sum=0;
    while(x>0){
       x= (x/10);
       sumOfDigit++;
    }
    x=a;
    for(int i=0; i<sumOfDigit; i++){
        sum= sum+ factorial(x%10);
        x= x/10;
    }
    if(sum == a) return 1;
    return 0;
} 

int isPrime(int a){
    if(a<=0)
        return 0;
    if(a == 2) return 1;
    if(a%2 == 0)
        return 0;
    for(int i=3; i<=sqrt(a); i++){
        if(a%i == 0) return 0;
    }
    return 1;
}




#include <stdio.h>
#include <math.h>
#include "NumClass.h"

int isArmstrong(int a){
    int x= a;
    int sumOfDigit=0;
    int sum= 0;
    while(x>0){
        sumOfDigit++;
        x= x/10;
    }
    x=a;
    for(int i=0; i<sumOfDigit; i++){
        sum= sum+ pow(x%10, sumOfDigit);
        x=x/10;
}
    if(sum == a)
        return 1;
    return 0;
}

int isPalindrome(int a){
    int x= a;
    int sumOfDigit= 0; 
    while(x>0){
        x= x/10;
        sumOfDigit++;
    }
    int temp= pow(10, (sumOfDigit-1));
    while(a>0){
        if((a%10) != (a/(temp))) return 0;
        a=a/10;
        temp= temp/10;
        if(temp>=10) a= a% temp;
        temp= temp/10;
    }
    return 1;
}


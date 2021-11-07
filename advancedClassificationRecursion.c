#include <stdio.h>
#include "NumClass.h"
#include <math.h>

int isPalindrome(int a){
    int x=a;
    int sumOfDigit=0;
    while(x>0){
        x= x/10;
        sumOfDigit++;
    }
    if(sumOfDigit==1) return 1;
    x=a/10;
    int temp= pow(10, (sumOfDigit-2));
    x= x%temp;
    int ans= isPalindrome(x);
    if(ans==0) return 0;
    else if((a%10) != (a/(temp*10))) return 0;
    return 1;
}

int isArmstrong2(int a, int digits){
    if((a/10) < 1){
        return (pow(a,digits)); 
    }
    int sum= pow(a%10, digits);
    sum= sum+isArmstrong2(a/10, digits);
    return sum;
}

int isArmstrong(int a){
    int x=a;
    int sumOfDigit= 0; 
    while(x>0){
        x= x/10;
        sumOfDigit++;
    }
    int ans= isArmstrong2(a, sumOfDigit);
    if(ans == a) return 1;
    return 0;
} 




#include <stdio.h>
#include "NumClass.h"
#include <math.h>

int reverseNum(int a, int reverse){
    if (a==0) return reverse;
    reverse= reverse*10 + a%10;
    return reverseNum(a/10, reverse);
}
int isPalindrome(int a){
    int ans=reverseNum(a, 0);
    if(ans== a) return 1;
    return 0;
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




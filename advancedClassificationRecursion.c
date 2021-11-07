#include <stdio.h>
#include "NumClass.h"
#include <math.h>

int seconDigit(int a, int digit){
    if(digit< 1) return -1;
    int x= (int) pow(10,digit-2);
    int b= a%x;
    int ans=(a-b)/x;
    ans= ans%10;
    return ans;
}

int isPalindrome(int a){
    if(a<10) return 1;
    int x=a;
    int sumOfDigit=0;
    while(x>0){
        x= x/10;
        sumOfDigit++;
    }
    x=a;
    if(seconDigit(a, sumOfDigit) == 0){
        if(sumOfDigit-2 == 2){
            if(a%100 == 0) return 1;
        }
       x=x/10; 
    }
    x=x/10;
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




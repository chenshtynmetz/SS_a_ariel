#include <stdio.h>
#include "NumClass.h"

int main(void){
    int x, y;
    scanf("%d%d", &x, &y);
    if(x > y){
        int temp= x;
        x= y;
        y= temp;
    }
    
    printf("The Armstrong numbers are:");
    for(int i=x; i<=y; i++){
        int ans= isArmstrong(i);
        if(ans == 1){
            printf(" %d", i);
        }
    }
    printf("\nThe Palindromes are:");
    for(int i=x; i<=y; i++){
        int ans= isPalindrome(i);
        if(ans == 1){
            printf(" %d", i);
        }
    }

    printf("\nThe Prime numbers are:");
    for(int i=x; i<=y; i++){
        int ans= isPrime(i);
        if(ans == 1){
            printf(" %d", i);
        }
    }
     printf("\nThe Strong numbers are:");
    for(int i=x; i<=y; i++){
        int ans= isStrong(i);
        if(ans == 1){
            printf(" %d", i);
        }
    }
    printf("\n");
    return 0;
}
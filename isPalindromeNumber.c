#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x){
    
    if (x < 0) return false;
    
    long y = 0;
    long z = x;
    while(z > 0){

        y = y*10 + z%10;
        z /= 10;
    }
    
    return (y == x);
}

int main()
{
    int number = 252352;
    
    printf("\n%d", isPalindrome(number));

    return 0;
}

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(char x[]){
    
    int f = strlen(x) - 1;
    int i = 0;
    
    while (i < f){
        
        //printf("\nI=%d F=%d", i, f);
        if(x[i] != x[f])
            return false;
        i++;
        f--;
    }
    
    return true;
    
}

int main()
{
    
    printf("\n%d", isPalindrome("ABCBA"));

    return 0;
}

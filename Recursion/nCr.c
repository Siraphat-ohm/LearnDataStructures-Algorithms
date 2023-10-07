#include <stdio.h>

int C(int n , int r){
    if ( r == 0 || n == r )
        return 1;
    else if ( n - r == n - 1)
        return n;
    else
        return C(n-1, r-1) + C(n-1, r);
}

int C1(int n , int r){
    if ( r == 0 || n == r )
        return 1;
    return C(n-1, r-1) + C(n-1, r);
}

int main(){
    int r;
    r = C(1000,2);
    printf("%d", r) ;
    return 0;
}
#include <stdio.h>

//recursive O(n)
int sum1( int n ){
    if ( n == 0){
        return 0;
    }
    return sum(n - 1) + n;
}

//math O(1)
int sum2(int n){
    return n*(n+1)/2;
}

int main() {
    int r ;
    r = sum(3);
    printf("%d", r);
    return 0;
}
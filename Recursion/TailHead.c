#include <stdio.h>

void fun( int n ){
    if ( n > 0 ){
        printf("%d ", n);
        fun(n-1);
    }
}

void fun1( int n ){
    if ( n > 0 ){
        fun1(n-1);
        printf("%d ", n);
    }
}

int main(){
    int x = 3;
    printf("Ascending: ");
    fun(x);
    printf("\n");
    printf("Descending: ");
    fun1(x);
    return 0;
}
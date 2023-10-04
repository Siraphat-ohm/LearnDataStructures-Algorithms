#include <stdio.h>

int x = 0;

int fun(int n){
    if ( n > 0 ){
        x++;
        return x+fun(n-1);
    }
    return 0;
}

int main(){
    int r;
    r = fun(5);
    printf("%d\n", r);

    r = fun(5);
    printf("%d", r);
    return 0;
}
#include <stdio.h>

double e (int x, int n){
    static double p = 1, f = 1;
    double r;
    if ( n == 0 )
        return 1;
    else {
        r = e(x, n - 1 );
        p = p*x;
        f = f*n;
        return r + p/f ;
    }
}

double Ie ( int x, int n ){
    double s = 1;
    for (; n > 0 ; n--){
        s = s*x/n + 1;
    }
    return s;
}

double e1 ( double x, double n ){
    static double s = 1;
    if ( n == 0 ){
        return s;
    }
    s = s*x/n + 1;
    return e1( x, n - 1 );
}

int main() {
    printf("%lf", e1( 4, 15 ));
    return 0;
}
#include <stdio.h>

int power1( int m, int n ){
    if ( n == 0 )
        return 1;
    return power1(m, n - 1 ) * m;
}

int power2(int m, int n){
    if ( n == 0 )
        return 1;
    if ( n%2 == 0 ) 
        return power2(m*m, n/2);
    else
        return m * power2(m*m, (n-1)/2 );
}

int Ipower(int m, int n){
    if ( n % 2 == 0 ){
        int r = 1;
        for ( int i = 0 ; i < n/2; i++){
            r *= m * m;
        }
        return r;
    } else {
        int r = m;
        for ( int i = 0; i < (n-1)/2; i++){
            r *= m*m;
        }
        return r;
    }
}

int main(){
    int r;
    r = Ipower(2, 4) ;
    printf("%d", r);
    return 0;
}
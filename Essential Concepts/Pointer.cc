#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {


    int *p;
    p = new int[5];
    // p = ( int * )malloc(5*sizeof(int));

    p[0] = 10;
    p[1] = 23;

    for( int i = 0; i < 5; i++ ){
        cout << p[i] << endl;
    }

    free(p);

    return 0;
}
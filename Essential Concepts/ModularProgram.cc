#include <bits/stdc++.h>

using namespace std;

int area( int length, int breadth ){
    return length * breadth;
}

int perimeter( int length, int breadth ){
    return 2 * ( length + breadth );
}

int main() {
    int length = 0, breadth = 0;

    cout << "Enter Length and Breadth: " ;
    cin >> length >> breadth;

    int a = area(length, breadth);
    int peri= perimeter(length, breadth);

    cout << "Area: " << a ;
    cout << "\n" << "Perimeter: " << peri ;

    return 0;
}
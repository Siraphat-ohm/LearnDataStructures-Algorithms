#include <iostream>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
};


int area( Rectangle r ) {
    return r.length * r.breadth;
}

int perimeter( Rectangle r ){
    return 2 * ( r.length + r.breadth );
}

void initialize( Rectangle *r, int length, int breadth ){
    r->length = length;
    r->breadth = breadth;
}

int main() {
    Rectangle r = { 0, 0 };

    int l,b;
    cout << "Enter Length and Breadth: ";
    cin >> l >> b;

    initialize(&r, l, b);

    int a = area(r);
    int peri = perimeter(r);

    cout << a << " " << peri << "\n";

    return 0;
}

#include <iostream>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

int main() {

    Rectangle *p;
    p = new Rectangle;
    p->breadth = 10 ;
    cout << p->breadth ;
}
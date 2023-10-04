#include <iostream>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

void fun( Rectangle &r ) {
    r.breadth = 55;
}

int main() {
    Rectangle r = { 10, 5 };
    fun(r);
    cout << r.breadth << endl;
    return 0;
}
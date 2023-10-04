#include <iostream>

using namespace std;

class Rectangle {
    private:
        int length;
        int breadth;
    public:
        void initialise(int l, int b){
            length = l;
            breadth = b;
        }

        int area() {
            return length * breadth;
        }
};

int main() {
    Rectangle r;
    r.initialise( 20 , 10 );
    cout << r.area();
    return 0;
}
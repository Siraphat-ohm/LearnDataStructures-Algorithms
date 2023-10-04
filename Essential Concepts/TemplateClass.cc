#include <iostream>
using namespace std;

template <class T>
class Arithmetic {
    private:
        T a;
        T b;
    public:
        Arithmetic( T a, T b ){
            this->a = a;
            this->b = b;
        }
        T add() {
            T c;
            c = a + b;
            return c;
        }
        T sub(){
            T c;
            c = a - b;
            return c;
        }
};

int main() {
    Arithmetic<float> ar('B', 'A');

    cout << "Add: " << ar.add() << endl;
    cout << "Sub: " << ar.sub() << endl;

    return 0;
}
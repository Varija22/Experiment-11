//Varija K
//24070123165
#include <iostream>
using namespace std;

class Volume {
public:
    int length;
    int breadth;
    int height;

    void input() {
        cout << "Enter the value of length: ";
        cin >> length;
        cout << "Enter the value of breadth: ";
        cin >> breadth;
        cout << "Enter the value of height: ";
        cin >> height;
    }

    int vol() {
        int v = length * breadth * height;
        return v;
    }

    void display() {
        int a = vol();
        cout << "The volume is " << a;
    }
};

int main() {
    Volume volume1;
    volume1.input();
    volume1.display();
}

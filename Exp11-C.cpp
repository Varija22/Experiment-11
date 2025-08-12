//Varija K
//24070123165

#include <iostream>
using namespace std;

class cube {
private:
    int height;
    int width;
    int length;

public:
    
    void getData() {
        cout << "Enter height: ";
        cin >> height;
        cout << "Enter width: ";
        cin >> width;
        cout << "Enter length: ";
        cin >> length;
    }

    
    int volume() {
        return height * width * length;
    }
};

int main() {
    cube cube1;
    cube1.getData();  

    int vol = cube1.volume();  // Calculate volume
    cout << "Volume: " << vol << endl;

    return 0;
}


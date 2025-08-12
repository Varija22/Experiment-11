//Varija K
//24070123165

#include <iostream>
using namespace std;

class cube {
private:
    int height = 2.0;
    int width = 3.0;
    int length = 5.0;

public:
    int volume() {
        int v;
        v = height * width * length;
        return v;
    }
};

int main() {
    cube cube1;
    int vol = cube1.volume();
    cout << "Volume: " << vol << endl;
} 



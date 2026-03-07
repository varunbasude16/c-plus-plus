#include <iostream>
using namespace std;
class Car {
private:
    int speed;
    string brand;

public:
    
    Car(string b, int s) {
        brand = b;
        speed = s;
    }

   
    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Speed: " << speed << " km/h" << endl;
    }

   
    void setSpeed(int s) {
        speed = s;
    }

    int getSpeed() {
        return speed;
    }
};

int main() {
    Car myCar("Toyota", 120);

    cout << "Initial Car Details:" << endl;
    myCar.display();

    myCar.setSpeed(150);

    cout << "\nAfter Modifying Speed:" << endl;
    myCar.display();

    return 0;
}

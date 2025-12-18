#include <iostream>
using namespace std;

class Parking {
private:
    int car;        
    string number;  

    Parking() {
        car = 0;
        number = "";
    }

public:
    Parking(const Parking&) = delete;

    static Parking& getInstance() {
        static Parking instance;
        return instance;
    }

    void parkCar(string num) {
        car++;
        number = num;
    }

    int getCarCount() {
        return car;
    }

    void printCar() {
        cout << "Car number: " << number << endl;
    }
};

int main() {
    Parking& p = Parking::getInstance();

    p.parkCar("34 AB 123");
    p.printCar();
    cout << "Cars count: " << p.getCarCount() << endl;

    p.parkCar("01 ZZ 999");
    p.printCar();
    cout << "Cars count: " << p.getCarCount() << endl;

    return 0;
}

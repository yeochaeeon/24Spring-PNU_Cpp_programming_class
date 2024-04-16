#include <string>
class Vehicle {
public:
    // your code here

    Vehicle();
    Vehicle(std::string name, int range, float batteryCapacity)
    : name(name),
    range(range) ,
    batteryCapacity(batteryCapacity) {};

    Vehicle(std::string name , int range, bool hasFDS, float batteryCapacity) :
    name(name),
    range(range),
    hasFDS(hasFDS),
    batteryCapacity(batteryCapacity) {
        void autoPilot();
    };


    static void autoPilot(bool onOff);
    void runFDS() const;
    void displayEfficiency() const;
private:
    std::string name;
    int range;
    bool hasFDS;
    float batteryCapacity;
};
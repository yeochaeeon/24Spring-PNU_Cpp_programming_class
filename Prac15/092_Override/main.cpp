//
// Created by codjs on 2024-05-21.
//
#include <iostream>
#include <memory>
#include <vector>
class vehicle{
public:
    vehicle(){};
    void accelerate(){
        std::cout << "The speed of the " << car << " has increased by " << accel << " km/h." << std::endl;
    }

protected:
    std::string car = "gv70";
    int accel = 30;
};

class GV70 : public vehicle {
public:
    GV70(){};
};

class Grandeur : public vehicle {
public:
    Grandeur(){
        car = "grandeur";
        accel = 20;
    }
};

class Carnibal : public vehicle {
public:
    Carnibal(){
        car = "carnibal";
        accel = 10;
    }
};

std::unique_ptr<vehicle> make_vehicle() {

    std::string choice;
    std::cin >> choice;
    if (choice == "gv70") return std::make_unique<GV70>();
    else if (choice == "grandeur") return std::make_unique<Grandeur>();
    else if (choice == "carnibal") return std::make_unique<Carnibal>();
    else return std::make_unique<GV70>();

}

int main() {

    std::vector<std::unique_ptr<vehicle>> test_vehicles;
    test_vehicles.push_back(make_vehicle()); //gv70
    test_vehicles.push_back(make_vehicle()); //grandeur
    test_vehicles.push_back(make_vehicle()); //carnibal
    for (auto& v : test_vehicles)
        (*v).accelerate();
}
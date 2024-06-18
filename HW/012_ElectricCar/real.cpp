//
// Created by codjs on 2024-06-14.
//
#include <iostream>
#include <iomanip>
#include <vector>
void printCurrentBattery(double battery_level, double now){
    std::cout << "Current battery level: " << battery_level << "%, " << "after traveling " << now << " km." << std::endl;
}
void printifChargeisNeeded(double battery_level,std::string stationName){
    std::cout << "Battery at " << battery_level << "%, " << "stopping at "<< stationName <<" for charging." << std::endl;
}
int main() {
    double capacity, efficiency, battery_level, distance;
    int station_index[5] = {0,0,0,0,0};
    std::vector<std::string> stations {"0", "Gyeongsan","Gimcheon","Cheongju","Anseong"};

    std::cin >> capacity >> efficiency >> battery_level >> distance;

    const double km_per_kW = capacity / 100 * efficiency;
    double now = 0;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Current battery level: " << battery_level << "%, " << "after traveling " << now << " km." << std::endl;
    while (now < distance) {
        battery_level--;
        now += km_per_kW;

        if(now >= distance) break;
        if (static_cast<int>(battery_level) % 10 == 0)
            printCurrentBattery(battery_level,now);

        if (now + km_per_kW > 100 && station_index[1] == 0) {
            station_index[1] = 1;
            if (((distance-now) < 100 && battery_level - (distance-now)/km_per_kW <= 20) || ((distance-now) > 100 && battery_level - 100/km_per_kW <= 20)) {
                printCurrentBattery( battery_level, now);
                printifChargeisNeeded(battery_level,stations[1]);
                battery_level = 80;
                now = 100;
                printCurrentBattery(battery_level,now);
            }
        }
        if (now + km_per_kW > 200 && station_index[2] == 0) {
            station_index[2] = 1;
            if (((distance-now) < 100 && battery_level - (distance-now)/km_per_kW <= 20) || ((distance-now) > 100 && battery_level - 100/km_per_kW <= 20)) {
                printCurrentBattery( battery_level, now);
                printifChargeisNeeded(battery_level,stations[2]);
                battery_level = 80;
                now = 200;
                printCurrentBattery(battery_level,now);
            }
        }
        if (now + km_per_kW > 300 && station_index[3] == 0) {
            station_index[3] = 1;
            if (((distance-now) < 100 && battery_level - (distance-now)/km_per_kW <= 20) || ((distance-now) > 100 && battery_level - 100/km_per_kW <= 20)) {
                printCurrentBattery( battery_level, now);
                printifChargeisNeeded(battery_level,stations[3]);
                battery_level = 80;
                now = 300;
                printCurrentBattery(battery_level,now);
            }
        }
        if (now + km_per_kW > 400 && station_index[4] == 0) {
            station_index[4] = 1;
            if (((distance-now) < 100 && battery_level - (distance-now)/km_per_kW <= 20) || ((distance-now) > 100 && battery_level - 100/km_per_kW <= 20)) {
                printCurrentBattery( battery_level, now);
                printifChargeisNeeded(battery_level,stations[4]);
                battery_level = 80;
                now = 400;
                printCurrentBattery(battery_level,now);
            }
        }
    }
    std::cout << "Arrived in Seoul with " << battery_level << "% battery remaining." << std::endl;
}
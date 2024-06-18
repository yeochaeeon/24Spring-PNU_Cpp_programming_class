#include <iostream>
#include <iomanip>

// 상수 정의
const double CRITICAL_BATTERY_LEVEL = 20.0; // 배터리 임계치

// 도착지에 도달할 수 있는지 확인하는 함수
bool canReachDestination(double battery, double remaining_distance, double km_per_kW) {
    return battery * km_per_kW >= remaining_distance;
}

int main() {
    double capacity;           // 배터리 용량
    double efficiency;         // 전력 효율
    double current_battery;    // 현재 배터리 잔량 (퍼센트)
    double distance;           // 목적지까지의 거리

    // 사용자 입력 받기
    std::cin >> capacity >> efficiency >> current_battery >> distance;

    std::cout << std::fixed << std::setprecision(2);

    const double km_per_kW = capacity / 100 * efficiency; // 1kW로 갈 수 있는 거리
    double current_distance = 0.0; // 현재 이동한 거리

    // 충전소 위치를 담은 배열
    const double charge_stations[] = { 100, 200, 300, 400 };
    const char* charge_station_names[] = { "Gyeongsan", "Gimcheon", "Cheongju", "Anseong" };

    int station_index = 0;

    // 목적지까지 이동하면서 배터리 상태와 충전 여부 확인
    while (current_distance < distance) {
        // 현재 배터리 상태 출력
        if (static_cast<int>(current_battery) % 10 == 0 || current_distance == 0) {
            std::cout << "Current battery level: " << current_battery << "%, after traveling " << current_distance << " km." << std::endl;
        }

        // 배터리 감소 및 거리 증가
        current_battery--;
        current_distance += km_per_kW;

        // 충전소 도달 여부 확인 및 충전
        if (station_index < 4 && current_distance >= charge_stations[station_index]) {
            std::cout << "Battery at " << current_battery << "%, stopping at " << charge_station_names[station_index] << " for charging." << std::endl;
            current_distance = charge_stations[station_index]; // 충전소 위치로 이동
            current_battery = 80; // 충전 후 배터리 80%로 리셋
            std::cout << "Current battery level: " << current_battery << "%, after traveling " << current_distance << " km." << std::endl;
            station_index++;
        }

        // 도착지에 도달할 수 있는지 확인
        if (canReachDestination(current_battery, distance - current_distance, km_per_kW)) {
            break;
        }

        // 배터리가 임계치 이하로 떨어지면 가장 가까운 충전소로 이동
        if (current_battery < CRITICAL_BATTERY_LEVEL && station_index < 4 && current_distance < charge_stations[station_index]) {
            std::cout << "Battery level is critical, moving to " << charge_station_names[station_index] << " for charging." << std::endl;
            current_distance = charge_stations[station_index]; // 충전소 위치로 이동
            current_battery = 80; // 충전 후 배터리 80%로 리셋
            std::cout << "Current battery level: " << current_battery << "%, after traveling " << current_distance << " km." << std::endl;
            station_index++;
        }
    }

    // 최종 목적지 도착 및 배터리 상태 출력
    std::cout << "Arrived in Seoul with " << current_battery << "% battery remaining." << std::endl;

    return 0;
}

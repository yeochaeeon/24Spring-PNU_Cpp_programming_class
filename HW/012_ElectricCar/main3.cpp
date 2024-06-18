#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <iomanip> // for std::setprecision

// Define constants
const double battery_capacity_kWh = 72.6; // Battery capacity in kWh
const double efficiency_km_per_kWh = 5.6; // Efficiency in km per kWh
const double total_distance_km = 420;     // Distance from Busan to Seoul in km

// Waypoints with distances from the start
std::map<std::string, double> waypoints = {
        {"Gyeongsan", 100},
        {"Gimcheon", 200},
        {"Cheongju", 300},
        {"Anseong", 400}
};

// Charging strategy
const double critical_battery_level_percent = 20;  // Critical battery level
const double charge_to_percent = 80;  // Target charge level at stops

// Function to calculate the remaining battery percentage after traveling a given distance
double calculateRemainingBattery(double distance_traveled_km, double initial_battery_percent) {
    double battery_consumed_kWh = distance_traveled_km / efficiency_km_per_kWh;
    double battery_consumed_percent = (battery_consumed_kWh / battery_capacity_kWh) * 100;
    double remaining_battery_percent = initial_battery_percent - battery_consumed_percent;
    return std::max(0.0, remaining_battery_percent);
}

int main() {
    // Initialize journey variables
    double current_distance_km = 0;
    double current_battery_percent = 100;
    std::vector<std::pair<double, double>> remaining_battery_percent_intervals; // To store (distance, battery percent)
    std::vector<std::tuple<std::string, double, double>> charging_stops; // To store (waypoint, distance, charge to percent)

    // Calculate maximum travelable distance
    double max_distance_full_charge_km = battery_capacity_kWh * efficiency_km_per_kWh;
    double max_distance_80_percent_km = (battery_capacity_kWh * charge_to_percent / 100) * efficiency_km_per_kWh;

    // Output initial state
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Current battery level: " << current_battery_percent << "%, after traveling " << current_distance_km << " km.\n";

    // Simulate the journey
    while (current_distance_km < total_distance_km) {
        // Check remaining battery at every 10% decrement
        if (static_cast<int>(current_battery_percent) % 10 == 0) {
            remaining_battery_percent_intervals.push_back({current_distance_km, current_battery_percent});
            std::cout << "Current battery level: " << current_battery_percent << "%, after traveling " << current_distance_km << " km.\n";
        }

        // Check if we need to stop for charging before the next waypoint
        bool charging_stop_needed = false;
        for (const auto& waypoint : waypoints) {
            if (current_distance_km < waypoint.second && waypoint.second - current_distance_km <= max_distance_80_percent_km) {
                // Calculate remaining battery before reaching the next waypoint
                double remaining_battery_before_waypoint = calculateRemainingBattery(waypoint.second - current_distance_km, current_battery_percent);

                // If remaining battery would fall below the critical level, stop and charge
                if (remaining_battery_before_waypoint < critical_battery_level_percent) {
                    // Stop and charge
                    charging_stops.push_back({waypoint.first, waypoint.second, charge_to_percent});
                    // Update battery percentage after charging
                    current_battery_percent = charge_to_percent;
                    // Move to the charging waypoint
                    current_distance_km = waypoint.second;
                    std::cout << "Battery at " << remaining_battery_before_waypoint << "%, stopping at " << waypoint.first << " for charging.\n";
                    std::cout << "Current battery level: " << current_battery_percent << "%, after traveling " << current_distance_km << " km.\n";
                    charging_stop_needed = true;
                    break;
                }
            }
        }

        // If no charging stop needed, move towards Seoul
        if (!charging_stop_needed) {
            double travel_distance = efficiency_km_per_kWh * (battery_capacity_kWh * current_battery_percent / 100);
            if (current_distance_km + travel_distance >= total_distance_km) {
                current_distance_km = total_distance_km;
                current_battery_percent = calculateRemainingBattery(total_distance_km - current_distance_km, current_battery_percent);
                std::cout << "Arrived in Seoul with " << current_battery_percent << "% battery remaining.\n";
            } else {
                current_distance_km += travel_distance;
                current_battery_percent = 0; // Since we exhaust the battery in this leg
                std::cout << "Battery exhausted after traveling " << current_distance_km << " km.\n";
            }
            break; // Exit the loop after updating the distance and battery percentage
        }
    }

    return 0;
}

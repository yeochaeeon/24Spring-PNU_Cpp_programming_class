# include <iostream>

const double critical = 20 ;
bool chargeStation( double battery, double current_distance, double km_per_kW ) {

    int current_distance_third_digit = static_cast<int>(current_distance/100) * 100 ;
    double two_digits = current_distance - current_distance_third_digit ;
    double target = current_distance_third_digit ;

    if ( two_digits > 100 - km_per_kW ) {
        target += 200 ;
        current_distance_third_digit += 100 ;
    }
    else {
        target += 100;
    }

    while ( current_distance_third_digit != target && ( two_digits > km_per_kW || two_digits < 100 - km_per_kW ) ) {
        battery-- ;
        current_distance += km_per_kW ;
        current_distance_third_digit = static_cast<int>(current_distance/100) * 100 ;
        two_digits = current_distance - current_distance_third_digit ;
        if ( two_digits > 100 - km_per_kW )
            current_distance_third_digit += 100 ;

    }
   return (battery < critical);

}
bool dest( double battery, double current_distance, double km_per_kW, double distance ) {
    while ( current_distance < distance ) {
        battery-- ;
        current_distance += km_per_kW ;
    }
    return (battery < critical);

}
int main() {
    double capacity ;
    double efficiency ;
    double current_battery ;
    double distance ;

    std::cin >> capacity >> efficiency >> current_battery >> distance ;

    std::cout << std::fixed ;
    std::cout.precision(2) ;

    const double km_per_kW = capacity / 100 * efficiency ;
    double current_distance = 0 ;

    while ( current_distance < distance ) {
        if (static_cast<int>(current_battery) % 10 == 0)
            std::cout << "Current battery level: " << current_battery << "%, after traveling " << current_distance << " km." << std::endl ;

        int third_digit = static_cast<int>(current_distance/100) * 100 ;
        double two_digits = current_distance - third_digit ;

        if ( two_digits > 100 - km_per_kW)
            third_digit += 100 ;

        if ( current_battery > critical && chargeStation(current_battery, current_distance, km_per_kW)
             && ( two_digits < km_per_kW || two_digits > 100 - km_per_kW ) && dest(current_battery, current_distance, km_per_kW, distance) ) {

            std::cout << "Current battery level: " << current_battery << "%, after traveling " << current_distance << " km." << std::endl ;
            std::cout << "Battery at " << current_battery << "%, stopping at " ;

            switch ( third_digit ) {
                case 100: { std::cout << "Gyeongsan for charging." << std::endl ; break ; }
                case 200: { std::cout << "Gimcheon for charging." << std::endl ; break ; }
                case 300: { std::cout << "Cheongju for charging." << std::endl ; break ; }
                case 400: { std::cout << "Anseong for charging." << std::endl ; break ; }
                default: { std::cout << "wrong place." << std::endl ; break ; }
            }
            current_distance = third_digit ;
            current_battery = 80 ;
            std::cout << "Current battery level: " << current_battery << "%, after traveling " << current_distance << " km." << std::endl ;
        }
        current_battery-- ;
        current_distance += km_per_kW ;

    }

    std::cout << "Arrived in Seoul with " << current_battery << "% battery remaining." << std::endl ;
    return 0 ;

}



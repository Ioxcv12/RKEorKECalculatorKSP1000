#include <boost/multiprecision/cpp_bin_float.hpp>
#include <iostream>
#include <limits>
#include <cmath>

int main() {
    using namespace boost::multiprecision;
    std::cout << "Type mass here in kg:";
    std::string MS;
    std::getline(std::cin, MS);
    cpp_bin_float_100 M(MS); //in kilograms

    std::cout << "Type velocity here in m/s:";
    std::getline(std::cin, MS);

    cpp_bin_float_100 V(MS); //velocity in m/s

    cpp_bin_float_100 c = 299792458; //speed of light in c
    cpp_bin_float_100 KER = (cpp_bin_float_100(1) / sqrt(cpp_bin_float_100(1) - (V * V) / (c * c)) - cpp_bin_float_100(1)) * M * c * c;
    cpp_bin_float_100 KE = cpp_bin_float_100(0.5) * (M * (V * V));
    std::cout << std::setprecision(100) << "Relativistic KE: " << KER << " J" << std::endl;
    std::cout << std::setprecision(100) << "Regular KE: " << KE << " J" << std::endl;
    std::cout << "Press enter to exit";
    std::cin.get();
    return 0;
}

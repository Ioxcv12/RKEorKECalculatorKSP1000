#include <boost/multiprecision/cpp_bin_float.hpp>
#include <iostream>
#include <limits>
#include <cmath>

int main() {
    using namespace boost::multiprecision;
    cpp_bin_float_100 M = 2600000000; //in kilograms
    cpp_bin_float_100 V = 200075891.3; //velocity in m/s
    cpp_bin_float_100 c = 1; //speed of light in c
    //V *= 299792458; //remove the // at the start to calculate velocity in speed of lights
    c *= 299792458;
    cpp_bin_float_100 KER = (cpp_bin_float_100(1) / sqrt(cpp_bin_float_100(1) - (V * V) / (c * c)) - cpp_bin_float_100(1)) * M * c * c;
    cpp_bin_float_100 KE = cpp_bin_float_100(0.5) * (M * (V * V));
    std::cout << std::setprecision(100) << "Relativistic KE: " << KER << " J" << std::endl;
    std::cout << std::setprecision(100) << "Regular KE: " << KE << " J" << std::endl;
    return 0;
}

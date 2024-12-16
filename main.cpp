#include <iostream>
#include <iomanip> 
#include <cmath> 
#include <math.h> 

int main() {
    double R;
    std::cin >> R;
    double area = M_PI * R * R;
    std::setprecision(9);
    std::cout << area << std::endl;
    return 0;
}

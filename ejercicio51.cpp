#include <iostream>
#include <cmath>
const int VAR =4;
int main(void)
{
    std::cout.precision(16);
    std::cout.setf(std::ios::scientific);
    std::cout<<sin(VAR)<<std::endl;
    std::cout<<M_PI<<std::endl;
    std::cout<<M_PI<<std::endl;
    return 0;
}
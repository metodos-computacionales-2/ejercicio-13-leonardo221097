
#include <iostream>
int subtraction(int a, int b)
{
    int r;
    r=a-b;
    return r;
}

int main(void)
{
    int x=5,y=3,z,m,s;
    z=subtraction(7,2);
    m=subtraction(7,2);
    s=subtraction(x,y);
    std::cout<< "The first result is " <<&z<<"\n";
    std::cout<< "The second result is " <<&m<<"\n";
    std::cout<< "The third result is " <<&s<<"\n";
    z=4+subtraction(x,y);
    std::cout<< "The fourth result is " <<&z<<"\n";
    return 0;
}
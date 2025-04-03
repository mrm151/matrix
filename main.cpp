#include "matrix.h"
#include <iostream>

int main()
{
    std::cout << "Creating matrix" << std::endl;
    Matrix m1(4, 4);
    m1.print();
    std::cout << "Setting element" << std::endl;
    m1.setElement(2,1,3);
    m1.print();

    std::cout << "Adding matrix" << std::endl;
    Matrix m2(4,4);
    m2.setElement(1,1,1);
    m1.add(m2);
    m1.print();
    std::cout << "Emptying:" << std::endl;
    m1.empty();
    m1.print();

    std::cout << "M1 is equal to M2: " << m1.equal(m2) << std::endl;
}
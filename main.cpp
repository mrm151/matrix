#include "matrix.h"

int main()
{
    Matrix m1(4, 4);
    m1.print();
    m1.setElement(3,3,3);
    m1.print();
    m1.empty();
    m1.print();
}
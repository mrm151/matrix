#include "matrix.h"

int main()
{
    Matrix m1(4, 4);
    m1.print();
    m1.setElement(2,1,3);
    m1.print();
    m1.empty();
    m1.print();
}
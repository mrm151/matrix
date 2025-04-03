#include "matrix.h"
#include <iostream>
#include <vector>

// Matrix::print()
// @params None
// prints a string representation of the matrix
void Matrix::print()
{
    for (int row = 0; row < m_matrix.size(); ++row)
    {
        std::cout << "[";
        for (int col = 0; col < m_matrix[0].size(); ++col)
        {
            std::cout << m_matrix[row][col];
            (col == (m_matrix[0].size() - 1)) ? std::cout << "]" : std::cout << ", ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

// Matrix::setElement
// @params row: int row for value to be inserted to
// @params col: int col for value to be inserted to
// @params value: value to add to matrix
// Sets an element inside the matrix
void Matrix::setElement(int row, int col, int value)
{
    m_matrix[row][col] = value;
}

// Matrix::empty()
// @params None
// Clears the matrix (sets all elements to 0)
void Matrix::empty()
{
    m_matrix = std::vector<std::vector<int>>(m_matrix.size(), std::vector<int>(m_matrix[0].size(), 0));
}

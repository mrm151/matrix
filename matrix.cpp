#include "matrix.h"
#include <iostream>
#include <vector>

// Matrix::print()
// @params None
// prints a string representation of the matrix
void Matrix::print()
{
    std::cout << "[" << std::endl;
    for (int row = 0; row < m_row_size; ++row)
    {
        std::cout << "    " << "[";
        for (int col = 0; col < m_col_size; ++col)
        {
            std::cout << m_matrix[row][col];
            (col == (m_col_size - 1)) ? std::cout << "]" : std::cout << ", ";
        }
        std::cout << std::endl;
    }
    std::cout << "]" << std::endl;
}

// Matrix::setElement
// @params row: int row for value to be inserted to
// @params col: int col for value to be inserted to
// @params value: value to add to matrix
// Sets an element inside the matrix
void Matrix::setElement(int row, int col, int value)
{
    (row > m_row_size || col > m_col_size) ?: m_matrix[row][col] = value;
}

// Matrix::empty()
// @params None
// Clears the matrix (sets all elements to 0)
void Matrix::empty()
{
    m_matrix = std::vector<std::vector<int>>(m_row_size, std::vector<int>(m_col_size, 0));
}

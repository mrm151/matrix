#include "matrix.h"
#include <iostream>
#include <vector>

// Matrix::print()
// @params None
// prints a string representation of the matrix
void Matrix::print() const
{
    std::cout << "[" << std::endl;
    for (int row = 0; row < m_rows; ++row)
    {
        std::cout << "    " << "[";
        for (int col = 0; col < m_cols; ++col)
        {
            std::cout << m_matrix[row][col];
            (col == (m_cols - 1)) ? std::cout << "]" : std::cout << ", ";
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
    (row > m_rows || col > m_cols) ?: m_matrix[row][col] = value;
}

// Matrix::empty()
// @params None
// Clears the matrix (sets all elements to 0)
void Matrix::empty()
{
    m_matrix = std::vector<std::vector<int>>(m_rows, std::vector<int>(m_cols, 0));
}

std::pair<int, int> Matrix::getDimensions() const
{
    return std::make_pair(m_rows, m_cols);
}

void Matrix::add(const Matrix& other)
{
    if (!equalDimensions(other)) return;
    for (int row = 0; row < m_rows; ++row)
    {
        for (int col = 0; col < m_cols; ++col)
        {
            m_matrix[row][col] += other.m_matrix[row][col];
        }
    }
}

bool Matrix::equal(const Matrix& other) const
{
    if (!equalDimensions(other)) return false;
    for (int row = 0; row < m_rows; ++row)
    {
        for (int col = 0; col < m_cols; ++col)
        {
            if (m_matrix[row][col] != other.m_matrix[row][col]) return false;
        }
    }
    return true;
}

Matrix::Matrix()
{
    empty();
}

void Matrix::operator=(const Matrix& other)
{
    m_matrix = other.m_matrix;
    m_rows = other.m_rows;
    m_cols = other.m_cols;
}
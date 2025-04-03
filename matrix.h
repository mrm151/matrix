#include <vector>

class Matrix
{
public:
    Matrix(int rows, int cols) : 
        m_matrix(std::vector<std::vector<int>>(rows, std::vector<int>(cols, 0)))   {};
    void print();
    void setElement(int row, int col, int value);
    void empty();

private:
    std::vector<std::vector<int>> m_matrix;
};
#include <vector>

class Matrix
{
public:
    Matrix(int rows, int cols) : 
        m_matrix(std::vector<std::vector<int>>(rows, std::vector<int>(cols, 0))),
        m_rows(rows),
        m_cols(cols)
    {
    };
    Matrix(int rows, int cols, int value) : 
    m_matrix(std::vector<std::vector<int>>(rows, std::vector<int>(cols, value))),
    m_rows(rows),
    m_cols(cols)
    {
    };
    Matrix();
    void print() const;
    void setElement(int row, int col, int value);
    void empty();
    void add(const Matrix& other);
    std::pair<int, int> getDimensions() const;
    bool equal(const Matrix& other) const;

    void operator=(const Matrix& other);

private:
    inline bool equalDimensions(const Matrix& other) const { return (std::make_pair(m_rows, m_cols) == other.getDimensions()); };

    std::vector<std::vector<int>> m_matrix;
    int m_rows;
    int m_cols;
};
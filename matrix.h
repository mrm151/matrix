#include <vector>

class Matrix
{
    public:
        void empty();
        void print();
        void setElement(int row, int col, int value);

    private:
        std::vector<std::vector<int>> matrix;
};
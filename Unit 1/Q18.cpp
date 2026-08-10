// Allocating Memory To Matrix Using New

#include <iostream>
using namespace std;

class matrix
{
    int **mat,row,columns;

public:
    matrix(int row, int columns)
    {
        this->row = row;
        this->columns = columns;

        mat = new int *[row];
        for (int i = 0; i < row; i++)
        {
            mat[i] = new int[columns];
        }
        
        cout<<"Allocated Memory Usgin Pointer\n";
    }

    ~matrix()
    {
        for (int i = 0; i < columns; i++)
        {
            delete[] mat[i];
        }
        delete[] mat;
        cout<<"Deallocated Memrory Using Destructor\n";
    }
};
int main()
{
    system("clear");
    cout<<"into the main funciton\n";
    matrix m(2,3);

}
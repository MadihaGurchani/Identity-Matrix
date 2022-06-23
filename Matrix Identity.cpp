#include<iostream>
using namespace std;
 
const int limit = 100;
 
bool checkMatrix(int mat[][limit], int V)
{
    for (int row = 0; row < V; row++)
    {
        for (int col = 0; col < V; col++)
        {
            if (row == col && mat[row][col] != 1)
                return false;
            else if (row != col && mat[row][col] != 0)
                return false;
        }
    }
    return true;
}
 
// Driver Code
int main()
{
    int V = 4;
    int a[][limit] = {{1, 0, 0, 0},
                    {0, 1, 0, 0},
                    {0, 0, 1, 0},
                    {0, 0, 0, 1}};
    if (checkMatrix(a, V))
       cout << "Yes ";
    else
       cout << "No ";
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int a[2][2] = {
        {7,1},
        {4,8},
    };
    int b[2][2] = {
        {5,2},
        {8,3},
    };

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << a[i][j] + b[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
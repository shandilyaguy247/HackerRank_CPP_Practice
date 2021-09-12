#include <iostream>
using namespace std;

int main()
{
    int input;
    cin >> input;
    int query;
    cin >> query;

    int **A;
    A = new int*[input];
    for (int i=0; i<input; i++)
    {
        int elements;
        cin >> elements;
        A[i] = new int [elements];

        for (int j=0; j<elements; j++)
        {
            cin >> A[i][j];
        }
    }

    for (int i=0; i<query; i++)
    {
        int x,y;
        cin >> x >> y;
        cout << A[x][y] << "\n";
    }

    for (int i=0; i<query; i++)
    {
        delete[] A[i];
    }
    delete [] A;
    A = NULL;

    return 0;
}

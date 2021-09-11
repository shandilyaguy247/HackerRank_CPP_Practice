#include <iostream>
using namespace std;

int main()
{
    int a=0,b,i=0;
    while (i<3)
    {
        cin >> b;
        a = a+b;
        i++;
    }
    cout << a;
    return 0;
}

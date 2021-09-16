#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int size;
    cin >> size;
    vector <int> v;

    for(int i=0; i<size; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());

    for(int i=0; i<size; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}

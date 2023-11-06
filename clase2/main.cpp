#include <iostream>
#include <cmath>
#include <vector>
#include <strings>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

int main()
{
    vector <int> vec1;

    vec1.push_back(10);
    vec1.push_back(30);
    vec1.push_back(30);
    vec1.push_back(1010.15);
    for(int i = 0; i < vec1.size(); i ++)
    {
        cout << vec1[i] << endl;
    }

    int arreglo[3] = {10,20,30};

    cout << arreglo[1] << endl;

    int *aparr = &arreglo[0];

    for (int i = 0; i < 3; i++)
    {
        cout << aparr << " " << *aparr << endl;
        aparr++;
    }

    int x = 10;
    int y = 20;
    int *ap = &x;

    cout << x << " " << endl;

    return 0;
}

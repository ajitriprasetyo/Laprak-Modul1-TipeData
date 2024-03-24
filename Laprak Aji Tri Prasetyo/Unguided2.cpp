#include <iostream>
using namespace std;

int main()
{
    
    int a, b, c;
    cout<< "Input jumlah matriks, baris, dan kolom: ";
    cin >> a >> b >> c;
    int arr[a][b][c];
   

    for (int d = 0; d < a; d++)
    {
        for (int e = 0; e < b; e++)
        {
            for (int f = 0; f < c; f++)
            {
                cout << "Input Array[" << d << "][" << e << "][" << f << "] = ";
                cin >> arr[d][e][f];
            }
        }
        cout << endl;
    }
    cout << endl;
    

    for (int d = 0; d < a; d++)
    {
        for (int e = 0; e < b; e++)
        {
            for (int f = 0; f < c; f++)
            {
                cout << "Data Array[" << d << "][" << e << "][" << f << "] = " << arr[d][e][f] << endl;
            }
        }
    }
    cout << endl;
    
    for (int d = 0; d < a; d++)
    {
        for (int e = 0; e < b; e++)
        {
            for (int f = 0; f < c; f++)
            {
                cout << arr[d][e][f] << ends;
            }
            cout << endl;
        }
        cout << endl;
    }
}
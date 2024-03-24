#include <iostream>
using namespace std;

int main()
{
    int jmlh, indeks, menu;
    cout << "Input jumlah array: ";
    cin >> jmlh;
    int arr[jmlh];
    

    cout << "Input nilai array:" << endl;
    for (indeks = 0; indeks < jmlh; indeks++)
    {
        cout << "Indeks ke- " << (indeks + 1) << " : ";
        cin >> arr[indeks];
    }
    
    cout << "Nilai array: ";
    for (indeks = 0; indeks < jmlh; indeks++)
    {
        cout << arr[indeks] << " ";
    }
    cout << endl;
    cout << "Pilihan Operasi" << endl;
    cout << "1. Nilai Maksimum" << endl;
    cout << "2. Nilai Minimum" << endl;
    cout << "3. Rata- rata" << endl;
    cout << "pilih (1/2/3):";
    cin >> menu;

    switch (menu)
    {
    case 1:
    {
        int max = arr[0];
        for (indeks = 0; indeks < jmlh; indeks++)
        {
            if (max < arr[indeks])
            {
                max = arr[indeks];
            }
        }
        cout << "Nilai Maksimum: " << max << endl;
        break;
    }

    case 2:
    {
        int min = arr[0];
        for (indeks = 0; indeks < jmlh; indeks++)
        {
            if (min > arr[indeks])
            {
                min = arr[indeks];
            }
        }
        cout << "Nilai Minimum: " << min << endl;
        break;
    }
    case 3:
    {
        int sum;
        for (indeks = 0; indeks < jmlh; indeks++)
        {
            sum += arr[indeks];
        }
        float average = sum / jmlh;
        cout << "Rata- rata: " << average << endl;
        break;
    }
    default:
        cout << "Pilihan Anda tidak valid, silahkan mulai ulang. " << endl;
        break;
    }
    return 0;
}
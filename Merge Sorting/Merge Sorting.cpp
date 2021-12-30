#include <iostream>

using namespace std;

void mergeSort(int arr[], int lewy, int prawy)
{

}

int main()
{
    int myarr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> myarr[i];
    }
    cout << "Przed sortowaniem Merge: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << myarr[i] << " ";
    }

    // mergesort function
    mergeSort(myarr, 0, 4);

    cout << "Po sortowaniu Merge: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << myarr[i] << " ";
    }
    return 0;
}

//Merge Sort
//Kacper Hnatyszyn 3prT5
#include <iostream>

using namespace std;

void merge(int arr[], int lewy, int m, int prawy)
{
    int i = lewy; // starting index for left subarray
    int j = m + 1; // starting index for right subarray
    int k = lewy; // starting index for temporary
    int temp[5]; // temporary

    while (i <= m && j <= prawy)
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
    while (i <= m)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }
    while (j <= prawy)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }
    for (int s = lewy; s <= prawy; s++)
    {
        arr[s] = temp[s];
    }
}

void mergeSort(int arr[], int lewy, int prawy)
{
    if (lewy < prawy)
    {
        int m = (lewy + prawy) / 2;
        mergeSort(arr, lewy, m);
        mergeSort(arr, m+1, prawy);
        merge(arr, lewy, m, prawy);
    }
}

int main()
{
    cout << "Podaj 5 liczb: ";
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

    mergeSort(myarr, 0, 4);

    cout << endl << "Po sortowaniu Merge: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << myarr[i] << " ";
    }
    return 0;
}

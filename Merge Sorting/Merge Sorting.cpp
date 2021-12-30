#include <iostream>

using namespace std;



int main()
{
    //int arr[5] = { 4,6,1,2,7 };
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << "Przed sortowaniem Merge: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    // mergesort function

    cout << "Po sortowaniu Merge: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Insertion Sort using swapping
    for(int i = 1; i < n; i++)
    {
        int j = i;

        while(j > 0 && arr[j] < arr[j - 1])
        {
            // swap elements
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;

            j--;
        }
    }

    cout << "Sorted array:\n";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

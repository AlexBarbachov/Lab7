#include <iostream>
#include <string>
#include <algorithm>


using namespace std;


void displayArray(string *arr, int size);
string* reverseArray(string *arr, int size);


int main()
{
    const int SIZE = 5;
    string *names = new string[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter name " << i + 1 << ": ";
        cin >> names[i];
    }

    cout << "Original array:";
    displayArray(names, SIZE);


    // reverse array
    names = reverseArray(names, SIZE);
    cout << "Reversed array: ";
    displayArray(names, SIZE);




    delete [] names;

}

void displayArray(string *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }
    cout << endl;
}

string* reverseArray(string *arr, int size)
{
    reverse(arr, arr + size);
    return arr;
}



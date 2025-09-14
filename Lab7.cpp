#include <iostream>
#include <string>

using namespace std;


void displayArray(string *arr, int size);


int main()
{
    const int SIZE = 5;
    string *names = new string[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter name " << i + 1 << ": ";
        cin >> names[i];
    }



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



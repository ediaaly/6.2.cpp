#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

// Створення масиву
void Create(int a[], const int n, const int Low, const int High)
{
    for (int i = 0; i < n; i++)
        a[i] = Low + rand() % (High - Low + 1);
}

// Виведення масиву
void Print(int a[], const int n)
{
    for (int i = 0; i < n; i++)
        cout << setw(5) << a[i];

    cout << endl;
}

// Сортування масиву за спаданням
void Sort(int a[], const int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                int x = a[i];
                a[i] = a[j];
                a[j] = x;
            }
        }
    }
}

int main()
{
    srand((unsigned)time(NULL));

    const int n = 22;
    int a[n];

    int Low = -20;
    int High = 37;

    Create(a, n, Low, High);

    cout << "Original array:" << endl;
    Print(a, n);

    Sort(a, n);

    cout << "Sorted array:" << endl;
    Print(a, n);

    return 0;
}
#include <iostream>
using namespace std;

// function untuk mengurutkan array menggunakan algoritma bubblesort
void bubbleSort(int array[], int arrayLength)
{
    for (int i = 0; i < arrayLength - 1; i++)
    {
        for (int j = i; j < arrayLength; j++)
        {
            if (array[i] > array[j])
            {
                // tukarkan
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}
// function untuk merging array
void mergeArrays(int arr1[], int arr2[], int newArr[], int x, int y)
{
    int i = 0, j = 0, k = 0;

    // Merging arr1 and arr2 into newArr
    while (i < x && j < y)
    {
        if (arr1[i] < arr2[j])
        {
            newArr[k++] = arr1[i++];
        }
        else
        {
            newArr[k++] = arr2[j++];
        }
    }

    // Jika masih ada elemen yang belum dimasukkan dari arr1
    while (i < x)
    {
        newArr[k++] = arr1[i++];
    }

    // Jika masih ada elemen yang belum dimasukkan dari arr2
    while (j < y)
    {
        newArr[k++] = arr2[j++];
    }
}
// function untuk input elemen array
void inputArr(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Masukkan elemen untuk array: ";
        cin >> array[i];
    }
}
// function untuk menampilkan array ke layar
void displayArray(int array[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
int main(int argc, char const *argv[])
{
    int arr1[100], arr2[100], newArr[200], x, y;
    cout << "==========Program merging dua buah array yang sudah diurutkan menjadi array baru==========" << endl;
    // meminta user menginputkan array
    cout << "Masukkan jumlah element untuk array 1: ";
    cin >> x;
    inputArr(arr1, x);
    cout << "Masukkan jumlah element untuk array 2: ";
    cin >> y;
    inputArr(arr2, y);
    // Menampilkan array sebelum di urutkan
    cout << "Array 1 sebelum diurutkan:" << endl;
    displayArray(arr1, x);
    cout << "Array 2 sebelum diurutkan:" << endl;
    displayArray(arr2, y);
    // Mengurutkan array yang sudah di inputkan
    bubbleSort(arr1, x);
    bubbleSort(arr2, y);

    // Menampilkan array yang telah di urutkan
    cout << "\n============Array setelah di urutkan dan di merging dengan array baru============" << endl;
    cout << "Array 1 setelah diurutkan:" << endl;
    displayArray(arr1, x);
    cout << "Array 2 setelah diurutkan:" << endl;
    displayArray(arr2, y);
    // merging array 1 dan array 2 menjadi array baru
    mergeArrays(arr1, arr2, newArr, x, y);
    // menampilkan array setelah merging
    cout << "Array baru setelah merging:" << endl;
    displayArray(newArr, x + y);
    return 0;
}

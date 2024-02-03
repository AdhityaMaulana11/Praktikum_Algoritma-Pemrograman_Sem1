#include <iostream>
#include <conio.h>
#define n 5
using namespace std;
void data (float a[n])
{
    for (int i = 0; i < n; i++)
    {
        cout << "Data ke-" << i+1 <<": ";
        cin >> a[i];
    }
    
}
float meanData (float a[n])
{
    float d = 0;
    for (int i = 0; i < n; i++)
    {
        d += a[i];
    }
    return d/n;
    
}

int main(int argc, char const *argv[])
{
    float a[n], mean;
    data(a);
    mean = meanData(a);
    cout << endl;
    cout << "Mean \t" << mean << endl;
    getch();
    return 0;
}

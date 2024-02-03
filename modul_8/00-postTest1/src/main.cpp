#include <iostream>
using namespace std;
// program penentuan grade dengan penerapan function

void grades(int nilai)
{
    char grade;
    if (nilai < 45)
    {
        grade = 'E';
        cout << grade << endl;
    }
    else if (nilai < 56)
    {
        grade = 'D';
        cout << grade << endl;
    }
    else if (nilai < 68)
    {
        grade = 'C';
        cout << grade << endl;
    }
    else if (nilai < 80)
    {
        grade = 'B';
        cout << grade << endl;
    }
    else if (nilai > 80)
    {
        grade = 'A';
        cout << grade << endl;
    }
    
}
int main(int argc, char const *argv[])
{
    int nilai;
    cout << "Program menentukan grade suatu nilai dengan penerapan function" << endl;
    cout << "Masukkan nilai : "; cin >> nilai;
    cout << "Grade dari nilai anda adalah: ";
    grades(nilai);
    return 0;
}

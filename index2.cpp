#include <iostream>
using namespace std;
#include <fstream>

int main()
{
    int grade;
    ofstream file;

    cout << "Enter Your garde";
    cin >> grade;
    file.open("data.txt", ios::out);
    file << "your garde is " << grade;
    if (grade > 80)

    {
        cout << "Yoy ahve A Garde";
    }
    else if (grade >= 60 && grade <= 80)
    {
        cout << "YOu have B garde";
    }
    else if (grade >= 50 && grade <=60)
    {
        cout << "YOu have c garde";
    }
    else if (grade >= 45 && grade <= 50)
    {
        cout << "YOu have D garde";
    }
    else if (grade >= 25 && grade <= 45)
    {
        cout << "YOu have E garde";
    }
    else{
        cout << "FAil'";
    }

    return 0;
}

// Name: Austin Bland
// Program Purpose: IC-10 with else if
// Date: 10-15-2018

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int grade;

    cout << "Enter your test grade (0-100): ";
    cin >> grade;

    switch (grade / 10)
{
    case 10: case 9:    cout << "The Grade is A" << endl;
                    break;
    case 8:     cout << "The Grade is B"<< endl;
                    break;
    case 7:     cout << "You could do better, you got a C!! "<< endl;
                    break;
    case 6: case 5: case 4: case 3: case 2: case 1: cout << "You did HORRIBLE!!" << endl;
                    break;
    case 0:     cout << "You suck and should not be in the class!!!"<< endl;
                    break;
    default:    cout << "The Grade is Invalid" << endl;
                    break;
}
            return 0;
}
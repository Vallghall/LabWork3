#include <iostream>
#include "Header.h"
using namespace std;
int main()
{
    int n, k;
    double eps;
    bool noend = true;
    cout << "    " << "Greetings, Dear User!" << "\n" <<
        "Five tasks will be offered to you further. You will have to choose one of them." << "\n" <<
        "Task 1. Calculation of the given equation for (n-1) times and summing of the equated results . " << "\n" <<
        "Task 2. Calculation of the given equation with the given accuracy." << "\n" <<
        "Task 3. Printing of n row members excluding every k-th member." << "\n" <<
        "Task 4. Returns a number of the 1st row member for which (|ai|<=eps) is true." << "\n" <<
        "Task 5. Returns a number of the 1st negative row member for which (|ai|<=eps) is true." << "\n" <<
        "Task 6. Exit without calculating a thing" << "\n" <<
        "Please, enter the number of one of the given tasks: ";
    do {
        cin >> n;
        switch (n)
        {
        case 1:
            cout << "Enter a variable 'n': ";
            cin >> n;
            cout << summ(n);
            noend = false;
            break;
        case 2:
            cout << "Enter an accuracy 'eps': ";
            cin >> eps;
            cout << summ2(eps);
            noend = false;
            break;
        case 3:
            cout << "Enter two variables - 'n' and 'k' - one by one: " << '\n';
            cin >> n >> k;
            print(n, k);
            noend = false;
            break;
        case 4:
            cout << "Enter an accuracy 'eps': ";
            cin >> eps;
            cout << findFirstElement(eps);
            noend = false;
            break;
        case 5:
            cout << "Enter an accuracy 'eps': ";
            cin >> eps;
            cout << findFirstNegativeElement(eps);
            noend = false;
            break;
        case 6:
            cout << "It's such a pity you leave us. Goodbye.";
            noend = false;
            break;
        default:
            if (noend) {
                cout << "Error! You should enter the numbers of the given tasks only!" << "\n" << "Try again: ";
            }
        }
    } while (noend);
}
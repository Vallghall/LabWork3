#include <iostream>
#include "Header.h"
using namespace std;
int main()
{
    int n, k;
    double eps;
    cout << "    " << "Greetings, Dear User!" << "\n" <<
        "Five tasks will be offered to you further. You will have to choose one of them." << "\n" <<
        "Task 1. Calculation of the given equation for (n-1) times and summing of the equated results . " << "\n" <<
        "Task 2. Calculation of the given equation with the given accuracy." << "\n" <<
        "Task 3. Printing of n row members excluding every k-th member." << "\n" <<
        "Task 4. Returns a number of the 1st row member for which (|ai|<=eps) is true." << "\n" <<
        "Task 5. Returns a number of the 1st negative row member for which (|ai|<=eps) is true." << "\n" <<
        "Task 6. Exit without calculating a thing" << "\n" <<
        "Please, enter the number of one of the given tasks: ";
err:
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "Enter a variable 'n': ";
        cin >> n;
        cout << summ(n);
        break;
    case 2:
        cout << "Enter an accuracy 'eps': ";
        cin >> eps;
        cout << summ2(eps);
        break;
    case 3:
        cout << "Enter two variables — 'n' and 'k' — one by one: " << '\n';
        cin >> n >> k;
        print(n, k);
        break;
    case 4:
        cout << "Enter an accuracy 'eps': ";
        cin >> eps;
        cout << findFirstElement(eps);
        break;
    case 5:
        cout << "Enter an accuracy 'eps': ";
        cin >> eps;
        cout << findFirstNegativeElement(eps);
        break;
    case 6:
        cout << "It's such a pity you leave us. Goodbye.";
        break;
    default:
        cout << "Error! You should enter the numbers of the given tasks only!" << "\n" << "Try again: ";
        goto err;
        break;
    }
}
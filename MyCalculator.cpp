#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

    cout << "My Calculator App\n" << endl;
    cout << "Input two numbers and an operator, then press enter. Format: a+b | a-b | a*b | a/b\n" << endl;
    
    Calculator c;
    while (true)
    {
        cin >> x >> oper >> y;

        if (oper == '/' && y == 0)
        {
            cout << "Division by 0 exception\n" << endl;
            continue;
        }
        else
        {
            result = c.Calculate(x, oper, y);
        }

        cout << "Result is: " << result << endl << endl;

        cin.clear();
        while (cin.get() != '\n'); // empty loop
    }
    return 0;
}
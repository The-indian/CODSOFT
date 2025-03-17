#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Welcome\n\n\n ";
    char key;
    int ch;
    float a, b, c;
    do
    {
        cout << "As for desired operation enter a number \n 1.Add \n 2.Subtract \n 3.Multiply \n 4.Divide \n\n ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "\n\nEnter First number(a) : ";
            cin >> a;
            cout << "\n\nEnter Second number(b) : ";
            cin >> b;
            cout << "\na+b = " << a + b;
            break;

        case 2:
            cout << "\n\nEnter First number(a) : ";
            cin >> a;
            cout << "\n\nEnter Second number(b) : ";
            cin >> b;
            cout << "\na-b = " << a + b;
            break;

        case 3:
            cout << "\n\nEnter First number(a) : ";
            cin >> a;
            cout << "\n\nEnter Second number(b) : ";
            cin >> b;
            cout << "\na*b = " << a * b;
            break;

        case 4:
            cout << "\n\nEnter First number(a) : ";
            cin >> a;
            cout << "\n\nEnter Second number(b) : ";
            cin >> b;
            cout << "\na/b = " << a / b;
            break;

        

        default:
            cout << "Enter correct number";
            break;
        }
        cout << "\nDo you want to do more(y/n)?\n";
        cin >> key;
    } while (key != 'n');

    cout << "Bye!!";
    return 0;
}

#include <iostream>

using namespace std;

void Show()
{
    cout << "\nSelect an option:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";

}

void PerformOperation(int choice)
{
    double n1, n2, result;

    cout << "Enter the first number : ";
    cin >> n1;

    cout << "Enter the second number : ";
    cin >> n2;

    switch(choice)
    {
    case 1:
        result = n1 + n2;
        cout << "The result of addition is " << result << endl;
        break;

    case 2:
        result = n1 - n2;
        cout << "The result of multiplication is " << result << endl;
        break;

    case 3:
        result = n1 * n2;
        cout << "The result of multiplication is " << result << endl;
        break;

    case 4:
        if(n2 != 0)
        {
            result = n1 / n2;
        }
        else{
            cout << "Error : Division by zero is not possible" << endl;
        }
        break;

    default:
        cout << "Invalid Choice" << endl;

    }
}

int main()
{
    char continueProgram;

    do
    {
        Show();
        cout << "Please enter your choice\n";

        int choice;
        cin >> choice;

        PerformOperation(choice);


        cout << "Do you want to continue ? (y/n) : ";
        cin >> continueProgram;

    }while(continueProgram == 'y' || continueProgram == 'Y');
}

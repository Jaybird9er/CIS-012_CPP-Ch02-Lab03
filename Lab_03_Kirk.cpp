#include <iostream>
#include <string>
using namespace std;

int main ()
{
    // constant declarations
    const int SECRET = 11;
    const double RATE = 12.50;
    // variable declarations
    int num1;
    int num2;
    int newNum;
    string name;
    double hoursWorked;
    double wages;
    // prompts and outputs
    cout << "Please type two numbers. Be sure to separate them with a space:" << endl;
    cin >> num1 >> num2;
    cout << "The value of num1 = " << num1 << " and the value of num2 = " << num2 << "." << endl;
    newNum = num1 * 2 + num2;
    cout << "And, your new number is:" << newNum << endl;
    newNum = newNum + SECRET;
    cout << "After adding a secret number, your number is now: " << newNum << endl;
    cout << "Now, enter your last name:" << endl;
    cin >> name;
    cout << "Next, enter the number of hours that you've worked this week. If you've worked over 70 hours, just write 70. Be sure to include any extra minutes that you worked as well, i.e. 10.5:" << endl;
    cin >> hoursWorked;
    wages = hoursWorked * RATE;
    cout << "Name: " << name << endl;
    cout << "Pay Rate: $" << RATE << endl;
    cout << "Hours Worked: " << hoursWorked << endl;
    cout << "Salary: $" << wages << endl;
    return 0;
}

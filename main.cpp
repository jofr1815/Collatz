#include <iostream>

using namespace std;

int collatz(int num)
{
    cout << "Current number is: " << num << endl;
    if (num <= 0){
        cout << "Error, Input Number is not Positive" << endl;
        return 2;
    }
    else if (num == 1){
        // Reached one, end recursion
        cout << "Reached one! Collatz Confirmed" << endl;
        return num;
    }
    else if (num%2 == 1){
        // Num is odd, multiply by three and add one
        cout << "Num is odd, multiply by three and add 1" << endl;
        num = 3*num + 1;
        collatz(num);
    }
    else{
        // Num is even, divide by two
        cout << "Num is even, divide by two" << endl;
        num = num/2;
        collatz(num);
    }
}

int main()
{
    int num = 0;
    cout << "Enter a number: ";
    cin >> num;
    cout << collatz(num);
    return 0;
}
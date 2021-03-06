#include <iostream>
#include <string>

using namespace std;

int collatz(int num, int steps, int max)
{
    // Check if current step is the first, if so the maxiumum should be the initial number
    if (steps == 0){
        max = num;
    }

    // Output Sequence Info
    cout << "Current number is: " << num << endl;
    if (num <= 0){
        cout << "Error, Input Number is not Positive" << endl;
        return 2;
    }
    else if (num == 1){
        // Reached one, end recursion
        cout << "Reached one! Collatz Confirmed" << endl;
        cout << steps << " steps were used!" << endl;
        cout << max << " was the highest number reached!" << endl;
        return num;
    }
    else if (num%2 == 1){
        // Num is odd, multiply by three and add one
        cout << "Num is odd, multiply by three and add 1" << endl;
        num = 3*num + 1;

        // Check if the new number is the new maximum
        if (num > max){
            max = num;
        }
        steps++;
        collatz(num, steps, max);
    }
    else{
        // Num is even, divide by two
        cout << "Num is even, divide by two" << endl;
        num = num/2;
        steps++;
        collatz(num, steps, max);
    }
}

int main()
{
    // Establish and initiate variables
    int num = 0;
    bool quit = false;
    string usrInput = "";

    // Loop to allow for repeated entries
    while(quit == false){

        // Take in input, perform Collatz conjecture
        cout << "Enter a number: ";
        cin >> num;
        collatz(num, 0, 0);

        cout << "Would you like to try another number? (y/n):" << endl;
        cin >> usrInput;

        if (usrInput == "n"){
            quit = true;
        }
    }

    return 0;
}
#include <iostream>
#include <string>

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
    // Establish and initiate variables
    int num = 0;
    bool quit = false;
    string usrInput = "";

    // Loop to allow for repeated entries
    while(quit == false){

        // Take in input, perform Collatz conjecture
        cout << "Enter a number: ";
        cin >> num;
        collatz(num);

        cout << "Would you like to try another number? (y/n):" << endl;
        cin >> usrInput;

        if (usrInput == "n"){
            quit = true;
        }
    }

    return 0;
}
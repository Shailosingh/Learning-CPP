#include <iostream>

//Function declarations
int fibonacciCalculator(int n);

int main()
{
    //Initialize variables
    int fibInput;

    //Continuously ask user for input
    while (true)
    {
        std::cout << "What fibonacci number would you like: ";
        std::cin >> fibInput;

        //Ensure that the input is valid (not less than 0)
        if (fibInput < 0)
        {
            std::cout << "Invalid Input!\n\n";
        }

        std::cout << "Fib(" << fibInput << ") = " << fibonacciCalculator(fibInput) << "\n\n";
    }
}

//Very naive and slow but, good example of recursion
int fibonacciCalculator(int n)
{
    //Base case
    if (n <= 1)
    {
        return n;
    }

    //Recursive case
    return fibonacciCalculator(n - 1) + fibonacciCalculator(n - 2);
}

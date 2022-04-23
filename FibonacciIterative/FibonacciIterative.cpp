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
        if (!(fibInput >= 0))
        {
            std::cout << "Invalid Input!\n\n";
        }

        std::cout << "Fib(" << fibInput << ") = " << fibonacciCalculator(fibInput) << "\n\n";
    }
}

//Because of size limitation of int, this function will fail for n>46
int fibonacciCalculator(int n)
{
    //Base case
    if (n <= 1)
    {
        return n;
    }

    //Loop through the numbers to calculate the Fib(n)
    int secondLastFib = 0;
    int lastFib = 1;
    int currentFib = 1;
    for (int index = 2; index < n; index++)
    {
        secondLastFib = lastFib;
        lastFib = currentFib;
        currentFib = secondLastFib + lastFib;
    }

    return currentFib;
}

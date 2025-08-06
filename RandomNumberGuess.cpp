#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time

using namespace std;

int main() {
    int secretNumber, userGuess;
    
    // Seed the random number generator with current time
    srand(time(0));
    
    // Generate a random number between 1 and 100
    secretNumber = rand() % 100 + 1;

    cout << " Welcome to the Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100." << endl;

    // Loop until user guesses correctly
    do {
        cout << "Enter your guess: ";
        cin >> userGuess;

        if (userGuess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else if (userGuess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << " Congratulations! You guessed the correct number: " << secretNumber << endl;
        }

    } while (userGuess != secretNumber);

    return 0;
}
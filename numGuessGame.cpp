#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;

int main() {
    srand(time(0));

    // to get a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;
    int userGuess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100." << endl;
    cout << "Try to guess the number!" << endl;

    // run until the user guesses the correct number
    do {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        if (userGuess > randomNumber) {
            cout << "Too high! Try again." << endl;
        } else if (userGuess < randomNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You've guessed the number in " << attempts << " attempts." << endl;
        }

    } while (userGuess != randomNumber);

    return 0;
}

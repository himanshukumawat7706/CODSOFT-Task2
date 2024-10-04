#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

using namespace std;

int main() {
    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(0)));
    
    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;
    int playerGuess = 0;
    
    cout << "Welcome to the Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100. Can you guess it?" << endl;
    
    // Keep looping until the player guesses the correct number
    while (playerGuess != secretNumber) {
        cout << "Enter your guess: ";
        cin >> playerGuess;
        
        if (playerGuess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else if (playerGuess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number correctly." << endl;
        }
    }

    return 0;
}

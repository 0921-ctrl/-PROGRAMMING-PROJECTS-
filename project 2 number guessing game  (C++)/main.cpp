#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));  

    int number = (rand() % 100) + 1;  // Random number between 1 and 100
    int attempts = 0;
    int guess;

    do {
        cout << "Guess the number (between 1 and 100): ";
        cin >> guess;

        if (guess > number) {
            cout << "Lower number please!" << endl;
        } else if (guess < number) {
            cout << "Higher number please! "<< endl;
        }
        attempts++;
    } while (guess != number);

    cout << " You guessed the number in " << attempts << " guesses"<< endl;

    return 0;
}
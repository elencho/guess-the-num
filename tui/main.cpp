#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class GuessingGame {
private:
    int secretNumber;
    int numGuesses;
public:
    GuessingGame() {
        srand(time(nullptr));
        secretNumber = rand() % 100 + 1;
        numGuesses = 0;
    }

    void play() {
        while (true) {
            cout << "Guess a number between 1 and 100: ";
            int guess;
            cin >> guess;
            numGuesses++;
            if (guess == secretNumber) {
                cout << "Congratulations, you guessed the number in " << numGuesses << " guesses!" << endl;
                break;
            }
            if (guess < secretNumber) {
                cout << "Too low, try again." << endl;
            } else {
                cout << "Too high, try again." << endl;
            }
        }
    }
};

int main() {
    GuessingGame game;
    game.play();
    cout << "Thanks for playing!" << endl;
    return 0;
}

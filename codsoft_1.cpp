//  Guessing Game !
#include <iostream>
#include <cstdlib>   
#include <ctime>      

using namespace std;

int main() {
    srand(time(0));   
    int numberToGuess = rand()%100 + 1;
     
  
    int userGuess;
    int attempts = 0;
    
    cout << " 🤖  Welcome to the Number Guessing Game ! " << endl;
    cout << "I have picked a number between 1 and 100. Try to guess it!...😉" << endl;

    do {
        cout << "Enter your guess 💡 : ";
        cin >> userGuess;
        attempts++;

        if (userGuess < numberToGuess) {
            cout <<  "📉 Too low! Try again. 😅\n"<< endl;
        }
        else if (userGuess > numberToGuess) {
            cout << "📈 Too high! Try again. 😬\n" << endl;
        }
        else {
           cout << "\n🎉🎯 BOOM! You guessed it! 🎯🎉" << endl;
           cout << "👏 It took you " << attempts << " tries!" << endl;
            cout << "---- Game Over - Thanks for playing! 🕹️ ---" << endl;
        }
    }  while (userGuess != numberToGuess);

    return 0;
}




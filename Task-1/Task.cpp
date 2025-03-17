#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0));
    int number = std::rand() % 100 + 1;
    int guess;

    std::cout << "Guess a number between 1 and 100: ";

    while (true) {
        std::cin >> guess;

        if (guess < number) {
            std::cout << "Low. Try again: ";
        }
        else if (guess > number) {
            std::cout << "High. Try again: ";
        } 
        else {
            std::cout<<"Correct !\n";
            break;
        }
    }

    return 0;
}

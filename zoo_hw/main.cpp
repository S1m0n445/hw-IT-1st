#include <iostream>
#include <memory>
#include <limits>
#include "animal.h"

std::unique_ptr<Animal> createAnimal(int choice){
    switch (choice) {
        case 1: return std::make_unique<Dog>("Bobik");
        case 2: return std::make_unique<Cat>("Barsik");
        case 3: return std::make_unique<Fox>("Alisa");
        case 4: return std::make_unique<Bunny>("Snezhok");
        case 5: return std::make_unique<Bird>("Kesha");
        default: return nullptr;
    }
}

void printAnimal(const Animal& a) {
    std::cout << a.getType() << " " << a.getName() << "\n";
    a.makeSound();
    a.eat();
    std::cout << "\n";
}

int main() {
    std::cout << "1-Dog  2-Cat  3-Fox  4-Bunny  5-Bird  0-All\n> ";

    int choice;
    while (!(std::cin >> choice) || choice < 0 || choice > 5) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid. Enter 0-5: ";
    }

    if (choice == 0) {
        for (int i = 1; i <= 5; ++i)
            printAnimal(*createAnimal(i));
    } else {
        printAnimal(*createAnimal(choice));
    }

    return 0;
}
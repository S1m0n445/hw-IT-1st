#include "animal.h"
#include <iostream>

Animal::Animal() : name("Noname"), sound("..."), food("...") {}

Animal::Animal(const std::string& name, const std::string& sound, const std::string& food)
    : name(name), sound(sound), food(food) {}

Animal::~Animal() = default;

Animal::Animal(const Animal& other)
    : name(other.name), sound(other.sound), food(other.food) {}

Animal::Animal(Animal&& other)
    : name(std::move(other.name)),
      sound(std::move(other.sound)),
      food(std::move(other.food)) {}

Animal& Animal::operator=(const Animal& other) {
    if (this != &other) {
        name  = other.name;
        sound = other.sound;
        food  = other.food;
    }
    return *this;
}

Animal& Animal::operator=(Animal&& other) {
    if (this != &other) {
        name  = std::move(other.name);
        sound = std::move(other.sound);
        food  = std::move(other.food);
    }
    return *this;
}

void Animal::makeSound() const {
    std::cout << name << " govorit " << sound << std::endl;
}

void Animal::eat() const {
    std::cout << name << " est " << food << std::endl;
}

std::string Animal::getType() const { return "Animal"; }
std::string Animal::getName() const { return name; }

Dog::Dog(const std::string& name) : Animal(name, "gav gav", "myaso") {}

void Dog::makeSound() const {
    std::cout << name << ": " << sound << "!" << std::endl;
}

void Dog::eat() const {
    std::cout << name << " bites " << food << std::endl;
}

std::string Dog::getType() const { return "Dog"; }

Cat::Cat(const std::string& name) : Animal(name, "meow", "fish") {}

void Cat::makeSound() const {
    std::cout << name << ": " << sound << "!" << std::endl;
}

void Cat::eat() const {
    std::cout << name << " eats " << food << std::endl;
}

std::string Cat::getType() const { return "Cat"; }

Fox::Fox(const std::string& name) : Animal(name, "tav", "mice") {}

void Fox::makeSound() const {
    std::cout << name << ": " << sound << "!" << std::endl;
}

void Fox::eat() const {
    std::cout << name << " eats " << food << std::endl;
}

std::string Fox::getType() const { return "Fox"; }

Bunny::Bunny(const std::string& name) : Animal(name, "silence", "carrot") {}

void Bunny::makeSound() const {
    std::cout << name << ": (silent)" << std::endl;
}

void Bunny::eat() const {
    std::cout << name << " chews on " << food << std::endl;
}

std::string Bunny::getType() const { return "Bunny"; }

Bird::Bird(const std::string& name) : Animal(name, "chick chirick", "oats") {}

void Bird::makeSound() const {
    std::cout << name << ": " << sound << "!" << std::endl;
}

void Bird::eat() const {
    std::cout << name << " eats " << food << std::endl;
}

std::string Bird::getType() const { return "Bird"; }
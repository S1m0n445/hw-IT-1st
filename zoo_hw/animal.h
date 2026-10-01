#pragma once
#include <string>

class Animal {
public:
    Animal();
    Animal(const std::string& name, const std::string& sound, const std::string& food);
    virtual ~Animal();

    Animal(const Animal& other);
    Animal(Animal&& other);
    Animal& operator=(const Animal& other);
    Animal& operator=(Animal&& other);

    virtual void makeSound() const;
    virtual void eat() const;
    virtual std::string getType() const;

    std::string getName() const;

protected:
    std::string name;
    std::string sound;
    std::string food;
};

class Dog : public Animal {
public:
    Dog(const std::string& name);
    void makeSound() const override;
    void eat() const override;
    std::string getType() const override;
};

class Cat : public Animal {
public:
    Cat(const std::string& name);
    void makeSound() const override;
    void eat() const override;
    std::string getType() const override;
};

class Fox : public Animal {
public:
    Fox(const std::string& name);
    void makeSound() const override;
    void eat() const override;
    std::string getType() const override;
};

class Bunny : public Animal {
public:
    Bunny(const std::string& name);
    void makeSound() const override;
    void eat() const override;
    std::string getType() const override;
};

class Bird : public Animal {
public:
    Bird(const std::string& name);
    void makeSound() const override;
    void eat() const override;
    std::string getType() const override;
};
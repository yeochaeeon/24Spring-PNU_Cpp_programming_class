//
// Created by codjs on 2024-06-19.
//
#include <iostream>
#include <map>
#include <memory>
#include <string>
class Monster{
public:
    virtual ~Monster() {};
    virtual std::unique_ptr<Monster> clone() const = 0;
    virtual void roar() const = 0;
};

class Dragon : public Monster {
public:
    std::unique_ptr<Monster> clone() const override {
        return std::make_unique<Dragon>(*this);
    }
    void roar() const override {
        std::cout << "Dragon roars!" << std::endl;
    }

};

class Goblin : public Monster {
public:
    std::unique_ptr<Monster> clone() const override {
        return std::make_unique<Goblin>(*this);
    }
    void roar() const override {
        std::cout << "Goblin roars!" << std::endl;
    }
};

std::map<std::string, std::unique_ptr<Monster>> monsterRegistry;

void loadMonsters() {
    // Read monster information from file (this is the costly operation)
    // Here, we just pretend to do it and create a Dragon and a Goblin
    monsterRegistry["Dragon"] = std::make_unique<Dragon>();
    monsterRegistry["Goblin"] = std::make_unique<Goblin>();
}

std::unique_ptr<Monster> spawnMonster(const std::string& type) {
    // implement your code
    auto it = monsterRegistry.find(type);
    return it->second->clone();
}
int main() {

    loadMonsters(); // load monster prototypes
    std::unique_ptr<Monster> dragon1 = spawnMonster("Dragon"); // clone from prototype
    dragon1->roar();

    std::unique_ptr<Monster> goblin1 = spawnMonster("Goblin"); // clone from prototype
    goblin1->roar();

    return 0;

}


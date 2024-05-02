//
// Created by Tushant Man Singh on 11/4/2024.
//
#include "CoffeeMaker.h"
#include <stdexcept>
#include <iostream> // Include for printing

std::unique_ptr<Drink> CoffeeMaker::createDrink(const std::string& drinkType, int sugar) const {
    if (drinkType == "black") {
        std::cout << "CoffeeMaker: Finished making  Black Coffee with " << sugar << " sugar(s)" << std::endl; // Print when making black coffee
        return std::make_unique<BlackCoffee>(sugar);
    } else if (drinkType == "white") {
        std::cout << "CoffeeMaker: Finished making White Coffee with " << sugar << " sugar(s)" << std::endl; // Print when making white coffee
        return std::make_unique<WhiteCoffee>(sugar);
    }
    throw std::invalid_argument("Invalid drink type");
}

//
// Created by Tushant Man Singh on 11/4/2024.
//
#include "Coffee.h"
BlackCoffee::BlackCoffee(int sugar) : Drink("Black Coffee", sugar) {}

std::string BlackCoffee::getDescription() const {
    return Drink::getDescription();
}

WhiteCoffee::WhiteCoffee(int sugar, const std::string& milkType) : Drink("White Coffee", sugar), milkType(milkType) {}

std::string WhiteCoffee::getDescription() const {
    return Drink::getDescription() + " with " + milkType + " milk";
}
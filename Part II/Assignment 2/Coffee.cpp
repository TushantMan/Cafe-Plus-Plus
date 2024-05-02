//
// Created by Tushant Man Singh on 11/4/2024.
//
#include "Coffee.h"

BlackCoffee::BlackCoffee(int sugar) : Drink("Black Coffee", sugar) {}

std::string BlackCoffee::getDescription() const {
    return Drink::getDescription();
}

WhiteCoffee::WhiteCoffee(int sugar) : Drink("White Coffee", sugar) {}

std::string WhiteCoffee::getDescription() const {
    return Drink::getDescription();
}
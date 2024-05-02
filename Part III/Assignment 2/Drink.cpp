//
// Created by Tushant Man Singh on 11/4/2024.
//
#include "Drink.h"

Drink::Drink(const std::string& name, int sugar) : name(name), sugar(sugar) {}

std::string Drink::getDescription() const {
    return name + " with " + std::to_string(sugar) + " sugar(s)";
}

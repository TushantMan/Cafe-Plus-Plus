//
// Created by Tushant Man Singh on 11/4/2024.
//

#ifndef ASSIGNMENT_2_COFFEEMAKER_H
#define ASSIGNMENT_2_COFFEEMAKER_H
#pragma once

#include <memory>
#include "Coffee.h"

class CoffeeMaker {
public:
    std::unique_ptr<Drink> createDrink(const std::string& drinkType, int sugar) const;
};
#endif //ASSIGNMENT_2_COFFEEMAKER_H

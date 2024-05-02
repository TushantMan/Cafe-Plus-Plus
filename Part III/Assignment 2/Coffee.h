//
// Created by Tushant Man Singh on 11/4/2024.
//

#ifndef ASSIGNMENT_2_COFFEE_H
#define ASSIGNMENT_2_COFFEE_H
#pragma once

#include "Drink.h"

class BlackCoffee : public Drink {
public:
    explicit BlackCoffee(int sugar);
    std::string getDescription() const override;
};

class WhiteCoffee : public Drink {
public:
    explicit WhiteCoffee(int sugar, const std::string& milkType);
    std::string getDescription() const override;

private:
    std::string milkType;
};



#endif //ASSIGNMENT_2_COFFEE_H

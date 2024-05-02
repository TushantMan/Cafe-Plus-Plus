//
// Created by Tushant Man Singh on 11/4/2024.
//

#ifndef ASSIGNMENT_2_MENUFACTORY_H
#define ASSIGNMENT_2_MENUFACTORY_H

#pragma once

#include <memory>
#include "Food.h"
#include "Coffee.h"

class MenuFactory {
public:
    virtual ~MenuFactory() = default;
    virtual std::unique_ptr<Food> createFood(const std::string& name) const = 0;
    virtual std::unique_ptr<Drink> createDrink(const std::string& drinkType, int sugar) const = 0;
};

#endif //ASSIGNMENT_2_MENUFACTORY_H

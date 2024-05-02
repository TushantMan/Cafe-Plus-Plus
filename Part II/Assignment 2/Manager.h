//
// Created by Tushant Man Singh on 11/4/2024.
//

#ifndef ASSIGNMENT_2_MANAGER_H
#define ASSIGNMENT_2_MANAGER_H
#pragma once

#include <memory>
#include "Order.h"
#include "FoodMaker.h"
#include "CoffeeMaker.h"

class Manager {
public:
    Manager(std::unique_ptr<FoodMaker> foodMaker, std::unique_ptr<CoffeeMaker> coffeeMaker);
    std::unique_ptr<Order> takeOrder(const std::string& patronName);

private:
    std::unique_ptr<FoodMaker> foodMaker;
    std::unique_ptr<CoffeeMaker> coffeeMaker;
    const std::string foodMakerName = "FoodMaker";
    const std::string coffeeMakerName = "CoffeeMaker";
};
#endif //ASSIGNMENT_2_MANAGER_H

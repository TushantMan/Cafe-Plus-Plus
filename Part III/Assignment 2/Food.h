//
// Created by Tushant Man Singh on 11/4/2024.
//

#ifndef ASSIGNMENT_2_FOOD_H
#define ASSIGNMENT_2_FOOD_H
#pragma once

#include "MenuItem.h"
#include <string>

class Food : public MenuItem {
public:
    explicit Food(const std::string& name);
    std::string getDescription() const override;

private:
    std::string name;
};


#endif //ASSIGNMENT_2_FOOD_H

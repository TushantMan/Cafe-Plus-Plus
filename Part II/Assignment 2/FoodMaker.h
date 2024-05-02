//
// Created by Tushant Man Singh on 11/4/2024.
//

#ifndef ASSIGNMENT_2_FOODMAKER_H
#define ASSIGNMENT_2_FOODMAKER_H
#pragma once

#include <memory>
#include "Food.h"

class FoodMaker {
public:
    std::unique_ptr<Food> createFood(const std::string& name) const;
};

#endif //ASSIGNMENT_2_FOODMAKER_H

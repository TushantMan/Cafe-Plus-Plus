//
// Created by Tushant Man Singh on 11/4/2024.
//

#ifndef ASSIGNMENT_2_DRINK_H
#define ASSIGNMENT_2_DRINK_H
#pragma once

#include "MenuItem.h"
#include <string>

class Drink : public MenuItem {
public:
    Drink(const std::string& name, int sugar);
    std::string getDescription() const override;

protected:
    std::string name;
    int sugar;
};
#endif //ASSIGNMENT_2_DRINK_H

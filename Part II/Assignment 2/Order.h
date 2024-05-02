//
// Created by Tushant Man Singh on 11/4/2024.
//

#ifndef ASSIGNMENT_2_ORDER_H
#define ASSIGNMENT_2_ORDER_H
#pragma once

#include <vector>
#include <memory>
#include "MenuItem.h"

class Order {
public:
    void addItem(std::unique_ptr<MenuItem> item);
    std::string getOrderDetails() const;

private:
    std::vector<std::unique_ptr<MenuItem>> items;
};

#endif //ASSIGNMENT_2_ORDER_H

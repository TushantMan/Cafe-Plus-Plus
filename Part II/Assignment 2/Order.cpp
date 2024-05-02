//
// Created by Tushant Man Singh on 11/4/2024.
//
#include "Order.h"
#include <sstream>
#include <unordered_map>

void Order::addItem(std::unique_ptr<MenuItem> item) {
    items.push_back(std::move(item));
}

std::string Order::getOrderDetails() const {
    std::ostringstream oss;
    std::unordered_map<std::string, int> foodCounts, drinkCounts;

    for (const auto& item : items) {
        std::string description = item->getDescription();
        if (description.find("Food:") == 0) {
            foodCounts[description.substr(6)]++;
        } else {
            drinkCounts[description]++;
        }
    }

    for (const auto& [food, count] : foodCounts) {
        oss << "Food: " << count << " " << food << std::endl;
    }

    for (const auto& [drink, count] : drinkCounts) {
        oss << "Coffee: " << count << " " << drink << std::endl;
    }

    return oss.str();
}
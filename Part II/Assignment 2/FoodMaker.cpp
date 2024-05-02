//
// Created by Tushant Man Singh on 11/4/2024.
//
#include "FoodMaker.h"
#include <stdexcept>
#include <iostream> // Include for printing

std::unique_ptr<Food> FoodMaker::createFood(const std::string& name) const {
    if (name == "chips" || name == "candy") {
        std::cout << "FoodMaker: Finished packing  " << name << std::endl; // Print when making food
        return std::make_unique<Food>(name);
    }
    throw std::invalid_argument("Invalid food item");
}


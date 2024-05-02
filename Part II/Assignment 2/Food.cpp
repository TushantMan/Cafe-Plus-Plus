//
// Created by Tushant Man Singh on 11/4/2024.
//
#include "Food.h"

Food::Food(const std::string& name) : name(name) {}

std::string Food::getDescription() const {
    return "Food: " + name;
}
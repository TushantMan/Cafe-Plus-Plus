//
// Created by Tushant Man Singh on 11/4/2024.
//

#ifndef ASSIGNMENT_2_HOST_H
#define ASSIGNMENT_2_HOST_H
#pragma once

#include <memory>
#include <string>
#include "Manager.h"

class Host {
public:
    explicit Host(std::unique_ptr<Manager> manager);
    std::string takeOrder();

private:
    std::unique_ptr<Manager> manager;
};

#endif //ASSIGNMENT_2_HOST_H

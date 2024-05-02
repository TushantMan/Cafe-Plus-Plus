//
// Created by Tushant Man Singh on 11/4/2024.
//

#ifndef ASSIGNMENT_2_MENUITEM_H
#define ASSIGNMENT_2_MENUITEM_H
#pragma once

#include <string>

class MenuItem {
public:
    virtual ~MenuItem() = default;
    virtual std::string getDescription() const = 0;
};
#endif //ASSIGNMENT_2_MENUITEM_H

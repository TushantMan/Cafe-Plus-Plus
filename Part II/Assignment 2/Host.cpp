//
// Created by Tushant Man Singh on 11/4/2024.
//
#include "Host.h"
#include <iostream>

Host::Host(std::unique_ptr<Manager> manager)
        : manager(std::move(manager)) {}

std::string Host::takeOrder() {
    std::string patronName;
    std::cout << "Welcome to Café++!" << std::endl;
    std::cout << "Enter your name: ";
    std::cin >> patronName;

    std::string choice;
    std::cout << "Welcome " << patronName << "! Would you like to place an order? (y/n): ";
    std::cin >> choice;

    if (choice == "y") {
        std::cout << "Please place your order." << std::endl;
        auto order = manager->takeOrder(patronName);
        std::string orderDetails = order->getOrderDetails();
        std::cout << patronName << ", here is your order:" << std::endl;
        std::cout << orderDetails << std::endl;
        return "Transaction completed! Thank you for visiting! Have a nice day.";
    } else {
        std::cout << "Thank you for visiting! Have a nice day." << std::endl;
        return "";
    }
}
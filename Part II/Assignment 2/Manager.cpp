//
// Created by Tushant Man Singh on 11/4/2024.
//
#include "Manager.h"
#include <iostream>
#include <utility>
#include <cctype> // for std::tolower
#include <algorithm> // for std::transform

Manager::Manager(std::unique_ptr<FoodMaker> foodMaker, std::unique_ptr<CoffeeMaker> coffeeMaker)
        : foodMaker(std::move(foodMaker)), coffeeMaker(std::move(coffeeMaker)) {}

std::unique_ptr<Order> Manager::takeOrder(const std::string& patronName) {
    auto order = std::make_unique<Order>();
    std::vector<std::string> foodItems;
    std::vector<std::pair<std::string, int>> drinkItems;
    std::string input;

    bool keepOrdering = true;
    while (keepOrdering) {
        std::string inputType;
        while (true) {
            std::cout << "Enter 'food' or 'drink': ";
            std::cin >> inputType;
            std::transform(inputType.begin(), inputType.end(), inputType.begin(), ::tolower); // Convert to lowercase
            if (inputType == "food" || inputType == "drink") {
                break;
            } else {
                std::cout << "Invalid input. Please enter 'food' or 'drink'." << std::endl;
            }
        }

        if (inputType == "food") {
            std::string foodItem;
            while (true) {
                std::cout << "Enter food item (chips or candy): ";
                std::cin >> foodItem;
                std::transform(foodItem.begin(), foodItem.end(), foodItem.begin(), ::tolower); // Convert to lowercase
                if (foodItem == "chips" || foodItem == "candy") {
                    break;
                } else {
                    std::cout << "Invalid food item. Please enter 'chips' or 'candy'." << std::endl;
                }
            }
            foodItems.push_back(foodItem);
        } else if (inputType == "drink") {
            std::string drinkType;
            int sugar;
            while (true) {
                std::cout << "Enter drink type (black or white): ";
                std::cin >> drinkType;
                std::transform(drinkType.begin(), drinkType.end(), drinkType.begin(), ::tolower); // Convert to lowercase
                if (drinkType == "black" || drinkType == "white") {
                    break;
                } else {
                    std::cout << "Invalid drink type. Please enter 'black' or 'white'." << std::endl;
                }
            }

            while (true) {
                std::cout << "Enter sugar level: ";
                std::cin >> sugar;
                if (sugar >= 0) {
                    break;
                } else {
                    std::cout << "Invalid sugar level. Sugar level must be a non-negative integer. Try again." << std::endl;
                }
            }

            drinkItems.emplace_back(drinkType, sugar);
        }

        while (true) {
            std::cout << "Do you want to add more items? (y/n) ";
            std::cin >> input;
            std::transform(input.begin(), input.end(), input.begin(), ::tolower); // Convert to lowercase
            if (input == "y" || input == "n") {
                keepOrdering = (input == "y");
                break;
            } else {
                std::cout << "Invalid input. Please enter 'y' or 'n'." << std::endl;
            }
        }
    }
    std::cout << "" << std::endl;
    for (const auto& foodName : foodItems) {
        std::cout << "Asking " << foodMakerName << " to create " << foodName << std::endl;
        order->addItem(foodMaker->createFood(foodName));
    }

    for (const auto& [drinkType, sugar] : drinkItems) {
        std::cout << "Manager: Asking " << coffeeMakerName << " to create " << drinkType << " coffee with " << sugar << " sugar(s)" << std::endl;
        order->addItem(coffeeMaker->createDrink(drinkType, sugar));
    }
    std::cout << "" << std::endl;
    std::cout << "Order completed!" << std::endl;
    return order;
}
#include "Host.h"
#include "FoodMaker.h"
#include "CoffeeMaker.h"
#include "Manager.h"
#include <iostream>
#include <memory>

int main() {
    auto foodMaker = std::make_unique<FoodMaker>();
    auto coffeeMaker = std::make_unique<CoffeeMaker>();
    auto manager = std::make_unique<Manager>(std::move(foodMaker), std::move(coffeeMaker));
    Host host(std::move(manager));

    std::string result = host.takeOrder();
    if (!result.empty()) {
        std::cout << result << std::endl;
    }

    return 0;
}
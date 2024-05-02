cmake_minimum_required(VERSION 3.28)
project(Assignment_2)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(SOURCES
        main.cpp
        Host.cpp
        Manager.cpp
        Order.cpp
        Food.cpp
        Drink.cpp
        Coffee.cpp
        CoffeeMaker.cpp
        FoodMaker.cpp
)

# Header files
set(HEADERS
        Host.h
        Manager.h
        Order.h
        MenuFactory.h
        Food.h
        Drink.h
        Coffee.h
        MenuItem.h
        CoffeeMaker.h
        FoodMaker.h
)

add_executable(Assignment_2 ${SOURCES} ${HEADERS})

# Add the include directory to the project
target_include_directories(Assignment_2 PRIVATE .)


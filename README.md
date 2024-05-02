# Café++
Café++ (Café Order System: Object-Oriented Design with Design Patterns.)

This document outlines the design and functionality of a program simulating a café order system (Café++).

## Functionality:

The program allows a Patron (user) to interact with a Café system through a Host interface. The Patron places an order for Food and/or Drink items. The Host relays the order to a Manager, who acts as a mediator between the Host, FoodMaker, and CoffeeMaker. The FoodMaker and CoffeeMaker handle the preparation of the ordered items and notify the Manager upon completion. Once the entire order is ready, the Manager informs the Host, who retrieves the order and delivers it to the Patron.

## Design Considerations:

## Patterns:

Façade: The Host class implements the Façade pattern, providing a user-friendly interface for interacting with the system.
Mediator: The Manager class implements the Mediator pattern, facilitating communication between the Host, FoodMaker, and CoffeeMaker.
Creational (to be determined): Both FoodMaker and CoffeeMaker will utilize appropriate creational patterns for object creation.

## Classes:

Host: Handles user interaction and manages communication with other system components.
Manager: Mediates communication between the Host, FoodMaker, and CoffeeMaker.
FoodMaker: Prepares ordered Food items.
CoffeeMaker: Prepares ordered Coffee items.
Order: A collection of Food and Drink items.
Food: Represents a pre-packaged food item.
Drink: Abstract class representing a beverage.
Coffee: Subclass of Drink, representing a coffee order.
BlackCoffee: Subclass of Coffee, representing a black coffee.
WhiteCoffee: Subclass of Coffee, representing a white coffee with customization options for milk type (future implementation).

## Enhancements (Part III):

Coffee Customization:
Allow Patrons to choose different milk types for WhiteCoffee (e.g., whole milk, skim milk, and vegan milk).
Order Type:
Enable Patrons to specify whether their order is for "Have Here" or "Takeaway."


## Additional Notes:

Part I and Part III of this project have UML diagrams representing the aforementioned design.
Part IV encompasses the actual documentation for reflection of writing code within this repository.

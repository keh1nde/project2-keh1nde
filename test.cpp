#include "Dish.hpp"
#include <iostream>
#include <vector>

int main() {
    // Original Test Dishes

    std::vector<std::string> new_parts {"Peanut Butter", "Jelly"};

    // Calling Base Constructor:
    Dish test1;

    // Calling mutators to change data:
    test1.setPrepTime(30);
    test1.setPrice(9.99);
    // Calling display() to see changes:
    test1.display();

    std::vector<std::string> parts {"Pasta", "Eggs", "Pancetta", "Parmesan", "Pepper"};

    // Calling Parameterized Constructor:
    Dish test2("Pasta Carbonara", parts, 20, 12.50, Dish::ITALIAN);

    // Testing initial display
    std::cout << "Before Changes: " << std::endl;
    test2.display();

    // Calling all setters and getters:
    test2.setCuisineType((Dish::CuisineType::ITALIAN));
    test2.setName("ABC");
    test2.setIngredients({});
    test2.getName();
    test2.getIngredients();
    test2.getPrepTime();
    test2.getPrice();
    test2.getCuisineType();

    return 0;
}

#include <iostream>
#include <vector>
#include <iomanip>
#include "Appetizer.hpp"
#include "MainCourse.hpp"
#include "Dessert.hpp"

int main() {
    // Test case 1: Testing Appetizer class with default and parameterized constructors
    std::cout << "=== Testing Appetizer Class ===" << std::endl;

    // Instantiate an appetizer with the default constructor
    Appetizer default_appetizer;
    default_appetizer.setSpicinessLevel(7);
    default_appetizer.setServingStyle(Appetizer::FAMILY_STYLE);
    default_appetizer.setVegetarian(true);

    // Print out the appetizer's information using the accessor functions
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Dish Name: " << default_appetizer.getName() << std::endl;
    std::cout << "Ingredients: ";
    for (const auto& ingredient : default_appetizer.getIngredients()) {
        std::cout << ingredient << " ";
    }
    std::cout << std::endl;
    std::cout << "Preparation Time: " << default_appetizer.getPrepTime() << " minutes" << std::endl;
    std::cout << "Price: $" << default_appetizer.getPrice() << std::endl;
    std::cout << "Cuisine Type: " << default_appetizer.getCuisineType() << std::endl;
    std::cout << "Spiciness Level: " << default_appetizer.getSpicinessLevel() << std::endl;
    std::cout << "Serving Style: " << default_appetizer.getServingStyle() << std::endl;
    std::cout << "Vegetarian: " << (default_appetizer.isVegetarian() ? "True" : "False") << std::endl;

    // Test case 2: Testing MainCourse class
    std::cout << "\n=== Testing MainCourse Class ===" << std::endl;

    // Ingredients for main course
    std::vector<std::string> main_course_ingredients = {"Chicken", "Olive Oil", "Garlic", "Rosemary"};
    MainCourse main_course("Grilled Chicken", main_course_ingredients, 30, 18.99, Appetizer::CuisineType::AMERICAN, MainCourse::GRILLED, "Chicken", {}, true);

    MainCourse::SideDish mashed_potatoes = {"Mashed Potatoes", MainCourse::SideDish::STARCHES};
    MainCourse::SideDish green_beans = {"Green Beans", MainCourse::SideDish::VEGETABLE};

    main_course.addSideDish(mashed_potatoes);
    main_course.addSideDish(green_beans);

    // Print out the main course's information
    std::cout << "Dish Name: " << main_course.getName() << std::endl;
    std::cout << "Ingredients: ";
    for (const auto& ingredient : main_course.getIngredients()) {
        std::cout << ingredient << " ";
    }
    std::cout << std::endl;
    std::cout << "Preparation Time: " << main_course.getPrepTime() << " minutes" << std::endl;
    std::cout << "Price: $" << main_course.getPrice() << std::endl;
    std::cout << "Cuisine Type: " << main_course.getCuisineType() << std::endl;
    std::cout << "Cooking Method: " << main_course.getCookingMethod() << std::endl;
    std::cout << "Protein Type: " << main_course.getProteinType() << std::endl;
    std::cout << "Side Dishes: ";
    for (const auto& side : main_course.getSideDishes()) {
        std::cout << side.name << " (" << side.category << ") ";
    }
    std::cout << std::endl;
    std::cout << "Gluten-Free: " << (main_course.isGlutenFree() ? "True" : "False") << std::endl;

    // Test case 3: Testing Dessert class
    std::cout << "\n=== Testing Dessert Class ===" << std::endl;

    // Ingredients for dessert
    std::vector<std::string> dessert_ingredients = {"Flour", "Sugar", "Cocoa Powder", "Eggs"};
    Dessert dessert("Chocolate Cake", dessert_ingredients, 45, 7.99, Appetizer::CuisineType::FRENCH, Dessert::SWEET, 9, false);

    // Print out the dessert's information
    std::cout << "Dish Name: " << dessert.getName() << std::endl;
    std::cout << "Ingredients: ";
    for (const auto& ingredient : dessert.getIngredients()) {
        std::cout << ingredient << " ";
    }
    std::cout << std::endl;
    std::cout << "Preparation Time: " << dessert.getPrepTime() << " minutes" << std::endl;
    std::cout << "Price: $" << dessert.getPrice() << std::endl;
    std::cout << "Cuisine Type: " << dessert.getCuisineType() << std::endl;
    std::cout << "Flavor Profile: " << dessert.getFlavorProfile() << std::endl;
    std::cout << "Sweetness Level: " << dessert.getSweetnessLevel() << std::endl;
    std::cout << "Contains Nuts: " << (dessert.containsNuts() ? "True" : "False") << std::endl;

    // Testing setName()
    default_appetizer.setName("UNKNOWN");
    main_course.setName("Grilled Chicken");
    dessert.setName("Chocolate Cake");

    return 0;
}

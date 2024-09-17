//
// Created by Kehinde Adeoso on 9/5/24.
//

#include "Dish.hpp"
#include <iostream>
#include <utility>
#include <iomanip>

/**
 * Default constructor.
 * Initializes all private members with default values:
 * - name: "UNKNOWN"
 * - ingredients: Empty list
 * - prep_time: 0
 * - price: 0.0
 * - cuisine_type: OTHER
 */

Dish::Dish() {
    name_ = "UNKNOWN";
    ingredients_ = {};
    prep_time_ = 0;
    price_ = 0.0;
    cuisine_type_ = OTHER;
}

/**
 * Parameterized constructor.
 * @param name A reference to the name of the dish.
 * @param ingredients A reference to a list of ingredients (default is
empty list).
 * @param prep_time The preparation time in minutes (default is 0).
 * @param price The price of the dish (default is 0.0).
 * @param cuisine_type The cuisine type of the dish (a CuisineType enum)
with default value OTHER.
 * @post The private members are set to the values of the corresponding
parameters.
*/
Dish::Dish(const std::string& name, const std::vector<std::string>& ingredients, const int& prep_time,
           const double& price, const CuisineType& cuisine_type) {
    this->name_ = name;
    this->ingredients_ = ingredients;
    this->prep_time_ = prep_time;
    this->price_ = price;
    this->cuisine_type_ = cuisine_type;
}

/**
 * @return The name of the dish.
 *
 * getName
 */
std::string Dish::getName() const {
    return name_;
}
/**
 * Sets the name of the dish.
 * @param name A reference to the new name of the dish.
 * @post Sets the private member `name_` to the value of the parameter.
 *
 * setName
 */
void Dish::setName(const std::string& name) {
    name_ = name;
}

/**
 * @return The list of ingredients used in the dish.
 *
 * getIngredients
 */
std::vector<std::string> Dish::getIngredients() const {
    return ingredients_;
}

/**
 * Sets the list of ingredients.
 * @param ingredients A reference to the new list of ingredients.
 * @post Sets the private member `ingredients_` to the value of the
parameter.
 */
void Dish::setIngredients(const std::vector<std::string>& ingredients) {
    ingredients_ = ingredients;
}

/**
 * @return The preparation time in minutes.
 *
 * getPrepTime
 */
int Dish::getPrepTime() const {
    return prep_time_;
}

/**
 * Sets the preparation time.
 * @param prep_time The new preparation time in minutes.
 * @post Sets the private member `prep_time_` to the value of the
parameter.

 setPrepTime
 */
void Dish::setPrepTime(const int& prep_time) {
    prep_time_ = prep_time;
}

/**
* @return The price of the dish.
 *
 * getPrice
*/
double Dish::getPrice() const {
    return price_;
}

/**
 * Sets the price of the dish.
 * @param price The new price of the dish.
 * @post Sets the private member `price_` to the value of the parameter.
 *
 * setPrice
 */
void Dish::setPrice(const double& price) {
    price_ = price;
}


/**
 * Displays the details of the dish.
 * @post Outputs the dish's details, including name, ingredients,
 * preparation time, price, and cuisine type, to the standard output.
 * getCuisineType
 */

std::string Dish::getCuisineType() const{
    switch (cuisine_type_) {
        case Dish::ITALIAN: return "ITALIAN"; break;
        case Dish::MEXICAN: return "MEXICAN"; break;
        case Dish::CHINESE: return "CHINESE"; break;
        case Dish::INDIAN: return  "INDIAN"; break;
        case Dish::AMERICAN: return "AMERICAN"; break;
        case Dish::FRENCH: return "FRENCH"; break;
        case Dish::OTHER: return "OTHER"; break;
        default: return "UNKNOWN"; break;
    }
}
/**
 * Sets the cuisine type of the dish.
 * @param cuisine_type The new cuisine type of the dish (a CuisineType
enum).
 * @post Sets the private member `cuisine_type_` to the value of the
parameter.

 setCuisineType
 */
void Dish::setCuisineType(const CuisineType& cuisine_type) {
    cuisine_type_ = cuisine_type;
}

/**
 * Displays the details of the dish.
 * @post Outputs the dish's details, including name, ingredients,
preparation time, price, and cuisine type, to the standard output.
 * The information must be displayed in the following format:
 *
 * Dish Name: [Name of the dish]
 * Ingredients: [Comma-separated list of ingredients]
 * Preparation Time: [Preparation time] minutes
 * Price: $[Price, formatted to two decimal places]
 * Cuisine Type: [Cuisine type]
 *
 * display
*/

void Dish::display() const {
    std::cout << "Dish Name: " << getName() << std::endl
              << "Ingredients: ";
    for (size_t i = 0; i < ingredients_.size(); ++i) {
        std::cout << ingredients_[i];
        if (i < ingredients_.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << std::endl
              << "Preparation Time: " << getPrepTime() << " minutes" << std::endl
              << "Price: $" << std::fixed << std::setprecision(2) << getPrice() << std::endl
              << "Cuisine Type: " << getCuisineType() << std::endl;
}


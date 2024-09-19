//
// Created by Kehinde Adeoso on 9/17/24.
//

#include "Appetizer.hpp"

/**
 * Default constructor.
 * Initializes all private members with default values.
*/
Appetizer::Appetizer() {
    std::string name_ = "UNKNOWN";
    std::vector<std::string> ingredients_;
    int prep_time_ 0;
    double price_ = 0;
    CuisineType cuisine_type_ = OTHER;
}

/**
* Parameterized constructor.
* @param name The name of the appetizer.
* @param ingredients The ingredients used in the appetizer.
* @param prep_time The preparation time in minutes.
* @param price The price of the appetizer.
* @param cuisine_type The cuisine type of the appetizer.
* @param serving_style The serving style of the appetizer.
* @param spiciness_level The spiciness level of the appetizer.
* @param vegetarian Flag indicating if the appetizer is vegetarian.
*/
Appetizer::Appetizer(const std::string& name, const std::vector<std::string>& ingredients,
                     const int& prep_time, const double& price, const CuisineType& cuisine_type,
                     const std::string& serving_style, const int& spiciness_level, const bool& vegetarian)
        : Dish(name, ingredients, prep_time, price, cuisine_type),
          serving_style_(serving_style), spiciness_level_(spiciness_level), vegetarian_(vegetarian) {
}

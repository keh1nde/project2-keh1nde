//
// Created by Kehinde Adeoso on 9/17/24.
//

#ifndef PROJECT2_KEH1NDE_APPETIZER_H
#define PROJECT2_KEH1NDE_APPETIZER_H

#include <string>
#include <vector>
#include "Dish.hpp"

class Appetizer : public Dish {
public:
    enum ServingStyle { PLATED, FAMILY_STYLE, BUFFET };

    // Default constructor
    Appetizer();

    // Parameterized constructor
    Appetizer(const std::string& name, const std::vector<std::string>& ingredients, const int& prep_time,
              const double& price, const CuisineType& cuisine_type, const ServingStyle& serving_style,
              const int& spiciness_level, const bool& vegetarian);

    // Accessors and Mutators
    void setServingStyle(const ServingStyle& serving_style);
    ServingStyle getServingStyle() const;

    void setSpicinessLevel(const int& spiciness_level);
    int getSpicinessLevel() const;

    void setVegetarian(const bool& vegetarian);
    std::string isVegetarian() const;

private:
    ServingStyle serving_style_;
    int spiciness_level_;
    bool vegetarian_;
};


#endif //PROJECT2_KEH1NDE_APPETIZER_H

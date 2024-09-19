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
    Appetizer(const std::string& name, const std::vector<std::string>& ingredients, int prep_time,
              double price, const CuisineType& cuisine_type, ServingStyle serving_style,
              int spiciness_level, bool vegetarian);

    // Accessors and Mutators
    void setServingStyle(ServingStyle serving_style);
    ServingStyle getServingStyle() const;

    void setSpicinessLevel(int spiciness_level);
    int getSpicinessLevel() const;

    void setVegetarian(bool vegetarian);
    bool isVegetarian() const;

private:
    ServingStyle serving_style_;
    int spiciness_level_;
    bool vegetarian_;
};


#endif //PROJECT2_KEH1NDE_APPETIZER_H

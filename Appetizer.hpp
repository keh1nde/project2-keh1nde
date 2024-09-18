//
// Created by Kehinde Adeoso on 9/17/24.
//

#ifndef PROJECT2_KEH1NDE_APPETIZER_H
#define PROJECT2_KEH1NDE_APPETIZER_H
#include "Dish.hpp"


class Appetizer : public Dish {
public:
    enum ServingStyle { PLATED, FAMILY_STYLE, BUFFET };
private:
    ServingStyle serving_style_;
    int spiciness_level_;
    bool vegetarian_;
public:
    Appetizer();
    Appetizer(const std::string& name, const std::vector<std::string>& ingredients = {},
              const int& prep_time = 0, const double& price = 0.0,
              const Appetizer::ServingStyle& serving_style = PLATED, int spiciness_level = 0,
              bool vegetarian = false);

    void setServingStyle(ServingStyle servingStyle);
    ServingStyle getServingStyle();
    void setSpicinessLevel(int spiciness_level);
    int getSpicinessLevel();
    void setVegetarian(bool isVegetarian);
    bool isVegetarian();





};


#endif //PROJECT2_KEH1NDE_APPETIZER_H

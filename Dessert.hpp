//
// Created by Kehinde Adeoso on 9/19/24.
//

#ifndef PROJECT2_KEH1NDE_DESSERT_H
#define PROJECT2_KEH1NDE_DESSERT_H

#include <string>
#include <vector>
#include "Dish.hpp"

class Dessert : public Dish {
public:
    enum FlavorProfile { SWEET, BITTER, SOUR, SALTY, UMAMI };

    // Default constructor
    Dessert();

    // Parameterized constructor
    Dessert(const std::string& name, const std::vector<std::string>& ingredients, int prep_time,
            double price, const CuisineType& cuisine_type, const FlavorProfile& flavor_profile,
            int sweetness_level, const bool& contains_nuts);

    // Accessors and Mutators
    void setFlavorProfile(FlavorProfile flavor_profile);
    FlavorProfile getFlavorProfile() const;

    void setSweetnessLevel(int sweetness_level);
    int getSweetnessLevel() const;

    void setContainsNuts(bool contains_nuts);
    bool containsNuts() const;

private:
    FlavorProfile flavor_profile_;
    int sweetness_level_;
    bool contains_nuts_;
};

#endif //PROJECT2_KEH1NDE_DESSERT_H

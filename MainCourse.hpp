//
// Created by Kehinde Adeoso on 9/18/24.
//

#ifndef PROJECT2_KEH1NDE_MAINDISH_H
#define PROJECT2_KEH1NDE_MAINDISH_H


#include <string>
#include <vector>
#include "Dish.hpp"

class MainCourse : public Dish {
public:
    enum CookingMethod { GRILLED, BAKED, FRIED, STEAMED, RAW };

    struct SideDish {
        std::string name;
        enum Category { GRAIN, PASTA, LEGUME, BREAD, SALAD, SOUP, STARCHES, VEGETABLE };
        Category category;
    };

    // Default constructor
    MainCourse();

    // Parameterized constructor
    MainCourse(const std::string& name, const std::vector<std::string>& ingredients, const int& prep_time,
               const double& price, const CuisineType& cuisine_type,
               const CookingMethod& cooking_method, const std::string& protein_type,const std::vector<SideDish>& side_dishes,
               const bool& gluten_free = false);

    // Accessors and Mutators
    void setCookingMethod(const CookingMethod& cooking_method);
    CookingMethod getCookingMethod() const;

    void setProteinType(const std::string& protein_type);
    std::string getProteinType() const;

    void addSideDish(const SideDish& side_dish);
    std::vector<SideDish> getSideDishes() const;

    void setGlutenFree(const bool& gluten_free);
    bool isGlutenFree() const;

private:
    CookingMethod cooking_method_;
    std::string protein_type_;
    std::vector<SideDish> side_dishes_;
    bool gluten_free_;
};



#endif //PROJECT2_KEH1NDE_MAINDISH_H

//
// Created by Kehinde Adeoso on 9/5/24.
//

#ifndef PROJECT1_EL_TORTUGO_DISH_HPP
#define PROJECT1_EL_TORTUGO_DISH_HPP

#include <string>
#include <vector>



class Dish{

public:
    enum CuisineType {ITALIAN, MEXICAN, CHINESE, INDIAN, AMERICAN, FRENCH, OTHER};


private:
    std::string name_;
    std::vector<std::string> ingredients_;
    int prep_time_;
    double price_;
    CuisineType cuisine_type_{};

public:

    Dish();
    Dish(const std::string& name, const std::vector<std::string>& ingredients = {},
         const int& prep_time = 0, const double& price = 0.0,
         const CuisineType& cuisine_type = OTHER);
    void setName(const std::string& name);
    std::string getName() const;
    void setIngredients(const std::vector<std::string>& ingredients);
    std::vector<std::string> getIngredients() const;
    void setPrepTime(const int& prep_time);
    int getPrepTime() const;
    void setPrice(const double& price);
    double getPrice() const;
    void setCuisineType(const CuisineType& cuisine_type);
    std::string getCuisineType() const;
    void display() const;
};


#endif //PROJECT1_EL_TORTUGO_DISH_HPP
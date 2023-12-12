#include<iostream>

class Ingredient {
private:
	std:: string name;
	double quantity;
	double calories;
	double Total_Fat;
	double Saturated_Fat;
	double Trans_Fat;
	double Cholestreol;
	double Sodium;
	double Total_Carbohydrate;
	double Protein;
	Double Vitamin D;
	double Calcium;
	double Iron;
	double Potassium;

public:
	Ingredient(std::string name, double quantity) : name(name), quantity(quantity) {}
};

class Recipe {
private:
	stdd::string name;
	std::vector<Ingredient> ingredients;

public:
	Recipe(std::string name) : name(name) {}
	void addIngredient(const Ingredient& ingredient) {
	   ingredients.push_back(ingredients);
	}

};

class RecipeManger {
private:
	std::vector<Recipe> recipes;
public:
	void addRecipe(const Recipe& recipe) {
	   recipes.push_back(recipe);
	}
};


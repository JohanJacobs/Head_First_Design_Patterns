#pragma once
#include "Pizza.h"
#include "PizzaIngredientFactory/PizzaIngredientFactory.h"
#include <memory>

class PepperoniPizza: public Pizza
{
   public:
       PepperoniPizza(std::shared_ptr<PizzaIngredientFactory> IngredientFactory) : Pizza("PepperoniPizza"), m_IngredientFactory{IngredientFactory} {    }

   void Prepare() override
   {
       m_Dough = m_IngredientFactory->CreateDough();
       m_Cheese = m_IngredientFactory->CreateCheese();
       m_Pepperoni = m_IngredientFactory->CreatePepperoni();
       m_Toppings = m_IngredientFactory->CreateVeggies();
       m_Sauce = m_IngredientFactory->CreateSauce();


	   std::cout << "Preparing " << m_Name << ". \n";
	   std::cout << "  Dough: " << m_Dough->ToString() << ". \n";
	   std::cout << "  Sauce: " << m_Sauce->ToString() << ". \n";
	   std::cout << "  Cheese: " << m_Cheese->ToString() << ". \n";
	   std::cout << "  Pepperoni: " << m_Pepperoni->ToString() << ". \n";
       std::cout << "  Adding toppings:\n";        
	   
       for (auto& t :m_Toppings)
	   		std::cout << "    - " << t->ToString() << std::endl;
   }
   
private:
   std::shared_ptr<PizzaIngredientFactory> m_IngredientFactory;
};

class CheesePizza : public Pizza
{
public:
    CheesePizza(std::shared_ptr<PizzaIngredientFactory> IngredientFactory) : Pizza("CheesePizza"), m_IngredientFactory{ IngredientFactory } {    }

	void Prepare() override
	{
		m_Dough = m_IngredientFactory->CreateDough();
		m_Cheese = m_IngredientFactory->CreateCheese();		
		m_Sauce = m_IngredientFactory->CreateSauce();	

		std::cout << "Preparing " << m_Name << ". \n";
	    std::cout << "  Dough: " << m_Dough->ToString() << ". \n";
	    std::cout << "  Sauce: " << m_Sauce->ToString() << ". \n";
	    std::cout << "  Cheese: " << m_Cheese->ToString() << ". \n";	            
	}
private:
    std::shared_ptr<PizzaIngredientFactory> m_IngredientFactory;
};

class VeggiePizza : public Pizza
{
public:
   VeggiePizza(std::shared_ptr<PizzaIngredientFactory> IngredientFactory) : Pizza("VeggiePizza"), m_IngredientFactory{ IngredientFactory } {    }

	void Prepare() override
	{
		m_Dough = m_IngredientFactory->CreateDough();
		m_Cheese = m_IngredientFactory->CreateCheese();		
		m_Toppings = m_IngredientFactory->CreateVeggies();
		m_Sauce = m_IngredientFactory->CreateSauce();

		std::cout << "Preparing " << m_Name << ". \n";
	    std::cout << "  Dough: " << m_Dough->ToString() << ". \n";
	    std::cout << "  Sauce: " << m_Sauce->ToString() << ". \n";
	    std::cout << "  Cheese: " << m_Cheese->ToString() << ". \n";	
		for (auto& t :m_Toppings)
			std::cout << "    - " << t->ToString() << std::endl;
	}

private:
   std::shared_ptr<PizzaIngredientFactory> m_IngredientFactory;
};

class ClamPizza : public Pizza
{
public:
   ClamPizza(std::shared_ptr<PizzaIngredientFactory> IngredientFactory) 
		: Pizza("ClamPizza"), m_IngredientFactory{ IngredientFactory } 
	{    }

	void Prepare() override
	{
		m_Dough = m_IngredientFactory->CreateDough();
		m_Cheese = m_IngredientFactory->CreateCheese();
		m_Clams = m_IngredientFactory->CreateClam();
		m_Toppings = m_IngredientFactory->CreateVeggies();
		m_Sauce = m_IngredientFactory->CreateSauce();

		std::cout << "Preparing " << m_Name << ". \n";
	    std::cout << "  Dough: " << m_Dough->ToString() << ". \n";
	    std::cout << "  Sauce: " << m_Sauce->ToString() << ". \n";
	    std::cout << "  Cheese: " << m_Cheese->ToString() << ". \n";	
		std::cout << "  Clams: " << m_Clams->ToString() << ". \n";
		for (auto& t :m_Toppings)
			std::cout << "    - " << t->ToString() << std::endl;
	}

private:
   std::shared_ptr<PizzaIngredientFactory> m_IngredientFactory;
};

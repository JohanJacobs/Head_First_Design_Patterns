#pragma once
#include <string>

class Dough
{
public:
	Dough(const std::string name = "None") :m_Name{name}
	{}
	virtual std::string ToString() { return m_Name; }
private:
	std::string m_Name;
};

class ThinCrustDough  : public Dough { public: ThinCrustDough()  :Dough{ "Thin Crust Dough"  } {} };
class ThickCrustDough : public Dough { public: ThickCrustDough() :Dough{ "Thick Crust Dough" } {} };


class Sauce
{
public:
	Sauce(const std::string name = "None") :m_Name{ name }
	{}
	virtual std::string ToString() { return m_Name; }
private:
	std::string m_Name;
};
class MarinaraSauce   : public Sauce { public: MarinaraSauce()   : Sauce{ "MarinaraSauce"     } {} };
class PlumTomatoSauce : public Sauce { public: PlumTomatoSauce() : Sauce{ "PLum Tomato Sauce" } {} };


class Cheese
{
public:
	Cheese(const std::string name = "None") :m_Name{ name }
	{}
	virtual std::string ToString() { return m_Name; }
private:
	std::string m_Name;
};
class ReggianoCheese : public Cheese { public: ReggianoCheese() : Cheese{ "Reggiano cheese" } {} };
class MozzarellaCheese : public Cheese { public: MozzarellaCheese() : Cheese{ "Mozzarella Cheese" } {} };


class Veggies
{
public:
	Veggies(const std::string name = "None") :m_Name{ name }
	{}
	virtual std::string ToString() { return m_Name; }
private:
	std::string m_Name;
};
class Garlic      : public Veggies { public: Garlic()      : Veggies{ "Garlic"      } {} };
class Onion       : public Veggies { public: Onion()       : Veggies{ "Onion"       } {} };
class Mushroom    : public Veggies { public: Mushroom()    : Veggies{ "Mushroom"    } {} };
class RedPepper   : public Veggies { public: RedPepper()   : Veggies{ "RedPepper"   } {} };
class Eggplant    : public Veggies { public: Eggplant()    : Veggies{ "Eggplant"    } {} };
class Spinach     : public Veggies { public: Spinach()     : Veggies{ "Spinach"     } {} };
class BlackOlives : public Veggies { public: BlackOlives() : Veggies{ "BlackOlives" } {} };


class Pepperoni
{
public:
	Pepperoni(const std::string name = "None") :m_Name{ name }
	{}
	virtual std::string ToString() { return m_Name; }
private:
	std::string m_Name;
};
class SlicedPepperoni : public Pepperoni { public: SlicedPepperoni() : Pepperoni{ "SlicedPepperoni" } {} };



class Clams
{
public:
	Clams(const std::string name = "None") :m_Name{ name }
	{}
	virtual std::string ToString() { return m_Name; }
private:
	std::string m_Name;
};
class FreshClams : public Clams { public: FreshClams() : Clams{ "FreshClams" } {} };
class FrozenClams : public Clams { public: FrozenClams() : Clams{ "FrozenClams" } {} };
#pragma once
#include "Core/base.h"

namespace CompositePattern
{
	class MenuComponent
	{
	public:
		virtual void Add(Ref<MenuComponent> menuComponent) { throw std::logic_error("The method or operation is not implemented."); };
		virtual void Remove(Ref < MenuComponent> menuComponent) { throw std::logic_error("The method or operation is not implemented."); };
		virtual const Ref<MenuComponent> GetChild(int i) const { throw std::logic_error("The method or operation is not implemented."); };
		virtual const std::string& GetName() const { throw std::logic_error("The method or operation is not implemented."); };
		virtual const std::string& GetDescription() const  { throw std::logic_error("The method or operation is not implemented."); };
		virtual double GetPrice() const { throw std::logic_error("The method or operation is not implemented."); };
		virtual bool IsVegetarian() const { throw std::logic_error("The method or operation is not implemented."); };
		virtual void Print() const { throw std::logic_error("The method or operation is not implemented."); };
	};
}

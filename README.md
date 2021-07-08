

# Head First Design Patterns

  

>The O'Reilly Head First - Design Patterns examples for C++

  
  
  

## Chapter 1 - Strategy Pattern

>**Strategy Pattern** : The Strategy Pattern defines a family of algorithms, encapsulates each one, and makes them interchangeable. Strategy lets the algorithm vary independently from clients that use it.


## Chapter 2 - Observer Pattern

>**Observer Pattern**: Defines a one-to-many dependency between objects so that when one object changes state, all its dependents are notified and updated automatically.


## Chapter 3 - Decorator Pattern

>**Decorator Pattern**:Attach Additional responsibilities to an object dynamically. Decorators provide a flexible alternative to sub classing for extending functionality.

>**Things to Note**: 
>- Can add a lot of small classes.
>- Type Specific when working with decorators.
>- Can increase complexity of code.
>- Have to instantiate and wrap each component.
  
  
## Chapter 4 - Factory Method

>**Factory Method Pattern**:Defines an interface for creating an object, but lets subclasses decide which class to instantiate. Factory Method lets a class defer instantiation to subclasses

>**Abstract Factory Pattern**: Provide an interface for creating families of related or dependent objects without specifying their concrete classes .

>**Things to Note**:
>- All factories encapsulate object creation
>- Factory method relies on inheritance, object creation is delegated  to a subclass which implement the factory method to create objects 
>- Abstract factory relies on object composition, object creation is implemented in methods exposed in the factory interface 
>- Factory patterns promote loose coupling and reduce dependency
>- Factory Method intent: allow a class to defer instantiation to subclasses 
>-Abstract Factory intent: create families of related objects without having to depend on their concrete classes.
>Factories allow you to code against abstractions, not concrete classes.

## OO Principles

  

-  **Encapsulate what varies.**

-  **Favor composition over inheritance.**

-  **Program to interfaces, not implementations**.

-  **Strive for loosely coupled designs between objects that interact.**

-  **Open Close Principle: Open to Extending, Closed for modification.**

-  **The Dependency inversion Principle: Depend upon abstractions. Do not depend upon concrete classes. Reducing dependencies to concrete classes in code is a good thing**
  

## OO Basics

-  **Abstraction**

-  **Encapsulation**

-  **Polymorphism**

-  **Inheritance**
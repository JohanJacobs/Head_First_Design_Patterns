

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


## Chapter 5 - Singleton Pattern

>**Singleton Pattern**: Ensures a class has only one instance, and provides a global point of access to it.
>- Global access point to the instance, 
>- Lazy evaluation
>- Thread safety considerations
>- Private constructor


## Chapter 6 - Command Pattern

>**Encapsulates a request as an object, thereby letting you parameterize clients with different requests, queue or log requests, and support undoable operators**
>- Command Pattern decouples an object, making a request from the one that knows how to perform it.
>- Command object is at the center of decoupling and encapsulates a receiver with an action.
>- Invokers makes a request of a Command object by calling execute().
>- Invokers can be parameterized with Commands, even dynamically at runtime.
>- Macro Commands are a simple extension of command that allow multiple commands to be invoked.
>- Smart Command objects implement the request themselves rather than delegating to a receiver (losing decoupling).

## Chapter 7 - Adapter Pattern
>**Converts the interface of a class into another interface the clients expect. Adapter lets classes wrok together that couldn't otherwise because of incompatible interfaces**
>- Object Adapter: Uses composition and the adaptee need to be passed in.
>- Class Adapter: Uses Multiple inheritance.

## Chapter 7 - Facade Pattern 
>**Provides a unified interface to a set of interfaces in a subsystem. Facade defines a higherlevel interface that makes the subsystem easier to use**
>- Focus on simplifying an interface

## Chapter 8 - Template Method Pattern
>**Define the skeleton of an algorithm in an operation, deferring some steps to subclasses. Template method lets subclasses redefine certain steps of an algorithm without changing the algorithm's structure**
>- Defines the steps of the algorithm, deferring to subclasses for implementation of those steps
>- Important technique for code reuse
>- Template class may define concrete methods, abstract methods and hooks
>- Abstract methods are implemented by subclasses
>- Hooks are methods that may be overridden in the subclass
>- Template's primary algorithm method should be declared final to ensure it can not be overridden
>- Strategy and Template method patterns both encapsulated alorithms, 
>- Strategy by encapsulation Template by inheritance.
>- Factory Method is a specialization of Template method.


## Chapter 9 - Iterator Pattern 
>**Provides a way to access the elements of an aggregate object sequentially without exposing its underlying representation**
>- Aggregate: a container that has elements in it, Eg list, vector, array, hasmap etc.
>- Iterator pattern places the task of traversal ( Responcibility ) on the iterator object and not the container / class of the object
>- Iterator allows access to an aggregate's elements without exposing its internal structure
>- Cohesion: measure of how closely a class or module supports a single purpose or responsibility


## Chapter 9 - Composite Pattern
>**Allows you to compose objects into 'tree data structures' to represent part-whole hierarchies. Composite lets clients treat individual objects and compositions of objects uniformly**
>- Build structures of objects in the form of tress that contain both compositions of objects and individual objects as nodes.
>- Apply the same operations over both composites and individual

## Chapter 10 - State Pattern 
>**Allows an object to alter its behavior when its internal state changes. The Object will appear to change its class**


## OO Principles

-  **Encapsulate what varies.**

-  **Favor composition over inheritance.**

-  **Program to interfaces, not implementations**.

-  **Strive for loosely coupled designs between objects that interact.**

-  **Open Close Principle: Open to Extending, Closed for modification.**

-  **The Dependency inversion Principle: Depend upon abstractions. Do not depend upon concrete classes. Reducing dependencies to concrete classes in code is a good thing**

-  **Principle of Least Knowledge: Talk only to your immediate freinds**

-  **Don't call us we'll call you: Super class call subclasses, subclasses don't call super class methods**

-  **A class should have only one reason to change**

## OO Basics

-  **Abstraction**

-  **Encapsulation**

-  **Polymorphism**

-  **Inheritance**
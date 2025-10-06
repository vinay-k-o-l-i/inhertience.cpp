## Aim  
To implement and understand the concepts of **Inheritance in C++** including **Single, Multiple, Multilevel, and Hierarchical Inheritance** with practical examples.  

## Theory

- **Inheritance** is one of the fundamental concepts of Object-Oriented Programming (OOP).  
- It allows one class (derived/child) to acquire the properties and behavior of another class (base/parent).  
- Types of inheritance demonstrated:  
  - **Single Inheritance** – One base class and one derived class.  
  - **Multiple Inheritance** – Derived class inherits from two or more base classes.  
  - **Multilevel Inheritance** – A chain of inheritance (grandparent → parent → child).  
  - **Hierarchical Inheritance** – One base class with multiple derived classes.  

## Algorithm

### Experiment – Single Inheritance (Book Example)

1. Start the program.  
2. Create a base class `Book` with data members and a function.  
3. Create a derived class `Novel` that inherits from `Book`.  
4. Add additional attribute `genre` in `Novel`.  
5. Create an object of `Novel` and access parent and child members.  
6. Display book details.  
7. End the program.  

### Experiment  – Multiple Inheritance (Book Example)

1. Start the program.  
2. Create a base class `Book` with a member variable for title.  
3. Create another base class `Author` with a member variable for author name.  
4. Derive a class `Novel` that inherits from both `Book` and `Author`.  
5. Add an additional attribute `genre`.  
6. Accept values from the user and display complete book details.  
7. End the program.  

### Experiment – Multilevel Inheritance (Animal Example)

1. Start the program.  
2. Create a base class `Animal` with a function `breathe()`.  
3. Derive a class `Dog` from `Animal` and add attribute `breed`.  
4. Derive another class `Pet` from `Dog` and add attribute `name`.  
5. Create an object of `Pet` and access data/functions across all levels.  
6. Display details.  
7. End the program.  

### Experiment – Hierarchical Inheritance (Book Example)

1. Start the program.  
2. Create a base class `Book` with a function to show title.  
3. Derive a class `Novel` from `Book` with attribute `genre`.  
4. Derive another class `Author` from `Book` with attribute `name`.  
5. Create objects of `Novel` and `Author`.  
6. Display title with genre using `Novel` and title with author name using `Author`.  
7. End the program.  

## Conclusion  

- Successfully implemented **Single, Multiple, Multilevel, and Hierarchical Inheritance** in C++.  
- Learned how different types of inheritance demonstrate **code reusability** and **real-world relationships** between objects.  
- Each inheritance type provides a unique way to organize and structure programs using OOP concepts.  

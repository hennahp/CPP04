# CPP04 - Polymorphism & Object-Oriented Design

A comprehensive C++ learning module covering polymorphism, inheritance, and object-oriented design patterns. This module includes four progressively complex exercises that build upon fundamental C++ concepts.

## Overview

This module teaches essential OOP concepts through practical exercises:

- **Virtual functions** and polymorphism
- **Inheritance hierarchies** with proper class design
- **Deep copying** and resource management
- **Abstract base classes** and interfaces
- **Design patterns** (Factory, Observer)

---

## Exercise Breakdown

### **Exercise 00: Polymorphism Basics**

**Concepts:** Virtual methods, inheritance, polymorphism, destructors

**Key Classes:**
- `Animal` - Base class with virtual methods
- `Dog` - Derived class inheriting from Animal
- `Cat` - Derived class inheriting from Animal
- `WrongAnimal` & `WrongCat` - Examples of incorrect polymorphism (missing virtual keyword)

**Features:**
- Demonstrates correct polymorphism with virtual methods
- Shows the pitfalls of non-virtual destructors
- Compares correct vs. incorrect polymorphic behavior

**Build & Run:**
```bash
cd ex00
make
./animal
```

---

### **Exercise 01: Deep Copy & Brain Class**

**Concepts:** Deep copying, copy constructors, assignment operators, memory management

**Key Classes:**
- `Brain` - Class containing an array of ideas (100 strings)
- `Animal` - Extended with pointers to Brain
- `Dog` & `Cat` - Derived classes with deep copy logic

**Features:**
- Implements deep copy constructors and assignment operators
- Each Dog and Cat has its own Brain instance
- Demonstrates shallow vs. deep copying issues
- Proper memory cleanup and resource management

**Build & Run:**
```bash
cd ex01
make
./animal
```

---

### **Exercise 02: Abstract Classes**

**Concepts:** Abstract classes, pure virtual functions, interface design

**Key Classes:**
- `Animal` - Now an abstract base class (pure virtual makeSound)
- `Dog` & `Cat` - Concrete implementations
- `WrongAnimal` & `WrongCat` - Can't be instantiated directly

**Features:**
- Animal class cannot be directly instantiated
- Forces derived classes to implement virtual methods
- Maintains Brain class functionality from ex01

**Build & Run:**
```bash
cd ex02
make
./animal
```

---

### **Exercise 03: Materia System (RPG-like Design)**

**Concepts:** Factory pattern, interface design, ownership management, abstract classes

**Key Classes:**
- `AMateria` - Abstract base class for all spells/abilities
- `Ice` & `Cure` - Concrete Materia implementations
- `ICharacter` - Interface for character behavior
- `Character` - Concrete character implementation
- `IMateriaSource` - Factory interface for creating Materia
- `MateriaSource` - Concrete factory implementation

**Features:**
- Factory pattern for creating Materia instances
- Characters can equip and use Materia
- Materia cloning and copying
- Proper ownership and cleanup of equipped items
- Unequip system with memory management

**Build & Run:**
```bash
cd ex03
make
./materia
```

---

## Building the Project

### Prerequisites
- C++ compiler (clang or g++)
- Make

### Build All Exercises
```bash
# Build individual exercise
cd ex00 && make && cd ..
cd ex01 && make && cd ..
cd ex02 && make && cd ..
cd ex03 && make && cd ..

# Clean up
find . -name "*.o" -delete
find . -name "animal" -o -name "materia" | xargs rm -f
```

---

## Key Concepts Covered

### Virtual Functions & Polymorphism
- Base class pointers pointing to derived objects
- Virtual destructors for proper cleanup
- Override behavior in derived classes

### Memory Management
- Dynamic allocation and deallocation
- Deep copy vs. shallow copy
- Copy constructors and assignment operators
- Proper resource cleanup in destructors

### Object-Oriented Design
- Class hierarchies
- Abstract base classes and interfaces
- Inheritance best practices
- Encapsulation principles

### Design Patterns
- **Factory Pattern** (ex03) - MateriaSource creates Materia instances
- **Observer/User Pattern** - Characters interact with Materia

---

## Implementation Notes

### Color Output
Each exercise uses ANSI color codes for enhanced console output:
- RED, GREEN, BLUE, YELLOW, ORANGE, PURPLE, CYAN, MAGENTA

### Canonical Form
All classes follow the canonical form:
- Default constructor
- Copy constructor
- Assignment operator
- Destructor

### Memory Safety
- No memory leaks in proper implementations
- Smart use of pointers and references
- Proper cleanup in destructors

---

## Testing

Each exercise includes a `main.cpp` demonstrating:
- Correct usage of the classes
- Polymorphic behavior
- Edge cases and special scenarios
- Memory cleanup verification

Run each exercise to verify correct behavior:
```bash
cd ex00 && make && ./animal && make clean
cd ex01 && make && ./animal && make clean
cd ex02 && make && ./animal && make clean
cd ex03 && make && ./materia && make clean
```

---

## Common Issues & Solutions

### Issue: Virtual Destructor Not Called
**Solution:** Always use `virtual ~ClassName()` in base classes

### Issue: Memory Leaks
**Solution:** Ensure copy constructors and assignment operators perform deep copies

### Issue: Object Slicing
**Solution:** Pass objects by reference or pointer to maintain polymorphic behavior

### Issue: Can't Instantiate Abstract Class
**Solution:** Implement all pure virtual methods in derived classes

---

## Learning Outcomes

After completing this module, you should understand:

✓ Virtual functions and polymorphism in C++  
✓ Inheritance hierarchies and class design  
✓ Deep copying and memory management  
✓ Abstract classes and interfaces  
✓ Factory pattern implementation  
✓ Proper resource cleanup and RAII principles  
✓ Object-oriented design best practices
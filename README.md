# 🔄 PyToCpp

> A practical transition guide for Python developers learning C++ — covering syntax differences, memory management, and object-oriented programming comparisons.

![Python](https://img.shields.io/badge/Python-3.10%2B-blue?logo=python&logoColor=white)
![C++](https://img.shields.io/badge/C++-17-00599C?logo=cplusplus&logoColor=white)
![Status](https://img.shields.io/badge/Status-Active-brightgreen)
![License](https://img.shields.io/badge/License-MIT-lightgrey)

-----

## 📌 About

**PyToCpp** is a side-by-side reference guide for Python developers making the leap to C++. Instead of starting from scratch, this repo maps what you already know in Python to its C++ equivalent — making the transition faster and less painful.

Whether you’re switching careers, learning systems programming, or just expanding your skills, this guide is for you!

-----

## 🗂️ Repository Structure

```
PyToCpp/
│
├── 01_syntax/ # Side-by-side syntax comparisons
├── 02_memory_management/ # Pointers, references, heap vs stack
├── 03_oop/ # Classes, inheritance, polymorphism
├── examples/ # Full working code examples
├── exercises/ # Practice problems with solutions
└── README.md
```

-----

## 📚 Topics Covered

### 1️⃣ Syntax Differences

|Concept |Python |C++ |
|--------------------|---------------------|--------------------------------|
|Variable declaration|`x = 5` |`int x = 5;` |
|Print |`print("Hello")` |`std::cout << "Hello";` |
|If statement |`if x > 0:` |`if (x > 0) {` |
|For loop |`for i in range(10):`|`for (int i = 0; i < 10; i++) {`|
|Function |`def add(a, b):` |`int add(int a, int b) {` |
|List / Array |`my_list = [1, 2, 3]`|`int arr[] = {1, 2, 3};` |
|String |`name = "Nour"` |`std::string name = "Nour";` |
|Null value |`None` |`nullptr` |

-----

### 2️⃣ Memory Management & Pointers

One of the biggest differences between Python and C++ is **manual memory management**. Python handles this for you automatically — C++ does not.

```cpp
// Python handles memory automatically
// In C++, you manage it yourself

int x = 10; // Stack memory (auto-managed)
int* ptr = &x; // Pointer to x
std::cout << *ptr; // Dereference pointer → prints 10

// Heap memory (manual)
int* heapVar = new int(42); // Allocate
std::cout << *heapVar; // Use
delete heapVar; // Free — ALWAYS do this!
```

|Concept |Python |C++ |
|-----------------|-------------------------|---------------------------------|
|Memory management|Automatic (GC) |Manual (`new` / `delete`) |
|Pointers |Not available |`int* ptr = &x;` |
|References |Everything is a reference|`int& ref = x;` |
|Stack vs Heap |Abstracted away |Explicit control |
|Memory leaks |Not possible |Possible if `delete` is forgotten|

-----

### 3️⃣ OOP Comparisons

Python and C++ are both object-oriented, but C++ gives you much more control.

```python
# Python Class
class Animal:
def __init__(self, name):
self.name = name

def speak(self):
print(f"{self.name} makes a sound")

class Dog(Animal):
def speak(self):
print(f"{self.name} barks")
```

```cpp
// C++ Equivalent
#include <iostream>
#include <string>

class Animal {
public:
std::string name;
Animal(std::string n) : name(n) {}
virtual void speak() {
std::cout << name << " makes a sound\n";
}
};

class Dog : public Animal {
public:
Dog(std::string n) : Animal(n) {}
void speak() override {
std::cout << name << " barks\n";
}
};
```

|OOP Feature |Python |C++ |
|----------------|----------------------|--------------------------------|
|Class definition|`class MyClass:` |`class MyClass { };` |
|Constructor |`__init__(self)` |`MyClass() {}` |
|Inheritance |`class Dog(Animal):` |`class Dog : public Animal` |
|Access modifiers|Convention only (`_x`)|`public`, `private`, `protected`|
|Method override |Just redefine |Use `virtual` + `override` |
|Destructor |`__del__` (rare) |`~MyClass()` (important!) |

-----

## 🛠️ Getting Started

### Prerequisites

- Python 3.10+
- A C++ compiler (GCC, Clang, or MSVC)
- Recommended: VS Code with C++ and Python extensions

### Clone the Repo

```bash
git clone https://github.com/NourKeshaish/PyToCpp.git
cd PyToCpp
```

### Run Python Examples

```bash
python examples/syntax_demo.py
```

### Compile & Run C++ Examples

```bash
g++ examples/syntax_demo.cpp -o demo
./demo
```

-----

## 📈 Learning Roadmap

- [x] Syntax differences cheat sheet
- [x] Memory management & pointers guide
- [x] OOP side-by-side comparison
- [ ] Standard library: Python vs C++ STL
- [ ] File I/O comparison
- [ ] Error handling: exceptions in both languages
- [ ] Templates vs Python generics

-----

## Contributing

Know a great Python-to-C++ comparison that’s missing? Contributions are welcome!

1. Fork the repo
1. Create a new branch (`git checkout -b feature/your-topic`)
1. Commit your changes (`git commit -m 'Add comparison for X'`)
1. Push and open a Pull Request

-----

## License

This project is licensed under the [MIT License](LICENSE).

-----

## About Me

I’m **Noor Keshaish**, an aerospace engineer passionate about programming and helping others learn. This repo is part of my mission to make C++ more approachable for the Python community.


-----

⭐ *Found this helpful? Give it a star and share it with a fellow developer!*

# Exercises README

This document contains a series of exercise problems and their solutions in both Python and C++. The topics covered include variables, loops, functions, lists/vectors, and classes.

## 1. Variables
### Problem 1: Variable Assignment
**Python:**
```python
x = 10
print(x)
```
**C++:**
```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 10;
    cout << x << endl;
    return 0;
}
```

## 2. Loops
### Problem 2: Sum of Numbers
**Python:**
```python
sum = 0
for i in range(1, 11):
    sum += i
print(sum)
```
**C++:**
```cpp
#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += i;
    }
    cout << sum << endl;
    return 0;
}
```

## 3. Functions
### Problem 3: Factorial Function
**Python:**
```python
def factorial(n):
    if n == 0:
        return 1
    return n * factorial(n - 1)

print(factorial(5))
```
**C++:**
```cpp
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    cout << factorial(5) << endl;
    return 0;
}
}
```

## 4. Lists/Vectors
### Problem 4: Average of a List
**Python:**
```python
numbers = [1, 2, 3, 4, 5]
avg = sum(numbers) / len(numbers)
print(avg)
```
**C++:**
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    double sum = 0;
    for (int num : numbers) {
        sum += num;
    }
    double avg = sum / numbers.size();
    cout << avg << endl;
    return 0;
}
```

## 5. Classes
### Problem 5: Simple Class
**Python:**
```python
class Dog:
    def __init__(self, name):
        self.name = name
    def bark(self):
        return f'{self.name} says woof!'

my_dog = Dog('Fido')
print(my_dog.bark())
```
**C++:**
```cpp
#include <iostream>
using namespace std;

class Dog {
public:
    string name;
    Dog(string n) : name(n) {}
    string bark() { return name + " says woof!"; }
};

int main() {
    Dog my_dog("Fido");
    cout << my_dog.bark() << endl;
    return 0;
}
```
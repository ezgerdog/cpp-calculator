# C++ Calculator Project

A simple calculator application developed in C++ using object-oriented programming principles.

The project provides basic arithmetic operations through a reusable `Calculator` class and includes protection against division by zero.

## Features

- Addition
- Subtraction
- Multiplication
- Division
- Division-by-zero error handling
- Object-oriented class structure
- Makefile support for compilation

## Supported Operations

| Operation | Method | Description |
|---|---|---|
| Addition | `add(a, b)` | Returns the sum of two numbers |
| Subtraction | `subtract(a, b)` | Returns the difference between two numbers |
| Multiplication | `multiply(a, b)` | Returns the product of two numbers |
| Division | `divide(a, b)` | Divides the first number by the second |

## Calculator Class

The arithmetic operations are implemented inside the `Calculator` class.

```cpp
double Calculator::add(double a, double b) {
    return a + b;
}

double Calculator::subtract(double a, double b) {
    return a - b;
}

double Calculator::multiply(double a, double b) {
    return a * b;
}

double Calculator::divide(double a, double b) {
    if (b == 0) {
        throw "Division by zero error";
    }

    return a / b;
}
```

## Division by Zero

The calculator checks whether the divisor is zero before performing division.

```cpp
if (b == 0) {
    throw "Division by zero error";
}
```

This prevents invalid division operations and reports an error.

## Project Structure

```text
C-Calculator-Project/
├── calculator.cpp
├── calculator.h
├── main.cpp
├── Makefile
└── README.md
```

The exact file names may vary depending on the repository structure.

## Build Instructions

### Using Make

Compile the project:

```bash
make
```

Run the application:

```bash
./calculator
```

Clean generated build files:

```bash
make clean
```

### Using g++

The project can also be compiled manually:

```bash
g++ main.cpp calculator.cpp -o calculator
```

Then run:

```bash
./calculator
```

## Technologies

- C++
- Object-Oriented Programming
- Header and source file separation
- Exception handling
- Makefile

## Possible Improvements

- Add modulus support
- Add square root and power operations
- Use standard C++ exception classes
- Add user input validation
- Add calculation history
- Add automated unit tests
- Create a graphical user interface
- Build an interactive command-line menu

## Author

Developed by **Ezgi Erdoğan**

GitHub: [ezgerdog](https://github.com/ezgerdog)

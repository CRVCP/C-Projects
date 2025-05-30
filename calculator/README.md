# C Calculator

This is a simple command-line calculator written in C. It allows users to enter expressions like `5+2` or `10/3` and performs basic arithmetic operations. The calculator supports addition, subtraction, multiplication, and division, and runs in a loop until the user chooses to exit.

## Features

- Accepts input as a single expression (e.g., `2+3`)
- Supports `+`, `-`, `*`, `/` operators
- Handles decimal numbers (e.g., `2.5*4.1`)
- Prevents division by zero with error handling
- Interactive loop for multiple calculations

## Usage

### Option 1: Run `calculator.exe`

If you are using a Windows system, you can run the precompiled executable directly without needing to compile the source code.

1. Download or clone this repository to your computer.
2. Open the `calculator` folder.
3. Double-click `calculator.exe` or run it from the terminal using:

```bash
calculator.exe


### Option 2: Compile from Source

If you have a C compiler installed (such as GCC), open a terminal in this folder and run:

```bash
gcc calculator.c -o calculator

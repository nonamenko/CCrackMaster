# CCrackMaster

CCrackMaster is an educational CrackMe project written in C, designed to enhance skills in reverse engineering, code analysis, and software security. The program verifies user-entered activation passwords using basic obfuscation techniques to complicate code analysis.

## Features

- Simple command-line interface
- Activation password verification with basic obfuscation
- Protection against straightforward code analysis
- Detailed documentation for beginners

## Installation

### Prerequisites

- C Compiler (e.g., `gcc` or `clang`)
- Linux/macOS/Windows environment

### Steps

1. **Clone the repository:**
    ```bash
    git clone https://github.com/yourusername/CCrackMaster.git
    cd CCrackMaster
    ```

2. **Compile the program:**
    - Using `gcc`:
        ```bash
        gcc CCrackMaster.c -o CCrackMaster
        ```
    - Using `clang`:
        ```bash
        clang CCrackMaster.c -o CCrackMaster
        ```
    - **Optional:** Using `Makefile`:
        ```bash
        make
        ```

## Usage

Run the program using the following command:

```bash
./CCrackMaster

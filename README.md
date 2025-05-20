CParse – A Lightweight C Compiler
CParse is a lightweight, modular compiler for a subset of the C programming language. Designed as an educational project, it demonstrates key phases of compilation such as lexical analysis, syntax parsing, semantic checking, and intermediate code generation.

✨ Features
Written in C using Lex and Yacc

Supports core C constructs: variables, conditionals, loops, functions

Modular compiler architecture

Command-line interface to compile .c files

Generates parse trees, symbol tables, and intermediate code (3-address code)

🛠 Technologies Used
C Programming Language

Lex (Lexical Analyzer)

Yacc (Syntax Parser)

GCC Compiler

GDB (for debugging)

📂 Project Structure
bash
Copy
Edit
C-Compiler/
├── Lexical Analyzer/          # Tokenizes input source code
├── Syntax Analyzer/          # Parses tokens into grammar-compliant structures
├── Semantic Analyzer/        # Performs type and scope checks
├── Intermediate Code Generator/ # Generates intermediate 3-address code
└── test files/               # Sample C programs for testing
👩‍💻 Contributors

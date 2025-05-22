# **How to Find Bugs in C Code Using VS Code**
---
| **Method**          | **Tool/Command**                          | **Purpose**                                                          |
| ------------------- | ----------------------------------------- | -------------------------------------------------------------------- |
| 🔍 Debugging        | Built-in VS Code Debugger (`F5`)          | Step through your code, watch variables, and catch logic errors live |
| 🎯 Set Breakpoints  | Click left of line numbers                | Pause execution at specific points to examine values                 |
| 🔄 Step Execution   | `F10`, `F11`, `Shift+F11`                 | Step Over, Into, or Out of functions during debugging                |
| 👁 Hover Watch      | Hover mouse over variables during debug   | See current variable values instantly                                |
| 📋 Watch Window     | Add variables manually in **Watch Panel** | Monitor changes to key variables                                     |
| 🧾 Print Debugging  | `printf("x = %d\n", x);`                  | Manually trace values in loops or logic                              |
| ⚠ Compiler Warnings | `gcc -Wall file.c`                        | Warns about risky code like unused variables, logic mistakes, etc.   |
| 🧹 Static Analyzers | `cppcheck`, `clang-tidy`, `splint`        | Analyzes code to detect bugs and bad practices                       |
| 🔒 Assertions       | `assert(condition);` from `<assert.h>`    | Crash the program if assumptions are violated (during development)   |
| 🧪 Small Inputs     | Test with simple arrays like `{1,2,3}`    | Validate logic on minimal examples to detect errors early            |
| 🧠 Known Test Cases | Use expected input/output pairs           | Check against known correct results                                  |
----
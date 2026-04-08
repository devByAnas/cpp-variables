# C++ Variables — Local & Global
A concise reference on variable scope in C++: where variables live, how long they last, and when to use each.

---

## 📌 What is a Variable?
A variable is a named memory location that stores data during program execution. In C++, every variable has:
- A **type** (int, float, string, etc.)
- A **name** (identifier)
- A **scope** (where it's accessible)
- A **lifetime** (how long it exists in memory)

---

## 🔹 Local Variables
A **local variable** is declared **inside** a function, block `{}`, or loop. It only exists within that block.

### Syntax
```cpp
void func()
{
    int x = 10; // local variable declared inside the function
    cout << "Value of x inside function : " << x << endl;
}
```

### Key Characteristics
| Property      | Detail                                                   |
|---------------|----------------------------------------------------------|
| Scope         | Only within the block/function it's declared in          |
| Lifetime      | Created when block starts, destroyed when block ends     |
| Default Value | **Undefined** (contains garbage value unless initialized)|
| Storage       | Stack memory                                             |

### Example
```cpp
#include <iostream>
using namespace std;

void func()
{
    int x = 10; // local variable declared inside the function
    cout << "Value of x inside function : " << x << endl;
}

int main()
{
    func(); // calling the function to demonstrate local variable usage
    return 0;
}
```

### Notes
- Always **initialize** local variables before use — uninitialized locals hold garbage values.

---

## 🔸 Global Variables
A **global variable** is declared **outside** all functions, typically at the **top of the file**. It is **accessible from any function** in the program.

### Syntax
```cpp
int y = 20; // global variable declared outside function

void func()
{
    // accessing global variable inside the function
    cout << "Value of y inside function : " << y << endl;
}
```

### Key Characteristics
| Property      | Detail                                                |
|---------------|-------------------------------------------------------|
| Scope         | Entire file (or program with `extern`)                |
| Lifetime      | Entire duration of the program                        |
| Default Value | **Zero-initialized** automatically (0, nullptr, etc.)|
| Storage       | Data segment (static memory)                          |

### Example
```cpp
#include <iostream>
using namespace std;

int y = 20; // global variable declared outside function

void func()
{
    // accessing global variable inside the function
    cout << "Value of y inside function : " << y << endl;
}

int main()
{
    cout << "Value of y in main : " << y << endl; // accessing global variable in main
    func(); // calling the function to demonstrate global variable usage
    return 0;
}
```

---

## ⚖️ Local vs Global — Quick Comparison
| Feature          | Local Variable          | Global Variable               |
|------------------|-------------------------|-------------------------------|
| Declared in      | Inside a function/block | Outside all functions         |
| Scope            | Limited to its block    | Entire program                |
| Lifetime         | Temporary (stack)       | Whole program run             |
| Default value    | Undefined (garbage)     | Zero-initialized              |
| Memory location  | Stack                   | Data segment                  |
| Thread safety    | Generally safe          | Needs care in multithreading  |
| Recommended use  | Most situations ✅      | Use sparingly ⚠️             |

---
---

## 👨‍💻 Author
> devByAnas
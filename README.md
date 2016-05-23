# CPP-Notes
C++ Notes

## 1 Requirements

This tutorial is based on C++11. Make sure you are using the latest IDE's - XCode (Mac) or Visual Studio (Windows). You can use other IDE's but make sure it supports the latest C++ version.

### 1.1 Mac

**Adding files to Xcode**

1. Download Xcode from the App Store.
2. Open Xcode application and click on `File > New > Workspace...`.
3. Name the `Workspace` as `CPP-Notes`.
4. Click on the `+` sign and then click on `Add Files to "CPP-Notes"...`
  ![Add files to workspace](https://raw.githubusercontent.com/akshaybabloo/CPP-Notes/master/Screenshots/xcode-workspace.png)

**Creating Project**

1. Click on the `+` sign and then click on `New Project...`
  ![Creating a Project to Workspace](https://raw.githubusercontent.com/akshaybabloo/CPP-Notes/master/Screenshots/xcode-create-project.png)
2. Under `OSX > Application` select `Command Line Tool` and click next. In that, type in the name of the product and make sure you select the language as `C++`.
  ![Selecting command line tools](https://raw.githubusercontent.com/akshaybabloo/CPP-Notes/master/Screenshots/xcode-create-project-1.png)
3. Save it where every you want.

### 1.2 Windows

1. Go to [https://www.visualstudio.com/en-us/visual-studio-homepage-vs.aspx](https://www.visualstudio.com/en-us/visual-studio-homepage-vs.aspx) and download `Visual Studio Community` version. Make sure `Visual C++` package is selected and continue the installation.
2. Once installed, Click on `File > New > Project` or use the shortcut <kbd>Ctrl</kbd> + <kbd>Shift</kbd> + <kbd>N</kbd>.

  ![Visual Studio New Project](https://raw.githubusercontent.com/akshaybabloo/CPP-Notes/master/Screenshots/vs-new-project.png)

3. We are adding the preprocessing variable because of the way Microsoft has written its c++ compiler.  For that to happen, we are creating a C++ file. Under `Solution Explorer` right click on `Source Files > Add > New Item...` name it as `test.cpp` and type int he following:

  ```cpp
  #include <cstdio>

  using namespace std;

  int main(int argc, char ** argv) {
      puts("hello");
      return 0;
  }  
  ```

  From the menubar click on `Build > Build Solution`
4. Under Solution Explorer, right click on `CPP > Properties`
  ![Visual Studio Project Property](https://raw.githubusercontent.com/akshaybabloo/CPP-Notes/master/Screenshots/vs-project-property.png)
  As shown in the image above click on `<Edit...>`. In the text box type in the following:

  ```
  _CRT_SECURE_NO_WARNINGS
  _HAS_ITERATOR_DEBUGGING=0
  ```

  Click on `OK`

**Running the CPP files**

1. Open your command prompt, by doing <kbd>WINDOWS</kbd> + <kbd>R</kbd> and type in `cmd`.
2. To execute the built `test.cpp`, You would have to go to the project folder `CPP > Build > CPP.exe`. Drag and drop `CPP.exe` on the command prompt the press `Enter`, this will output `hello`.

## 2 Basics

C++ inherits most of its code style from C language, but both are very different from each other. Let's consider an example:

See [2_1_HelloWorld.cpp](https://github.com/akshaybabloo/CPP-Notes/blob/master/2_Basics/2_1_HelloWorld.cpp)

```cpp
// This is a comment

/*
  This is a block code.
*/
#include <cstdio> //<- Libraries
#include <iostream>

using namespace std; //<- scope to identifiers

int main(int argc, char ** argv) {
  puts("hello"); // this statement outputs hello with a new line
  printf("hello\n"); // this is similar to puts but doesn't end with new line
  cout << "hello\n"; // more complex way to output without new line
  return 0; // 0 means success
}
```

A C++ program can also be written like this (though I wouldn't recommend it):

```cpp
#include <cstdio>
using namespace std;

int
main
(
int
argc,
char
**
argv) {
puts("
hello")
  ;
  return 0;
}
```

**Things to remember**

1. A statement should always end with `;`.
2. `#Include` should always be in single line without any space followed by `<>` or `""`.

### 2.1 Identifiers

C++ follows the following standards

* [ISO Latin Alphabets](https://en.wikipedia.org/wiki/ISO_basic_Latin_alphabet)

| A | B | C | D | E | F | G | H | I | J | K | L | M | N | O | P | Q | R | S | T | U | V | W | X | Y | Z |
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
| a | b | c | d | e | f | g | h | i | j | k | l | m | n | o | p | q | r | s | t | u | v | w | x | y | z |

* [Western arabic numbers](https://en.wikipedia.org/wiki/Arabic_numerals)

| 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |
|---|---|---|---|---|---|---|---|---|---|

* [ASCII Underscore](http://www.theasciicode.com.ar/ascii-printable-characters/underscore-understrike-underbar-low-line-ascii-code-95.html)

| _ |
|---|

* These identifiers cannot conflict with C++ 86 keywords (which includes 11 tokens)

|    |   |   |
|-------------------------|------------------------|-----------------------------|
| alignas (since C++11)   | explicit               | signed                      |
| alignof (since C++11)   | export(1)              | sizeof                      |
| and                     | extern                 | static                      |
| and_eq                  | FALSE                  | static_assert (since C++11) |
| asm                     | float                  | static_cast                 |
| auto(1)                 | for                    | struct                      |
| bitand                  | friend                 | switch                      |
| bitor                   | goto                   | template                    |
| bool                    | if                     | this                        |
| break                   | inline                 | thread_local (since C++11)  |
| case                    | int                    | throw                       |
| catch                   | long                   | TRUE                        |
| char                    | mutable                | try                         |
| char16_t (since C++11)  | namespace              | typedef                     |
| char32_t (since C++11)  | new                    | typeid                      |
| class                   | noexcept (since C++11) | typename                    |
| compl                   | not                    | union                       |
| concept (concepts TS)   | not_eq                 | unsigned                    |
| const                   | nullptr (since C++11)  | using(1)                    |
| constexpr (since C++11) | operator               | virtual                     |
| const_cast              | or                     | void                        |
| continue                | or_eq                  | volatile                    |
| decltype (since C++11)  | private                | wchar_t                     |
| default(1)              | protected              | while                       |
| delete(1)               | public                 | xor                         |
| do                      | register               | xor_eq                      |
| double                  | reinterpret_cast       |                             |
| dynamic_cast            | requires (concepts TS) |                             |
| else                    | return                 |                             |
| enum                    | short                  |                             |

* Identifiers are case sensitive.

### 2.2 Defining Variables

See [2_2_DefineVariables.cpp](https://github.com/akshaybabloo/CPP-Notes/blob/master/2_Basics/2_2_DefineVariables.cpp)

Identifiers (or variables) can be initialized by using the following syntax:

```
DataType VariableName = "String" or number;
```

You can also define a read-only variable or a constant in C++ by using the keyword `const`.

### 2.3 Pointer and Reference

see [2_3_Pointers_Reference.cpp](https://github.com/akshaybabloo/CPP-Notes/blob/master/2_Basics/2_3_Pointers_Reference.cpp)

A variable can be called in two ways; `call by value` and `call by reference`.

A pointer and reference are a type of data type, which is commonly used in C/C++ programming. It is a very powerful and confusing concept. It will take some time to understand.

* A pointer can take reference of another variables or a real value

Lets understand how identifiers work. When we say `int a = 10;`, an integer variable `a` has a value of `10` in the memory. When we say `int b = a;`, an integer variable `b` has a copy of variable `a`

```cpp
int a = 10;
int b = a; // b = 10
```

**Pointers**

So, When I say `int *c = &a`, it means that pointer `c` points to the reference of `a`.

```cpp
int a = 10;
int *b = &a;
printf("%d\n", *b); // this will print the reference value of a, which is 10
```

**Reference**

References are the address of a value in the memory. The pointer points to this address while calling.

* A reference can only call a variable which is already initialized.

So, when I say `int &d = b` the address if `b` is stored in `d`.

```cpp
int b = 20;
int &d = b;
printf("%d\n", d);
```

### 2.4 Arrays and Strings

See [2_4_1_Arrays.cpp](https://github.com/akshaybabloo/CPP-Notes/blob/master/2_Basics/2_4_Arrays_Strings/2_4_1_Arrays.cpp) and [2_4_2_String.cpp](https://github.com/akshaybabloo/CPP-Notes/blob/master/2_Basics/2_4_Arrays_Strings/2_4_2_String.cpp)

There are two types of Arrays and String in C++, one using C style Arrays & String and the second one using Standard Library (STL), which will be covered later.

**Arrays**

The syntax of a C-based array is

```cpp
int a[5] = {1,2,3,4,5}; // array[SizeOfArray] = {'contents'};
printf("%d\n", a[0]); // 1
```
**Strings**

A string is an array of characters terminated string or also called as null terminated string. A string is always terminated with 0.

```cpp
char a[6] = {'a', 'b', 'c', 'd', 'e', 0};
printf("%s\n", a); // abcde
```

### 2.5 Conditions

See [2_5_Conditions.cpp](https://github.com/akshaybabloo/CPP-Notes/blob/master/2_Basics/2_5_Conditions.cpp)

There are two ways to use conditional operators.

1. Traditional conditional operator.
2. Ternary conditional operator.

**Traditional conditional operator**

`if..else..` are common type of conditional statements.

```cpp
int a = 10;
int b = 20;

if (a > b) {
  puts("a>b");
} else {
  puts("b>a");
}
```

**Ternary conditional operator**

Its a one liner conditional operator

```cpp
int a = 10;
int b = 20;

printf("%d\n", a > b ? a : b); // if a is greater than b, print a else print b
```

### 2.6 Switch Case

See [2_6_Switch_Case.cpp](https://github.com/akshaybabloo/CPP-Notes/blob/master/2_Basics/2_6_Switch_Case.cpp)

It is type of conditional statement, which requires an expression which should satisfy a condition. If a condition is not satisfied then it jumps to `default`. An expression should always be a constant of integer or a character. Syntax looks something like this

```cpp
switch (/* expression */) {
  case /* value */:
    /* statement */
}
```

### 2.7 While Loop

See [2_7_While_Loop.cpp](https://github.com/akshaybabloo/CPP-Notes/blob/master/2_Basics/2_7_While_Loop.cpp)

There are two types of `While` loop in C++

1. `While` loop

  ```cpp
  while (/* condition */) {
    /* code */
  }
  ```

2. `do.. While..` loop

  ```cpp
  do {
    /* code */
  } while(/* condition */);
  ```

### 2.8 For Loop

See [2_8_For_Loop.cpp](https://github.com/akshaybabloo/CPP-Notes/blob/master/2_Basics/2_8_For_Loop.cpp)

For loop is like `while` loop but with some extra features

```cpp
for (size_t i = 0; i < count; i++) {
  /* code */
}
```

### 2.9 Range base For loop

See [2_9_Range_For.cpp](https://github.com/akshaybabloo/CPP-Notes/blob/master/2_Basics/2_9_Range_For.cpp)

Starting from C++11 we can use range based `For` loop

```cpp
for (type var1 : var2) {
  /* code */
}
```

### 2.10 Using stdout

C++ also has a way to used object oriented way of printing out contents to the terminal/command prompt. So far we have used `printf` and `puts`.

```cpp
std::cout << "Hello World!" << std::endl;
```

The above code shows a bitwise stream of string to `cout`. The `<<` shows left shift of the content.

Creating a compiled version of `cout` uses a lot of resources when compared to `puts` or `printf`, this is because to compile `cout` the whole standard library - `STL` - is copied.

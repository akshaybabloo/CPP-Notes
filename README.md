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
2. Once installed, Click on `File > New > Project` or use the shortcut `Ctrl + Shift + N`.
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

1. Open your command prompt, by doing `WINDOWS + R` and type in `cmd`.
2. To run the built `test.cpp`, you would have to go to the project folder `CPP > Build > CPP.exe`. Drag and drop `CPP.exe` on the command prompt the press `Enter`, this will output `hello`.

## 2 Basics

C++ inherits most of its code style from C language, but both are very different from each other. Lets consider an example:

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

A C++ program can also be written like this (thought I wouldn't recommend it):

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
2. `#Include` should always be in single line with out any space followed by `<>` or `""`.

### 2.1 Identifiers

C++ follows standard [ISO Latin Alphabets](https://en.wikipedia.org/wiki/ISO_basic_Latin_alphabet), [Western arabic numbers](https://en.wikipedia.org/wiki/Arabic_numerals) and [ASCII Underscore](http://www.theasciicode.com.ar/ascii-printable-characters/underscore-understrike-underbar-low-line-ascii-code-95.html). These identifiers cannot conflict with C++ 86 keywords (which includes 11 tokens)

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

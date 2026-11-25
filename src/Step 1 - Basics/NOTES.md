# Part A

I did Part A, but these are not questions, so no answers are needed here.

# Part B

1. The custom functions I wrote cannot be resolved. Compiler issue. `-Werror` stops the build.
2. The error becomes `ld returned 1 exit status`. It comes from the linker. As I understand, it's because the linker cannot link the custom functions to another object file.
3. It does not compile. So h files content are a bit like interfaces in C# and the like.
4. I don't get any error. Seems like the linker is smart enough to ignore the second include. If I define a `struct` in the header file, I get an error `redefinition of struct`. Because the header file is included more than one times, so it tries to define the same `struct` with the same name several times. Why does it work if no `struct` is present ? With no `struct`, declarations from the h files are repeated, which is allowed. But a `struct` is defined in a h file, and multiple definitions of the same thing are not allowed.
5. It does not work. As I understand, a `static` function is only accessible from the same file, a bit like a private function in other languages.

# Part C

1. ~~Declaration is declaring a variable a of type t. Defining is giving it a value. For a function, declaring is just the signature, like in the h file, defining is the same function in the c file.~~ Declaration tells the compiler something with this name and this type exists. Definition is actually creating the thing.
2. Includes with <...> tells the compiler to look into the standard place, whereas "..." tells it to look in my own files first.
3. Implicit declaration is fine, it's just a warning. But with `-Werror`, warnings are errors. But without declaration, the compiler can't check if the arguments and return's types match.

### Important

Every `.c` file must include its own `.h` file.
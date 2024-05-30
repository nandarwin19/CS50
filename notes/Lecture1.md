# C

https://manual.cs50.io/#stdio.h

code hello.c => to create the file
make hello => to complie the source code to machine code
./hello =>
%c => to print a character
% => converstion specifier

## Conversion Specification Type

- `%c` - char
- `%f` - double/float
- `%i` - int
- `%li` - long
- `%s` - string

To print an actual percent sign, use `%%`.

```c
printf("%.1f\n", 1.0 / 3.0); => 0.3
printf("%.2f\n", 0.03); => 0.03

```

### To run file

Example:

```sh
gcc hello.c -o hello cs50.c
./hello
```

### Char vs String

char - always precisely one character
string - zero or more characters

If it is `single character`, you should use single quotes, like `'A'`.
If it is a `string`, you should use double quotes, like `"ABC"`.

### void - this function doesn't return anything

### Scope just refers to the context in which variables exists.

CLI - Command Line Interface
cd - change directory
cp - copy
ls - list
mkdir - make directory
mv - move
rm - remove
rmdir - remove directory

### Truncation

Truncation is just a term of art that means if you take an integer, and you divide it by an integer even if you get a fractional value, the fraction just gets thrown away bcz you are only doing integer-based math.

### Type Casting

Type casting is converting one data type to another, e.g., int to float.

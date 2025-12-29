## Libft: Building Your Own C Library

This project is one of the first practical steps into low-level programming: building your own library of functions in C, just like in the 42Madrid cursus. The goal isn’t just to copy `libc` functions, but to understand how they work, replicate them, and learn good programming and memory management practices.

<img src='https://media.giphy.com/media/VcizxCUIgaKpa/giphy.gif' width=300 height=200/>

---
### 🌐 What’s Libft about?

Libft consists of programming basic functions that will serve as the foundation for future projects in the cursus. It’s a great opportunity to:
- Get familiar with pointers and memory management
- Learn to modularize code
- Practice compilation and creation of static libraries (`libft.a`)
- Understand how standard C functions are built under the hood

In short, Libft is your personal toolbox in C.

---
### 🧩Project Objective
- Build a C library with general-purpose functions.
- Functions should replicate `libc` behavior or complement it with useful string and memory utilities.
- Code must be modular, clean, and comply with 42’s compilation standards (`-Wall -Werror -Wextra`).
- No global variables allowed; any helper function must be declared static in its file.

---
### ⚙️Technical Considerations

- Libtool is forbidden; use the ar command to generate the library.
- Do not submit unnecessary files.
- All functions must follow original `libc` prototypes, but with the prefix `ft_` (e.g., `strlen` → `ft_strlen`).

### 📝Part 1: Replicating libc Functions
In this section, you will recreate standard library functions with your own implementations:

|||
| --- | --- |
|isalpha|toupper|
|isdigit|tolower|
|isalnum|strchr|
|isascii|strrchr|
|isprint|strncmp|
|strlen|memchr|
|memset|memcmp|
|bzero|strnstr|
|memcpy|atoi|
|memmove|calloc|
|strlcpy|strdup|
|strlcat||
> Each function must behave exactly like its original version.

### 📝Part 2: Additional Functions

Here you will develop functions that are not in libc or behave differently, useful for string and number manipulation:
|||
|---|---|
|ft_substr|ft_strjoin|
|ft_strtrim|ft_split|
|ft_itoa|ft_strmapi|
|ft_striteri|ft_putchar_fd|
|ft_putstr_fd|ft_putendl_fd|
|ft_putnbr_fd||

These functions teach you to manage memory dynamically, manipulate strings, and write utilities that make your code more modular.

---
### 🌟Bonus: Linked Lists

Once you master strings and memory, it’s time to move on to linked lists:
```
typedef struct s_list
{
   void *content;

   struct s_list *next;

} t_list;
```
- content: stores any type of information (void*)
- next: points to the next node or NULL if it’s the last one

Functions to implement for easy list management:
|||
|---|---|
|ft_lstnew|ft_lstadd_front|
|ft_lstsize|ft_lstlast|
|ft_lstadd_back|ft_lstdelone|
|ft_lstclear|ft_lstiter|
|ft_lstmap||
> Learning lists is key for more complex data structures you’ll encounter later.

---
### 🚀Project and Submission

- A Makefile is provided to compile the static library `libft.a`
- Includes all functions developed in the project
- Project fulfills all requirements of the 42Madrid cursus

### ⚠️Important 
This project was adapted and reorganized: since it is a library, I modified its structure by separating the functions into categories for better organization. Additionally, I incorporated the [Get_next_line](https://github.com/goldcod3/Get_next_line) and [Ft_printf](https://github.com/goldcod3/Ft_printf) functions —two additional projects from the 42Madrid curriculum— with the goal of making the library easier to use and more convenient to integrate into future projects.

#### 🧩Compile Options:
```
$ make
The **make** rule will compile the whole library generating a static library 'libft.a' containing all the functions of the project.
$ make clean
The **clean** rule will delete all objects created to compile the library 'libft.a'.
$ make fclean
The **fclean** rule will delete all created objects and the 'libft.a' file that has been previously compiled.
$ make re
The **re** rule will remove all compiled objects and files (if any) and recompile the library.
```

---
### 🏁Conclusion

Libft is much more than just a C exercise. It teaches you to:
- Understand how the standard library works
- Handle memory and pointers responsibly
- Modularize and structure code
- Build your own reusable toolbox

Perfect for consolidating C programming fundamentals before moving on to more complex projects at 42Madrid 😄

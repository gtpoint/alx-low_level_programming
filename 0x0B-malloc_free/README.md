# 0x0B-malloc_free

In this project, I learned about the difference between automatic and dynamic location as well as how to use malloc, free, and valgrind in C.

### Tests :
+ [tests](https://github.com/bdbaraban/holbertonschool-low_level_programming/blob/master/0x0A-malloc_free/tests)

### Header File :
+ [main.h](https://github.com/bdbaraban/holbertonschool-low_level_programming/blob/master/0x0A-malloc_free/main.h) : Header file containing prototypes for all functions written in the project.

| File         | Protoype | Description |
| :--------- | -------- | ---------- |
| [0-create_array.c](https://github.com/BigGtpoint/alx-low_level_programming/blob/main/0x0B-malloc_free/0-create_array.c) | `char *create_array(unsigned int size, char c);` | creates an array of chars |
| [1-strdup.c](https://github.com/BigGtpoint/alx-low_level_programming/blob/main/0x0B-malloc_free/1-strdup.c) | `char *_strdup(char *str);` | returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter. |
| [2-str_concat.c](https://github.com/BigGtpoint/alx-low_level_programming/blob/main/0x0B-malloc_free/2-str_concat.c) | `char *str_concat(char *s1, char *s2);` | concatenates two strings |
| [3-alloc_grid.c](https://github.com/BigGtpoint/alx-low_level_programming/blob/main/0x0B-malloc_free/3-alloc_grid.c) | `int **alloc_grid(int width, int height);` | returns a pointer to a 2 dimensional array of integers. |
| [4-free_grid.c](https://github.com/BigGtpoint/alx-low_level_programming/blob/main/0x0B-malloc_free/4-free_grid.c) | `void free_grid(int **grid, int height);` | frees a 2 dimensional grid previously created by your `alloc_grid` function. |
| [100-argstostr.c](https://github.com/BigGtpoint/alx-low_level_programming/blob/main/0x0B-malloc_free/100-argstostr.c) | `char *argstostr(int ac, char **av);` | concatenates all the arguments of your program. |

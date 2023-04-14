# 0x0C-more_malloc_free

In this project, I learned about using `exit`, `calloc`, and `realloc` in C.

### Tests :
+ [tests](https://github.com/gtpoint/alx-low_level_programming/tree/main/0x0C-more_malloc_free/tests) : Folder of test files

### Header File 📁 :
+ [main.h](https://github.com/gtpoint/alx-low_level_programming/blob/main/0x0C-more_malloc_free/main.h) : Header file containing prototypes for all functions written in the project.

| File                 | Prototype                                                                  | Description |
| -------------------- | -------------------------------------------------------------------------- | ----------- |
| `0-malloc_checked.c` | `void *malloc_checked(unsigned int b);`                                    | C function that returns a
  pointer to a newly-allocated space in memory using `malloc`. |
| `1-string_nconcat.c` | `char *string_nconcat(char *s1, char *s2, unsigned int n);`                | C function that returns a pointer to a
  newly-allocated space in memory containing the concatenation of two strings. |
| `2-calloc.c`         | `char *string_nconcat(char *s1, char *s2, unsigned int n);`                | C function that returns a pointer to a newly-allocated space
  in memory for an array, using `malloc`. |
| `3-array_range.c`    | `int *array_range(int min, int max);`                                      | C function that returns a pointer to a
  newly-allocated space in memory containing an array of integers. |
| `100-realloc.c`      | `void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);` | C function that reallocates a memory block using
  `malloc` and `free`. |

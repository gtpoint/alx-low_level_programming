# 0x09-static_libraries

In this project, I learned what static libraries and Creating A Static `C` Library Using `ar` and `ranlib`

### Tests :
 + [tests](https://github.com/BigGtpoint/alx-low_level_programming/tree/main/0x09-static_libraries/tests) : Folder of test files.
 
### Files :
 + [files_C](https://github.com/BigGtpoint/alx-low_level_programming/tree/main/0x09-static_libraries/files_C) : Folder contain all files of this project .

### Tasks :
 + #### 0. A library is not a luxury but one of the necessities of life
   - [libmy.a](https://github.com/BigGtpoint/alx-low_level_programming/tree/main/0x09-static_libraries/libmy.a): C Static library containing all the functions listed below:

      - `int _putchar(char c);`
      - `int _islower(int c);`
      - `int _isalpha(int c);`
      - `int _abs(int n);`
      - `int _isupper(int c);`
      - `int _isdigit(int c);`
      - `int _strlen(char *s);`
      - `void _puts(char *s);`
      - `char *_strcpy(char *dest, char *src);`
      - `int _atoi(char *s);`
      - `char *_strcat(char *dest, char *src);`
      - `char *_strncat(char *dest, char *src, int n);`
      - `char *_strncpy(char *dest, char *src, int n);`
      - `int _strcmp(char *s1, char *s2);`
      - `char *_memset(char *s, char b, unsigned int n);`
      - `char *_memcpy(char *dest, char *src, unsigned int n);`
      - `char *_strchr(char *s, char c);`
      - `unsigned int _strspn(char *s, char *accept);`
      - `char *_strpbrk(char *s, char *accept);`
      - `char *_strstr(char *haystack, char *needle);`

 + #### 1. Without libraries what have we? We have no past and no future
   - [create_static_lib.sh](https://github.com/BigGtpoint/alx-low_level_programming/tree/main/0x09-static_libraries/create_static_lib.sh) : Bash script that creates a static library called [liball.a](https://github.com/BigGtpoint/alx-low_level_programming/blob/main/0x09-static_libraries/liball.a) from all the `.c` files in the current directory.

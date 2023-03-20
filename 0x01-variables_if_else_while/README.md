# 0x01-variables_if_else_while

In this project, I learned about using arithmetic, logical, relational, and boolean operators in C. Additionally, how to declaring and defining variables of type `char`, `int`, and `unsigned int`, and learned how to use `if` and `if...else` statements, and implementing `while loop`.

### All Tasks Here

+ 0.  Positive anything is better than negative nothing
  - [0-positive_or_negative.c](https://github.com/BigGtpoint/alx-low_level_programming/blob/main/0x01-variables_if_else_while/0-positive_or_negative.c) :C program that prints whether a randomly generated number is positive or negative, followed by a new line:
    - Completion of this source [code.](https://github.com/holbertonschool/0x01.c/blob/master/1-last_digit_c)
    - The variable n will store a different value every time you will run this program.
    - The output of the program should be:
      - The number, followed by
        - if the number is greater than 0: `is positive`
        - if the number is 0: `is zero`
        - if the number is less than 0: `is negative`
      - followed by a new line.

  
+ 1.  The last digit
  - [1-last_digit.c](https://github.com/BigGtpoint/alx-low_level_programming/blob/main/0x01-variables_if_else_while/1-last_digit.c) :C program that prints the last digit of a randomly generated number, followed by a new line:
    - Compilation of this source [code.](https://github.com/holbertonschool/0x01.c/blob/master/1-last_digit_c)
    - The variable `n` will store a different value every time you run this program.
    - The output of the program should be:
      - The string `Last digit of`, followed by
      - `n`, followed by
      - the string `is`, followed by
        - if the last digit of `n` is greater than 5: the string and `is greater than 5`.
        - if the last digit of `n` is 0: the string and `is zero`
        - if the last digit of `n` is less than 6 and not 0: the string and `is less than 6 and not 0`
      - followed by a new line

+ 2.  I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
  - [2-print_alphabet.c](https://github.com/BigGtpoint/alx-low_level_programming/blob/main/0x01-variables_if_else_while/2-print_alphabet.c) :C program that prints the alphabet in lowercase, followed by a new line, using only the `putchar` function exactly.
  
+ 3.  When I was having that alphabet soup, I never thought that it would pay off
  - [3-print_alphabets.c](https://github.com/BigGtpoint/alx-low_level_programming/blob/main/0x01-variables_if_else_while/3-print_alphabets.c) :C program that prints the alphabet in lowercase, then in uppercase, followed by a new line, using only the `putchar` function exactly three times.
  
+ 4.  alphABET
  - [4-print_alphabt.c](https://github.com/BigGtpoint/alx-low_level_programming/blob/main/0x01-variables_if_else_while/4-print_alphabt.c) :C program that prints the alphabet in lowercase except for the letters `q` and `e`, followed by a new line, using only the `putchar` function exactly twice.
  
+ 5.  Numbers
  - [5-print_numbers.c](https://github.com/BigGtpoint/alx-low_level_programming/blob/main/0x01-variables_if_else_while/5-print_numbers.c) :C program that prints all single digit numbers of base 10 starting from `0`, followed by a new line.

+ 6.  Numberz
  - [6-print_numberz.c](https://github.com/BigGtpoint/alx-low_level_programming/blob/main/0x01-variables_if_else_while/6-print_numberz.c) :C program that prints all single digit numbers of base 10 starting from `0`, followed by a new line, using only the `putchar` function exactly twice without any variables of type char.
  
+ 7.  Smile in the mirror
  - [7-print_tebahpla.c](https://github.com/BigGtpoint/alx-low_level_programming/blob/main/0x01-variables_if_else_while/7-print_tebahpla.c) :C program that prints the lowercase alphabet in reverse, followed by a new line, using only the `putchar` function exactly twice.

+ 8.   Hexadecimal
  - [8-print_base16.c](https://github.com/BigGtpoint/alx-low_level_programming/blob/main/0x01-variables_if_else_while/8-print_base16.c) :C program that prints all the numbers of base 16 in lowercase, followed by a new line, using only the putchar function exactly three times.

+ 9.  Patience, persistence and perspiration make an unbeatable combination for success
  - [9-print_comb.c](https://github.com/BigGtpoint/alx-low_level_programming/blob/main/0x01-variables_if_else_while/9-print_comb.c) :C program that prints all possible combinations of single-digit numbers, using only the `putchar` function exactly four times without any variables of type char:
    - Numbers must be separated by `,`, followed by a space
    - Numbers should be printed in ascending order
    - You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
    - All your code should be in the `main` function
    - You can only use `putchar` four times maximum in your code
    - You are not allowed to use any variable of type `char`

+ 10.  Inventing is a combination of brains and materials. The more brains you use, the less material you need
  - [10-print_comb2.c](https://github.com/BigGtpoint/alx-low_level_programming/blob/main/0x01-variables_if_else_while/10-print_comb2.c): Write a program that prints all possible different combinations of two digits.
    - Numbers must be separated by `,`, followed by a space
    - The two digits must be different
    - `01` and `10` are considered the same combination of the two digits 0 and 1
    - Print only the smallest combination of two digits
    - Numbers should be printed in ascending order, with two digits
    - You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
    - You can only use `putchar` five times maximum in your code
    - You are not allowed to use any variable of type `char`
    - All your code should be in the `main` function

+ 11.  The success combination in business is: Do what you do better... and: do more of what you do...
  - [100-print_comb3.c](https://github.com/BigGtpoint/alx-low_level_programming/blob/main/0x01-variables_if_else_while/100-print_comb3.c) :C program that prints all possible different combinations of two digits using only the `putchar` function exactly five times without any variables of type `char`:
    - Numbers must be separated by `,`, followed by a space
    - The three digits must be different
    - 012, 120, 102, 021, 201, 210 are considered the same combination of the three digits 0, 1 and 2
    - Print only the smallest combination of three digits
    - Numbers should be printed in ascending order, with three digits
    - you can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
    - You can only use `putchar` six times maximum in your code
    - You are not allowed to use any variable of type `char`
    - All your code should be in the `main` function













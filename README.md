# CPP_Experiment_4: Desicion Making statements

## Aim
To understand and implement looping statements in C++:

for loop

while loop

## Objectives
Use loops to repeat a block of code.

Practice using for and while loops in different situations.

Understand loop structure, conditions, and counters.

Solve simple problems using loops.

## Theory (Simple and Pointwise)
#### What is a Loop?
A loop is used to repeat a block of code multiple times.

Saves time and avoids writing the same code again and again.

Three main types of loops in C++:

for loop

while loop

#### Why use Loops?

To automate repetitive tasks like:

Printing numbers

Verifying inputs

Reversing digits

Repeating messages

#### 1. For Loop

Best for fixed number of repetitions.

```
for (initialization; condition; update) {
   // code to repeat
}
```

#### 2. While Loop

Used when the number of repetitions is not fixed.

```
while (condition) {
   // code to repeat
}
```

### Difference between For Loop and While Loop
| Feature           | `for` Loop                                | `while` Loop                               |
|-------------------|--------------------------------------------|---------------------------------------------|
| Use Case          | When number of repetitions is known       | When number of repetitions is unknown       |
| Initialization    | Done inside the loop header               | Done before the loop                        |
| Condition Check   | At the start of each iteration            | At the start of each iteration              |
| Update Step       | Inside the loop header                    | Inside the loop body                        |
| Example           | `for (int i = 0; i < 5; i++)`             | `while (i < 5)`                             |
| Readability       | Compact and easy to read for known count  | More flexible for complex conditions        |

## Program Description

### 1. Print Even Numbers from 1 to 10 using for loop

We use a for loop to repeat the task.

Start from 2 and keep adding 2 each time (i.e., i += 2).

The loop runs until the value reaches 10.

This way, only even numbers are printed.

### 2. Print "SIT" 5 times using for loop

We want to print the word "SIT" five times.

for loop is used because the number of times is fixed (5).

In each loop, it prints "SIT" followed by a new line.

### 3. Password Verification using while loop

We use a while loop because we don’t know how many times the user will try.

The loop keeps asking for input until the correct password ("1234") is entered.

Once the password is correct, it prints "Access Granted!" and exits the loop.

### 4. Reverse a Number using while loop

A number is taken as input (like 1234).

We use a while loop to extract each digit from the end using % operator.

Then we build the reversed number by multiplying previous value by 10 and adding the digit.

Loop continues until the number becomes 0.

### 5. Pattern Printing

#### List of Patterns Implemented:

##### Right-angled Triangle:

Prints stars in increasing order row-wise.
 
##### Inverted Right-angled Triangle:

Stars decrease with each row.

##### Mirrored Right-angled Triangle:

Similar to right-angled triangle but shifted to the right using spaces.

##### Equilateral Triangle:

Center-aligned triangle with spaces and *.

##### Inverted Equilateral Triangle:

Upside-down version of an equilateral triangle.

##### Equilateral Triangle (Continuous Stars):

Uses 2*i+1 formula to print continuous stars like a pyramid.

##### Diamond Pattern:

Combines two equilateral triangles (one upright and one inverted).

##### Hourglass Pattern:

Similar to diamond but without full symmetry, gives hourglass appearance.

##### Number Triangle:

Prints increasing numbers row by row in triangle form.
  
##### Number Pyramid:

Same number repeated per row (like row number).

##### Number Triangle (Mirrored):

Creates a triangle where each row starts with row number and increases.

##### Alphabet Pyramid (Continuous):

Prints increasing alphabets continuously using ASCII values.

##### Alphabet Pyramid (Same Letter in Row):

Each row has the same alphabet (based on row number).
 
##### Half Diamond Pattern:

Right-angled triangle followed by inverted one — like a vertical diamond cut in half.

##### Half Diamond (Mirrored):

Similar to Half Diamond, but mirrored using spaces to align center.

### Important Theory Concepts:

#### Nested Loops:

Used for row and column control. Outer loop controls rows, inner loop controls columns/spaces.

##### ASCII Values for Characters:
Alphabets are printed using ASCII values:

'A' = 65

printf("%c", 65); prints A.

##### Spacing:
Spaces (" ") are important to align patterns correctly (especially for mirrored or centered shapes).

##### Pattern Formulae:

Stars in equilateral: 2*i - 1 or 2*i + 1

Mirroring: Print (n - i) spaces before printing stars/numbers

## Concepts Used

Looping (for, while)

cin and cout

Relational operators: <=, !=

Arithmetic operators: %, /, *

String and integer manipulation

### Sample Output

#### To print even number from 1 to 10 using For loop

```
0
2
4
6
8
10
```

#### To print "SIT" 5 times uding For Loop

```
SIT
SIT
SIT
SIT
SIT
```

#### Password Verification using While Loop

```
---- PASSWORD SETUP ----

NOTE: The password should consists of uppercase,lowercase,number and symbol.
Set your password: mi@16
Weak password! Please follow the rules.

Set your password: Mi@14 
Password accepted.
---- PASSWORD VERIFICATION ----

You will get 3 chances to re-enter your password for our verification!
Re-enter your password: gahk

You have 2 chances left
Re-enter your password: haj8=

You have 1 chances left
Re-enter your password: Mi@14

Passwod verification successful!
```
#### Reverse the number using While Loop
```
Enter a number: 9073363
Reversed number: 3633709
```

#### Pattern Output
'''
Enter number of rows you want to print: 5

*
**
***
****
*****

*****
****
***
**
*

    *
   **
  ***
 ****
*****

    * 
   * * 
  * * * 
 * * * * 
* * * * * 

* * * * * 
 * * * * 
  * * * 
   * * 
    * 

     *
    ***
   *****
  *******
 *********

    *
   * *
  * * *
 * * * *
* * * * * 
 * * * * 
  * * * 
   * * 
    * 

 * * * * *
  * * * *
   * * *
    * *
     *
    * *
   * * *
  * * * *
 * * * * *

1	
2	3	
4	5	6	
7	8	9	10	
11	12	13	14	15	

1	
2	2	
3	3	3	
4	4	4	4	
5	5	5	5	5	

    1
   23
  345
 4567
56789

A
BC
DEF
GHIJ
KLMNO

A
BB
CCC
DDDD
EEEEE

*
**
***
****
*****
****
***
**
*

    *
   **
  ***
 ****
*****
 ****
  ***
   **
    *

'''

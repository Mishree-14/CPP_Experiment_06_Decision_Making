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

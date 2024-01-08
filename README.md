# DynamicProgramming
Code for algorithm problems and coding challenges

## Fibonacci Problem
Typically, you are asked to write a function '```fib(n)```' that takes in a number as an argument. The function should return the n-th number of the Fibonacci sequence.

The algorithm works by generating the next number of the sequence through the sum of the previous two numbers. Typically, the 1st and 2nd number of the sequence is 1. The sequence is as shown:

> n: 1, 2, 3, 4, 5, 6, 7, 8, 9, ...
> ```fib(n)```: 1, 1, 2, 3, 5, 8, 13, 21, 34, ... 

### Dynamic Programming - Fibonacci Memoization
A straight-forward method of approching the Fibonacci Sequence Problem is to write code as follows:
>int fib(int n) {
>    if (n <= 1) {
>        return n;
>    }
>    return fib(n - 1) + fib(n - 2);
>}
Although simple, we soon see a drastic slow down as we increase the index of n in the for of O(2<sup>n</sup>)
The following approach will use memoization, storing recursive calls that are found else where in the sequence, to decrease the time complexity of our recursive algorithm.

## Grid Traveler Problem

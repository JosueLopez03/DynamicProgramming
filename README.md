# DynamicProgramming
Code for algorithm problems and coding challenges

## Fibonacci Problem
Typically, you are asked to write a function '```fib(n)```' that takes in a number as an argument. The function should return the n-th number of the Fibonacci sequence.

The algorithm works by generating the next number of the sequence through the sum of the previous two numbers. Typically, the 1st and 2nd number of the sequence is 1. The sequence is as shown:

> n: 1, 2, 3, 4, 5, 6, 7, 8, 9, ...

> ```fib(n)```: 1, 1, 2, 3, 5, 8, 13, 21, 34, ... 

### Dynamic Programming - Fibonacci Memoization
A straight-forward method of approching the Fibonacci Sequence Problem is to write code as follows:

    if (n <= 1) {
        return n;
    }
    
    return fib(n - 1) + fib(n - 2);

Although simple, we soon see a drastic slow down as we increase the index of n in the for of O(2<sup>n</sup>)

The following approach will use memoization, storing recursive calls that are found else where in the sequence, to decrease the time complexity of our recursive algorithm.

## Grid Traveler Problem
Say that you are a traveler on a 2D grid. You begin in the top-left corner and your goal is to travel to the bottom-right corner. You may only move down or right.

In how many ways can you travel to the goal on a grid with dimensions m * n?

>Write a function ```gridTraveler(m, n)``` that calculates this...

m is the row, and n the column, because we are only allowed to move down and to the right, we can shorten the problem size by updating the allotted space. In practice we would subtract the allotted amount of rows and columns in a recursive function, much similar to a Fibonacci problem.

Because we can only change one of the dimensions by one, we can build a tree from the original coordinate input in order to find all of the possible ways to travel through the grid. Thus, we have the following cases:

1. Subtract the once on rows, shift next node to the left
2. Subtract the once on columns, shift next node to the right
3. If either row or column reaches index 0, then skip node

We continue through this process until all possible paths are accounted. Similarly to the Fibonacci problem, this recursive traveler problem tends to get exponetially slower in the form of O(2<sup>m+n</sup>).

### Grid Traversal - Memoization
If we were to flesh out a tree starting from (2, 3), we would see (1,2), (0,2), (1,1) repeat twice, additionally we can also note that (2,1), (1,1), (2,0) takes the same amount of steps and has interchangeable parameters. Thus we can memoize this pattern to decrease the time complexity of this problem. 
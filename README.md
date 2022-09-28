# Algorithms

The word Algorithm means: "A  set of rules to be followed in calculations or other problem-solving operations" Or "A procedure for solving a mathematical problem in a finite number of steps that frequently by recursive operations".

In mathematics and computer science, an algorithm is a finite sequence of rigorous instructions, typically used to solve a class of specific problems or to perform a computation. Algorithms are used as specifications for performing calculations and data processing. By making use of artificial intelligence, algorithms can perform automated deductions (referred to as automated reasoning) and use mathematical and logical tests to divert the code execution through various routes (referred to as automated decision-making). Using human characteristics as descriptors of machines in metaphorical ways was already practiced by Alan Turing with terms such as "memory", "search" and "stimulus".

---
## Sorting
In computer science, a sorting algorithm is an algorithm that puts elements of a list into an order. The most frequently used orders are numerical order and lexicographical order, and either ascending or descending. Efficient sorting is important for optimizing the efficiency of other algorithms (such as search and merge algorithms) that require input data to be in sorted lists. Sorting is also often useful for canonicalizing data and for producing human-readable output.
Currently available algorithms:

* <b><em>Bubble sort</em></b>, sometimes referred to as sinking sort, is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted. Comparison of neighbors (exchanging). Stable. In best: O(n) In worst: O(n^2)
* <b><em>Comb sort</em></b> is a relatively simple sorting algorithm. Comb sort improves on bubble sort in the same way that Shellsort improves on insertion sort. The basic idea is to eliminate turtles, or small values near the end of the list, since in a bubble sort these slow the sorting down tremendously. Rabbits, large values around the beginning of the list, do not pose a problem in bubble sort. Comparison through cycles (exchanging). Not stable. In best: O(n log(n)) In worst: O(n^2)
* <b><em>Heap sort</em></b>, like selection sort, heapsort divides its input into a sorted and an unsorted region, and it iteratively shrinks the unsorted region by extracting the largest element from it and inserting it into the sorted region. Comparison of parent and child (selection). Not stable. O(n log(n))
* <b><em>Insertion sort</em></b> is a simple sorting algorithm that builds the final sorted array (or list) one item at a time. Comparison of the row (insertion). Stable. In best: O(n) In worst: O(n^2)
* <b><em>Gnome sort</em></b>, nicknamed stupid sort, is a variation of the insertion sort sorting algorithm that does not use nested loops. Comparison of the row (exchanging). Stable. In best: O(n) In worst: O(n^2)
* <b><em>Stooge sort</em></b> is a recursive sorting algorithm. It is notable for its exceptionally bad time complexity. Comparison of first and last (exchanging). Not stable. O(n^(log(3)/log(1.5)))

## Substring search
In computer science, string-searching algorithms, sometimes called string-matching algorithms, are an important class of string algorithms that try to find a place where one or several strings (also called patterns) are found within a larger string or text. A basic example of string searching is when the pattern and the searched text are arrays of elements of an alphabet.

Currently available algorithms:

* <b><em>Boyer-Moore</em></b> is an efficient string-searching algorithm that is the standard benchmark for practical string-search literature. It was developed by Robert S. Boyer and J Strother Moore in 1977. Bad char heuristics, advanced naive algorithm. In best: O(m/n) In worst: O(mn)
* <b><em>Knuth–Morris–Pratt</em></b> string-searching algorithm (or KMP algorithm) searches for occurrences of a "word" W within a main "text string" S by employing the observation that when a mismatch occurs, the word itself embodies sufficient information to determine where the next match could begin, thus bypassing re-examination of previously matched characters. The algorithm was conceived by James H. Morris and independently discovered by Donald Knuth "a few weeks later" from automata theory. Morris and Vaughan Pratt published a technical report in 1970. In best: O(n) In worst: O(n+m)
* <b><em>Rabin-Karp</em></b> is a string-searching algorithm created by Richard M. Karp and Michael O. Rabin (1987) that uses hashing to find an exact match of a pattern string in a text. It uses a rolling hash to quickly filter out positions of the text that cannot match the pattern, and then checks for a match at the remaining positions. Hashing, compare hash of pattern with hash of text. O(mn)
* <b><em>Naïve algorithm</em></b> is a simple string-searching algorithm. It checks for all character of the main string to the pattern. Naive algorithm is exact string matching. Simple indexing, checks pattern and text one symbol at a time. In best: O(2m) In worst: O(nm)
* <b><em>Bitap (Shift-OR)</em></b>, distinguishes itself from other well-known string searching algorithms in its natural mapping onto simple bitwise operations. Uses features of circular bit shift and linearizability of bitwise OR and SHIFT. O(m*(n/32))

## Theory of numbers

In mathematics, the greatest common divisor (GCD) of two or more integers, which are not all zero, is the largest positive integer that divides each of the integers. For two integers x, y, the greatest common divisor of x and y is denoted gcd(x, y). For example, the GCD of 8 and 12 is 4.

Currently available algorithms:
* <b><em>Euclidean algorithm.</em></b> In mathematics, the Euclidean algorithm, or Euclid's algorithm, is an efficient method for computing the greatest common divisor (GCD) of two integers (numbers), the largest number that divides them both without a remainder. Iterative: O(log(a*b)) Recursive: O(log(a+b))
* <b><em>Stein's algorithm</em></b>, also known as binary GCD algorithm algorithm or the binary Euclidean algorithm, is an algorithm that computes the greatest common divisor of two nonnegative integers. Stein's algorithm uses simpler arithmetic operations than the conventional Euclidean algorithm; it replaces division with arithmetic shifts, comparisons, and subtraction. O(min(a, b)^2)
---
A prime number (or a prime) is a natural number greater than 1 that is not a product of two smaller natural numbers. A natural number greater than 1 that is not prime is called a composite number.

Currently available algorithms:
* <b><em>Eratosthenes sieve.</em></b> In mathematics, the sieve of Eratosthenes is an ancient algorithm for finding all prime numbers up to any given limit.
* <b><em>Sundaram sieve</em></b> In mathematics, the sieve of Sundaram is a variant of the sieve of Eratosthenes, a simple deterministic algorithm for finding all the prime numbers up to a specified integer. It was discovered by Indian student S. P. Sundaram in 1934.
---
Exponentiation is a mathematical operation, written as b^n, involving two numbers, the base b and the exponent or power n. It is pronounced as "b raised to the power of n". When n is a positive integer, exponentiation corresponds to repeated multiplication of the base: that is, b^n is the product of multiplying bases n-times.

Currently available algorithms:
* <b><em>Exponentiation Squaring</em></b> In mathematics and computer programming, exponentiating by squaring is a general method for fast computation of large positive integer powers of a number, or more generally of an element of a semigroup, like a polynomial or a square matrix.
---
Summation of sequence.
Currently available algorithms:
* <b><em>Kahan summation algorithm</em></b> In numerical analysis, the Kahan summation algorithm, also known as compensated summation, significantly reduces the numerical error in the total obtained by adding a sequence of finite-precision floating-point numbers, compared to the obvious approach.
* <b><em>Naive summation algorithm</em></b>, sum of all the elements in the sequence. O(n)

## Recursion and Iteration
In computer science, recursion is a method of solving a computational problem where the solution depends on solutions to smaller instances of the same problem. Recursion solves such recursive problems by using functions that call themselves from within their own code. The approach can be applied to many types of problems, and recursion is one of the central ideas of computer science.

Iteration is the repetition of a process in order to generate a (possibly unbounded) sequence of outcomes. Each repetition of the process is a single iteration, and the outcome of each iteration is then the starting point of the next iteration. In mathematics and computer science, iteration (along with the related technique of recursion) is a standard element of algorithms.

Currently available algorithms:

* <b><em>Factorial</em></b> In mathematics, the factorial of a non-negative integer n, denoted by n!, is the product of all positive integers less than or equal to n. The factorial of n also equals the product of n with the next smaller factorial. Iterative: O(n) Tail-recursion: O(n)
* <b><em>Fibonacci sequence</em></b> is a series of numbers in which each number is the sum of the two that precede it. Starting at 0 and 1, the sequence looks like this: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, and so on forever. Iterative: O(n) Recursive: O(n^2) Tail-recursion: O(n)

https://en.wikipedia.org/wiki \
https://www.geeksforgeeks.org \
https://www.programiz.com \
https://www.programmingalgorithms.com

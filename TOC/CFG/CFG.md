# Context-Free Grammar Examples

## Question 1

$$a^n b^m c^k \mid n,m,k \geq 0 \text{ and } n = 2m + 3k$$

$$a^{3k} a^{2m} b^m c^k$$

```bnf
S -> aaaSc | A
A -> aaAb | ε
```

## Question 2

$$a^n b^m \text{ where } m > n, n \geq 0$$

```bnf
S -> AZ
A -> aAb | ε
Z -> bZ | b
```

## Question 3

$$0^n 1^m \text{ where } n > m; n,m \geq 0$$

### Solution

```bnf
S -> 0A
A -> 0A | 0A1 | ε
```

## Question 33

$$0^n 1^m \text{ where } n > m; n,m \geq 0$$

> Another Approach

```bnf
let n = m+k; k>0; m≥0;

--> (0^{m+k} 1^m)
--> (0^k 0^m 1^m)

P -> AZ
A -> 0A | 0
Z -> 0Z1 | ε
```

> Alternate Approach

```bnf
--> (0^{m+k} 1^m)
--> (0^m 0^k 1^m) [Linked Terminal Separated]

S -> 0S1 | Z
Z -> 0Z | 0
```

## Question 4

$$0^x 1^y 0^z \text{ where } z = x+y; x,y,z \geq 0$$

### Solution:

$$0^x 1^y 0^{x+y}$$

$$0^x 1^y 0^y 0^x$$

```bnf
S -> 0S0 | Z
Z -> 1Z0 | ε
```

> True Cases:
- x=0, y=0: ε
- x=1, y=0: 00
- x=2, y=1: 001000

> False Cases:
- x=0 y=1: 010

## Question 5

$$0^a 1^b 0^c \text{ where } b = a+c$$

$$0^a 1^{(a+c)} 0^c$$

$$0^a 1^a 1^c 0^c$$

```bnf
S -> AB
A -> 0A1 | ε
B -> 1B0 | ε
```

## Question 6

$$a^n b^m \mid 0 \leq n \leq m \leq 2n$$

```bnf
S -> aSb | aSbb | ε
```

## Question 7

**W where W is even:**

```bnf
S -> 0S1 | 1S0 | 0S0 | 1S1 | ε
```

## Question 8

**W where W is ODD:**

```bnf
S -> 0S1 | 1S0 | 0S0 | 1S1 | 0 | 1
```

## Question 9

**W where W is Any String:**

```bnf
S -> 0S | 1S | ε
```

## Question 10

**W where W contains 100 as Substring:**

```bnf
S -> A100A
A -> 0A | 1A | ε
```

## Question 11

**W where W Starts and Ends with same symbol:**

```bnf
S -> 0A0 | 1A1
A -> 0A | 1A | ε
```

## Question 12

$$a^i b^j c^k; i,j,k \geq 0 \mid i = j \text{ or } i = k$$

$$a^j b^j c^k$$
$$a^k b^j c^k$$

```bnf
S -> A | B

A -> XY
X -> aXb | ε
Y -> cY | ε

B -> aBc | Z | ε
Z -> bZ | ε
```

## Question 13

$$0^n 1^m \text{ where } n \neq m$$

$$0^{n>m} 1^m$$
$$0^{n<m} 1^m$$

```bnf
S -> XA | BY

X -> 0X | 0
A -> 0A1 | ε

B -> 0B1 | ε
Y -> 1Y | 1
```

## Question 14

$$a^n b^n \text{ where } n \text{ is multiple of } 3$$

```bnf
let n = 3m; m≥0

S -> aaaSbbb | ε
```

## Question 15

$$a^n b^n \text{ where } n \text{ is not multiple of } 3$$

```bnf
let n = 3m; m≥0

S -> aaaSbbb | ab | aabb
```

## Question 16

**W where W is a string representing balanced parentheses:**

```bnf
S -> (S)S | ε
```

## Question 17

**All Strings with Equal number of 1's and 0's:**

```bnf
S -> 1S0S | 0S1S | ε
```

## Question 18

**All Strings where number of 1's is greater than number of 0's:**

```bnf
S -> X1X | S1X | X1S
X -> 1X0X | 0X1X | ε
```

## Question 19

**All Strings with Distinct numbers of 0's and 1's:**

```text
# n(0) < n(1)
Z -> E1E | Z1E | E1 | Z1Z
E -> 1E0E | 0E1E | ε

# n(0) > n(1)
Y -> E0E | Y0E | E0Y
E -> 1E0E | 0E1E | ε

# Combined grammar
S -> Y | Z
Y -> E0E | Y0E | E0Y
Z -> E1E | Z1E | E1 | Z1Z
E -> 1E0E | 0E1E | ε
```

## Question 20

>**EX: Number of 0's and 1's are ODD;**

```text
Z -> S0S1S | S1S0S

Even number of 0's and 1's
S -> 0S1S | 1S0S| ε | ZZ

```

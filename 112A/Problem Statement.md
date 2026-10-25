# A. Petya and Strings

**Time Limit:** 2 seconds  
**Memory Limit:** 256 megabytes

## Problem Statement

Little Petya loves presents. His mum bought him two strings of the same size for his birthday. The strings consist of uppercase and lowercase Latin letters.

Now Petya wants to compare those two strings lexicographically. The letters' case does not matter, that is, an uppercase letter is considered equivalent to the corresponding lowercase letter.

Help Petya perform the comparison.

## Input

Each of the first two lines contains a string.

- The strings' lengths range from 1 to 100 inclusive.
- It is guaranteed that the strings are of the same length.
- The strings consist of uppercase and lowercase Latin letters.

## Output

- If the first string is less than the second one, print `-1`.
- If the second string is less than the first one, print `1`.
- If the strings are equal, print `0`.

**Note:** The letters' case is not taken into consideration when the strings are compared.

## Examples

### Example 1

**Input**
```text
aaaa
aaaA
```

**Output**
```text
0
```

### Example 2

**Input**
```text
abs
Abz
```

**Output**
```text
-1
```

### Example 3

**Input**
```text
abcdefg
AbCdEfF
```

**Output**
```text
1
```

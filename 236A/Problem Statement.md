# A. Boy or Girl

## Problem Statement

Those days, many boys use beautiful girls' photos as avatars in forums. So, it is pretty hard to tell the gender of a user at first glance.

Our hero once chatted with a person he thought was a beautiful girl. They talked often and eventually became a couple online. However, when he met "her" in the real world, he discovered that "she" was actually a man!

To avoid this situation in the future, our hero came up with a method to determine a user's gender based on their username.

- If the number of **distinct characters** in the username is odd, the user is considered **male**.
- If the number of **distinct characters** in the username is even, the user is considered **female**.

Given a username, help our hero determine the user's gender using this method.

## Input

The first line contains a non-empty string consisting only of lowercase English letters. The username contains at most 100 characters.

## Output

If the user is female according to the method, print `CHAT WITH HER!`. Otherwise, print `IGNORE HIM!`.

## Examples

### Example 1

**Input**
```text
wjmzbmr
```

**Output**
```text
CHAT WITH HER!
```

### Example 2

**Input**
```text
xiaodao
```

**Output**
```text
IGNORE HIM!
```

### Example 3

**Input**
```text
sevenkplus
```

**Output**
```text
CHAT WITH HER!
```

## Note

In the first example, the username `wjmzbmr` contains 6 distinct characters: `w`, `j`, `m`, `z`, `b`, and `r`.

Since 6 is even, the output is `CHAT WITH HER!`.

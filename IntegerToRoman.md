# Integer to Roman

Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol | Value
--- | ---
I | 1
V | 5
X | 10
L | 50
C | 100
D | 500
M | 1000

For example, 2 is written as II in Roman numeral, just two one's added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

* I can be placed before V (5) and X (10) to make 4 and 9.
* X can be placed before L (50) and C (100) to make 40 and 90.
* C can be placed before D (500) and M (1000) to make 400 and 900.

__Given an integer, convert it to a roman numeral.__

## Examples

__Example 1:__

Input: num = 3

Output: "III"

__Example 2:__

Input: num = 4

Output: "IV"

__Example 3:__

Input: num = 9

Output: "IX"

__Example 4:__

Input: num = 58

Output: "LVIII"

Explanation: L = 50, V = 5, III = 3.

__Example 5:__

Input: num = 1994

Output: "MCMXCIV"

Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.

## Constraints

* 1 <= num <= 3999

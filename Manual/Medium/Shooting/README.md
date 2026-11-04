# Shooting

## Difficulty: Medium

## Platform: Manual

## Problem Link
[View Problem](https://www.codechef.com/problems/SHOOT0?tab=ide)

## Solved On
05 Nov 2026 at 12:09 am

This is the easy version of the problem. The only difference between this and hard version is the constraints on 
N
N — notably, in this version, 
N
=
1
N=1.
This problem is worth 
100
100 points in divisions 
3
3 and 
4
4, and 
10
10 points in division 
2
2

Aarsi and Krypto were competing in a shooting game.

You are given a matrix 
A
A of size 
N
×
M
N×M representing a shooting board. The cells of the matrix contain information about which player took a shot at which cell:

If 
A
(
i
,
j
)
=
0
A 
(i,j)
​
 =0, no player took a shot at that cell.
If 
A
(
i
,
j
)
=
1
A 
(i,j)
​
 =1, Aarsi took a shot at that cell.
If 
A
(
i
,
j
)
=
2
A 
(i,j)
​
 =2, Krypto took a shot at that cell.
If 
A
(
i
,
j
)
=
3
A 
(i,j)
​
 =3, both players took a shot at that cell.
Let the bullseye cell be 
(
x
1
,
y
1
)
(x 
1
​
 ,y 
1
​
 ), then, for a shot at cell 
(
x
2
,
y
2
)
(x 
2
​
 ,y 
2
​
 ), the score of the shot is calculated as 
max
⁡
(
∣
x
1
−
x
2
∣
,
∣
y
1
−
y
2
∣
)
max(∣x 
1
​
 −x 
2
​
 ∣,∣y 
1
​
 −y 
2
​
 ∣). The score of a player is the sum of scores of all shots by that player.

Your task is to consider each cell in the matrix as the bullseye cell and find the value of 
∣
∣Aarsi's score - Krypto's score
∣
∣ accordingly.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains two space-separated integers 
N
N and 
M
M — the number of rows and columns in the matrix, respectively.
The next 
N
N lines describe the matrix 
A
A. The 
i
t
h
i 
th
  of these lines contain 
M
M space-separated integers ― the values 
A
(
i
,
1
)
,
A
(
i
,
2
)
,
…
,
A
(
i
,
M
)
A 
(i,1)
​
 ,A 
(i,2)
​
 ,…,A 
(i,M)
​
 .
Output Format
For each test case, output a matrix 
B
B where 
B
(
i
,
j
)
B(i,j) denotes the value of 
∣
∣Aarsi's score - Krypto's score
∣
∣ considering 
(
i
,
j
)
(i,j) as the bullseye cell.

Constraints
1
≤
T
≤
10
4
1≤T≤10 
4
 
N
=
1
N=1
1
≤
M
≤
3
⋅
10
5
1≤M≤3⋅10 
5
 
0
≤
A
(
i
,
j
)
≤
3
0≤A 
(i,j)
​
 ≤3
The sum of 
N
⋅
M
N⋅M over all test cases won't exceed 
3
⋅
10
5
3⋅10 
5
 .
Sample 1:
Input
Output
2
1 5
2 1 3 0 1
1 8
1 1 3 0 2 0 3 3
5 2 1 0 1
3 2 1 4 7 8 9 10
Explanation:
Test case 
1
1: Aarsi took shot on cells 
(
1
,
2
)
,
(
1
,
3
)
,
(
1
,
5
)
(1,2),(1,3),(1,5) while Krypto took shot on cells 
(
1
,
1
)
,
(
1
,
3
)
(1,1),(1,3).

Considering 
(
1
,
2
)
(1,2) as the bullseye cell, Aarsi's score would be 
max
⁡
(
∣
1
−
1
∣
,
∣
2
−
2
∣
)
+
max
⁡
(
∣
1
−
1
∣
,
∣
2
−
3
∣
)
+
max
⁡
(
∣
1
−
1
∣
,
∣
2
−
5
∣
)
=
4
max(∣1−1∣,∣2−2∣)+max(∣1−1∣,∣2−3∣)+max(∣1−1∣,∣2−5∣)=4. Similarly, Krypto's score would be 
2
2.

Thus, 
B
(
1
,
2
)
=
∣
4
−
2
∣
=
2
B 
(1,2)
​
 =∣4−2∣=2.

## My Notes / Approach:

/*
Stephanie just learned about a game called Nim in which there are two players and piles of stones.
 During each turn, a player must choose any non-empty pile and take as many stones as they want.
 The first player who cannot complete their turn (i.e., because all piles are empty) loses.

Stephanie knows that, for each start position in this game, it's possible to know which player will win
(i.e., the first or second player) if both players play optimally. Now she wants to know the number of different games
that exist that satisfy all of the following conditions:

    1.The game starts with n piles and each pile contains less than 2^m stones.
    2.All the piles contain pairwise different numbers of stones.
    3.The first player wins if that player moves optimally.

Help Stephanie by finding and printing the number of such games satisfying all the above criteria, modulo 10^9 + 7.

Input Format

The first line contains two space-separated integers describing the respective values of n and m.

Constraints

1 <= n,m <= 10e7
Output Format

Print the number of such games, modulo 10^9 + 7.

Sample Input 0

2 2

Sample Output 0

6

Explanation 0

We want to know the number of games with piles where each pile contains stones.
There are six such possible games with the following distributions of stones:(1,2),(1,3),(2,1),(2,3),(3,1), (3,2) .
 Thus, we print the result of 6 mod 10^9 + 7 = 6 as our answer.
*/

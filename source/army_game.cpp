/*
Your submission will run against only preliminary test cases. Full test cases will run at the end of the day.

Luke is daydreaming in Math class. He has a sheet of graph paper with rows and columns, and he imagines that there is an army base in each cell for a total of bases. He wants to drop supplies at strategic points on the sheet, marking each drop point with a red dot. If a base contains at least one package inside or on top of its border fence, then it's considered to be supplied. For example:

image

Given and , what's the minimum number of packages that Luke must drop to supply all of his bases?

Input Format

Two space-separated integers describing the respective values of and .

Constraints

Output Format

Print a single integer denoting the minimum number of supply packages Luke must drop.

Sample Input 0

2 2

Sample Output 0

1

Explanation 0

Luke has four bases in a grid. If he drops a single package where the walls of all four bases intersect, then those four cells can access the package:

image

Because he managed to supply all four bases with a single supply drop, we print as our answer.
*/

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    int m;
    cin >> n >> m;
    int col = m/2;
    if (m%2 == 1) col++;
    int row = n/2;
    if (n%2 == 1) row++;
    cout<<row*col;
    return 0;
}

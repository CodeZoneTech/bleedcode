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
    cin >> n;
    vector<int> c(n);
    for(int c_i = 0;c_i < n;c_i++){
       cin >> c[c_i];
    }
    vector<int>d(n, 10000);
    d[0] = 0;
    for (int i = 0; i < n; ++i) {
        if (c[i] == 1) continue;
        if (i + 1 < n && c[i + 1] == 0) {
            d[i + 1] = min(d[i + 1], d[i] + 1);
        }
        if (i + 2 < n && c[i + 2] == 0) {
            d[i + 2] = min(d[i + 2], d[i] + 1);
        }
    }
    cout << d[n - 1] << endl;
    return 0;
}
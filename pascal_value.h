#include <bits/stdc++.h>
using namespace std;
int pascal_value(int row, int col, map<pair<int, int>, int>& map)
{
    if(col == 1 || col == row)
    {
        return 1;
    }
    else if(map.find(make_pair(row, col)) != map.end())
    {
        return  map[{row, col}];
    }
    else
    {
        map[{row, col}] = pascal_value(row - 1, col - 1, map) + pascal_value(row - 1, col, map);
        return map[{row, col}];
    }
}

int main()
{
   int row, col;
   map <pair<int, int>, int> map;
   cin >> row >> col;
   cout << pascal_value(row, col, map);
}
#include <bits/stdc++.h>
using namespace std;

char gird[105][105];
bool vis[105][105];
int level[105][105];

// vector<pair<int, int>> dir = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
vector< pair<int, int> > dir;

int n;
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= n)
        return false;
    return true;
}

void bfs(int si, int sj)
{
    queue< pair<int, int> > q;
    q.push({si, sj});
    vis[si][sj] = true;
    level[si][sj] = 0;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;
        for (int i = 0; i < 4; i++)
        {
            int ci = par_i + dir[i].first;
            int cj = par_j + dir[i].second;

            if (valid(ci, cj) && !vis[ci][cj] && (gird[ci][cj] == 'P' || gird[ci][cj] == 'E'))

            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[par_i][par_j] + 1;
            }
        }
    }
}

int main()
{
    dir.push_back(make_pair(-1, 0));
    dir.push_back(make_pair(1, 0));
    dir.push_back(make_pair(0, -1));
    dir.push_back(make_pair(0, 1));
    // cin >> n;
    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> gird[i][j];
                vis[i][j] = false;
                level[i][j] = -1;
            }
        }
        int si, sj, di, dj;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (gird[i][j] == 'S')
                {
                    si = i;
                    sj = j;
                }
                if (gird[i][j] == 'E')
                {
                    di = i;
                    dj = j;
                }
            }
        }
        bfs(si, sj);
        if (gird[di][dj] == 'E')
        {
            cout << level[di][dj] << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
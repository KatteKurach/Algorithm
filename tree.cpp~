#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> tree[1000000];
bool vertics[100000];
bool used[10000];

void dfs(int v)
{
    vertics[v] = true;
    for (int i = 0; i < (int)tree[v].size(); i++)
    {
        if(vertics[tree[v][i]] == false)
        {
            dfs(tree[v][i]);
        }
    }
}

void bfs(int v)
{
    queue<int> q;
    q.push(v);
    used[v] = true;
    while(!q.empty())
    {
        for (int i = 0; i < (int)tree[v].size(); i++)
        {
            if (!used[tree[v][i]])
            {
                q.push(tree[v][i]);  
                used[tree[v][i]] = true;
            }
        }

        v = q.front();
        q.pop();
    }
}

int main()
{
    freopen("input", "r", stdin);

    int r;
    cin >> r;

    int v1, v2;
    

    for (int i = 0; i < r; i++)
    {
        cin >> v1 >> v2;
        v1--;
        v2--;
        tree[v1].push_back(v2);
        tree[v2].push_back(v1);
    }

    dfs(0);
    bfs(0);

    for (int i = 0; i < 7; i++)
    {
        if (!used[i])
        {
            cout << "oooo no";
            cout << " "<< i;
        }
    }
}


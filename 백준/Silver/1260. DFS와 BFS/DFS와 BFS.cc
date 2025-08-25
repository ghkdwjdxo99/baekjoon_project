#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
    stack<int> s;
    queue<int> q;
    vector<int> list[1001];
    int vis_bfs[1001] = {0, };
    int vis_dfs[1001] = {0, };
    int N, M, V;

    cin >> N >> M >> V;

    for(int i = 0; i < M; i++)
    {
        int x, y;
        cin >> x >> y;
        list[x].push_back(y);
        list[y].push_back(x);
    }

    for(int i = 1; i <= N; i++)
        sort(list[i].begin(), list[i].end());

    //dfs
    s.push(V);
    while(!s.empty())
    {
        int now = s.top();
        s.pop();

        if(vis_dfs[now])
            continue;
        vis_dfs[now] = 1;
        cout << now << " ";

        for(int i = list[now].size() - 1; i >= 0; i--)
        {
            int n = list[now][i];
            if(vis_dfs[n] == 0)
            {
                s.push(n);
            }
        }
    }

    cout << '\n';

    // bfs
    q.push(V);
    vis_bfs[V] = 1;
    while(!q.empty())
    {
        int now = q.front();
        q.pop();

        for(int n : list[now])
        {
            if(vis_bfs[n] == 0)
            {
                q.push(n);
                vis_bfs[n] = 1;
            }
        }
        cout << now << " ";
    }

    return 0;
}
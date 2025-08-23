#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
    int computerNum, computerPairCnt;
    vector<int> computerArr[101];
    int vis[101] {0, };
    int virusCnt = 0;
    stack<int> s;

    cin >> computerNum >> computerPairCnt;

    for(int i = 0; i < computerPairCnt; i++)
    {
        int x, y;
        cin >> x >> y;

        computerArr[x].push_back(y);
        computerArr[y].push_back(x);
    }

    int nowIdx;
    vis[1] = 1;
    s.push(1);
    while(!s.empty())
    {
        nowIdx = s.top();
        s.pop();

        for(int n : computerArr[nowIdx])
        {
            if(vis[n] == 0) // 방문하지 않았을 경우만 스택에 넣기
            {
                s.push(n);
                vis[n] = 1;
                virusCnt++;
            }
        }
    }
    cout << virusCnt;

    return 0;
}
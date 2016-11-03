#include <iostream>
#include <vector>
#include <queue>

#define POSITIONS 4

using namespace std;

int graphSize;
pair<int,int> positionsToVisit[POSITIONS] = {make_pair(1,0), make_pair(0,1),
                                     make_pair(-1,0), make_pair(0,-1)};

bool bfs(vector<vector<int> > graph, int search)
{
    bool alreadyVisit [graphSize][graphSize];
    queue<pair<int,int> > nextToVisit;
    pair <int,int> next;

    nextToVisit.push(make_pair(0, 0));
    while(!nextToVisit.empty())
    {
        next = nextToVisit.front();
        nextToVisit.pop();
        for(int i = 0; i < POSITIONS; ++i)
        {
            int x = next.first + positionsToVisit[i].first;
            int y = next.second + positionsToVisit[i].second;
            if(x < graphSize and 0 <= x and y < graphSize and 0 <= y and !alreadyVisit[x][y])
            {
                if(graph[x][y] == search)
                    return true;
                if(graph[x][y] != 0)
                    nextToVisit.push(make_pair(x,y));
                alreadyVisit[x][y] = true;
            }
        }
    }
    return false;
}

int main()
{
    cin >> graphSize;
    int search;
    cin >> search;
    vector<vector<int> > graph(graphSize, vector<int>(graphSize));
    for(int i = 0; i < graphSize; ++i)
        for(int j = 0; j < graphSize; ++j)
            cin >> graph[i][j];
    cout << "BFS = " << bfs(graph, search) << endl;
}

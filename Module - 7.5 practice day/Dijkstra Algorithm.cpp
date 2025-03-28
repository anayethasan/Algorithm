#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      vector<int> dijkstra(vector<vector<pair<int, int>>> &adj, int src) {
          int n = adj.size();
          vector<int> dis(n, INT_MAX);
          
          priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
          pq.push({0, src});
          dis[src] = 0;
          
          while(!pq.empty())
          {
              pair<int, int> par = pq.top();
              pq.pop();
              
              int par_node = par.second;
              int par_dis = par.first;
              
              for(auto child : adj[par_node])
              {
                  int child_node = child.first;
                  int child_dis = child.second;
                  if(par_dis + child_dis < dis[child_node])
                  {
                      dis[child_node] = par_dis + child_dis;
                      pq.push({dis[child_node], child_node});
                  }
              }
          }
          
          return dis;
      }
  };
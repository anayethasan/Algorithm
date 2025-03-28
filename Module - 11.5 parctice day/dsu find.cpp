int find(int par[], int x) 
{
    if(par[x] == x)
        return x;
    
    return par[x] = find(par, par[x]);
}

void unionSet(int par[], int x, int z) 
{
    int leader1 = find(par, x);
    int leader2 = find(par, z);
    
     if(leader1 != leader2)
     {
        par[leader1] = leader2;
     }
}
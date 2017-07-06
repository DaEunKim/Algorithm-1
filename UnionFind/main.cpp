#include <cstdio>
#include <vector>

class DisjointSet {
public:
    std::vector<int> parent;
    
    DisjointSet(int n)
    : parent(n)
    {
        for (int i=0; i < n; i++) {
            parent[i] = i;
        }
    }
    
    int find (int u)
    {
        if (u == parent[u]) {
            return u;
        }
        
        return find(parent[u]);
    }
    
    void merge (int u, int v)
    {
        u = find(u);
        v = find(v);
        
        if (u == v) {
            return ;
        }
        
        parent[v] = u;
    }
};

int main(void)
{
    DisjointSet dj(1024);
    dj.merge(6, 10);
    dj.merge(10, 7);
    dj.merge(7, 17);
    
    printf("[%d]\n", dj.find(17));
}

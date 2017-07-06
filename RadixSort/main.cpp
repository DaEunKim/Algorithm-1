#include <cstdio>
#include <queue>

#define BUCKETS 10
#define MAX_DEGITS 4

void radixSort(int data[], int size)
{
    std::queue<int> q[BUCKETS];
    
    int factor = 1;
    for (int i=0; i<MAX_DEGITS; i++) {
        for (int di=0; di<size; di++) {
            q[data[di]/factor%10].emplace(data[di]);
        }
        
        for (int qi=0, di=0; qi<BUCKETS; qi++) {
            while (!q[qi].empty()) {
                data[di++] = q[qi].front();
                q[qi].pop();
            }
        }
        
        factor *= 10;
    }
}

int main(int argc, const char * argv[])
{
    int arr[] = {5, 4, 3, 2, 1};
    
    radixSort(arr, 5);
    
    for (auto i : arr) {
        printf("%d ", i);
    }
}

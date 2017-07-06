#include <cstdio>
#include <algorithm>

void selectionSort(int data[], int size)
{
    int minIt;
    
    for (int i=0; i<size; i++) {
        minIt = i;
        
        for (int j=i+1; j<size; j++) {
            if (data[minIt] > data[j]) {
                minIt = j;
            }
        }
        
        std::swap(data[i], data[minIt]);
    }
}

int main(int argc, const char * argv[])
{
    int arr[] = {5, 4, 3, 2, 1};
    
    selectionSort(arr, 5);
    
    for (auto i : arr) {
        printf("%d\n", i);
    }
}

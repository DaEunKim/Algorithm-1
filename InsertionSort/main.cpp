#include <cstdio>

void insertionSort(int data[], int size, int comp(int, int))
{
    for (int i=1; i<size; i++) {
        int key = data[i];
        
        int j;
        for (j=i-1; j>=0; j--) {
            if (comp(data[j], key)) {
                break;
            }
            
            data[j+1] = data[j];
        }
        
        data[j+1] = key;
    }
}

int main(int argc, const char * argv[])
{
    int arr[] = {5, 4, 3, 2, 1};
    
    insertionSort(arr, 5, [](int a, int b)->int {
        return a < b;
    });
    
    for (auto i : arr) {
        printf("%d ", i);
    }
}

#include <cstdio>
#include <algorithm>

void bubbleSort(int data[], int size, int comp(int, int))
{
    for (int i=size-1; i>0; i--) {
        for (int j=0; j<i; j++) {
            if (!comp(data[j], data[j+1])) {
                std::swap(data[j], data[j+1]);
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    int arr[] = {5, 4, 3, 2, 1};
    
    bubbleSort(arr, 5, [](int a, int b)->int {
        return a < b;
    });
    
    for (auto i : arr) {
        printf("%d ", i);
    }
}

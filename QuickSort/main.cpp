#include <cstdio>
#include <algorithm>

int partition(int data[], int left, int right)
{
    int j = left;
    int pivot = data[left];
    
    for (int i=left+1; i<=right; i++) {
        if (data[i] < pivot) {
            j++;
            std::swap(data[i], data[j]);
        }
    }
    
    int pivotPos = j;
    std::swap(data[left], data[pivotPos]);
    
    return pivotPos;
}

void quickSort(int data[], int left, int right)
{
    if (left < right) {
        int pivotPos = partition(data, left, right);
        quickSort(data, left, pivotPos-1);
        quickSort(data, pivotPos+1, right);
    }
}

int main(int argc, const char * argv[]) {
    int arr[] = {5, 4, 3, 2, 1};
    quickSort(arr, 0, 5);
    
    for (auto i : arr) {
        printf("%d ", i);
    }
}

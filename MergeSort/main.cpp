#include <cstdio>
#include <cstring>

#define MAX_SIZE 1024

void merge(int data[], int left, int mid, int right)
{
    static int sorted[MAX_SIZE];
    
    int i = left;
    int j = mid+1;
    int k = left;
    
    while (i <= mid && j <= right) {
        sorted[k++] = (data[i] < data[j])? data[i++]: data[j++];
    }
    
    int start, end;
    if (i > mid) {
        start = j;
        end = right;
    }
    else {
        start = i;
        end = mid;
    }
    
    for (int l=start; l<=end; l++) {
        sorted[k++] = data[l];
    }
    
    memcpy(data, sorted, sizeof(int)*(right+1));
}

void mergeSort(int data[], int left, int right)
{
    if (left < right) {
        int mid = (left + right) / 2;
        mergeSort(data, left, mid);
        mergeSort(data, mid+1, right);
        merge(data, left, mid, right);
    }
}

int main(int argc, const char * argv[]) {
    int arr[] = {5, 4, 3, 2, 1};
    
    mergeSort(arr, 0, 4);
    
    for (auto i : arr) {
        printf("%d ", i);
    }
}

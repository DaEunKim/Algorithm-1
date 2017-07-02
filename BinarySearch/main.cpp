#include <cstdio>

int binarySearch(int data[], int size, int n)
{
    int start = 0;
    int end = size-1;
    int mid;
    
    while(start <= end) {
        mid = (start+end)/2;
        
        if (data[mid] == n) {
            return mid;
        }
        
        if (data[mid] < n) {
            start = mid+1;
        }
        else {
            end = mid-1;
        }
    }
    
    return -1;
}

int main(int argc, const char * argv[]) {
    int arr[] = {1, 3, 5, 8, 10};
    
    printf("binary search = %d\n", binarySearch(arr, 5, 8));
}

#include <cstdio>

int lowerBound(int data[], int size, int n)
{
    int start = 0;
    int end = size-1;
    int mid;
    while (start < end) {
        mid = (start+end)/2;
        if (data[mid] < n) {
            start = mid+1;
        }
        else {
            end = mid;
        }
    }
    
    return end;
}

int main(int argc, const char * argv[])
{
    int arr[] = {1, 3, 5, 8, 10};
    
    printf("lower bound = %d\n", lowerBound(arr, 5, 7));
}

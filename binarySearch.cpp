#include <iostream>
using namespace std;

int binarySearch( int arr[], int target, int left, int right ) {     
    while ( left <= right ) {
        
        int middle = ( left + right )/2;
        
        if ( arr[middle] == target ) {
            return middle;
        } // end if
            
        else if ( arr[middle] > target ) {
            right = middle-1;
        } // end else if
        else {
            left = middle+1;
        } // end else
            
    } // end while
    return -1;
} // end binarySearch

int main() {

    int target = 2;

    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};

    cout << endl << binarySearch(arr, target, 1, 20) << endl;
    
    return 0;
} // end main
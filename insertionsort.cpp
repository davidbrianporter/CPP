#include <iostream>

using namespace std;

void insertionsort (int arr[], int length) 
{
    int j, temp;

    for (int i = 0; i < length; i++)
    {
        j = i;
        
        while (j < 0 && arr[j] < arr[j-1])
        {
            temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }

    for ( int i = 0; i < length; ++i )
    {
        std::cout << arr[i] << ' ';
    } std::cout << std::endl;
}

int main()
{
    int myA[5] = {5,4,3,2,1};
    int myAsize = sizeof(myA)/sizeof(*myA);
    /*
    1. define the array
       print out the array
    2. get the length
    3. call the function
    4. print the array again
    */
    for ( int i = 0; i < myAsize; ++i )
    {
        std::cout << myA[i] << ' ';
    } std::cout << std::endl;


    insertionsort(myA, myAsize);

    cout << "sorting..." << endl;

    for ( int i = 0; i < myAsize; ++i )
    {
        std::cout << myA[i] << ' ';
    } std::cout << std::endl;

return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {9, 1, 2, 0, 5, 7, 4, 6, 3, 8};
    for(int i = 0;i < 10;i++){
        int at = i;
        for(int j = i; j < 10; j++){
            if(arr[at] > arr[j]){
                at = j;
            }
        }

        // swap
        int tmp;
        tmp = arr[i];
        arr[i] = arr[at];
        arr[at] = tmp;

        for(int k=0;k<10;k++){
            printf("%d ", arr[k]);
        }
        printf("\n");
        
    }
    
    for(int k=0;k<10;k++){
        printf("%d ", arr[k]);
    }
    printf("\n");

    return 0;
}
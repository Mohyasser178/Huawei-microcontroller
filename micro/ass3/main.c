#include <stdio.h>
#include <stdlib.h>
int main()
{    const int size=5;
    int arr[]={2,1,9,3,4};
    for(int outter_index=0;outter_index<=size-2;outter_index++){
        for(int inner_index=0;inner_index<=size-2-outter_index;inner_index++){
if (arr[inner_index]>arr[outter_index+1]){
    int temp;
    temp=arr[inner_index];
    arr[inner_index]=arr[inner_index+1];
    arr[inner_index+1]=temp;}
        }
    }
    for (int z=0;z<size;z++)
        printf("%d,",arr[z]);

    return 0;
}


//Algorithm to detect duplicates

#include<stdio.h>

int main(int arr[]){


    return 0;
}



/* 
Psuedocode: 

bool has_duplicates(a, n){
    for each element a[i] {
        for each element a[j] from i+1 to end {
            if a[i] == a[j]
            {
                return true
            }
        }
    }
    return false
}


The amount of time it takes is proportional to: the square of length of array

The amount of storage is constant; doesn't depend on the size of the array


*/
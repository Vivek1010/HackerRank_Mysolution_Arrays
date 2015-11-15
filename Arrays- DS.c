/*
Problem Statement
An array is a series of elements of the same type placed in contiguous memory locations
that can be individually referenced by adding an index to a unique identifier.
You'll be given an array of N integers, and you have to print the integers in reverse order.
Note: If you have already solved the problem "Arrays Introduction" in the Introduction chapter of the C++ domain, you may skip this challenge.
Input Format
The first line of input contains N, the number of integers. The next line contains N integers separated by a space.
Constraints
1<=N<=1000
1<=Ai<=10000, where Ai is the ith integer in the array.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void print_elem(int a[] , int len, int start){
    start++;
    if(start == len){
        return;
    }
    print_elem(a,len,start);
    printf("%d ",a[start]);
}
int main() {

    int t = 0;
    int a[10000] = {0,};
    int i = 0;
    int start = -1;
    int len ;
    scanf("%d",&t);
    len = t;
    while(t--){     
        scanf("%d",&a[i]);
        i++;
    }
    print_elem(a,len,start);
    return 0;
}

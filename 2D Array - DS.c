/*
Problem Statement
You are given a 2D array with dimensions 6*6. 
An hourglass in an array is defined as a portion shaped like this:

a b c
  d
e f g

For example, if we create an hourglass using the number 1 within an array full of zeros, 
it may look like this:

1 1 1 0 0 0
0 1 0 0 0 0
1 1 1 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
Actually, there are many hourglasses in the array above. The three leftmost hourglasses are the following:

1 1 1     1 1 0     1 0 0
  1         0         0
1 1 1     1 1 0     1 0 0

The sum of an hourglass is the sum of all the numbers within it.
The sum for the hourglasses above are 7, 4, and 2, respectively.
In this problem, you have to print the largest sum among all the hourglasses in the array.
Note: If you have already solved the problem "Java 2D array" 
in the data structures chapter of the Java domain, you may skip this challenge.
Input Format
There will be exactly 6 lines of input, each containing 6 integers separated by spaces. Each integer will be between -9 and 9, inclusively.
Output Format
Print the answer to this problem on a single line.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a[6][6] = {(0,0),};
    int i,j;
    int c = 0;          //colum
    int r = 0;          //row
    int pre_max = -63;  // -9 X 7 = -63
    int max = 0;
    
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<4;i++){
        
        for(j=0;j<4;j++){
            
            c = j;
            r = i;
            
            max = a[r][c] + a[r][c+1] + a[r][c+2]
                          +a[r+1][c+1]+
                  a[r+2][c] + a[r+2][c+1] + a[r+2][c+2];
            
            if(pre_max < max){
                pre_max = max;
            }
                      
        }
    }
    
    printf("%d",pre_max);
    return 0;
}

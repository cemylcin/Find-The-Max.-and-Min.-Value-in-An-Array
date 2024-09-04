#include <stdio.h>

/* Write a function that returns max. value in a given array.
 Write a function that returns min. value in a given array.
*/

#define SIZE 10
int return_max_value(int *pTr , int size )
{
       int max_value = pTr[0] ; 
       
       for(int i=1 ; i<size ; i++)
       {
        if(pTr[i]>max_value)
        
             max_value = pTr[i] ;
              
        
        
       }
       return max_value ;
}

int return_min_value(int *pTr , int size )
{
       int min_value = pTr[0] ; 
       
       for(int i=1 ; i<size ; i++)
       {
        if(pTr[i]<min_value)
        
             min_value = pTr[i] ;
              
        
        
       }
       return min_value ;
}


int main()
{
   
    int array[SIZE] = {8,2,99,4,11,62,71,8,9,88} ; 
    int result = return_max_value(array,SIZE);
    int result2 = return_min_value(array,SIZE) ;

    printf("Max Number: %d\n",result) ; 
    printf("Min Number: %d",  result2) ;
    return 0 ; 
}
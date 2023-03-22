
#include <stdio.h>

void swap( int *x, int *y )
{
    int temp = *x;
    *x = *y;
    *y = temp; 
}


void BubbleSort( int a[], int n )
{
    for( int i = 0; i < n-1; i++ )
    {
        int swapCounter = 0;

        for( int j = 0; j < n-i-1; j++ )
        {
            if( a[j] > a[j+1] )
            {
                swap( &a[j], &a[j+1] );
                swapCounter++;
            }
        }

        printf("\nPass #%d: %d", i+1, swapCounter);
    }
}


int main(void)
{
    int input[] = {97,16,45,63,13,22,7,58,72};

    int length = sizeof(input) / sizeof(int);
      
    BubbleSort( input, length );

    printf("\n\n");

    return 0;
}


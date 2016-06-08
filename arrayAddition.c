/* Puzzle C11 -- add up all the integers in an array of integers */

long addArray( int arr[], int size )
{
    long sum=0;
    int i;
    for(i=0;i<size;i++) {
        sum += arr[i];
    }
    return sum;
}

void printArray( int arr[], int size )
{
      const int N = 10;
        int j;
          
          for ( j=0; j<size; j++ )
                {
                        if ( j%N == N-1 )
                                  printf("%4d\n", arr[j] );
                            else
                                      printf("%4d ", arr[j] );    
                              }
}

#define SIZE 10
int main(int argc, char *argv[])
{
      int x[ SIZE ] = { -1, 1, -2, 2, -9, 3, -4, 4, -5, 5 };
        
        printArray( x, SIZE );
          printf("\n");
            printf("sum = %ld\n", addArray( x, SIZE ) );
              
                return 0;
}


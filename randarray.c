#include <stdlib.h>
#include "randarray.h"




double randDoubleRange( double min, double max )
{
      return (rand()*(max-min))/(RAND_MAX+1.0) + min;
}

void fillArrayRandomDouble( double arr[], int size, double low, double high )
{
    int j;
    for ( j=0; j < size; j++ )
        arr[j] = randDoubleRange( low, high );
}



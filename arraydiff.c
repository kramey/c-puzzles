#include <stdio.h>
#include <stdlib.h>

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


int main(void) {
    double first[10];
    double second[10];
    double sum=0;
    double diff;
    double min=0.0;
    double max=10.0;
    fillArrayRandomDouble(first,10,min,max);
    fillArrayRandomDouble(second,10,min,max);

    int i;
    for(i=0;i<10;i++){
        diff = first[i] - second[i];
        sum += diff*diff;
        printf("%f\t%f\t%f\t%f\n", first[i],second[i],diff,sum);
    }
}

#include <stdio.h>
#include <stdlib.h>


int main()
{
    char name[10];
    int age;
    float weight;
    FILE * fp;

    fp = fopen ("test.txt", "r");
                      
                         
    fscanf(fp, "%s %d %f", name, &age, &weight);
                            
    printf("Name |%s|\n", name );
    printf("age |%d|\n", age );
    printf("weight |%5.1f|\n", weight );

    fclose(fp);
                                           
    return(0);
}

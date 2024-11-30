#include <stdio.h>
#include <stdlib.h>
#define MAX_ARRAY_SIZE 128


//____________________________________________________________________________________________________________________
// episode of my_future_plans


void my_future_plans( int* aziz_1, char* aziz_2)
{
    int aza_1 = 0;
    while( aziz_2[aza_1] != '\0')
    {
        if( aziz_2[aza_1] != '"')
        {
            aziz_1[(int)aziz_2[aza_1]]++;
        }
        aza_1++;
    }
}



//__________________________________________________________________________________________________________________
// episode my_future_job


void my_future_job( int* iphone, int samsung )
{
    int weight  = 0;
    while(weight < samsung)
    {
        if( iphone[weight] > 0)
        {
            printf( "%c:%i\n", weight, iphone[weight] );
        }
        weight++;
    }
}



//__________________________________________________________________________________________________________________
// episode my_future_home


int main ( int redmi, char** honor)
{
    int papper = 1,array[MAX_ARRAY_SIZE] = {0};
    while( papper < redmi )
    {
        my_future_plans(&array[0],honor[papper]);
        papper++;
    }
    my_future_job(&array[0], 128);
    return EXIT_SUCCESS;
}

//this project is not so hard
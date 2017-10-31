/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>
#include <stdio.h>
#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // use linear search
    for (int i = 0; i <= n; i++)
    {
        if (values[i] == value)     /* if required element found */
        {
            return true;
        }
    
    } 
    return false;
}
/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    int swaps;
    do
    {
        swaps = 0;
        for(int i = 0; i < n; i++)
        {
            if(values[i] > values[i + 1])
            {
                int temp = values[i];
                values[i] = values[i + 1];
                values[i + 1] = temp;
                swaps++;
            }
        }
    }
    while(swaps != 0);
    return;
}
#include <stdio.h>
#include <time.h>

int main()
{
    clock_t start_time, end_time;
    double cpu_time_used;

    start_time = clock(); // start the timer
    int total_number_of_primes = 0;
    int number = 1;
    while (number < 50000)
    {
        int testnumber = 2;
        while (testnumber < number)
        {
            if (number % testnumber == 0)
            {
                // not prime
                break;
            }
            testnumber++;
        }
        if (testnumber == number){
            //it is prime
            total_number_of_primes ++;
        }
        number++;
    }
    end_time = clock(); // end the timer

    cpu_time_used = ((double)(end_time - start_time)) / CLOCKS_PER_SEC; // calculate the time used in seconds

    printf("Time used: %f seconds\n", cpu_time_used);
    printf("Total number of primes is %d\n",total_number_of_primes);
    return 0;
}
import time

start_time = time.process_time() # start the timer

number = 1
total_number_of_primes = 0
while number < 50000:
    testnumber = 2
    while testnumber < number:
        if number % testnumber == 0:
            # not prime
            break
        testnumber += 1   
    if testnumber == number:
        total_number_of_primes += 1

    
    number += 1

end_time = time.process_time() # end the timer

cpu_time_used = end_time - start_time # calculate the time used in seconds

print("Time used: ", cpu_time_used, " seconds")
print("Total number of primes is ",total_number_of_primes)
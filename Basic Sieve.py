upperBound = input("Enter the upper bound number: ")

prime = [True]*(upperBound + 1) #List of booleans all set to True


prime[0] = False #0 is not prime
prime[1] = False #1 is not prime

print "Generating all primes between 2 and", upperBound

for p in range(2, (upperBound/2) + 1):
    print "Checking", str(p)
    if prime[p] == True:
        k = p + p 
        print " ", str(p), "is prime"
        for x in range(k, upperBound + 1, p): 
            print " ", str(x), "is not prime"
            prime[x] = False 


primeNumbers = []
for x in range(len(prime)): 
    if prime[x] == True: 
        primeNumbers.append(x) 

print "The prime numbers are:"
print primeNumbers


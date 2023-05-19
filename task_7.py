n = int(input()) 

def f(n): 
    if n <= 2: 
        return 2**n 
    if n == 3: 
        return 7 
    return f(n-1)*2-f(n-4)

print(f(n))

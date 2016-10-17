def fibonacci(n):
    l=[0, 1]
    if n == 0:
        return 0
    for i in range(2,n+1):
        l.append(l[i-2]+l[i-1])
    return l[-1]

def fibonacci2(n):
    f1 = 0
    f2 = 1
    for i in range(2,n+1):
        f2 = f1 + f2
        f1 = f2 - f1
    return f2

def fibonacci3(n):
    if n == 0: return 0
    if n == 1: return 1
    return fibonacci3(n-1) + fibonacci3(n-2)

print fibonacci(100)
print fibonacci2(100)
print fibonacci3(30)

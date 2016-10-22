def exp2(n, e):
    if e == 0: return 1
    aux = 1
    while e > 1:
        if e % 2 == 0:
            n *= n
        else:
            aux *= n
            n *= n
        e /=2
    return n * aux

def exp(n, e):
    if e == 0: return 1
    elif e%2==1: return n*exp(n*n, e/2)
    return exp(n*n, e/2)

assert exp(5,1)==5
assert exp(5,2)==25
assert exp(5,3)==125
assert exp(5,4)==625
assert exp(5,5)==3125
assert exp(5,6)==15625
assert exp(5,7)==78125
assert exp(5,8)==390625

assert exp2(5,1)==5
assert exp2(5,2)==25
assert exp2(5,3)==125
assert exp2(5,4)==625
assert exp2(5,5)==3125
assert exp2(5,6)==15625
assert exp2(5,7)==78125
assert exp2(5,8)==390625

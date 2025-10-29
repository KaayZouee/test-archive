def num_max(N, K):
    a = list(str(N))
    S = []
    
    for digit in a:
        while S and K > 0 and S[-1] < digit:
            S.pop()
            K -= 1
        S.append(digit)
    
    while K > 0:
        S.pop()
        K -= 1
    
    return ''.join(S)

N = int(input())
K = int(input())
print(num_max(N, K))

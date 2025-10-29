def CP_counter(S):
    cnt = 0
    i = 0
    num = []
    while cnt <= S:
        num.append((i+1)**2)
        cnt += len(str(num[i]))
        i += 1
    
    sep_digi = []
    for number in num:
        for indi_num in str(number):
            sep_digi.append(indi_num)
    
    return sep_digi[S-1]

S = int(input())

print(CP_counter(S))

from itertools import permutations

N=8
sol=0
columns = range(N)
for combo in permutations(columns):                      
    if N==len(set(combo[i]+i for i in columns))==len(set(combo[i]-i for i in columns)):
        sol += 1
        print('Solution '+str(sol)+': '+str(combo)+'\n')  
        print("\n".join(' o ' * i + ' X ' + ' o ' * (N-i-1) for i in combo) + "\n\n\n\n")



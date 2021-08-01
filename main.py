import sys

f = open("entree.txt", "r")
lignes = f.readlines()
#lignes = sys.stdin.readlines()

for index in range(1, int(lignes[0]) + 1):
    nombre = int(lignes[index])
    z = 0
    diviseur = 5
    while diviseur <= nombre:
        z += nombre // diviseur
        diviseur *= 5
    print(z)




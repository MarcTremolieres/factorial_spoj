from math import factorial

def z(n):
    fact = factorial(n)
    nombre = 0
    reste = fact % 10
    while reste == 0:
        nombre +=1
        fact //= 10
        reste = fact %10
    return nombre

while True:
    nombre = int(input("Nombre ? "))
    print("factorielle : " , factorial(nombre))
    print("z : ", z(nombre))

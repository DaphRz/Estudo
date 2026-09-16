# 1.8
def sphere_volume(r):
    """
    Cálculo de Volume de uma Esfera
    """
    volume = (4/3 * 3.14159 * r**3)
    return volume

if __name__ == "__main__":
    print(sphere_volume(2))

# 1.9
print("\nOlá", "mundo")
print("Olá", "mundo", sep="-")
print("Olá", "mundo", sep="")
print(1,2,3, sep=" | ")
print("Olá", end="!!!") 
print("mundo\n")

def isolate(a, b, c, d, e):
    print(a, b, c, sep="     ", end=" ")
    print(d, e)


if __name__ == "__main__":
    isolate(1,2,3,4,5)

# 1.10
def first_half(palavra):
    metade = len(palavra)//2
    resultado = palavra[:metade]
    return resultado

def backward(x):
    invertido = x[::-1]
    return invertido

if __name__ == "__main__":
    print(first_half("\npalavra"))
    print(first_half("abcde"))
    print(first_half("abcd"))
    print(backward("abcd"))
    print(backward("12345"))
# a and b can hold any amount of water in grams

# cup can hold c grams of water -> limit transfer amount between a and b

# ACCEPTED
for i in range(int(input())):
    a, b, c = map(int, input().split())

    minMoves = 0
    while a != b:
        minMoves += 1
        if a > b:
            if c <= (a - b) / 2: # copo eh menor ou igual do que a diferenca de passar
                a, b = a - c, b + c
                # a -= c
                # b += c
            else: # copo tem mais capacidade do que dif, quanto passar?
                a, b = a - ((a - b) / 2), b + ((a - b) / 2)
                # a -= ((a - b) / 2)
                # b += ((a - b) / 2)
        else: # b > a
            if c <= (b - a) / 2: # copo eh menor ou igual do que a diferenca de passar
                b, a = b - c, a + c
                # b -= c
                # a += c
            else: # copo tem mais capacidade do que dif, quanto passar?
                b, a = b - ((b - a) / 2), a + ((b - a) / 2)
                # b -= ((b - a) / 2)
                # a += ((b - a) / 2)

    print(minMoves)
    


while(True):
    try:
        n,m = input().split()
        n = int (n)
        m = int (m)

    except EOFError:
        break

    print ((n*m)-1)

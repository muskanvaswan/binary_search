lst = [int(item) for item in input("Enter list (seperated by space): ").split()]
num = int(input("Enter element to be found: "))

def lsearch(l, n):
    flag = "not found"
    for i, j in enumerate(l):
        if j==n:
            flag = f"found at {i}"

    return flag

print(lsearch(lst, num))

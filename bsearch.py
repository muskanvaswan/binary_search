list = [int(item) for item in input("Enter list (seperated by space): ").split()]
num = int(input("Enter element to be found: "))

def binary_search(l, x):
    l.sort()
    mid = int(len(l)/2)
    flag = "not found"
    while True:
        if l[mid]>x:
            if mid/2 < 1:
                break
            mid=int(mid/2)
        elif l[mid]<x:
            mid+=int(mid/2)
            if mid > len(l)-1:
                break
        elif l[mid]==x:
            flag = f"found at {mid}"
            break
        else:
            print(l[mid])
            print(x)
    return flag

print(binary_search(list, num))

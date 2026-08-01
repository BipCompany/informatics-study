n1 = [i for i in input()]
n2 = [i for i in input()]
a = [i for i in input()]
if sorted(n1 + n2) == sorted(a):
    print("YES")
else:
    print("NO")

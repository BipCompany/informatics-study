n = int(input())
s = input()

st = []

for i in s:
    if i == '(':
        st.append(1)
    elif st and st[-1] == 1:
        st.pop()
    else:
        st.append(0)

if not st:
    print("YES")
else:
    print("NO")

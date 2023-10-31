s1 = input().replace("'''", '').replace("\\n", "\n")
s2, s2r = input(), input()

print(f"=== Before the replacement\n{s1}")
print(f"=== After the replacement\n{s1.replace(s2, s2r)}")
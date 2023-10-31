s1 = input().replace("\\n", "\n").replace("'''", "")
s2 = input()
print(f"=== Before the deletion\n{s1}")
print(f"=== After the deletion\n{s1.replace(s2, '')}")
# https://codeforces.com/problemset/problem/118/A

word = input().lower()
new_word = ""

for letter in word:
    if letter in {"a", "i", "u", "e", "o", "y"}:
        continue
    else:
        new_word += "." + letter

print(new_word)
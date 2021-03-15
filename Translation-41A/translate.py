s = input()
t = input()

yn = ""

for i in range(len(s)):
    # This line checks if the first letter in s is the same as the last one in t and if the second is the same as the second last, and so on
    if s[i] == t[len(t)-1-i]:
        yn += "YES"
    else:
        yn += "NO"

if "NO" in yn:
    print("NO")
else:
    print("YES")







# https://codeforces.com/problemset/problem/41/A

# The translation from the Berland language into the Birland language is not an easy task. Those languages are very similar: a berlandish word differs from a birlandish word with the same meaning a little: it is spelled (and pronounced) reversely. For example, a Berlandish word code corresponds to a Birlandish word edoc. However, it's easy to make a mistake during the «translation». Vasya translated word s from Berlandish into Birlandish as t. Help him: find out if he translated the word correctly.
#
# Input
# The first line contains word s, the second line contains word t. The words consist of lowercase Latin letters. The input data do not consist unnecessary spaces. The words are not empty and their lengths do not exceed 100 symbols.
#
# Output
# If the word t is a word s, written reversely, print YES, otherwise print NO.
#
# Examples
# inputCopy
# code
# edoc
# outputCopy
# YES
# inputCopy
# abb
# aba
# outputCopy
# NO
# inputCopy
# code
# code
# outputCopy
# NO

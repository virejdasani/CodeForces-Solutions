# https://codeforces.com/problemset/problem/4/C


def solve(n, names):

    db = {}
    result = []

    for i in range(0, n):

        if names[i] not in db:
            result.append("OK")
            db[names[i]] = 1
        else:
            postfix = db[names[i]]
            result.append(names[i] + str(postfix))
            db[names[i]] = postfix + 1

    return result



if __name__ == "__main__":

    n = int(input())
    names = []
    for i in range(0, n):
        names.append(input())

    result = solve(n, names)
    for i in range(0, n):
        print(result[i])

def solve():
    n, m = map(int, input().split())
    s = input().strip()

    counts = {'A': m, 'B': m, 'C': m, 'D': m, 'E': m, 'F': m, 'G': m}

    for char in s:
        if char in counts and counts[char] > 0:
            counts[char] -= 1

    total_remaining = sum(counts.values())
    print(total_remaining)

def main():
    test_cases = int(input())
    
    for _ in range(test_cases):
        solve()

if __name__ == "__main__":
    main()

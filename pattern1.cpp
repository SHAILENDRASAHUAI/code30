def main():
    n = int(input("Enter the size of the grid: "))
    for i in range(n):
        for j in range(n):
            print("*", end="")
        print()

if __name__ == "__main__":
    main()


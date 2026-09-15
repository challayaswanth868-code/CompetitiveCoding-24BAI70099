def bineryInsert(arr, tar):
    
    n = len(arr)
    if n == 0 or tar < arr[0]:
        return 0
    
    start = 0
    end = n - 1
    mid = end//2
    
    while start < end:
        print(mid)
        
        if tar < arr[mid]:
            end = mid - 1
        elif tar > arr[mid]:
            start = mid
        elif tar == arr[mid]:
            print(f" Element is already present at Index {mid}") 
            return mid
        
        mid = (start + end)//2
        
    return mid +1 

if __name__ == "__main__":
    print(" "*10," Brute Force\n")
    n = int(input(" Enter length of array: "))
    
    print()
    arr = [int(input(f" Element {i+1} : ")) for i in range(n)]
    
    tar = int(input(" Enter Target Value: "))
    print()
    
    print(f"     >>>  Output: {bineryInsert(arr, tar)}")
    print("\n -----------------------------------------------------\n")
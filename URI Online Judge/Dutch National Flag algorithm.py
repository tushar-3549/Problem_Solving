# sort 0 1 2 numbers using Dutch National Flag algorithm
def sortNumber(arr):
    l = 0
    mid = 0
    h = len(arr)-1
    while mid <= h:
        if arr[mid] == 0:
            arr[l], arr[mid] = arr[mid], arr[l] # swap
            l+=1 
            mid+=1 
        elif arr[mid]==1:
            mid+=1 
        else:
            arr[mid], arr[h] = arr[h], arr[mid]
            h-=1 


arr = [2,0,2,1,1,0]
sortNumber(arr)
print(arr)

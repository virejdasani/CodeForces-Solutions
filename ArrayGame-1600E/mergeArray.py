def merge_arrays(arr1, arr2, size1, size2, arr3):
   i = 0
   j = 0
   k = 0
   while(i < size1):
      arr3[k] = arr1[i]
      k = k + 1
      i = i + 1
   while(j < size2):
      arr3[k] = arr2[j]
      k = k + 1
      j = j + 1
   arr3.sort()

if __name__ == '__main__':

   arr1 = [1, 3, 5, 7, 9, 11]
   size1 = len(arr1)

   arr2 = [0, 2, 4, 6, 8, 10]
   size2 = len(arr2)
   arr3 = [0 for i in range(size1 + size2)]
   merge_arrays(arr1, arr2, size1, size2, arr3)
   print("The first array before merging is: ")
   print(arr1)
   print("The second array before merging is: ")
   print(arr2)

   print("The array after being merged and sorted: ")
   print(arr3)

LAB-1     
*1-D PEAK AND 2-D PEAK    
Recursive Binary Search Approach-    
1.Find the middle element.       
2.Check if it's a peak:         
->If arr[mid] is greater than or equal to both neighbors (if they exist), return mid.                
->If the left neighbor is greater, search the left half.                
->Otherwise, search the right half.                      
![Uploading image.png…]()   




LAB-2       
AIM: To analyse the time complexity of the Merge Sort.                  
1.)Divide:-              
a)If the array has more than one element:            
->Find the middle point to split the array into two halves:             
mid = (left + right) / 2                
b)Recursively apply merge sort on the left half.                       
c)Recursively apply merge sort on the right half.                   
2.)Conquer (Merge):-         
a)Merge the two sorted halves back together.         
b)Compare elements from both halves and place the smaller element first.             
c)Continue until all elements are merged in sorted order.  

TIME COMPLEXITY-Merge Sort has a consistent time complexity across all scenarios because it always divides the array into two halves and merges them back in sorted order.     
->log n levels of recursion (because we keep halving the array).
->O(n) work is done at each level during merging.
->Total work:
𝑂(𝑛)+𝑂(𝑛)+𝑂(𝑛)+…(log 𝑛 times)=𝑂(log𝑛)




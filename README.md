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
->Total work:-
𝑂(𝑛)+𝑂(𝑛)+𝑂(𝑛)+…(log 𝑛 times)=𝑂( n log𝑛)      

AIM: To analyse the time complexity of Quick Sort.        
1.)Choose a Pivot:-Typically the last element, first element, or a random element is chosen as the pivot.          
2.)Partition the Array:-        
a)Rearrange the array so that:         
->All elements smaller than the pivot are on the left.
->All elements greater than the pivot are on the right.       
->The pivot is placed in its correct sorted position.            
3.)Recursively Sort:-Recursively apply the same steps to the left and right subarrays.        

TIME COMPLEXITY-       
a)Best Case: O(n log n) — When partitioning is balanced.         
b)Worst Case: O(n²) — When partitioning is highly unbalanced (e.g., sorted array).           
c)Average Case: O(n log n) — On average, it performs well.                           


AIM: To analyse the time complexity of iterative quick sort.     
1.)Initialize Stack:-    
a)Create a stack (or an array) to store subarray indices.        
b)Push the initial low and high values of the array onto the stack.           
2.)Loop Until Stack is Empty:-       
a)Pop high and low from the stack.      
b)Partition the array around a pivot.      
->Elements smaller than the pivot go to the left.      
->Elements larger than the pivot go to the right.          
3.)Push Subarray Indices to Stack:       
a)Push the left subarray indices if it has more than one element.           
b)Push the right subarray indices if it has more than one element.         
4.)Repeat:-Continue the process until the stack is empty.           

TIME COMPLEXITY-           
Both recursive and iterative versions have the same time complexity because the number of partitioning steps remains the same.       

AIM- To analyse the time complexity of magic square(Odd-order).


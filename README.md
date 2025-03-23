LAB-1     
*1-D PEAK       
Recursive Binary Search Approach-    
1.)Find the middle element.       
2.)Check if it's a peak:         
->If arr[mid] is greater than or equal to both neighbors (if they exist), return mid.                
->If the left neighbor is greater, search the left half.                
->Otherwise, search the right half.                      
![Uploading image.png…]()  


*2D Peak Finding Algorithm-
1.)Matrix Traversal:-The function peak() recursively divides the matrix into quadrants by finding the midpoints m1 (row midpoint) and m2 (column midpoint).      
2.)Divide and Conquer:-
a)The matrix is recursively explored in the direction where a larger neighboring element exists.     
b)It checks the following neighbors in order:-        
->Right Neighbor: If it's greater, search the right half.       
->Left Neighbor: If it's greater, search the left half.        
->Bottom Neighbor: If it's greater, search the bottom half.         
->Top Neighbor: If it's greater, search the top half.           
c)Base Case:-When no neighbor is larger, the current element is a peak.         

TIME COMPLEXITY-O(n log m) (For n rows and m columns)



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
A magic square is a square matrix where the sum of every row, column, and diagonal is the same.        
Algorithm for Odd-Order Magic Square (Siamese Method)-       
1.)Start from the middle of the top row.        
2.)Place 1 in the first position.         
3.)Move up-right to place the next number.               
4.)If moving out of bounds:                  
a)Wrap around (move to the opposite side).                
b)If the position is already occupied, move directly below the previous number.                   
5.)Repeat until all numbers are placed.                 
     
TIME COMPLEITY-         
The magic square contains n² elements.Each number from 1 to n² is placed exactly once.Since there are n² iterations with O(1) operations each.  
Time Complexity=O(n^2)        

AIM- CONVEX HULL-Quick Hull algorithm is a Divide and Conquer approach to compute the Convex Hull of a set of points.      
1.)Find Extremes:-      
a)Find the points with minimum and maximum x-coordinates (leftmost and rightmost).       
b)These two points form a base line.         
2.)Partition Points:-Divide the remaining points into two sets:-     
->Points on the left side of the base line.        
->Points on the right side of the base line.         
3.)Find Hull Points:-For each side:       
a)Find the farthest point from the base line.            
b)Recursively form a new base line between this point and the end points.                  
c)Keep adding points that form the convex hull.          

TIME COMPLEXITY-a)Average Case: O(n log n)      
b)Worst Case: O(n²) (When points are distributed linearly)      





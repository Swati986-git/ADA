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
Therefore time Complexity=O(n^2)        

AIM-To analyze the performance of the Fractional Knapsack algorithm.     
1.)Calculate Value-to-Weight Ratio for each item:-      
Ratio=𝑣𝑖/𝑤𝑖     
2.)​Sort items by decreasing ratio.      
3.)Pick items one by one:-      
a)If the entire item fits, take it.       
b)If not, take a fraction that fits.    

TIME COMPLEXITY:-We sort 𝑛 items based on their value-to-weight ratio.      
Therefore time complexity-O(n log n)    

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


LAB-4        
AIM-To find shortest path using Dijkstra algorithm.        
1.)Graph Representation:-Uses an adjacency matrix G[MAX][MAX] to store edge weights.      
2.)Near Data Structure:-Near[i] keeps track of the nearest (predecessor) vertex to each vertex i.       
3.)Distance Array:-Distance[i] keeps the shortest distance from the source to vertex i.         
4.)Working:-            
a)Start from the source node.            
b)In each iteration, pick the vertex with the smallest tentative distance.           
c)Update distances of adjacent vertices if a shorter path is found.          

TIME COMPLEXITY:-O(V²) (due to adjacency matrix traversal).       


LAB-5     
AIM-To find Minimum Spanning Tree (MST) of a connected, weighted undirected graph using Prim's Algorithm.     
1.)Initialize:-      
a)Start with any arbitrary vertex as the source vertex.     
b)Include it in the MST set.       
c)Assign an infinite value to all other vertices.       
2.)Pick the Minimum Edge:-From the edges that connect vertices in the MST to vertices not in the MST, pick the edge with the minimum weight.      
3.)Update Weights:-         
a)For the newly added vertex, check all its adjacent vertices.        
b)If the weight of an edge to a vertex outside the MST is less than its current key value, update it.          
4.)Repeat:-Continue picking the minimum weight edge until all vertices are included in the MST.         

TIME COMPLEXITY:- O(V²) as finding the minimum weight edge in an unsorted array takes O(V) time.    
Doing this for V vertices results in O(V²).    


AIM-To find Minimum Spanning Tree (MST) of a connected, weighted undirected graph using Kruskal’s Algorithm.      
1.)Sort all edges in non-decreasing order of their weights.      
2.)Pick the smallest edge.Check if adding it to the spanning tree creates a cycle-      
a)If it forms a cycle,discard the edge.      
b)If it doesn't form a cycle,include it.     
3.)Repeat this process until all vertices are connected (i.e., until the MST has V - 1 edges, where V is the number of vertices).     

TIME COMPLEXITY:-Sorting E edges takes O(E log E).    


AIM-The aim of a multistage graph is to find the shortest (or least costly) path from a source node to a destination node in a graph that is divided into multiple stages, with each edge only connecting nodes from one stage to the next.          
A multistage graph is a directed weighted graph where nodes are divided into multiple stages, and the goal is to find the shortest (or longest) path from a source node in the first stage to a destination node in the last stage. This problem is efficiently solved using Dynamic Programming (DP).      
Steps:        
1.The algorithm works by calculating the shortest cost from each node to the destination, starting from the last stage and moving backward (i.e., using backward dynamic programming).      
2.For each node, we check all outgoing edges and select the one with the minimum cost to the destination.         
3.Finally, we get the shortest path from the source to destination by following the choices made.                    

Time Complexity:O(V^2)         

AIM-The aim of the All-Pairs Shortest Path (APSP) algorithm is to find the shortest paths between every pair of vertices in a given weighted graph(floyd Warshall Algorithmic).              
The All-Pairs Shortest Path (APSP) problem involves finding the shortest path between every pair of nodes in a weighted graph. This is useful in various real-world applications such as network routing, transportation planning, and urban navigation systems.                                   
                       
Steps:              
1.It initializes a distance matrix A[i][j], where A[i][j] is the weight of the edge from vertex i to j, or infinity if no edge exists.                     
2.It then considers each vertex k as an intermediate point, and checks whether the path from i to j can be made shorter by going through k.                 
3.For every pair of vertices (i, j), it updates: A[i][j] = min(A[i][j], dist[i][k] + A[k][j])                        
4.This is done for all vertices k = 0 to V-1, where V is the number of vertices.                              
5.After the algorithm finishes, A[i][j] contains the shortest distance from vertex i to j.                          

Time Complexity:O(n^3)                                               



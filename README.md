# DSA-assignment-
Name Meseret Gete
group 2
id 6229/23

this is the DSA assignment from chapter one and two 
 Individual assignments 1
•	Write an algorithm for finding the smallest number in the list/array?
•	Write an algorithm for finding the second or the third largest element?
•	  //pseudo code for searching  smallest number
•	FUNCTION findSmallest(arr):
•	    smallest = arr[0]
•	    FOR each element in arr:
•	        IF element < smallest:
•	            smallest = element
•	    RETURN smallest
•	

//pseudo code for searching second and third largest number 
FUNCTION findSecondLargest(arr):
    largest = secondLargest = -INFINITY
    FOR each element in arr:
        IF element > largest:
            secondLargest = largest
            largest = element
        ELSE IF element > secondLargest AND element < largest:
            secondLargest = element
    RETURN secondLargest

FUNCTION findThirdLargest(arr):
    largest = secondLargest = thirdLargest = -INFINITY
    FOR each element in arr:
        IF element > largest:
            thirdLargest = secondLargest
            secondLargest = largest
            largest = element
        ELSE IF element > secondLargest AND element < largest:
            thirdLargest = secondLargest
            secondLargest = element
        ELSE IF element > thirdLargest AND element < secondLargest:
            thirdLargest = element
    RETURN thirdLargest

Individual assignments 2

•	Implement Pointer sorting algorithm using different sorting algorism and  perform complexity analysis compare the results and write a summary of your findings.

pseudo code for bubble sort
BubbleSort(arr, n):
    for i from 0 to n-1:
        for j from 0 to n-i-1:
            if arr[j] > arr[j+1]:
                swap arr[j] and arr[j+1]
#pseudo code for selection sort
SelectionSort(arr, n):
    for i from 0 to n-1:
        minIndex = i
        for j from i+1 to n:
            if arr[j] < arr[minIndex]:
                minIndex = j
        swap arr[i] and arr[minIndex]
#pseudo code for quick sort
Partition(arr, low, high):
    pivot = arr[high]
    i = low - 1
    for j from low to high-1:
        if arr[j] < pivot:
            i = i + 1
            swap arr[i] and arr[j]
    swap arr[i+1] and arr[high]
    return i + 1
Summary of Pseudocode
BubbleSort iterates through the array and swaps adjacent elements that are out of order. SelectionSort iterates through the array to find the minimum element in the unsorted portion and swaps it into place.  QuickSort divides the array into two parts based on a pivot and recursively sorts the partitions using the partition function

Individual assignments 3
What is iterative and recursive approach in algorism?
Implement Binary search using iterative and recursive approach  compare the complexity.
Summaries you're finding
Iterative Approach:
Involves using loops (like for, while, etc.) to repeat a process until a condition is met.  Typically, uses a fixed amount of memory because it only needs space for the loop variables. Example: Using a loop to search for a value in an array.
 Recursive Approach:
Solves a problem by calling the same function repeatedly on smaller sub-problems. Each recursive call uses a new function call and adds a new stack frame, which can lead to higher memory usage.  Example: A recursive approach to search for a value might break the problem down into smaller sub-arrays.
Summary:
1.	Iterative Approach:
Space Efficient: Uses constant space (O(1)) because it doesn't require function calls on the call stack.
Generally Faster: Since it avoids the overhead of function calls and the recursion stack.
Use Case: Preferred for large datasets or when memory is a constraint.
2.	Recursive Approach:
Elegant and Readable: Easier to understand and often simpler to write, especially for problems that break into smaller sub-problems (like binary search, tree traversals).
Consumes Stack Space: For each recursive call, the system uses additional memory to store the state.

Individual assignments 4 
Find out about Ternary and Interpolation Searching algorisms. 
•	How they work?
•	What is the complexity analysis?
•	Implement them using C++.
•	Summaries you're finding.

Ternary Search
Ternary Search is an algorithm used for finding the maximum or minimum of a function or an element in a sorted array. Instead of splitting the array into two parts like in binary search, ternary search divides the array into three parts by comparing the target with two midpoints. This allows for faster narrowing down of the search area, but it is mostly used for unimodal functions (functions with a single peak or valley).
Steps:
1.	Calculate two midpoints: mid1 and mid2, where mid1 = low + (high - low) / 3 and mid2 = high - (high - low) / 3.
2.	If the target element is equal to either of the midpoints, return the index.
3.	If the target element is less than mid1, repeat the search on the left third.
4.	If the target element is greater than mid2, repeat the search on the right third.
5.	If the target element is between mid1 and mid2, repeat the search in the middle third.
Time Complexity:
Time Complexity: O(log₃ n) — the search space is divided into three parts at each step, so the number of steps required is logarithmic in base 3.
Space Complexity: O(1) — the algorithm uses a constant amount of space.
nterpolation Search
Interpolation Search is an improvement over binary search for uniformly distributed data. Instead of simply dividing the search space in half, Interpolation Search tries to estimate where the target might be based on its value relative to the range of the data. It works by calculating a "probe position" using a formula, which is based on the values of the first and last elements of the array and the target value.
Steps:
1.	Calculate the probe position using the formula:
probe=low+((target−arr[low])(arr[high]−arr[low]))×(high−low)\text{probe} = \text{low} + \left( \frac{(\text{target} - \text{arr[low]})}{(\text{arr[high]} - \text{arr[low]})} \right) \times (\text{high} - \text{low})probe=low+((arr[high]−arr[low])(target−arr[low]))×(high−low) 
2.	If the value at the probe position is equal to the target, return the position.
3.	If the value at the probe is less than the target, move the low pointer to the next position (i.e., search the right half).
4.	If the value at the probe is greater than the target, move the high pointer to the previous position (i.e., search the left half).
5.	Repeat the process until the target is found or the search space is exhausted.
Time Complexity:
•	Best case: O(log log n) — when the data is uniformly distributed.
•	Worst case: O(n) — if the data is not uniformly distributed.
•	Space Complexity: O(1) — constant space usage.



![Screenshot (262)_edited](https://github.com/user-attachments/assets/a786c50e-8482-4bd0-be95-9c57e99d45f7)
![Screenshot (263)_edited](https://github.com/user-attachments/assets/5c475b89-924a-46f8-b438-2e6cf0375165)
![Screenshot (264)_edited](https://github.com/user-attachments/assets/49dabbf0-768b-4f74-96fe-f3cfa091ebd8)
![Screenshot (265)_edited](https://github.com/user-attachments/assets/8e618ab4-4148-4485-b17a-73040797026d)
![Screenshot (266)_edited](https://github.com/user-attachments/assets/e513310f-55d5-401b-a33f-b5c8e961c296)
![Screenshot (267)_edited](https://github.com/user-attachments/assets/0dbb40a6-44c7-4341-9ec5-c32eab6ff82e)
![Screenshot (268)_edited](https://github.com/user-attachments/assets/8187f9df-4e74-4f8b-8014-18d58b9e8eb1)
![Screenshot (269)_edited](https://github.com/user-attachments/assets/c82ed0ba-a50b-4454-9c02-86a1a5dcb7f9)
![Screenshot (270)_edited](https://github.com/user-attachments/assets/d6b95d88-042e-4901-b2b9-6fc0a0600ef7)






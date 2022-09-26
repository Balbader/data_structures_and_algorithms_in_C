# Queue

• A queue in C is basically a linear data structure to store and manipulate the data elements. It follows the order of First In First Out (FIFO).

• In queues, the first element entered into the array is the first element to be removed from the array.

• For example, let’s consider the scenario of a bus-ticket booking stall. Here, the fashion of a C programming queue is followed. The tickets are distributed on the first-come-first-serve basis i.e. the first one to enter is the first one to be served with the tickets.

• A queue is open at both ends. One end is provided for the insertion of data and the other end for the deletion of data.

## Operations associated with a Queue in C

A queue being an `Abstract Data Structure` provides the following operations for manipulation on the data elements:

>• `isEmpty()`: To check if the queue is empty<br>
>• `isFull()`: To check whether the queue is full or not<br>
>• `dequeue()`: Removes the element from the frontal side of the queue<br>
>• `enqueue()`: It inserts elements to the end of the queue<br>
>• `Front`: Pointer element responsible for fetching the first element from the queue<br>
>• `Rear`: Pointer element responsible for fetching the last element from the queue<br>

## Working with Queue Data Structures

Queue follows the First-In-First-Out pattern. The first element is the first to be pulled out from the list of elements.

>• `Front` and `Rear` pointers keep the record of the first and last element in the queue.<br><br>
>• At first, we need to initialize the queue by setting `Front = -1` and `Rear = -1`<br><br>
>• In order to insert the element (`enqueue`), we need to check whether the queue is already full i.e. `check the condition for Overflow`. If the queue is not full, we’ll have to increment the value of the Rear index by 1 and place the element at the position of the Rear pointer variable. When we get to insert the first element in the queue, we need to set the value of Front to 0.<br><br>
>• In order to remove the element (`dequeue`) from the queue, we need to check whether the queue is already empty i.e. `check the condition for Underflow`. If the queue is not empty, we’ll have to remove and return the element at the position of the Front pointer, and then increment the Front index value by 1. When we get `to remove the last element from the queue`, we will have to `set the values of the Front and Rear index to -1`.<br>

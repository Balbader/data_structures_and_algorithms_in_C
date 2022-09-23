# Linked Lists

AKA: Node based datastructure

• Like arrays, Linked List is a linear data structure.<br>
• Unlike arrays, linked list elements are not stored at a contiguous location; the elements are linked using pointers.<br>
• They include a series of connected nodes.<br>
• Here, each node stores the data and the address of the next node.

## Why Linked Lists

Arrays can be used to store linear data of similar types, but arrays have the
following limitations:

>• The size of the arrays is fixed: So we must know the upper limit on
>the number of elements in advance. Also, generally, the allocated memory is
>equal to the upper limit irrespective of the usage.<br>
>
>• Insertion of a new element / Deletion of a existing element in an array of
>elements is expensive: The room has to be created for the new elements and to
>create room existing elements have to be shifted but in Linked list if we have
>the head node then we can traverse to any node through it and insert new node
>at the required position.<br><br>

Example: 
In a system, if we maintain a sorted list of IDs in an array
id[] = [1000, 1010, 1050, 2000, 2040]. 
<br>
<br>
If we want to insert a new ID 1005, then to maintain the sorted order,
we have to move all the elements after 1000 (excluding 1000). 
<br>
<br>
Deletion is also expensive with arrays until unless some special techniques are used.
For example, to delete 1010 in id[], everything after 1010 has to be moved due
to this so much work is being done which affects the efficiency of the code.

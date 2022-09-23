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

## Types of Linked Lists

* Singly Linked List
* Doubly Linked List
* Circular Linked List

### Singly Linked List
```c
struct	node {
	int	value;
	struct node *next;
}
```

### Doubly Linked List
```c
struct	node {
	int	value;
	struct node *next;
	struct node *prev;
}
```

### Circular Linked List
A circular linked list is a variation of a linked list in which the last element is linked to the first element. This forms a circular loop.
<br>
A circular linked list can be either singly linked or doubly linked.
<br>
>• for singly linked list, next pointer of last item points to the first item<br>
>• In the doubly linked list, prev pointer of the first item points to the last item as well.

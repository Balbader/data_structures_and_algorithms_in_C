# Binary Search

Binary Search is a searching algorithm used in a sorted array by repeatedly
dividing the search interval in half. The idea of binary search is to use the
information that the array is sorted and reduce the time complexity to O(Log n).

The basic steps to perform Binary Search are:

>• Begin with the mid element of the whole array as a search key.<br>
>• If the value of the search key is equal to the item then return an index of the search key.<br>
>• Or if the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half.<br>
>• Otherwise, narrow it to the upper half.<br>
>• Repeatedly check from the second point until the value is found or the interval is empty.<br>

The idea is to 1/2 the length of the array until we meet a specific condition
or we reach 1.<br>

For example, if our array is 4096 we would need to half it 12 times to reach 1.<br>
Therefor: log(4096) = 12;

>NOTE: If the input halves at each step, its likely O(logN) or O(NlogN)
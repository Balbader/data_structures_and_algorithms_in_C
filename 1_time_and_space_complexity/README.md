# Time and Space Complexity

## What is Big O ?

Big O is a way to categorize your algorithms time or memory requirements based
on input. It is not meant to be an exact measurement. It will not tell you how
many CPU cycles it takes, instead it is meant to generalize the growth of your
algorithm.<br>

This means that O(N) defines the computational complexity of the algorithm.<br>
In this case of O(N), it means that the algorithm will grow linearily based on input.<br>
<br>
Big O notation is used in order to make decisions about what data structures and
algorithms to use.<br>
Big O notation help us predict how an algorithm will perform which ultimately help
us create the best adapted programs to resolve the issues at hand.<br>

## Important Concept

As your input grows, how fast does computation of memory grow? 

### 1. Growth is with respect to the input

```C
#include <stdio.h>
#include <string.h>

int	sum_char_ascii_code(char *str)
{
	int	i;
	int	tot;

	tot = 0;
	i = 0;
	while (str[i])
	{
		tot += str[i];
		i++;
	}
	return (tot);
}
```
How can we tell the Big O complexity of the code above?<br>
Simply by looking for loops. Where do we loop over the input?<br>
In the case above we can see that for every character of the string, we will need
loop one more time. This means that the computation time will grow by 1 with
each characer.<br>
This is what is know as a linear growth.<br>

### 2. Constants are dropped

```C
#include <stdio.h>
#include <string.h>

int	sum_char_ascii_code(char *str)
{
	int	i;
	int	tot;

	tot = 0;
	i = 0;
	while (str[i])
	{
		tot += str[i];
		i++;
	}

	i = 0;
	while (str[i])
	{
		tot += str[i];
		i++;
	}
	return (tot);
}
```
O(2N) -> O(N) and this makes sense. That is because Big O is meant to describe
the upper bound of the algorithm (the growth of the algorithm).<br>
The constant eventually becomes irrelevant.<br>

There is practical vs theoretical differences:<br>

Just because N is faster than N^2, doesn't mean practically its always
faster for smaller input.<br>
Remember, we drop constants.
Therefore O(100N) is faster than O(N^2) but practically speaking,
you would probably win for some small set of input.


```C
#include <stdio.h>
#include <string.h>

int	sum_char_ascii_code(char *str)
{
	int	i;
	int	tot;

	tot = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == 'E')
			return (tot);
		tot += str[i];
		i++;
	}
	return (tot);
}
```
In Big O we often consider the worst case
Especially in interviews (i have never been asked for best, average,
and worst case, just worst case).

E = 69

Therefore any string with E in it will terminate early
(unless E is the last item in the list).

ITS STILL O(N)

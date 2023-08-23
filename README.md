0x19. C - Stacks, Queues - LIFO, FIFO

In computer science, stacks and queues are abstract data types that represent collections of elements with specific rules for adding and removing items. They are commonly used in various programming applications to manage data in a specific order.

stacks:

A stack is a linear data structure that follows the Last-In-First-Out (LIFO) principle. It behaves like a stack of plates, where the last plate added is the first one to be removed. The two main operations performed on a stack are:

Push: Adds an element to the top of the stack.
Pop: Removes the topmost element from the stack.
Stacks can also support an additional operation called Peek, which allows you to access the topmost element without removing it.

Queues:

Queues, on the other hand, follow the First-In-First-Out (FIFO) principle:

A queue is a linear data structure where elements are added at the end and removed from the front. It behaves like a queue of people waiting in line, where the person who has been waiting the longest is the first one to be served. The primary operations on a queue are:

Enqueue: Adds an element to the rear (end) of the queue.
Dequeue: Removes the element from the front of the queue.
Queues also often support the Peek operation, which allows you to view the element at the front of the queue without removing it.

Both stacks and queues have their specific use cases. Stacks are commonly used for undo operations, recursive function calls, parsing expressions, and implementing algorithms like depth-first search (DFS). Queues, on the other hand, are useful for managing tasks that need to be processed in the order they are received, such as scheduling jobs, handling requests, or implementing breadth-first search (BFS) algorithms.

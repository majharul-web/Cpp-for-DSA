
/*

1. Static Memory
Definition: Memory that is allocated at compile time and remains fixed throughout the program's execution.

Characteristics:
Lifetime: Exists for the entire duration of the program.
Scope: Can be global, local (with the static keyword), or class-level (with static members).
Allocation: Happens at compile time.
Deallocation: Handled automatically by the compiler when the program ends.
Usage: Typically used for global variables, constants, and static variables within functions or classes.

Example:cpp
*/

#include <iostream>
using namespace std;

int globalVariable; // Static memory (global)

void staticExample()
{
    static int staticVar = 0; // Static memory (local static)
    staticVar++;
    cout << "Static Variable: " << staticVar << endl;
}

int main()
{
    staticExample(); // Outputs 1
    staticExample(); // Outputs 2
    return 0;
}

/*
Pros:
Simple to use.
Automatically managed by the compiler.
No risk of memory leaks.

Cons:
Fixed size at compile time.
Not suitable for scenarios where the size is unknown or changes dynamically.




2. Dynamic Memory
Definition: Memory that is allocated at runtime using pointers.

Characteristics:
Lifetime: Exists until explicitly deallocated by the programmer.
Scope: Defined by the programmer, typically accessed through pointers.
Allocation: Happens at runtime using new and delete or malloc and free.
Deallocation: Must be manually managed; failure to deallocate causes memory leaks.
Example:
*/

#include <iostream>
using namespace std;

int main()
{
    // Allocate dynamic memory
    int *ptr = new int(5); // Dynamically allocate an integer with value 5
    cout << "Value: " << *ptr << endl;

    // Deallocate memory
    delete ptr;

    // Allocate array dynamically
    int *arr = new int[5];
    for (int i = 0; i < 5; i++)
    {
        arr[i] = i + 1;
    }

    cout << "Array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Deallocate array
    delete[] arr;

    return 0;
}

/*

Pros:
Flexible, as memory can be allocated and resized as needed at runtime.
Essential for scenarios where memory requirements are dynamic.

Cons:
Requires careful management to avoid memory leaks or dangling pointers.
Slower than static memory due to runtime allocation and deallocation.


Key Differences:
Feature	                    Static Memory	                    Dynamic Memory
AllocationTime 	            Compile time	                    Runtime
Management	                Automatic (handled by compiler)	    Manual (handled by programmer)
Lifetime	                Entire program execution	        Until explicitly deallocated
Efficiency	                Faster	                            Slower (allocation overhead)
Flexibility	                Fixed size	                        Flexible size
Risk	                    None	                            Memory leaks, dangling pointers


When to Use
Static Memory:
When memory size is known at compile time.
For constants, global, and static variables.

Dynamic Memory:
When memory size or lifetime is unknown at compile time.
For data structures like linked lists, trees, and dynamic arrays.
Let me know if you'd like deeper insights or examples! */
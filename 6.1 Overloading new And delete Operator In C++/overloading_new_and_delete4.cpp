// TOPIC: Overloading operator new and operator delete In C++!
// WHY: Overloading new and delete operator gives developer more flexibility for heap alocation.

// POINTS:
// 1. There are two different types of overloading.
//      a. Local Overloading (class/struct).
//      b. Global Overloading.
// 2. Syntax for Overloading operator new
//      void *operator new (size_t size);
// 3. Synatx of Overloading operator delete
//      void operator delete(void*);
// 4. Both new and delete operator are static member function.
//    So they don't have access to this pointer (We don't have to write static keyword it is automatically static).
// 5. Don't forget to overload for array version of both (new/delete)
// 6. We can have mutiple overloaded new/delete operator function.

#include <iostream>
using namespace std;


    void  *operator new(size_t size, int val)
    {
        cout << "Overloaded new Operator size: " << size <<endl;
        void *p = malloc(size);
        if (p != nullptr)
        {
            *static_cast<int*>(p) = val;
        }
        return p;
    }

    void operator delete(void *p)
    {
        cout << "Overloaded delete Operator" << endl;
        free(p);
    }

int main()
{
    int *x = new(0) int;
    delete x;
}



























// TAKE HOME POINTS:
// 1. Overloading new and delete operator gives developer control of heap allocation. And we can do the following
//    things with the control.
//    a. Garbage collection
//    b. Exception handling routine.
//    c. It can be customize that the compiler-provided version don't offer.
//       For Example: we can initialize something to the whole memory what we get from new operator.
//    d. It can be used to track how much memory is not in use and we reuse it instead of asking from
//    AND THERE ARE SO MANY POSSSIBILITIES WE CAN THINK AND DISCUSS.
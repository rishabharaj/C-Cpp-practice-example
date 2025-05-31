// In C-style programming, a function can be passed to another function by 
// using a function pointer. Function pointers are inconvenient to maintain 
// and understand. The function they refer to may be defined elsewhere 
// in the source code, far away from the point at which it's invoked. 
//   Also, they're not type-safe. Modern C++ provides function objects, 
//   classes that override the operator() operator, which enables them to
// be called like a function. The most convenient way to create function 
// objects is with inline lambda expressions. The following example shows 
// how to use a lambda expression to pass a function object, that 
// the find_if function will invoke on each element in the vector:

std::vector<int> v {1,2,3,4,5};
    int x = 2;
    int y = 4;
    auto result = find_if(begin(v), end(v), [=](int i) { return i > x && i < y; });

// The lambda expression [=](int i) { return i > x && i < y; } can be 
// read as "function that takes a single argument of type int and 
//   returns a boolean that indicates whether the argument 
//   is greater than x and less than y." Notice that the variables x and y 
// from the surrounding context can be used in the lambda. The [=] specifies 
// that those variables are captured by value; in other words, 
//   the lambda expression has its own copies of those values.

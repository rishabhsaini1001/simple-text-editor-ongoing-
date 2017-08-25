#ifndef MAIN_CONTENT_INCLUDE
#define MAIN_CONTENT_INCLUDE

#include <iostream>
using namespace std;

class text_content{
    string main_content;
    undo_stack *stack_buffer;
public:
    string get();
    void push(string input); 
    void activate_undo(int limit); 
};

#endif
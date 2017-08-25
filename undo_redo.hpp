#ifndef UNDO_REDO_INCLUDE
#define UNDO_REDO_INCLUDE

#include <list>
using namespace std;

class undo_stack{
    list<string> container;
    int limit;
public:
    undo_stack(int limit);
    undo_stack();
    void push(string input);

};

#endif
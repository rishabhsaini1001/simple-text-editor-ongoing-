// a simple plugin to undo/redo text
#include "undo_redo.hpp"

undo_stack::undo_stack(int limit)
{
    this->limit = limit;
}

undo_stack::undo_stack(){ }
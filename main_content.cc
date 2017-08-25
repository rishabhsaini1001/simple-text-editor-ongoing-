#include "main_content.hpp"

string main_content::get()
{
    cout<<main_content;
}

void main_content::push(string input)
{
    main_content += input;
}

void activate_undo(int limit)
{
    stack_buffer = new undo_stack(limit);
}
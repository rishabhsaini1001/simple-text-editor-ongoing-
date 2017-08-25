#include <iostream>
#include "undo_redo.hpp"
using namespace std;

int main()
{   
    cout<<"hello world!\n";
    undo_stack undo(2);
    cout<<undo.push("aba\n");
    cout<<undo.push("cde\n");
    cout<<undo.push("ghi\n");
    cout<<undo.push("jkl\n");
    cout<<undo.clear_undo_buffer();
    undo.reset_undo_count(0);
    cout<<undo.push("mno\n");
    cout<<undo.push("pqr\n");
    return 0;
}
#include <iostream>
#include "undo_redo.hpp"
using namespace std;

int main()
{   
    cout<<"hello world!\n";
    undo_stack undo(3);
    undo.push("aba");
    cout<<undo.push("cde");
    cout<<undo.push("ghi");
    return 0;
}
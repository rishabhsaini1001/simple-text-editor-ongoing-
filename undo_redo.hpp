#ifndef UNDO_REDO_INCLUDE
#define UNDO_REDO_INCLUDE

#include <list>
#include <iostream>
using namespace std;

class undo_stack{
    list<string> undo_list_buffer;
    int limit;
public:
    undo_stack(int limit = 10);
    //IMPORTANT -> for all the below functions, returned string type "" shall be treated as NULL!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    string push(string input);          //SOLVED -> //ISSUE: handle memory deallocation of returned string pointer -- change this in future code!! -- 
    string reset_undo_count(int limit); 
    string clear_undo_buffer(int by_count = -1);  // -1 indicated clear all   
};

#endif
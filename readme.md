UNDO FOR TEXT EDITOR
    The project implements undo/redo functionality for text editors.

Class undo_stack in undo_redo.hpp implements the following:
1. undo_stack(int limit) - initialize a undo_stack and mentioning its buffer size
1. string push(string input) -  used to insert a new string in undo buffer, oldest string in undo buffer is returned if buffer becomes full, also redo                                              buffer is cleared
2. string get_buffer() -  returns string maintained in undo buffer for display purposes by text editor
3. void undo() -  removes newest string from undo buffer adding it to redo buffer
4. void redo() -  removes newest string from redo buffer adding it to undo buffer
5. string reset_undo_count(int limit) - updates buffer size to passed parameter
6. string clear_undo_buffer(int by_count) - clearing certain number(by_count) of oldest strings in undo_list_buffer and returning a string output of those, passing                                             a neg number will clear the entire buffer 

main_content.hpp will be developed as a text editor interface using undo_redo.hpp as an example
helloworld.cc was used for testing purposes 
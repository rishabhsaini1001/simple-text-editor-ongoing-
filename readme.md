||TEXT EDITOR||
    The motivation of this project was to implement undo/redo functionality for code editors.
    Since it was becoming very abstract to write standalone code for the same, the project 
    escalated to writing a basic code editor.

    There are two core classes:
        1. main_content
        2. undo_redo
    main_content holds the text and contains undo_redo. Undo/redo can be invoked by calls to
    main_content object. If activated, undo_stack will basically act as a buffer before adding
    the text to the main_content object. 